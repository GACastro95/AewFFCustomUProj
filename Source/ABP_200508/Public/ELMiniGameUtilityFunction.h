#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMiniGameID.h"
#include "EMiniGameMiningCategory.h"
#include "ELMiniGameUtilityFunction.generated.h"

class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UELMiniGameUtilityFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELMiniGameUtilityFunction();
    UFUNCTION(BlueprintCallable)
    static bool SetupMiniGameSaveData();
    
    UFUNCTION(BlueprintCallable)
    static void SetMiniGamePlayed(EMiniGameID _MiniGameID, bool _IsPlayed);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMiniGameDynamicResOperationMode(UObject* WorldContextObject, bool IsOn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMiniGameCanEverAffectNavigation(UObject* WorldContextObject, bool IsOn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMiniGameCanCharacterStepUpOn(UObject* WorldContextObject, bool IsOn);
    
    UFUNCTION(BlueprintCallable)
    static void SaveRequestMiniGameData(uint8 _saveDataAccessFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MiningMiniGameScores(const UObject* WorldContextObject, EMiniGameID MiniGameId, bool IsInOnline, TArray<bool> IsPlayer, TArray<int32> ScoreData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MiningMiniGameParam(const UObject* WorldContextObject, EMiniGameMiningCategory Category, EMiniGameID MiniGameId, int32 MiningData, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    static void GetMiniGamePlayedList(TArray<bool>& _AlreadyPlayedArray);
    
    UFUNCTION(BlueprintCallable)
    static void CheckUnlockProGamerAchievement(EMiniGameID _NowPlayMiniGameID);
    
};

