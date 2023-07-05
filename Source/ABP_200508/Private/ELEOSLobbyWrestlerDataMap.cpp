#include "ELEOSLobbyWrestlerDataMap.h"

void UELEOSLobbyWrestlerDataMap::SetWrestlerNum(int32 _WrestlerNum) {
}

void UELEOSLobbyWrestlerDataMap::RemoveWrestlerData(const FString& _PUID) {
}

bool UELEOSLobbyWrestlerDataMap::IsCompleteAll(const TArray<FString>& _PUIDArray) {
    return false;
}

bool UELEOSLobbyWrestlerDataMap::IsComplete(const FString& _PUID) {
    return false;
}

UObject* UELEOSLobbyWrestlerDataMap::FindWrestlerData(const FString& _PUID, int32 _WrestlerIndex) {
    return NULL;
}

void UELEOSLobbyWrestlerDataMap::ClearWrestlerDataMapWithoutPUID(const TArray<FString>& _PUIDs) {
}

void UELEOSLobbyWrestlerDataMap::ClearWrestlerDataMap() {
}

void UELEOSLobbyWrestlerDataMap::AddWrestlerData(const FString& _PUID, UObject* _WrestlerData, int32 _WrestlerIndex) {
}

UELEOSLobbyWrestlerDataMap::UELEOSLobbyWrestlerDataMap() {
    this->WrestlerNum = 1;
}

