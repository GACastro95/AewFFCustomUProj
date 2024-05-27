#include "EditWrestlerPaintAsset.h"

UEditWrestlerPaintAsset::UEditWrestlerPaintAsset() {
    this->Target = EEditTexTarget::Skin;
}

void UEditWrestlerPaintAsset::UpdateColor(const FIndexedColorList& In, FColorParameterList& Out) {
}

void UEditWrestlerPaintAsset::MakeColorParamList(const FIndexedColorList& In, FColorParameterList& Out) {
}

bool UEditWrestlerPaintAsset::IsColorChangeable() const {
    return false;
}

void UEditWrestlerPaintAsset::GetColorParameter(FColorParameterList& Out) const {
}


