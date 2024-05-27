#include "ELOnlineSubsystemUtilityFunction.h"

UELOnlineSubsystemUtilityFunction::UELOnlineSubsystemUtilityFunction() {
}

bool UELOnlineSubsystemUtilityFunction::ShowStoreUI(int32 LocalControllerId, bool bAddToCart, const FString& Category, const FString& ProductID) {
    return false;
}

bool UELOnlineSubsystemUtilityFunction::ShowProfileUI(const UObject* WorldContextObject, int32 LocalControllerId, const FString& TargetUserId) {
    return false;
}

void UELOnlineSubsystemUtilityFunction::SetUsingMultiplayerFeatures(int32 LocalControllerId, bool bUsingMP) {
}


