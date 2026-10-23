#-------------------------------------------------
#
# Project created by QtCreator 2024-11-16T09:41:17
#
#-------------------------------------------------

QT       += core gui
CONFIG   += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Scanreco_Scheme
TEMPLATE = app


SOURCES += main.cpp\
        scanrecotemplate.cpp \
        configuration.cpp\
        scanrecoviewmaster.cpp \
        tek_kirma.cpp \
        cift_kirma.cpp \
    footactive.cpp \
    goruntu.cpp \
    settings.cpp

HEADERS  += scanrecotemplate.h \
            scanrecoviewmaster.h \
            tek_kirma.h \
            cift_kirma.h \
    footactive.h \
    goruntu.h \
    view_camera.h \
    settings.h

FORMS    += scanrecotemplate.ui \
            tek_kirma.ui \
            cift_kirma.ui \
    footactive.ui \
    goruntu.ui \
    settings.ui


#LIBS += -lpoppler-qt5 -lQt5Xml
#INCLUDEPATH += /usr/include/poppler-qt5
#LIBS += -L/usr/lib/x86_64-linux-gnu

# Include Scanreco color display library
INCLUDEPATH += $(HOME)/Scanreco_SDK/library/headers/\
#    BAK           /usr/include/poppler-qt5
DEPENDPATH += $(HOME)/Scanreco_SDK/library/

linux-ptx-g++ {
        LIBS += -L$(HOME)/Scanreco_SDK/library/embedded/ -lscanreco
        PRE_TARGETDEPS += $(HOME)/Scanreco_SDK/library/embedded/libscanreco.so
        LIBS += -lz -lpng12 -licui18n -licuuc -licudata -lfreetype -lexpat -lfontconfig -lpoppler -lpoppler-qt5 -lQt5Xml
        LIBS += ../lib/lib_view_camera.a

} else {
        LIBS += -L$(HOME)/Scanreco_SDK/library/desktop/ -L$(HOME)/Scanreco_SDK/library/headers/ -lscanreco
        PRE_TARGETDEPS += $(HOME)/Scanreco_SDK/library/desktop/libscanreco.a
        LIBS += -lpoppler-qt5 -lQt5Xml
        DEFINES += DESKTOP
}

RESOURCES += \
    fonts.qrc \
    images.qrc

DISTFILES +=

