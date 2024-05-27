#include "ELTournamentUtilityFunction.h"

UELTournamentUtilityFunction::UELTournamentUtilityFunction() {
}

bool UELTournamentUtilityFunction::SetupTournamentSaveData() {
    return false;
}

void UELTournamentUtilityFunction::SetTournamentClearCount(UObject* WorldContextObject, EELTournamentType TournamentType, EELTournamentDifficulty Difficulty, int32 Count) {
}

bool UELTournamentUtilityFunction::SaveTournamentProgressData(UObject* WorldContextObject, bool bCheckModify) {
    return false;
}

void UELTournamentUtilityFunction::SaveRequestTournamentData(uint8 _saveDataAccessFlag) {
}

bool UELTournamentUtilityFunction::SaveLocalTournamentProgressData(UObject* WorldContextObject, bool bCheckModify) {
    return false;
}

bool UELTournamentUtilityFunction::ResetTournamentProgressData(UObject* WorldContextObject) {
    return false;
}

bool UELTournamentUtilityFunction::ResetLocalTournamentProgressData(UObject* WorldContextObject) {
    return false;
}

void UELTournamentUtilityFunction::MakeTournamentBracket(UObject* WorldContextObject, TArray<FELTournamentBracket>& TournamentBracket) {
}

TArray<FELTournamentWrestlerIdentifier> UELTournamentUtilityFunction::MakeLocalTournamentEntryWrestlerList(UObject* WorldContextObject) {
    return TArray<FELTournamentWrestlerIdentifier>();
}

void UELTournamentUtilityFunction::LotteryTournamentWrestler(UObject* WorldContextObject, int32 InLotteryNum, const TArray<FELTournamentWrestlerIdentifier>& InIgnoreWrestler, TArray<FELTournamentWrestlerIdentifier>& OutLotteryList, bool bPickupEditWrestler) {
}

bool UELTournamentUtilityFunction::IsUnlockingTournament(UObject* WorldContextObject, const FString& TournamentName, const UDataTable* TournamentDataTable) {
    return false;
}

bool UELTournamentUtilityFunction::IsUnlockingLocalTournament(UObject* WorldContextObject, int32 UnlockableItemID) {
    return false;
}

bool UELTournamentUtilityFunction::IsUnlockingAnyTournament(UObject* WorldContextObject, const UDataTable* TournamentDataTable) {
    return false;
}

bool UELTournamentUtilityFunction::IsTournamentPlaying(UObject* WorldContextObject, EELTournamentType TournamentType, EELTournamentDifficulty Difficulty) {
    return false;
}

bool UELTournamentUtilityFunction::IsTournamentNoRetryClear(UObject* WorldContextObject, EELTournamentType TournamentType, EELTournamentDifficulty Difficulty) {
    return false;
}

bool UELTournamentUtilityFunction::IsTournamentClear(UObject* WorldContextObject, EELTournamentType TournamentType, EELTournamentDifficulty Difficulty) {
    return false;
}

bool UELTournamentUtilityFunction::IsLocalTournamentPlaying(UObject* WorldContextObject) {
    return false;
}

bool UELTournamentUtilityFunction::IsLocalTournamentEntryWrestlerOnSaveData(UObject* WorldContextObject, EWrestlerID_N WrestlerID, FGuid Guid) {
    return false;
}

bool UELTournamentUtilityFunction::IsLocalTournamentEntryWrestler(UObject* WorldContextObject, EWrestlerID_N WrestlerID, FGuid Guid) {
    return false;
}

bool UELTournamentUtilityFunction::IsLocalTournamentBracketCompleted(UObject* WorldContextObject) {
    return false;
}

bool UELTournamentUtilityFunction::IsLocalTournamentArenaOnSaveData(UObject* WorldContextObject, uint8 ArenaID, FGuid CustomArenaID, bool bCustomArena) {
    return false;
}

bool UELTournamentUtilityFunction::IsBusyTournamentSaveProcess(uint8 _saveDataAccessFlag) {
    return false;
}

bool UELTournamentUtilityFunction::IsAlreadyLocalTournamentBracket(UObject* WorldContextObject) {
    return false;
}

