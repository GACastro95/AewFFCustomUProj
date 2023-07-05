#include "ELEntranceCutsceneWrestlerInfo.h"

FELEntranceCutsceneWrestlerInfo::FELEntranceCutsceneWrestlerInfo() {
    this->Wrestler = EWrestlerID_N::None;
    this->Costume = 0;
    this->WrestlerIndex = 0;
    this->bDarkSkinMode = false;
    this->bGoldSkinMode = false;
    this->SkinType = ECharacterSkinType::None;
    this->bPlainAttireMode = false;
    this->DefaultEntrance = false;
    this->UseEntranceModel = false;
    this->Gender = EGender::Male;
}

