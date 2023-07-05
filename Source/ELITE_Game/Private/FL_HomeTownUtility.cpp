#include "FL_HomeTownUtility.h"

FText UFL_HomeTownUtility::GetHomeTownText(const FHomeTownID& HomeTownID, const bool bUpper, const bool bCountry, const bool bState, const bool bCity) {
    return FText::GetEmpty();
}

void UFL_HomeTownUtility::GetHomeTownKey(const FHomeTownID& HomeTownID, FName& Out) {
}

void UFL_HomeTownUtility::GetHomeTownByID(const FHomeTownID& HomeTownID, FHomeTown& Out) {
}

void UFL_HomeTownUtility::BreakHomeTownID(const FHomeTownID& HomeTownID, int32& OutCountry, int32& OutState, int32& OutCity) {
}

UFL_HomeTownUtility::UFL_HomeTownUtility() {
}

