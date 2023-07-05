#include "YGS2Req_UserStats.h"

void UYGS2Req_UserStats::SetUpdateItems(const FString& _strKind, const TMap<FString, FString>& _cUpdateItems, const FString& _strStructID, bool _bSave) {
}

void UYGS2Req_UserStats::SetRemoveKeys(const FString& _strKind, const TArray<FString>& _cRemoveKeys) {
}

void UYGS2Req_UserStats::SetGetCondition(const FString& _strProductUserID, const FString& _strKind, const TArray<FString>& _cTargets) {
}

TMap<FString, FString> UYGS2Req_UserStats::Records() const {
    return TMap<FString, FString>();
}

TMap<FString, FString> UYGS2Req_UserStats::GetUpdateItems() const {
    return TMap<FString, FString>();
}

FString UYGS2Req_UserStats::GetStructID() const {
    return TEXT("");
}

FString UYGS2Req_UserStats::GetProductUserID() const {
    return TEXT("");
}

int32 UYGS2Req_UserStats::GetLastListNum() const {
    return 0;
}

FString UYGS2Req_UserStats::GetKind() const {
    return TEXT("");
}

UYGS2Req_UserStats::UYGS2Req_UserStats() {
}

