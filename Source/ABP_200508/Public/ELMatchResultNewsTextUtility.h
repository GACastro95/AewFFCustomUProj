#pragma once
#include "CoreMinimal.h"
#include "EELMatchScoreObjective.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELAriticleTextClosing.h"
#include "ELAriticleTextInGame.h"
#include "ELAriticleTextOpening.h"
#include "ELMatchResultNewsTextUtility.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class ABP_200508_API UELMatchResultNewsTextUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELMatchResultNewsTextUtility();
    UFUNCTION(BlueprintCallable)
    static void ReplaceWrestlerName(FString& OutText, const FString& Format, const FString& WinWrestlerName, const FString& WinWrestlerShortName, const FString& LoseWrestlerName, const FString& LoseWrestlerShortName, const FString& WinTeamName, const FString& LoseTeamName);
    
    UFUNCTION(BlueprintCallable)
    static void GetAriticleText_Opening(FELAriticleTextOpening& Opening, const UDataTable* DataTable, float InWinnerHP, float InLoserHP, float InMatchTime, int32 InMatchScore, bool InIsSingle, bool InIsTag, bool InIsThreeWay, bool InIsFourWay, bool InIsCasino, bool InIsExploding, bool InIsLightsOut, bool InIsFallsCountAnywhere, bool IsDispLog);
    
    UFUNCTION(BlueprintCallable)
    static void GetAriticleText_InGame(FELAriticleTextInGame& InGame, const UDataTable* DataTable, TArray<EELMatchScoreObjective> Objectives, bool ExclusiveTagText, bool IsDispLog);
    
    UFUNCTION(BlueprintCallable)
    static void GetAriticleText_Closing(FELAriticleTextClosing& Closing, const UDataTable* DataTable, float InWinnerHP, float InLoserHP, float InMatchTime, int32 InMatchScore, bool InIsSingle, bool InIsTag, bool InIsThreeWay, bool InIsFourWay, bool InIsCasino, bool InIsExploding, bool InIsLightsOut, bool InIsFallsCountAnywhere, bool IsDispLog);
    
};

