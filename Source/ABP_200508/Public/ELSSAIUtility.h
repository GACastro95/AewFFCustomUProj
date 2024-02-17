#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELSSAIUtility.generated.h"

class AActor;
class AELSSGimmickFgfGoal;
class AELSSPlayer;
class AELSSPlayerState;
class AELSSTeamState;
class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UELSSAIUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSAIUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateFgfAI(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopSSBehaviourTree(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartSSBehaviourTree(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldEndFgfBallRun(AELSSPlayerState* myPlayer);
    
    UFUNCTION(BlueprintCallable)
    static void SetupFgfOffenseRole(const AELSSTeamState* offenseTeam);
    
    UFUNCTION(BlueprintCallable)
    static void SetupFgfDefenseTarget(const AELSSTeamState* offenseTeam, const AELSSTeamState* defenseTeam);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetupFgfAI(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInOffenseFixedArea_PassReceiver(AELSSPlayerState* Player, AELSSPlayerState* ballHolder, AELSSGimmickFgfGoal* Goal, FVector& outPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInOffenseFixedArea_Partisan(AELSSPlayerState* Player, AELSSPlayerState* ballHolder, FVector& outPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInBetweenSSPlayers(AELSSPlayerState* A, AELSSPlayerState* B, AELSSPlayerState* C, FVector& outPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInBetweenAandB(AActor* A, AActor* B, AActor* C, FVector& outPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSGimmickFgfGoal* GetSSNearFgfGoal(const UObject* WorldContextObject, FVector Pos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetProbabilityIndexByWeighting(const UObject* WorldContextObject, const TArray<float>& probDatas);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSPlayer* GetPassTarget(const UObject* WorldContextObject, AELSSPlayerState* myPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetObstaclePlayerToFgfGoal(AELSSPlayerState* myPlayer, AELSSPlayerState* checkPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetFgfObstructedMoveIdealLocation(AELSSPlayer* selfPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindSSPlayerNearToPosInTeam(FVector InPos, AELSSTeamState* inTeam, AELSSPlayerState*& outPlayer, float& outDist);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindPlayerToPass(AELSSPlayerState* myPlayer, AELSSTeamState* offenseTeam, AELSSTeamState* defenseTeam, AELSSPlayerState*& outTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindPlayerToGuard(AELSSTeamState* offenseTeam, AELSSTeamState* defenseTeam, float inDist, AELSSPlayerState*& outTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindFgfGoalToShoot(AELSSPlayerState* inPlayer, TArray<AELSSGimmickFgfGoal*> inGoals, AELSSGimmickFgfGoal*& outGoals, float& outDist);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindFgfGoalToGo(AELSSPlayerState* inPlayer, TArray<AELSSGimmickFgfGoal*> inGoals, AELSSGimmickFgfGoal*& outGoals, float& outDist);
    
};

