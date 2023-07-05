#include "ELEOSManagerUtility.h"

void UELEOSManagerUtility::RequestSanitizeWrestlerName(FEOSSanitizeWrestlerNameTextEvent Delegate, UELEOSSanitizeTextWrestlerData* UserData) {
}

void UELEOSManagerUtility::RequestSanitizePartyChat(FEOSSanitizePartyChatEvent Delegate, UELEOSSanitizeTextPartyChat* UserData) {
}

void UELEOSManagerUtility::OnSanitizeText_SpokenName(const FString& SanitizeText, UObject* UserData) {
}

void UELEOSManagerUtility::OnSanitizeText_SnsAccount(const FString& SanitizeText, UObject* UserData) {
}

void UELEOSManagerUtility::OnSanitizeText_ShortName(const FString& SanitizeText, UObject* UserData) {
}

void UELEOSManagerUtility::OnSanitizeText_RingName(const FString& SanitizeText, UObject* UserData) {
}

void UELEOSManagerUtility::OnSanitizeText_PartyChat(const FString& SanitizeText, UObject* UserData) {
}

void UELEOSManagerUtility::OnSanitizeText_NickName(const FString& SanitizeText, UObject* UserData) {
}

void UELEOSManagerUtility::OnSanitizeText_MultilineRingName(const FString& SanitizeText, UObject* UserData) {
}

void UELEOSManagerUtility::OnSanitizeText_All(const TArray<FString>& SanitizeText, UObject* UserData) {
}

bool UELEOSManagerUtility::IsValidOnlineWrestlerData_Implementation(UObject* OnlineWrestlerData) {
    return false;
}



UELEOSManagerUtility::UELEOSManagerUtility() {
    this->DebugDisableTextFilter = false;
}

