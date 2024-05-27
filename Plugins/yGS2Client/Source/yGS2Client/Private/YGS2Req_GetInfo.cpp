#include "YGS2Req_GetInfo.h"

UYGS2Req_GetInfo::UYGS2Req_GetInfo() {
}

void UYGS2Req_GetInfo::SetAccountInfo(const FString& EpicAccountID, const FString& ProductUserID, const FString& EOSIDHash) {
}

EYGS2GetInfoStatus UYGS2Req_GetInfo::GetStatus() const {
    return EYGS2GetInfoStatus::Unknown;
}

FString UYGS2Req_GetInfo::GetServerVersion() const {
    return TEXT("");
}

FString UYGS2Req_GetInfo::GetServerName() const {
    return TEXT("");
}

FString UYGS2Req_GetInfo::GetServerId() const {
    return TEXT("");
}

int32 UYGS2Req_GetInfo::GetPermission() const {
    return 0;
}


