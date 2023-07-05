#include "ActionQueryUserStats.h"

UActionQueryUserStats* UActionQueryUserStats::ActionQueryUserSeasonStats(UObject* NewWorldContextObject, const FString& NewProductUserID, const FString& NewDisplayName, int32 Season, bool NewBForce) {
    return NULL;
}

UActionQueryUserStats* UActionQueryUserStats::ActionQueryUserSeasonStatList(UObject* NewWorldContextObject, const FString& NewProductUserID, const FString& NewDisplayName, int32 Season, const TArray<FString>& StatNames, bool NewBForce) {
    return NULL;
}

UActionQueryUserStats* UActionQueryUserStats::ActionQueryMySeasonStats(UObject* NewWorldContextObject, int32 Season, bool NewBForce) {
    return NULL;
}

UActionQueryUserStats* UActionQueryUserStats::ActionQueryMySeasonStatList(UObject* NewWorldContextObject, int32 Season, const TArray<FString>& StatNames, bool NewBForce) {
    return NULL;
}

void UActionQueryUserStats::Abort() {
}

UActionQueryUserStats::UActionQueryUserStats() {
    this->WorldContextObject = NULL;
    this->QuerySeason = 0;
    this->bForce = false;
}

