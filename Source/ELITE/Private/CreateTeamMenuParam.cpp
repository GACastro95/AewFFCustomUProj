#include "CreateTeamMenuParam.h"

FCreateTeamMenuParam::FCreateTeamMenuParam() {
    this->MenuMode = EnCatMenuMode::New;
    this->EditSlot = 0;
    this->LoadOutMenuType = EnCatLoadOutMenuType::None;
    this->SettingMenuType = EnCatSettingListItemType::TeamName;
}

