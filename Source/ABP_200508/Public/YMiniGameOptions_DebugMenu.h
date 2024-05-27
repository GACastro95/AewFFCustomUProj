#pragma once
#include "CoreMinimal.h"
#include "EImmediateMiniGameState.h"
#include "ELDebugMenuRootBase.h"
#include "MiniGameDebugMenuParam_Common.h"
#include "MiniGame_ChipGather.h"
#include "MiniGame_DamageChallenge.h"
#include "MiniGame_FindOrange.h"
#include "MiniGame_FindTheDifference.h"
#include "MiniGame_HomeRunInfo.h"
#include "MiniGame_ObjectCount.h"
#include "MiniGame_PentaSais.h"
#include "MiniGame_SlothSling.h"
#include "MiniGame_SpotLight.h"
#include "MiniGame_TracePunch.h"
#include "MiniGame_TriviaQuiz.h"
#include "YMiniGameOptions_DebugMenu.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UYMiniGameOptions_DebugMenu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UYMiniGameOptions_DebugMenu();

    UFUNCTION(BlueprintCallable)
    void SetCorrectAnswer(const FString& _CorrectAnswer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugTick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugMiniGameParameter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsApplyForDebugMiniGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMiniGame_TriviaQuiz GetTriviaQuizInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMiniGame_TracePunch GetTracePunchInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMiniGame_SpotLight GetSpotLightInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMiniGame_SlothSling GetSlothSlingInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMiniGame_PentaSais GetPentaSaisInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMiniGame_ObjectCount GetObjectCountInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMiniGameDebugMenuParam_Common GetMiniGameDebugMenuParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EImmediateMiniGameState GetImmidiateMiniGameState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMiniGame_HomeRunInfo GetHomeRunInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMiniGame_FindTheDifference GetFindTheDifferenceInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMiniGame_FindOrange GetFindOrangeInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDebugMiniGameLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMiniGame_DamageChallenge GetDamageChallengeInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMiniGame_ChipGather GetChipGatherInfo();
    
    UFUNCTION(BlueprintCallable)
    void DisableImmidiateMiniGameState();
    
    UFUNCTION(BlueprintCallable)
    void DisableDebugTick();
    
    UFUNCTION(BlueprintCallable)
    void DisableDebugStateAndTick();
    
};

