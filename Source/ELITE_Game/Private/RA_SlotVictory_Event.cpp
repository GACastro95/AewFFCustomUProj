#include "RA_SlotVictory_Event.h"

FRA_SlotVictory_Event::FRA_SlotVictory_Event() {
    this->CueEvent = ERA_Slot_Victory::RA_VIC_WINNER;
    this->SoundData = NULL;
    this->CutSceneType = ERA_Slot_CutScene_Type::SINGLE;
}

