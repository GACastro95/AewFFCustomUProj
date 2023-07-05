#include "SSWrestlerSetupParam.h"

FSSWrestlerSetupParam::FSSWrestlerSetupParam() {
    this->Available = false;
    this->SSWrestlerType = ESSWrestlerType::None;
    this->WrestlerID = EWrestlerID_N::None;
    this->Gender = EGender::Male;
    this->BodyType = EBodyType::Standard;
    this->BodyHeightType = EBodyHeightType::Medium;
    this->BodyWeightType = EBodyWeightType::Normal;
    this->FanReaction = EFanReaction::Babyface;
    this->VoiceType = 0;
    this->BodyHeight = 0;
}

