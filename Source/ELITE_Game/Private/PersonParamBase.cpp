#include "PersonParamBase.h"

FPersonParamBase::FPersonParamBase() {
    this->WrestlerID = EWrestlerID_N::None;
    this->Gender = EGender::Male;
    this->BodyType = EBodyType::Standard;
    this->BodyHeightType = EBodyHeightType::Medium;
    this->BodyHeight = 0;
    this->BodyWeightType = EBodyWeightType::Normal;
    this->BodyWeight = 0;
    this->SystemMotionType = ESystemMotionType::Default;
    this->ReversalMotionType = EReversalMotionType::LightHeavy;
    this->FanReaction = EFanReaction::Babyface;
    this->FightStyle = 0;
    this->FavoriteProps = 0;
    this->Popularity = 0;
    this->BirthDay_Month = 0;
    this->BirthDay_Day = 0;
    this->VoiceType = 0;
}

