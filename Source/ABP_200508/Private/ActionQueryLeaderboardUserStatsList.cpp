#include "ActionQueryLeaderboardUserStatsList.h"

UActionQueryLeaderboardUserStatsList* UActionQueryLeaderboardUserStatsList::ActionQueryLeaderboardUserStatsList(UObject* NewWorldContextObject, const TArray<FELLeaderboardUserData>& NewUserData, bool NewBForce) {
    return NULL;
}

void UActionQueryLeaderboardUserStatsList::Abort() {
}

UActionQueryLeaderboardUserStatsList::UActionQueryLeaderboardUserStatsList() {
    this->WorldContextObject = NULL;
    this->QuerySeason = 0;
    this->bForce = false;
    this->ArrayIndex = 0;
}

