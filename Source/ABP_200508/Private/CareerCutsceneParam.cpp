#include "CareerCutsceneParam.h"

FCareerCutsceneParam::FCareerCutsceneParam() {
    this->ArenaType = ECareerStageType::NONE;
    this->ReverbType = ECareerReverbType::Auto;
    this->RingObject = ECareerRingObject::None;
    this->SeqNo = 0;
    this->BGMType = ECareerBGMType::Dummy;
    this->CastA_Type = ECareerMemberType::NONE;
    this->CastA_ID = EWrestlerID_N::None;
    this->CastA_Attire = ECareerAttireType::Ring;
    this->CastB_Type = ECareerMemberType::NONE;
    this->CastB_ID = EWrestlerID_N::None;
    this->CastB_Attire = ECareerAttireType::Ring;
    this->CastC_Type = ECareerMemberType::NONE;
    this->CastC_ID = EWrestlerID_N::None;
    this->CastC_Attire = ECareerAttireType::Ring;
    this->CastD_Type = ECareerMemberType::NONE;
    this->CastD_ID = EWrestlerID_N::None;
    this->BELT_A = EELBelt::None;
    this->BELT_B = EELBelt::None;
    this->CastD_Attire = ECareerAttireType::Ring;
}

