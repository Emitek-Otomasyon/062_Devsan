#include "scanrecotemplate.h"
#include "tek_kirma.h"
#include "cift_kirma.h"
#include "footactive.h"
#include "goruntu.h"
#include "settings.h"
#include "configuration.h"
#include "scanrecoviewmaster.h"

DspObjectProperties currentDspObjects[NR_OF_DSP_CAN] = {
    // CAN-ID       Bytes    TT     Time     Prio
    {0x00000264,    0xff,   false,  0x00,   false}, //0
    {0x00000464,    0xff,   false,  0x00,   false},
    {0x00000364,    0xff,   false,  0x00,   false},
    {0x00000223,    0xff,   false,  0x0A,   false},
    {0x00000564,    0xff,   false,  0x00,   false},
    {0x00000000,    0x00,   false,	0x00,   false}, //5
    {0x00000000,    0x00,   false,	0x00,   false},
    {0x00000000,    0x00,   false,	0x00,   false},
    {0x00000000,    0x00,   false,	0x00,   false},
    {0x00000000,    0x00,   false,	0x00,   false},
    {0x00000000,    0x00,   false,	0x00,   false}, //10
    {0x00000000,    0x00,   false,	0x00,   false},
    {0x00000000,    0x00,   false,  0x00,   false},
    {0x00000000,    0x00,   false,  0x00,   false},
    {0x00000000,    0x00,   false,  0x00,   false},
    {0x00000000,    0x00,   false,  0x00,   false}, //15
    {0x00000000,    0x00,   false,  0x00,   false},
    {0x00000000,    0x00,   false,  0x00,   false},
    {0x00000000,    0x00,   false,  0x00,   false},
    {0x00000000,    0x00,   false,  0x00,   false},
    {0x00000000,    0x00,   false,  0x00,   false}, //20
    {0x00000000,    0x00,   false,  0x00,   false},
    {0x00000000,    0x00,   false,  0x00,   false},
    {0x00000000,    0x00,   false,  0x00,   false},
    {0x00000000,    0x00,   false,  0x00,   false},
    {0x00000000,    0x00,   false,  0x00,   false}, //25
    {0x00000000,    0x00,   false,  0x00,   false},
    {0x00000000,    0x00,   false,  0x00,   false},
    {0x00000000,    0x00,   false,  0x00,   false},
    {0x00000000,    0x00,   false,  0x00,   false},
    {0x00000000,    0x00,   false,  0x00,   false}, //30
    {0x00000000,    0x00,   false,  0x00,   false}
};

void Configuration::init() {
    mDspObjects = currentDspObjects;

    mFonts << "/fonts/c0632bt_.pfb" << "/fonts/c0633bt_.pfb"
           << "/fonts/c0648bt_.pfb" << "/fonts/c0649bt_.pfb";


    viewMaster = new ScanrecoViewMaster();
    mViews.append(new tek_kirma());  //0
    mViews.append(new cift_kirma()); //1
    mViews.append(new FootActive()); //2
    mViews.append(new goruntu()); //3
    mViews.append(new Settings()); //4
}

