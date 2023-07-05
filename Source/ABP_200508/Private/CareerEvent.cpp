#include "CareerEvent.h"

FCareerEvent::FCareerEvent() {
    this->AutoEvent = false;
    this->StageType = ECareerStageType::NONE;
    this->ReverbType = ECareerReverbType::Auto;
    this->RingObject = ECareerRingObject::None;
    this->BGMType = ECareerBGMType::Dummy;
    this->AreaTP = 0;
    this->MemA_Type = ECareerMemberType::NONE;
    this->MemA_No = EWrestlerID_N::None;
    this->MemA_TP = 0;
    this->MemA_Attire = ECareerAttireType::Ring;
    this->MemB_Type = ECareerMemberType::NONE;
    this->MemB_No = EWrestlerID_N::None;
    this->MemB_TP = 0;
    this->MemB_Attire = ECareerAttireType::Ring;
    this->MemC_Type = ECareerMemberType::NONE;
    this->MemC_No = EWrestlerID_N::None;
    this->MemC_TP = 0;
    this->MemC_Attire = ECareerAttireType::Ring;
    this->MemD_Type = ECareerMemberType::NONE;
    this->MemD_No = EWrestlerID_N::None;
    this->MemD_TP = 0;
    this->MemD_Attire = ECareerAttireType::Ring;
    this->ExtraLight = 0;
}

