#include "YGS2Req_ConsumeItem.h"

UYGS2Req_ConsumeItem::UYGS2Req_ConsumeItem() {
}

void UYGS2Req_ConsumeItem::SetListMode(int32 _sOffset, int32 _sLimit, int32 _sContentKind, const FString& _strContentID) {
}

void UYGS2Req_ConsumeItem::SetFindMode(int32 _sContentKind, const FString& _strContentID) {
}

void UYGS2Req_ConsumeItem::SetConsumeItemData(int32 _sContentKind, const FString& _strContentID, int32 _sContentNum_Sub, int32 _sContentNum_Before, int32 _sContentNum_After) {
}

TArray<FYGS2Record_ConsumeItem> UYGS2Req_ConsumeItem::Records() const {
    return TArray<FYGS2Record_ConsumeItem>();
}

FYGS2Response_ConsumeItem UYGS2Req_ConsumeItem::GetConsumeItemResult() const {
    return FYGS2Response_ConsumeItem{};
}


