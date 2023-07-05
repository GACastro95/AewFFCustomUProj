#include "FL_EditPartsSlotFunctions.h"

EPreviewAttire UFL_EditPartsSlotFunctions::ToPreviewAttire_EditParts(const EAttireType AttireType, const EEditPartsSlot PartsSlot) {
    return EPreviewAttire::Ring;
}

EPreviewAttire UFL_EditPartsSlotFunctions::ToPreviewAttire_EditPaint(const EAttireType AttireType, const EEditTexTarget PaintSlot) {
    return EPreviewAttire::Ring;
}

void UFL_EditPartsSlotFunctions::MakeEditPartsSlot_EditParts(const EEditPartsSlot& EditPartsSlot, FEditPartsSlot& Out) {
}

void UFL_EditPartsSlotFunctions::MakeEditPaintSlot_EditPaint(const EEditTexTarget& EditPaintSlot, FEditPartsSlot& Out) {
}

bool UFL_EditPartsSlotFunctions::IsElementParts(const EEditPartsSlot EditPartsSlot) {
    return false;
}

bool UFL_EditPartsSlotFunctions::IsElementPaint(const EEditTexTarget EditPaintSlot) {
    return false;
}

TArray<FName> UFL_EditPartsSlotFunctions::GetPaintTargetMaterialSlots(const EEditTexTarget Slot) {
    return TArray<FName>();
}

void UFL_EditPartsSlotFunctions::GetEditPartsSlot(const FEditPartsSlot& Data, EEditPartsSlot& Out, EBasicFindResult& resultType) {
}

void UFL_EditPartsSlotFunctions::GetEditPaintSlot(const FEditPartsSlot& Data, EEditTexTarget& Out, EBasicFindResult& resultType) {
}

UFL_EditPartsSlotFunctions::UFL_EditPartsSlotFunctions() {
}

