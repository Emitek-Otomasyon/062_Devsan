#include "goruntu.h"
#include "ui_goruntu.h"
#include "scanrecoviewmaster.h"

goruntu::goruntu(QWidget *parent) :
    View(parent),
    ui(new Ui::goruntu)
{
    ui->setupUi(this);
}

goruntu::~goruntu()
{
    delete ui;
}

void goruntu::initGraphics(){

    timer_cam = 0;
    startCamera(camera_attiva,0,true,false,1);

#ifdef CUSTOM_PAINTING
    this->repaint();
#endif

}
bool goruntu::handleNewMessage(PcuMessage * const message){

    if(message->messageType == CAN_DATA){
        if(message->identifier == 0){   //CAN ID 0x264

            // ÖNEMLİ: Burada emit changeView YAPMIYORUZ! Sadece not alıyoruz.
            if(message->data[0] == 1){
                kirmaTipi = 0;
            }
            else if(message->data[0] == 2){
                kirmaTipi = 1;
            }
            else if(message->data[0] == 3){
                kirmaTipi = 2;
            }
        }
    }
    return true;
}

void goruntu::cyclicUpdate(void)
{
    // 4 saniyede bir başlatma
    if (timer_cam < 4)	timer_cam++;
    else {
//        if(streamingProcess.state() != QProcess::Running) {
//                    startCamera(camera_attiva,0,true,false,1);
//                }
        startCamera(camera_attiva,0,true,false,1);
        timer_cam = 0;
    }
}
void goruntu::stopStreaming(void){
    // Qt nin kendi fonksiyonlarıyla durdururuz.Sayfadan çıkınca arkada çalışmaya devam etmiyor,tamamen siliniyor.
    if(streamingProcess.state() != QProcess::NotRunning){
        streamingProcess.terminate();
        streamingProcess.kill();
    }
}


void goruntu::ReadConfig(void){

        QFile file;
        file.setFileName("/home/GUI/settings.xml");

        if(file.open(QIODevice::ReadOnly)){
            QXmlStreamReader xmlReader;
            xmlReader.setDevice(&file);
            xmlReader.readNext();

                while(!xmlReader.isEndDocument()){
                    if(xmlReader.isStartElement()){
                        QString name = xmlReader.name().toString();
                        if(name == "camera"){
                            num_telecamera = QString(xmlReader.readElementText()).toUShort();
                            if(num_telecamera > 4 ) num_telecamera = 4;
                        }
                    } else if (xmlReader.isEndElement()){}
                    xmlReader.readNext();
                }//while
                file.close();
                if(xmlReader.hasError()){}
        }
}

void goruntu::startCamera(unsigned short p_camera, unsigned short p_display, bool p_enableScale, bool p_center, int p_latenza)
{
    //streamingProcess.setProcessChannelMode(QProcess::ForwardedChannels);
    streamingProcess.start(vc.getLaunchString(p_camera, p_display, p_enableScale, p_center, p_latenza));
}

bool goruntu::handleNewButtonStatus(const ButtonStatus newButtonStatus) {

    unsigned char buttons = newButtonStatus.all;
    sendCanMessage(0x223, &buttons, 1);

    if(newButtonStatus.button1){
        stopStreaming();
        timer_cam = 0;

        // Eğer makineden bilgi geldiyse o sayfaya dön, gelmediyse varsayılan olarak Tek Kırma'ya (0) dön.
        if(kirmaTipi != -1) {
            emit changeView(kirmaTipi);
        } else {
            emit changeView(0);
        }
    }

    return true;
}
