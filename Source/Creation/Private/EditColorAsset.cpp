#include "EditColorAsset.h"

UEditColorAsset::UEditColorAsset() {
}

bool UEditColorAsset::GetIndexedColor(const int32 ColorID, FLinearColor& Out) const {
    return false;
}

bool UEditColorAsset::GetGroupColors(const FEditColorGroupID inGroupId, TArray<int32>& ColorIDList) const {
    return false;
}


