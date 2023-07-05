#include "ELTextFilterManager.h"

bool UELTextFilterManager::TextFilterSteam(int32 filterCategory, const FString& _SrcText, FString& _DstText, const FString& ExternalAccountId) {
    return false;
}

bool UELTextFilterManager::TextFilterArray(const TArray<FString>& SrcText, const FOnSanitizeTextArray& OnSanitizeTextComplete, UObject* UserData, const FString& ExternalAccountId) {
    return false;
}

bool UELTextFilterManager::TextFilter(const FString& SrcText, const FOnSanitizeText& OnSanitizeTextComplete, UObject* UserData, const FString& ExternalAccountId) {
    return false;
}

UELTextFilterManager::UELTextFilterManager() {
    this->isinit = false;
}

