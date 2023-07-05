#include "CreationSettings.h"

TSoftObjectPtr<USkeletalMesh> UCreationSettings::GetCustomBodyAsset(const EGender Gender) {
    return NULL;
}

UCreationSettings::UCreationSettings() {
    this->ScoutSlotUnlockID = 10001;
    this->ScoutPresetUnlockID = 399999;
    this->EditWrestlerSaveNumMax = 100;
    this->EditWrestlerMultipleSaveMode = true;
    this->EditWrestlerSaveNumPerFile = 5;
}

