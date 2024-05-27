#include "ColorTableFunctionLibrary.h"

UColorTableFunctionLibrary::UColorTableFunctionLibrary() {
}

void UColorTableFunctionLibrary::MakeEditColorPack(const int32 ColorSlotNo, const int32 DefaultColorID, const TArray<FEditColorGroupID> Groups, FEditColorPack& Out) {
}

bool UColorTableFunctionLibrary::IsEqual(const FIndexedColorList A, const FIndexedColorList B) {
    return false;
}

void UColorTableFunctionLibrary::InitColorIDs(const FIndexedColorList InIDs, const TArray<FEditColorPack> ColorPacks, FIndexedColorList& Out) {
}

bool UColorTableFunctionLibrary::GetIndexedColor(const int32 ColorID, FLinearColor& Out) {
    return false;
}

void UColorTableFunctionLibrary::FindColorID(EBasicFindResult& Result, int32& OutColorID, const FIndexedColorList& InIDs, const int32 ColorSlot) {
}

void UColorTableFunctionLibrary::BreakColorIDs4(const FIndexedColorList InIDs, int32& Color1, int32& Color2, int32& Color3, int32& Color4) {
}

void UColorTableFunctionLibrary::BreakColorIDs3(const FIndexedColorList InIDs, int32& Color1, int32& Color2, int32& Color3) {
}

void UColorTableFunctionLibrary::BreakColorIDs2(const FIndexedColorList InIDs, int32& Color1, int32& Color2) {
}

void UColorTableFunctionLibrary::BreakColorIDs1(const FIndexedColorList InIDs, int32& Color1) {
}


