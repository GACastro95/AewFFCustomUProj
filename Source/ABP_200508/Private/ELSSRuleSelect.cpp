#include "ELSSRuleSelect.h"

bool UELSSRuleSelect::UpdateList(UObject* WorldContextObject) {
    return false;
}

bool UELSSRuleSelect::SyncScheduleId(const UObject* WorldContextObject, float DeltaTime) {
    return false;
}

bool UELSSRuleSelect::MakeList(const UObject* WorldContextObject) {
    return false;
}

bool UELSSRuleSelect::IsItemNeedRemainTime(FSSRuleSelectItem ITEM) {
    return false;
}

bool UELSSRuleSelect::IsItemAvailable(FSSRuleSelectItem ITEM) {
    return false;
}

bool UELSSRuleSelect::IsExistComingSoon() const {
    return false;
}

bool UELSSRuleSelect::IsCurrentNeedRemainTime(const UObject* WorldContextObject) {
    return false;
}

bool UELSSRuleSelect::IsAvailableRule(const UObject* WorldContextObject, FDateTime inNowUTC, int32 inRuleId, int32& outScheduleId) {
    return false;
}

FString UELSSRuleSelect::GetStrItemRuleTitle(FSSRuleSelectItem ITEM) {
    return TEXT("");
}

FString UELSSRuleSelect::GetStrItemRuleInfo(FSSRuleSelectItem ITEM) {
    return TEXT("");
}

void UELSSRuleSelect::GetStrItemRemainTime_ExtractNums(FSSRuleSelectItem ITEM, FString& outHour0, FString& outHour1, FString& outMinute0, FString& outMinute1, FString& outSecond0, FString& outSecond1) {
}

FString UELSSRuleSelect::GetStrItemRemainTime(FSSRuleSelectItem ITEM) {
    return TEXT("");
}

FString UELSSRuleSelect::GetStrItemPartySize(FSSRuleSelectItem ITEM) {
    return TEXT("");
}

FString UELSSRuleSelect::GetStrCurrentRuleTitle(const UObject* WorldContextObject) {
    return TEXT("");
}

FString UELSSRuleSelect::GetStrCurrentRemainTime(const UObject* WorldContextObject) {
    return TEXT("");
}

FString UELSSRuleSelect::GetStrCurrentPartySize(const UObject* WorldContextObject) {
    return TEXT("");
}

UELSSRuleSelect* UELSSRuleSelect::GetRuleSelectInstance(const UObject* WorldContextObject) {
    return NULL;
}

int32 UELSSRuleSelect::GetListNum() {
    return 0;
}

FString UELSSRuleSelect::GetItemRuleTitle(FSSRuleSelectItem ITEM) {
    return TEXT("");
}

FString UELSSRuleSelect::GetItemRuleInfo(FSSRuleSelectItem ITEM) {
    return TEXT("");
}

UTexture2D* UELSSRuleSelect::GetItemRuleImageS(const FSSRuleSelectItem& ITEM) {
    return NULL;
}

UTexture2D* UELSSRuleSelect::GetItemRuleImageL(const FSSRuleSelectItem& ITEM) {
    return NULL;
}

void UELSSRuleSelect::GetItemRemainTime_ExtractNums(FSSRuleSelectItem ITEM, FString& outHour0, FString& outHour1, FString& outMinute0, FString& outMinute1, FString& outSecond0, FString& outSecond1) {
}

FString UELSSRuleSelect::GetItemPartySize(FSSRuleSelectItem ITEM) {
    return TEXT("");
}

TArray<FSSRuleSelectItem> UELSSRuleSelect::GetItemList() const {
    return TArray<FSSRuleSelectItem>();
}

FSSRuleSelectItem UELSSRuleSelect::GetItem(int32 idx) {
    return FSSRuleSelectItem{};
}

FName UELSSRuleSelect::GetCurrentTutorialName(const UObject* WorldContextObject) {
    return NAME_None;
}

int32 UELSSRuleSelect::GetCurrentScheduleId(const UObject* WorldContextObject) {
    return 0;
}

int32 UELSSRuleSelect::GetCurrentRulePartySize(const UObject* WorldContextObject) {
    return 0;
}

int32 UELSSRuleSelect::GetCurrentRuleIndex(UObject* WorldContextObject) {
    return 0;
}

UTexture2D* UELSSRuleSelect::GetCurrentRuleImageS(const UObject* WorldContextObject) {
    return NULL;
}

UTexture2D* UELSSRuleSelect::GetCurrentRuleImageL(const UObject* WorldContextObject) {
    return NULL;
}

TArray<FSSRuleSelectItem> UELSSRuleSelect::GetCommingList() const {
    return TArray<FSSRuleSelectItem>();
}

bool UELSSRuleSelect::CheckCurrentRuleTimeoutByUtc(const UObject* WorldContextObject, const FDateTime& inUtcTime, SSRULE_ECheckTimeout& Branch) {
    return false;
}

bool UELSSRuleSelect::CheckCurrentRuleTimeout(const UObject* WorldContextObject, SSRULE_ECheckTimeout& Branch) {
    return false;
}

bool UELSSRuleSelect::CheckCurrentRulePartyOver(const UObject* WorldContextObject, SSRULE_ECheckPartyOver& Branch) {
    return false;
}

bool UELSSRuleSelect::CanRuleSelect(const UObject* WorldContextObject) {
    return false;
}

bool UELSSRuleSelect::CanNotDecide(const UObject* WorldContextObject, FSSRuleSelectItem ITEM, bool inCommongSoon, SSRULE_Warning& outwarning) {
    return false;
}

void UELSSRuleSelect::ApplyRule(UObject* WorldContextObject, const FSSRuleSelectItem& ITEM) {
}

void UELSSRuleSelect::ApplyDefaultRule(UObject* WorldContextObject) {
}

UELSSRuleSelect::UELSSRuleSelect() {
}

