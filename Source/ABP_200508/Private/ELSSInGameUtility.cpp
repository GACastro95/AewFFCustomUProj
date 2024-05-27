#include "ELSSInGameUtility.h"
#include "Templates/SubclassOf.h"

UELSSInGameUtility::UELSSInGameUtility() {
}

TArray<FELSSLobbyMatchPlayerDataToClient> UELSSInGameUtility::SortClientMatchPlayerList(const UObject* WorldContextObject, TArray<FELSSLobbyMatchPlayerDataToClient> Source) {
    return TArray<FELSSLobbyMatchPlayerDataToClient>();
}

void UELSSInGameUtility::SinkToPool(const UObject* WorldContextObject, AActor* Actor) {
}

bool UELSSInGameUtility::ShouldPlaySoundInSSMode(const UObject* WorldContextObject, const UMeshComponent* inMeshComp, const USoundAtomCue* InCue) {
    return false;
}

void UELSSInGameUtility::SetSubLevelVisible(const UObject* WorldContextObject, UWorld* World, const FName LevelName, bool bVisible) {
}

void UELSSInGameUtility::SetSSGameStateFlag(const UObject* WorldContextObject, ESSGameStateFlag FlagType, bool IsOn) {
}

AActor* UELSSInGameUtility::ScoopFromPool(const UObject* WorldContextObject, TSubclassOf<AActor> actorClass, const FTransform& Transform, bool ifNotEnoughReuseWithoutAlloc) {
    return NULL;
}

void UELSSInGameUtility::RemoveValidInteractableObjectFromGameState(const UObject* WorldContextObject, AActor* InActor) {
}

bool UELSSInGameUtility::PlayFgfTeamAnnounce(const UObject* WorldContextObject, ESSFgfTeamAnnounce inAnnounce, bool isDragonTeam) {
    return false;
}

void UELSSInGameUtility::NotifySpectatorPremiumFeature(const UObject* WorldContextObject, int32 UserId) {
}

bool UELSSInGameUtility::IsSyncedTeamInfo(const UObject* WorldContextObject) {
    return false;
}

bool UELSSInGameUtility::IsSSTeamLeader(const UObject* WorldContextObject) {
    return false;
}

bool UELSSInGameUtility::IsSSTeamBattle(const UObject* WorldContextObject) {
    return false;
}

bool UELSSInGameUtility::IsSSModeOutGame(const UObject* WorldContextObject) {
    return false;
}

bool UELSSInGameUtility::IsSSModeInGame(const UObject* WorldContextObject) {
    return false;
}

bool UELSSInGameUtility::IsSSGamePlayActive(const UObject* WorldContextObject) {
    return false;
}

bool UELSSInGameUtility::IsSSFgfOffense(const UObject* WorldContextObject, AELSSAIController* InController) {
    return false;
}

bool UELSSInGameUtility::IsFgf(const UObject* WorldContextObject) {
    return false;
}

bool UELSSInGameUtility::IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange(AActor* SelfActor, AActor* TargetActor, float degree) {
    return false;
}

bool UELSSInGameUtility::HasSSGameStateFlag(const UObject* WorldContextObject, ESSGameStateFlag FlagType) {
    return false;
}

AELSSStorm* UELSSInGameUtility::GetStorm(const UObject* WorldContextObject) {
    return NULL;
}

AELSSVehicleManager* UELSSInGameUtility::GetSSVehicleManager(const UObject* WorldContextObject) {
    return NULL;
}

AELSSTeamState* UELSSInGameUtility::GetSSTeamStateByTeamId(const UObject* WorldContextObject, int32 InTeamId) {
    return NULL;
}

AELSSSoundManager* UELSSInGameUtility::GetSSSoundManager(const UObject* WorldContextObject) {
    return NULL;
}

float UELSSInGameUtility::GetSSRoundTotalTime(const UObject* WorldContextObject) {
    return 0.0f;
}

AELSSRoundManager* UELSSInGameUtility::GetSSRoundManager(const UObject* WorldContextObject) {
    return NULL;
}

