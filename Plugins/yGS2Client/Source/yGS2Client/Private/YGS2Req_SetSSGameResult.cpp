#include "YGS2Req_SetSSGameResult.h"

void UYGS2Req_SetSSGameResult::SetGameResult(const FString& gid, const FString& pid, const FString& gameResult) {
}

FString UYGS2Req_SetSSGameResult::GetPlayerSessionId() const {
    return TEXT("");
}

FYGS2SSPlayerData UYGS2Req_SetSSGameResult::GetPlayerData() const {
    return FYGS2SSPlayerData{};
}

UYGS2Req_SetSSGameResult::UYGS2Req_SetSSGameResult() {
}

