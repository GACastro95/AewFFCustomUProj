#include "EditWrestlerPartsAsset.h"

UEditWrestlerPartsAsset::UEditWrestlerPartsAsset() {
    this->bHasPartsCategoryDetails = false;
    this->SkeletalMesh = NULL;
    this->bReplaceMesh = false;
    this->bTexChange = false;
}

void UEditWrestlerPartsAsset::UpdateEditPartsCategoryDetails() {
}

void UEditWrestlerPartsAsset::MakeColorParamList(const FIndexedColorList& In, TMap<FName, FColorParameterList>& Out) {
}

USkeletalMesh* UEditWrestlerPartsAsset::GetSkeletalMeshFromIndex(int32 Index) const {
    return NULL;
}

void UEditWrestlerPartsAsset::GetEditPartsCategoryDetails(FEditPartsCategoryDetails& Details) {
}

int32 UEditWrestlerPartsAsset::GetColorSettingNum() const {
    return 0;
}


