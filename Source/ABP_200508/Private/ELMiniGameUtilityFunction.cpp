#include "ELMiniGameUtilityFunction.h"

bool UELMiniGameUtilityFunction::SetupMiniGameSaveData() {
    return false;
}

void UELMiniGameUtilityFunction::SetMiniGamePlayed(EMiniGameID _MiniGameID, bool _IsPlayed) {
}

void UELMiniGameUtilityFunction::SetMiniGameDynamicResOperationMode(UObject* WorldContextObject, bool IsOn) {
}

void UELMiniGameUtilityFunction::SetMiniGameCanEverAffectNavigation(UObject* WorldContextObject, bool IsOn) {
}

void UELMiniGameUtilityFunction::SetMiniGameCanCharacterStepUpOn(UObject* WorldContextObject, bool IsOn) {
}

void UELMiniGameUtilityFunction::SaveRequestMiniGameData(uint8 _saveDataAccessFlag) {
}

void UELMiniGameUtilityFunction::MiningMiniGameScores(const UObject* WorldContextObject, EMiniGameID MiniGameId, bool IsInOnline, TArray<bool> IsPlayer, TArray<int32> ScoreData) {
}

void UELMiniGameUtilityFunction::MiningMiniGameParam(const UObject* WorldContextObject, EMiniGameMiningCategory Category, EMiniGameID MiniGameId, int32 MiningData, int32 Level) {
}

void UELMiniGameUtilityFunction::GetMiniGamePlayedList(TArray<bool>& _AlreadyPlayedArray) {
}

void UELMiniGameUtilityFunction::CheckUnlockProGamerAchievement(EMiniGameID _NowPlayMiniGameID) {
}

UELMiniGameUtilityFunction::UELMiniGameUtilityFunction() {
}

