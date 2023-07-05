#include "EditWrestlerPaintAsset.h"

void UEditWrestlerPaintAsset::UpdateColor(const FIndexedColorList& In, FColorParameterList& Out) {
}

void UEditWrestlerPaintAsset::MakeColorParamList(const FIndexedColorList& In, FColorParameterList& Out) {
}

bool UEditWrestlerPaintAsset::IsColorChangeable() const {
    return false;
}

void UEditWrestlerPaintAsset::GetColorParameter(FColorParameterList& Out) const {
}

UEditWrestlerPaintAsset::UEditWrestlerPaintAsset() {
    this->Target = EEditTexTarget::Skin;
}

