#include "YGS2Req_PurchaseHistory.h"

UYGS2Req_PurchaseHistory::UYGS2Req_PurchaseHistory() {
}

void UYGS2Req_PurchaseHistory::SetPurchaseData(const FString& _strPlatform, const FString& _strTransactionID, const FString& _strShopItemID, int32 _sGoldAdd, int32 _sGoldBefore, int32 _sGoldAfter, int32 _sCurrencyValue, const FString& _strCurrencyType) {
}

void UYGS2Req_PurchaseHistory::SetListMode(int32 _sOffset, int32 _sLimit) {
}

void UYGS2Req_PurchaseHistory::SetFindMode(const FString& _strPlatform, const FString& _strTransactionID) {
}

TArray<FYGS2Record_PurchaseHistory> UYGS2Req_PurchaseHistory::Records() const {
    return TArray<FYGS2Record_PurchaseHistory>();
}

FYGS2Response_PurchaseHistory UYGS2Req_PurchaseHistory::GetPurchaseHistoryResult() const {
    return FYGS2Response_PurchaseHistory{};
}

int32 UYGS2Req_PurchaseHistory::GetAEWGoldAdd() const {
    return 0;
}


