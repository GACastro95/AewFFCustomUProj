#include "RA_SlotIntro_Info.h"

FRA_SlotIntro_Info::FRA_SlotIntro_Info() {
    this->Order = ERA_SlotIntro_Order::FIRST;
    this->Gender = ERA_SlotIntro_Gender::BOTH;
    this->ChampionState = ERA_Slot_ChampionState::NONE;
    this->EntranceType = ERA_Slot_CutScene_Type::SINGLE;
}

