#include "EOSAchievement.h"

bool UEOSAchievement::SetupInternalCallback() {
    return false;
}

void UEOSAchievement::SetAchievementApiVersion(FEOSAchievementAPIVersionSettings _stAPIVerSetting) {
}

bool UEOSAchievement::RequestUnlock(const TArray<FString>& _cAchievementIDs) {
    return false;
}

bool UEOSAchievement::RequestQueryPlayerAchievement() {
    return false;
}

bool UEOSAchievement::RequestQueryAchievementInfo() {
    return false;
}

bool UEOSAchievement::GetUnlockAchievements(FEOSUnlockAchievementInfo& _stUnlockAchievementInfo, const FString& _strAchievemtnID) {
    return false;
}

bool UEOSAchievement::GetPlayerAchievements(TArray<FEOSPlayerAchievementInfo>& _stPlayerAchievementInfos) {
    return false;
}

bool UEOSAchievement::GetAchievements(TArray<FEOSAchievementInfo>& _stAchievementInfos) {
    return false;
}

UEOSAchievement::UEOSAchievement() {
}

