#include "OnlinePlayerData.h"

UOnlinePlayerData::UOnlinePlayerData() {
}

int32 UOnlinePlayerData::SubGamePoint(int32 _sValue) {
    return 0;
}

void UOnlinePlayerData::SetWonCount(int32 _sValue) {
}

void UOnlinePlayerData::SetWinLoseCounter(int32 _uValue) {
}

void UOnlinePlayerData::SetTotalMatch(int32 _sValue) {
}

void UOnlinePlayerData::SetRank(int32 _sValue) {
}

void UOnlinePlayerData::SetLoseCount(int32 _sValue) {
}

void UOnlinePlayerData::SetLeague(int32 _sValue) {
}

void UOnlinePlayerData::SetGamePoint(int32 _sValue) {
}

bool UOnlinePlayerData::MakeUserContentBinary(UEOSUserContentBinary*& _pcUserContentBinary) {
    return false;
}

int32 UOnlinePlayerData::GetWonCount() const {
    return 0;
}

int32 UOnlinePlayerData::GetWinLoseCounter() const {
    return 0;
}

int32 UOnlinePlayerData::GetTotalMatchCount() const {
    return 0;
}

int32 UOnlinePlayerData::GetRank() const {
    return 0;
}

int32 UOnlinePlayerData::GetLoseCount() const {
    return 0;
}

int32 UOnlinePlayerData::GetLeague() const {
    return 0;
}

int32 UOnlinePlayerData::GetGamePoint() const {
    return 0;
}

bool UOnlinePlayerData::CreateOnlinePlayerDataWithUserContentBinary(UOnlinePlayerData*& _pcOnlinePlayerData, UEOSUserContentBinary* _pcUserContentBinary) {
    return false;
}

bool UOnlinePlayerData::CreateOnlinePlayerData(UOnlinePlayerData*& _pcOnlinePlayerData) {
    return false;
}

void UOnlinePlayerData::CalcWinLoseCounter(bool _bIsWon) {
}

void UOnlinePlayerData::AddWonCount() {
}

void UOnlinePlayerData::AddTotalMatchCount() {
}

void UOnlinePlayerData::AddLoseCount() {
}

int32 UOnlinePlayerData::AddGamePoint(int32 _sValue) {
    return 0;
}


