#include "SSWrestlerVisualModifyParam.h"

FSSWrestlerVisualModifyParam::FSSWrestlerVisualModifyParam() {
    this->WrestlerID = EWrestlerID_N::None;
    this->AssetID = 0;
    this->ForceRemove = false;
    this->DisableShieldVisible = false;
    this->DisableStick = false;
    this->ForceEnableOnCategoryDisableShieldVisible = false;
}

