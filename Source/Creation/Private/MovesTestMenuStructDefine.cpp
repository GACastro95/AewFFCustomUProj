#include "MovesTestMenuStructDefine.h"

FMovesTestMenuStructDefine::FMovesTestMenuStructDefine() {
    this->ID = 0;
    this->Level = 0;
    this->ParentID = 0;
    this->CategoryItemID = 0;
    this->UseNone = false;
    this->Enable = false;
    this->Type = EMovesSettingMenuType::Category;
    this->CategoryType = EMovesCategoryType::None;
    this->ActionSkillNo = 0;
}

