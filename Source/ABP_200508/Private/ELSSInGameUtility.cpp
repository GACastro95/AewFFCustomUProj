#include "ELSSInGameUtility.h"
#include "Templates/SubclassOf.h"

void UELSSInGameUtility::SinkToPool(const UObject* WorldContextObject, AActor* Actor) {
}

bool UELSSInGameUtility::ShouldPlaySoundInSSMode(const UObject* WorldContextObject, const UMeshComponent* inMeshComp, const USoundAtomCue* InCue) {
    return false;
}

void UELSSInGameUtility::SetSubLevelVisible(const UObject* WorldContextObject, UWorld* World, const FName LevelName, bool bVisible) {
}

AActor* UELSSInGameUtility::ScoopFromPool(const UObject* WorldContextObject, TSubclassOf<AActor> actorClass, const FTransform& Transform, bool ifNotEnoughReuseWithoutAlloc) {
    return NULL;
}

void UELSSInGameUtility::RemoveValidInteractableObjectFromGameState(const UObject* WorldContextObject, AActor* InActor) {
}

void UELSSInGameUtility::NotifySpectatorPremiumFeature(const UObject* WorldContextObject, int32 UserId) {
}

bool UELSSInGameUtility::IsSSModeOutGame(const UObject* WorldContextObject) {
    return false;
}

bool UELSSInGameUtility::IsSSModeInGame(const UObject* WorldContextObject) {
    return false;
}

bool UELSSInGameUtility::IsDiffAngleBetweenSelfForwardAndDirTargetWithinRange(AActor* SelfActor, AActor* TargetActor, float degree) {
    return false;
}

AELSSStorm* UELSSInGameUtility::GetStorm(const UObject* WorldContextObject) {
    return NULL;
}

AELSSVehicleManager* UELSSInGameUtility::GetSSVehicleManager(const UObject* WorldContextObject) {
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

AELSSLocatorManager* UELSSInGameUtility::GetSSLocatorManager(const UObject* WorldContextObject) {
    return NULL;
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

void UELSSInGameUtility::GetLocalPlayerControllers(const UObject* WorldContextObject, TArray<APlayerController*>& outArray) {
}

AELSSPlayerController* UELSSInGameUtility::GetFirstLocalSSPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

ULevelStreaming* UELSSInGameUtility::FindSubLevel(const UObject* WorldContextObject, UWorld* World, const FName LevelName) {
    return NULL;
}

float UELSSInGameUtility::CalcRotateAngleToTarget(float inBaseAngle, float inTargetAngle, float inAddAngle) {
    return 0.0f;
}

void UELSSInGameUtility::AddValidInteractableObjectToGameState(const UObject* WorldContextObject, AActor* InActor) {
}

void UELSSInGameUtility::AddPool(const UObject* WorldContextObject, TSubclassOf<AActor> actorClass, int32 PoolSize) {
}

UELSSInGameUtility::UELSSInGameUtility() {
}

