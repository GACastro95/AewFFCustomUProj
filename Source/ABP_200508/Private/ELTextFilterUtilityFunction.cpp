#include "ELTextFilterUtilityFunction.h"

UELTextFilterUtilityFunction::UELTextFilterUtilityFunction() {
}

bool UELTextFilterUtilityFunction::TextFilterSteam(int32 _FilterCategory, const FString& _SrcText, FString& _DstText, const FString& ExternalAccountId) {
    return false;
}

bool UELTextFilterUtilityFunction::TextFilterArray(const TArray<FString>& SrcText, const FOnSanitizeTextArray& OnSanitizeTextComplete, UObject* UserData, const FString& ExternalAccountId) {
    return false;
}

bool UELTextFilterUtilityFunction::TextFilter(const FString& SrcText, const FOnSanitizeText& OnSanitizeTextComplete, UObject* UserData, const FString& ExternalAccountId) {
    return false;
}


