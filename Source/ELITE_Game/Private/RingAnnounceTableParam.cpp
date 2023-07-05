#include "RingAnnounceTableParam.h"

FRingAnnounceTableParam::FRingAnnounceTableParam() {
    this->RingAnnounceGroup = ERingAnnounceGroupType::Intro;
    this->WrestlerID = EWrestlerID_N::None;
    this->RingAnnounceCueEvent1 = NULL;
    this->RingAnnounceCueEvent2 = NULL;
    this->RingAnnounceCueEvent3 = NULL;
    this->UnlockItemId = 0;
}

