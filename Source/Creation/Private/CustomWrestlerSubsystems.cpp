#include "CustomWrestlerSubsystems.h"

void UCustomWrestlerSubsystems::SetEditPartsListTableOnlyEditor(UDataTable* DataTable) {
}

void UCustomWrestlerSubsystems::SetEditPaintListTableOnlyEditor(UDataTable* DataTable) {
}

void UCustomWrestlerSubsystems::Reset() {
}

TSoftObjectPtr<UEditWrestlerPartsAsset> UCustomWrestlerSubsystems::GetPartsAsset(const int32 PartsID) {
    return NULL;
}

TSoftObjectPtr<UEditWrestlerPaintAsset> UCustomWrestlerSubsystems::GetPaintAsset(const int32 PaintID) {
    return NULL;
}

void UCustomWrestlerSubsystems::GetCustomPartsList(TArray<FEditParts>& OutList, const EGender Gender, const EFaceType FaceType) {
}

void UCustomWrestlerSubsystems::GetCustomPaintList(TArray<FEditPaint>& OutList, const EGender Gender) {
}

EFaceType UCustomWrestlerSubsystems::FindFaceType(const int32 PartsID) {
    return EFaceType::Default;
}

UCustomWrestlerSubsystems::UCustomWrestlerSubsystems() {
}

