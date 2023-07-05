#include "ELWrestlerProfile.h"

FELWrestlerProfile::FELWrestlerProfile() {
    this->WrestlerID = EWrestlerID_N::None;
    this->ModelID = 0;
    this->ThumbnailsAttire = EAttireType::Ring;
    this->GameEnable = false;
    this->Gender = EGender::Male;
    this->BodyType = EBodyType::Standard;
    this->SystemMotionType = ESystemMotionType::Default;
    this->ReversalMotionType = EReversalMotionType::LightHeavy;
    this->FanReaction = EFanReaction::Babyface;
    this->Personality = EPersonalityType::Hero;
    this->FightStyle = 0;
    this->HomeTown1 = 0;
    this->HomeTown2 = 0;
    this->HomeTown3 = 0;
    this->Popularity = 0;
    this->Rank = 0;
    this->WeaponDecal = 0;
    this->WeaponFavourite = 0;
    this->DominantHand = EDominantHand::Right;
    this->Vegetarian = 0;
    this->TagTeamSpecialist = 0;
    this->TalentType = ETalentType::RisingStar;
    this->UnlockID = 0;
    this->UnlockPresetID = 0;
    this->TShirtsID = 0;
    this->PoseID = 0;
    this->DefaultPartner = EWrestlerID_N::None;
}

