#include "ELVictoryCutsceneManagerCore.h"

AELVictoryCutsceneManagerCore::AELVictoryCutsceneManagerCore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IntractiveVictoryParameter = NULL;
    this->VictoryCutsceneParameter = NULL;
    this->VictoryCutsceneAnimation = NULL;
}

void AELVictoryCutsceneManagerCore::UnloadAssets() {
}

ALevelSequenceActor* AELVictoryCutsceneManagerCore::StartVictoryMotion(float MotionTime, int32 InBeltPropID) {
    return NULL;
}

void AELVictoryCutsceneManagerCore::SetCharacters(AELCharacter_Native* Winner, AELCharacter_Native* Loser) {
}

void AELVictoryCutsceneManagerCore::SetCastInfo(int32 CastID, AELCharacter_Native* Character, USkeletalMeshComponent* MeshComponent) {
}

void AELVictoryCutsceneManagerCore::OnEndVictoryMotion_N() {
}



void AELVictoryCutsceneManagerCore::LoadAsset(EELVictoryCutsceneType CutSceneType, int32 WrestlerNum, bool IsTagMatch, bool IsBattleRoyale, int32 WinTeamNo, int32 LoseTeamNo) {
}

AELCharacter_Native* AELVictoryCutsceneManagerCore::GetWinner() {
    return NULL;
}

void AELVictoryCutsceneManagerCore::GetMontageParameterForReferee(UAnimMontage*& Montage, FVector& Location, FRotator& Rotation) {
}

bool AELVictoryCutsceneManagerCore::GetMontageParameter(AELCharacter_Native* Character, bool IsManager, int32 TeamNo, bool IsPlaceRing, UAnimMontage*& Montage, FVector& Location, FRotator& Rotation, int32& CastID) {
    return false;
}

AELCharacter_Native* AELVictoryCutsceneManagerCore::GetLoser() {
    return NULL;
}


