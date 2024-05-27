#pragma once
#include "CoreMinimal.h"
#include "EAttireType.h"
#include "EBasicFindResult.h"
#include "EPreviewAttire.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EEditPartsSlot.h"
#include "EEditTexTarget.h"
#include "EditPartsSlot.h"
#include "FL_EditPartsSlotFunctions.generated.h"

UCLASS(Blueprintable)
class CREATION_API UFL_EditPartsSlotFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFL_EditPartsSlotFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPreviewAttire ToPreviewAttire_EditParts(const EAttireType AttireType, const EEditPartsSlot PartsSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EPreviewAttire ToPreviewAttire_EditPaint(const EAttireType AttireType, const EEditTexTarget PaintSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeEditPartsSlot_EditParts(const EEditPartsSlot& EditPartsSlot, FEditPartsSlot& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void MakeEditPaintSlot_EditPaint(const EEditTexTarget& EditPaintSlot, FEditPartsSlot& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsElementParts(const EEditPartsSlot EditPartsSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsElementPaint(const EEditTexTarget EditPaintSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetPaintTargetMaterialSlots(const EEditTexTarget Slot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetEditPartsSlot(const FEditPartsSlot& Data, EEditPartsSlot& Out, EBasicFindResult& resultType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetEditPaintSlot(const FEditPartsSlot& Data, EEditTexTarget& Out, EBasicFindResult& resultType);
    
};

