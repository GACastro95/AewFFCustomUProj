#include "RingAnnouncePreviewMenu.h"

ARingAnnouncePreviewMenu::ARingAnnouncePreviewMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RA_SceneData = ERA_SceneData_Type::Loading;
    this->RA_Slot_MatchRule = ERA_Slot_MatchRule::RA_MR_1V1;
    this->RA_Slot_Championship = ERA_Slot_Championship::RA_CHAMPIONSHIP_NONE;
    this->RA_SlotIntro_Order = ERA_SlotIntro_Order::FIRST;
    this->RA_SlotIntro_Gender = ERA_SlotIntro_Gender::BOTH;
    this->RA_Slot_ChampionState = ERA_Slot_ChampionState::NONE;
    this->RA_Slot_CutScene_Type = ERA_Slot_CutScene_Type::SINGLE;
    this->RA_Slot_RosterName = ERA_Slot_RosterName::RA_NAME_ROSTER_NONE;
    this->RA_Slot_TeamName = ERA_Slot_TeamName::RA_TN_NONE;
    this->AutoPlay = false;
}

void ARingAnnouncePreviewMenu::ChangeNextState() {
}


