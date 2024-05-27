#include "ELAnimSettingData.h"

UELAnimSettingData::UELAnimSettingData() {
    this->bOverrideHipsBlendSpeed = false;
    this->HipsBlendSpeed = 10.00f;
    this->bAttach = false;
    this->bAttachBS = false;
    this->bAttachSB = false;
}

void UELAnimSettingData::TryGetAnimSettingData(UELAnimSettingData*& AnimSettingData, UAnimationAsset* Animation) {
}

void UELAnimSettingData::AddAnimSettingData(UELAnimSettingData*& AnimSettingData, UAnimationAsset* Animation) {
}


