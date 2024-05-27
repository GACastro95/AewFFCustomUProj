#pragma once
#include "CoreMinimal.h"
#include "EGender.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EFaceType.h"
#include "EditPaint.h"
#include "EditParts.h"
#include "CustomWrestlerSubsystems.generated.h"

class UDataTable;
class UEditWrestlerPaintAsset;
class UEditWrestlerPartsAsset;

UCLASS(Blueprintable)
class CREATION_API UCustomWrestlerSubsystems : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UCustomWrestlerSubsystems();

    UFUNCTION(BlueprintCallable)
    void SetEditPartsListTableOnlyEditor(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    void SetEditPaintListTableOnlyEditor(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UEditWrestlerPartsAsset> GetPartsAsset(const int32 PartsID);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UEditWrestlerPaintAsset> GetPaintAsset(const int32 PaintID);
    
    UFUNCTION(BlueprintCallable)
    void GetCustomPartsList(TArray<FEditParts>& OutList, const EGender Gender, const EFaceType FaceType);
    
    UFUNCTION(BlueprintCallable)
    void GetCustomPaintList(TArray<FEditPaint>& OutList, const EGender Gender);
    
    UFUNCTION(BlueprintCallable)
    EFaceType FindFaceType(const int32 PartsID);
    
};