void UELTournamentUtilityFunction::GetTournamentWrestlerList(UObject* WorldContextObject, TArray<FELTournamentWrestlerIdentifier>& List) {
}

bool UELTournamentUtilityFunction::GetTournamentVictoryCutsceneType(UObject* WorldContextObject, TArray<EGender> GenderList, EELVictoryCutsceneType& CutSceneType) {
    return false;
}

bool UELTournamentUtilityFunction::GetTournamentProgressDataAll(UObject* WorldContextObject, TMap<EELTournamentType, FELTournamentSaveData>& TournamentSaveData) {
    return false;
}

void UELTournamentUtilityFunction::GetTournamentPositionList(UObject* WorldContextObject, TArray<int32>& PositionList) {
}

EMiniGameID UELTournamentUtilityFunction::GetTournamentMiniGameID(UObject* WorldContextObject, const TMap<EMiniGameID, int32>& UnlockableItemIdMap) {
    return EMiniGameID::HomeRunDerby;
}

int32 UELTournamentUtilityFunction::GetTournamentClearCount(UObject* WorldContextObject, EELTournamentType TournamentType, EELTournamentDifficulty Difficulty) {
    return 0;
}

bool UELTournamentUtilityFunction::GetLocalTournamentWrestlerList(UObject* WorldContextObject, int32 MatchNo, TArray<FELTournamentWrestlerIdentifier>& List) {
    return false;
}

bool UELTournamentUtilityFunction::GetLocalTournamentVictoryCutsceneType(UObject* WorldContextObject, TArray<EGender> GenderList, EELVictoryCutsceneType& CutSceneType) {
    return false;
}

void UELTournamentUtilityFunction::GetLocalTournamentSelectableMatch(UObject* WorldContextObject, int32 MatchNo, bool bLoop, int32& StartMatch, int32& LastMatch, int32& CurrentMatch, int32& PrevMatch, int32& NextMatch, EELLocalTournamentStageType& stage) {
}

EELLocalTournamentNodeState UELTournamentUtilityFunction::GetLocalTournamentNodeState(UObject* WorldContextObject, int32 NodeIndex, int32 SelectIndex, bool bEditMode) {
    return EELLocalTournamentNodeState::Edit_Empty;
}

void UELTournamentUtilityFunction::GetLocalTournamentEntryNo(UObject* WorldContextObject, int32 MatchNo, int32& TeamA, int32& TeamB) {
}

void UELTournamentUtilityFunction::GetLocalTournamentBracketAllWrestlerList(UObject* WorldContextObject, TArray<FELTournamentBracket>& BracketList) {
}

bool UELTournamentUtilityFunction::GetLocalTournamentArenaDataOnSaveData(bool& bOutCustomArena, uint8& OutArenaId, FGuid& OutArenaGuid) {
    return false;
}

bool UELTournamentUtilityFunction::CheckUnavaliableWrestler(UObject* WorldContextObject, EWrestlerID_N WrestlerID) {
    return false;
}

bool UELTournamentUtilityFunction::CheckUnavailableTournamentProgressSaveData(UObject* WorldContextObject, FELTournamentProgressSaveData& ProgressData) {
    return false;
}

bool UELTournamentUtilityFunction::CheckUnavailableLocalTournamentSaveData(UObject* WorldContextObject, TArray<FText>& UnavailableDlcNameList) {
    return false;
}

bool UELTournamentUtilityFunction::ApplyTournamentProgressData(UObject* WorldContextObject, EELTournamentType TournamentType, EELTournamentDifficulty Difficulty) {
    return false;
}

bool UELTournamentUtilityFunction::ApplyLocalTournamentProgressData(UObject* WorldContextObject) {
    return false;
}

void UELTournamentUtilityFunction::AdjustDlcTournametSaveData(UObject* WorldContextObject) {
}

bool UELTournamentUtilityFunction::AddTournamentClearCount(UObject* WorldContextObject, EELTournamentType TournamentType, EELTournamentDifficulty TournamentDifficulty, bool bNoRetryClear) {
    return false;
}


