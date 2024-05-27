#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBasicFindResult.h"
#include "IndexedColorList.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EditColorGroupID.h"
#include "EditColorPack.h"
#include "ColorTableFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class CREATION_API UColorTableFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UColorTableFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void MakeEditColorPack(const int32 ColorSlotNo, const int32 DefaultColorID, const TArray<FEditColorGroupID> Groups, FEditColorPack& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEqual(const FIndexedColorList A, const FIndexedColorList B);
    
    UFUNCTION(BlueprintCallable)
    static void InitColorIDs(const FIndexedColorList InIDs, const TArray<FEditColorPack> ColorPacks, FIndexedColorList& Out);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIndexedColor(const int32 ColorID, FLinearColor& Out);
    
    UFUNCTION(BlueprintCallable)
    static void FindColorID(EBasicFindResult& Result, int32& OutColorID, const FIndexedColorList& InIDs, const int32 ColorSlot);
    
    UFUNCTION(BlueprintCallable)
    static void BreakColorIDs4(const FIndexedColorList InIDs, int32& Color1, int32& Color2, int32& Color3, int32& Color4);
    
    UFUNCTION(BlueprintCallable)
    static void BreakColorIDs3(const FIndexedColorList InIDs, int32& Color1, int32& Color2, int32& Color3);
    
    UFUNCTION(BlueprintCallable)
    static void BreakColorIDs2(const FIndexedColorList InIDs, int32& Color1, int32& Color2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakColorIDs1(const FIndexedColorList InIDs, int32& Color1);
    
};

