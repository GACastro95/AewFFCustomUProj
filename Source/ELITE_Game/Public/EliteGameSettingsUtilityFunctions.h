#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EWrestlerID_N.h"
#include "EliteGameSettingsUtilityFunctions.generated.h"

class UDataTable;
class UEliteGameSettings;

UCLASS(Blueprintable)
class ELITE_GAME_API UEliteGameSettingsUtilityFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEliteGameSettingsUtilityFunctions();
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetMovieTable();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetHardwareLevelsDataTable();
    
    UFUNCTION(BlueprintCallable)
    static TSet<EWrestlerID_N> GetExcludeWrestlerList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEliteGameSettings* GetEliteGameSetting();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetDisplayOptionSettingDataTable();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetCommunityWrestlerTable();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetCharacterProfilesTable();
    
    UFUNCTION(BlueprintCallable)
    static FSoftObjectPath GetCharacterModelTablePath();
    
    UFUNCTION(BlueprintCallable)
    static UDataTable* GetCharacterModelTable();
    
};

