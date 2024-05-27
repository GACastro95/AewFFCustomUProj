#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ECheckFgf.h"
#include "ELSSLobbyMatchPlayerDataToClient.h"
#include "ESSFgfTeamAnnounce.h"
#include "ESSGameStateFlag.h"
#include "ESSModeLaunchType.h"
#include "SSAI_EBehaviorTreeType.h"
#include "SSTEAM_ECheckPlayerInTeam.h"
#include "Templates/SubclassOf.h"
#include "ELSSInGameUtility.generated.h"

class AActor;
class AELSSAIController;
class AELSSFadeManager;
class AELSSGameMode;
class AELSSGameState;
class AELSSItemManager;
class AELSSLocatorManager;
class AELSSPlayer;
class AELSSPlayerController;
class AELSSPlayerState;
class AELSSRoundManager;
class AELSSSoundManager;
class AELSSStorm;
class AELSSTeamState;
class AELSSVehicleManager;
class APlayerController;
class ULevelStreaming;
class UMeshComponent;
class UObject;
class USoundAtomCue;
class UWorld;

UCLASS(Blueprintable)
class ABP_200508_API UELSSInGameUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UELSSInGameUtility();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FELSSLobbyMatchPlayerDataToClient> SortClientMatchPlayerList(const UObject* WorldContextObject, TArray<FELSSLobbyMatchPlayerDataToClient> Source);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SinkToPool(const UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ShouldPlaySoundInSSMode(const UObject* WorldContextObject, const UMeshComponent* inMeshComp, const USoundAtomCue* InCue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSubLevelVisible(const UObject* WorldContextObject, UWorld* World, const FName LevelName, bool bVisible);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSSGameStateFlag(const UObject* WorldContextObject, ESSGameStateFlag FlagType, bool IsOn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* ScoopFromPool(const UObject* WorldContextObject, TSubclassOf<AActor> actorClass, const FTransform& Transform, bool ifNotEnoughReuseWithoutAlloc);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveValidInteractableObjectFromGameState(const UObject* WorldContextObject, AActor* InActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PlayFgfTeamAnnounce(const UObject* WorldContextObject, ESSFgfTeamAnnounce inAnnounce, bool isDragonTeam);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NotifySpectatorPremiumFeature(const UObject* WorldContextObject, int32 UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSyncedTeamInfo(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSTeamLeader(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSTeamBattle(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSModeOutGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSModeInGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSGamePlayActive(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSSFgfOffense(const UObject* WorldContextObject, AELSSAIController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsFgf(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange(AActor* SelfActor, AActor* TargetActor, float degree);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasSSGameStateFlag(const UObject* WorldContextObject, ESSGameStateFlag FlagType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSStorm* GetStorm(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSVehicleManager* GetSSVehicleManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSTeamState* GetSSTeamStateByTeamId(const UObject* WorldContextObject, int32 InTeamId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSSoundManager* GetSSSoundManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetSSRoundTotalTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSRoundManager* GetSSRoundManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSPlayerController* GetSSPlayerController(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSPlayer* GetSSPlayer(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESSModeLaunchType GetSSModeLaunchTypeByActor(AActor* inBaseActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ESSModeLaunchType GetSSModeLaunchType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSLocatorManager* GetSSLocatorManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AELSSTeamState* GetSSLocalPlayerTeamState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSSLocalPlayerTeamId(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSItemManager* GetSSItemManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSGameState* GetSSGameState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetSSGamePlayElapsedTime(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSGameMode* GetSSGameMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSFadeManager* GetSSFadeManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetSSElapsedTimeFromReadyState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetSSElapsedTimeForAnalytics(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static SSAI_EBehaviorTreeType GetSSBehaviorTreeType(const UObject* WorldContextObject, AELSSAIController* InController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSelectedSpawnArea_ForTeamMember(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSPlayerState* GetLocalSSPlayerState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetLocalPlayerControllers(const UObject* WorldContextObject, TArray<APlayerController*>& outArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AELSSPlayerController* GetFirstLocalSSPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ULevelStreaming* FindSubLevel(const UObject* WorldContextObject, UWorld* World, const FName LevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CheckPlayerInTeam_ForSessionIcon(const UObject* WorldContextObject, const AELSSPlayerState* PlayerState, SSTEAM_ECheckPlayerInTeam& Branch);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckIsFgf(const UObject* WorldContextObject, ECheckFgf& Branch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanSelectSpawnArea(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanReceiveSpawnArea(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalcRotateAngleToTarget(float inBaseAngle, float inTargetAngle, float inAddAngle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddValidInteractableObjectToGameState(const UObject* WorldContextObject, AActor* InActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddPool(const UObject* WorldContextObject, TSubclassOf<AActor> actorClass, int32 PoolSize);
    
};

