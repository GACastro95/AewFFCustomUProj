#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CreationSettingsUtilityFunctions.generated.h"

class UCreationSettings;
class UDataTable;

UCLASS(Blueprintable)
class CREATION_API UCreationSettingsUtilityFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCreationSettingsUtilityFunctions();
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetVoiceTypeTable();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetIndexedColorTable();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetFaceTypeTable();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetEditPartsListTable();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetEditPartsCategoryTable();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetEditPaintListTable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UCreationSettings* GetCreationGameSetting();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetColorGroupTable();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetBodyTypeTable();
    
};