AELSSPlayerController* UELSSInGameUtility::GetSSPlayerController(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

AELSSPlayer* UELSSInGameUtility::GetSSPlayer(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

ESSModeLaunchType UELSSInGameUtility::GetSSModeLaunchTypeByActor(AActor* inBaseActor) {
    return ESSModeLaunchType::DefaultClient;
}

ESSModeLaunchType UELSSInGameUtility::GetSSModeLaunchType(const UObject* WorldContextObject) {
    return ESSModeLaunchType::DefaultClient;
}

AELSSLocatorManager* UELSSInGameUtility::GetSSLocatorManager(const UObject* WorldContextObject) {
    return NULL;
}

AELSSTeamState* UELSSInGameUtility::GetSSLocalPlayerTeamState(const UObject* WorldContextObject) {
    return NULL;
}

int32 UELSSInGameUtility::GetSSLocalPlayerTeamId(const UObject* WorldContextObject) {
    return 0;
}

AELSSItemManager* UELSSInGameUtility::GetSSItemManager(const UObject* WorldContextObject) {
    return NULL;
}

AELSSGameState* UELSSInGameUtility::GetSSGameState(const UObject* WorldContextObject) {
    return NULL;
}

float UELSSInGameUtility::GetSSGamePlayElapsedTime(const UObject* WorldContextObject) {
    return 0.0f;
}

AELSSGameMode* UELSSInGameUtility::GetSSGameMode(const UObject* WorldContextObject) {
    return NULL;
}

AELSSFadeManager* UELSSInGameUtility::GetSSFadeManager(const UObject* WorldContextObject) {
    return NULL;
}

float UELSSInGameUtility::GetSSElapsedTimeFromReadyState(const UObject* WorldContextObject) {
    return 0.0f;
}

float UELSSInGameUtility::GetSSElapsedTimeForAnalytics(const UObject* WorldContextObject) {
    return 0.0f;
}

SSAI_EBehaviorTreeType UELSSInGameUtility::GetSSBehaviorTreeType(const UObject* WorldContextObject, AELSSAIController* InController) {
    return SSAI_EBehaviorTreeType::BattleRoyale_Single;
}

int32 UELSSInGameUtility::GetSelectedSpawnArea_ForTeamMember(const UObject* WorldContextObject) {
    return 0;
}

AELSSPlayerState* UELSSInGameUtility::GetLocalSSPlayerState(const UObject* WorldContextObject) {
    return NULL;
}

void UELSSInGameUtility::GetLocalPlayerControllers(const UObject* WorldContextObject, TArray<APlayerController*>& outArray) {
}

AELSSPlayerController* UELSSInGameUtility::GetFirstLocalSSPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

ULevelStreaming* UELSSInGameUtility::FindSubLevel(const UObject* WorldContextObject, UWorld* World, const FName LevelName) {
    return NULL;
}

void UELSSInGameUtility::CheckPlayerInTeam_ForSessionIcon(const UObject* WorldContextObject, const AELSSPlayerState* PlayerState, SSTEAM_ECheckPlayerInTeam& Branch) {
}

bool UELSSInGameUtility::CheckIsFgf(const UObject* WorldContextObject, ECheckFgf& Branch) {
    return false;
}

bool UELSSInGameUtility::CanSelectSpawnArea(const UObject* WorldContextObject) {
    return false;
}

bool UELSSInGameUtility::CanReceiveSpawnArea(const UObject* WorldContextObject) {
    return false;
}

float UELSSInGameUtility::CalcRotateAngleToTarget(float inBaseAngle, float inTargetAngle, float inAddAngle) {
    return 0.0f;
}

void UELSSInGameUtility::AddValidInteractableObjectToGameState(const UObject* WorldContextObject, AActor* InActor) {
}

void UELSSInGameUtility::AddPool(const UObject* WorldContextObject, TSubclassOf<AActor> actorClass, int32 PoolSize) {
}


