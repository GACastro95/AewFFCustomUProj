#include "YGS2Req_ConsumeGold.h"

UYGS2Req_ConsumeGold::UYGS2Req_ConsumeGold() {
}

void UYGS2Req_ConsumeGold::SetListMode(int32 _sOffset, int32 _sLimit, int32 _sContentKind, const FString& _strContentID) {
}

void UYGS2Req_ConsumeGold::SetFindMode(int32 _sContentKind, const FString& _strContentID) {
}

void UYGS2Req_ConsumeGold::SetConsumeGoldData(int32 _sContentKind, const FString& _strContentID, int32 _sGoldSub, int32 _sGoldBefore, int32 _sGoldAfter, int32 _sContentNum_Add, int32 _sContentNum_Before, int32 _sContentNum_After) {
}

TArray<FYGS2Record_ConsumeGold> UYGS2Req_ConsumeGold::Records() const {
    return TArray<FYGS2Record_ConsumeGold>();
}

FYGS2Response_ConsumeGold UYGS2Req_ConsumeGold::GetConsumeGoldResult() const {
    return FYGS2Response_ConsumeGold{};
}


