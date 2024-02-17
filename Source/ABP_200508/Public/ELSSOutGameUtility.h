#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMainMenuSubWidgetType.h"
#include "EMainMenuTopSelectWidgetType.h"
#include "ESSMainMenuSubLevelSituation.h"
#include "ESSWrestlerType.h"
#include "EWrestlerPresetButtonType.h"
#include "ELSSOutGameUtility.generated.h"

class AELSSMainMenuFlow;
class AELSSMainMenuSubLevelManager;
class AELSSOutGameStateBase;
class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UELSSOutGameUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSOutGameUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSMainMenuWrestlerVisibility(const UObject* WorldContextObject, bool IsVisible);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSMainMenuPartyMode(const UObject* WorldContextObject, bool IsPartyMode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestUpdateSSMainMenuWrestlers(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestChangeSSMainMenuSubLevel(const UObject* WorldContextObject, ESSMainMenuSubLevelSituation inSituation, bool inWithFade, bool inWithWrestlerUpdate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSMainMenuPartyMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsExecutingChangeSSMainMenuSubLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static EWrestlerPresetButtonType GetWrestlerPresetButtonType(const int32 btmId);
    
    UFUNCTION(BlueprintCallable)
    static ESSWrestlerType GetSSWrestlerType(const int32 typeId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSOutGameStateBase* GetSSOutGameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static EMainMenuTopSelectWidgetType GetSSMainMenuTopSelectWidgetType(const int32 typeId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESSMainMenuSubLevelSituation GetSSMainMenuSubLevelSituation(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSMainMenuSubLevelManager* GetSSMainMenuSubLevelManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSMainMenuFlow* GetSSMainMenuFlow(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static EMainMenuSubWidgetType GetMainMenuSelectTabType(const int32 menuId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CanSSRuleChange(const UObject* WorldContextObject);
    
};

