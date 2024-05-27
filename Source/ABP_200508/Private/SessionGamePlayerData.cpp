#include "SessionGamePlayerData.h"

USessionGamePlayerData::USessionGamePlayerData() {
}

bool USessionGamePlayerData::SetParameters(const FSessionGamePlayerDataBP& _stPlayerData) {
    return false;
}

FString USessionGamePlayerData::GetWrestlerName() const {
    return TEXT("");
}

void USessionGamePlayerData::GetWinLoseCounts(TArray<int32>& Array) const {
}

int32 USessionGamePlayerData::GetWinLoseCount() const {
    return 0;
}

void USessionGamePlayerData::GetWeaponDecals(TArray<int32>& Array) const {
}

int32 USessionGamePlayerData::GetTotalGamePoint() const {
    return 0;
}

FString USessionGamePlayerData::GetTeamMemberPUID(int32 _sIndex) const {
    return TEXT("");
}

int32 USessionGamePlayerData::GetTeamMemberNum() const {
    return 0;
}

int32 USessionGamePlayerData::GetRank() const {
    return 0;
}

void USessionGamePlayerData::GetRandomNumbers(TArray<int32>& Array) const {
}

FString USessionGamePlayerData::GetProductUserID() const {
    return TEXT("");
}

void USessionGamePlayerData::GetPlayerIcons(TArray<int32>& Array) const {
}

int32 USessionGamePlayerData::GetPlatform() const {
    return 0;
}

int32 USessionGamePlayerData::GetLeague() const {
    return 0;
}

FString USessionGamePlayerData::GetLastName() const {
    return TEXT("");
}

FString USessionGamePlayerData::GetFirstName() const {
    return TEXT("");
}

FString USessionGamePlayerData::GetEpicAccountDisplayName() const {
    return TEXT("");
}

FString USessionGamePlayerData::GetAccountDisplayName() const {
    return TEXT("");
}


