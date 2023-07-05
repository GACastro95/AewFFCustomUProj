#include "ELSSDebugUtility.h"

void UELSSDebugUtility::SSDebugLog_LocalNetworkVersion() {
}

void UELSSDebugUtility::SSDebugAutoPlay_PressMenuDecision(const UObject* WorldContextObject) {
}

void UELSSDebugUtility::SetupSSDebugStreathCheckSettings(const UObject* WorldContextObject, ESSDebugStreathCheck InType) {
}

void UELSSDebugUtility::SetSSReservedPlayerDebugFlag(const UObject* WorldContextObject, ESSPlayerDebugFlag FlagType, bool IsOn) {
}

void UELSSDebugUtility::SetSSReservedGameStateDebugFlag(const UObject* WorldContextObject, ESSGameStateDebugFlag FlagType, bool IsOn) {
}

void UELSSDebugUtility::SetSSLocalDebugFlag(const UObject* WorldContextObject, ESSLocalDebugFlag FlagType, bool IsOn) {
}

void UELSSDebugUtility::SetSSDebugStringOnScreen(const UObject* WorldContextObject, const FString& inString, ESSDebugStringCategory inCategory) {
}

void UELSSDebugUtility::SetSSDebugSinglePlayFixedSeconds(const UObject* WorldContextObject, int32 InSeconds) {
}

void UELSSDebugUtility::SetSSDebugOverrideUserId(const UObject* WorldContextObject, const FString& inUserId) {
}

void UELSSDebugUtility::SetSSDebugMatchMakeGroupId(const UObject* WorldContextObject, int32 inGroupId) {
}

void UELSSDebugUtility::SetSSDebugLowQuarity(const UObject* WorldContextObject) {
}

void UELSSDebugUtility::SetSSDebugInfo_Version(const UObject* WorldContextObject, bool IsOn) {
}

void UELSSDebugUtility::SetSSDebugInfo_Region(const UObject* WorldContextObject, bool IsOn, const FString& inRegionName) {
}

void UELSSDebugUtility::SetSSDebugInfo_DebugStatus(const UObject* WorldContextObject, bool IsOn) {
}

void UELSSDebugUtility::SetSSDebugInfo_AppliedPenalty(const UObject* WorldContextObject, const FYGS2SSPlayerData& inNewParam, const FYGS2SSPlayerData& inOldParam, bool isCheat) {
}

void UELSSDebugUtility::SetSSDebugAutoEquipWeapon(const UObject* WorldContextObject, bool IsOn, int32 inDatabaseId) {
}

void UELSSDebugUtility::RemoveSSDebugStringOnScreen(const UObject* WorldContextObject, ESSDebugStringCategory inCategory) {
}

void UELSSDebugUtility::RemoveAllSSDebugStringOnScreen(const UObject* WorldContextObject) {
}

void UELSSDebugUtility::RefreshSSDebugStringOnScreen(const UObject* WorldContextObject) {
}

bool UELSSDebugUtility::IsSSDebugPlayStartAssemble(const UObject* WorldContextObject) {
    return false;
}

bool UELSSDebugUtility::IsSSDebugPlayAutoAttack(const UObject* WorldContextObject) {
    return false;
}

bool UELSSDebugUtility::IsSSDebugOverrideServerParam(const UObject* WorldContextObject) {
    return false;
}

bool UELSSDebugUtility::IsSSDebugAIOnlyMode(const UObject* WorldContextObject) {
    return false;
}

bool UELSSDebugUtility::HasSSReservedPlayerDebugFlag(const UObject* WorldContextObject, ESSPlayerDebugFlag FlagType) {
    return false;
}

bool UELSSDebugUtility::HasSSReservedGameStateDebugFlag(const UObject* WorldContextObject, ESSGameStateDebugFlag FlagType) {
    return false;
}

bool UELSSDebugUtility::HasSSLocalDebugFlag(const UObject* WorldContextObject, ESSLocalDebugFlag FlagType) {
    return false;
}

int32 UELSSDebugUtility::GetSSDebugSinglePlayFixedSeconds(const UObject* WorldContextObject) {
    return 0;
}

int32 UELSSDebugUtility::GetSSDebugPlayNumberOfClients() {
    return 0;
}

bool UELSSDebugUtility::GetSSDebugOverrideYGS2URLForDataLoading(const UObject* WorldContextObject, FString& outYGS2URL) {
    return false;
}

bool UELSSDebugUtility::GetSSDebugOverrideUserId(const UObject* WorldContextObject, FString& outUserId) {
    return false;
}

bool UELSSDebugUtility::GetSSDebugOverrideServerParam(const UObject* WorldContextObject, FSSModeServerParam& outServerInfo) {
    return false;
}

bool UELSSDebugUtility::GetSSDebugOverrideServerEndpoint(const UObject* WorldContextObject, FSSServerEndpoint& outEndpointInfo) {
    return false;
}

int32 UELSSDebugUtility::GetSSDebugOverrideMasterDataVersion(const UObject* WorldContextObject) {
    return 0;
}

int32 UELSSDebugUtility::GetSSDebugMatchMakeGroupSinglePlayOffset(const UObject* WorldContextObject) {
    return 0;
}

int32 UELSSDebugUtility::GetSSDebugMatchMakeGroupId(const UObject* WorldContextObject, bool inAddSinglePlayOffset) {
    return 0;
}

bool UELSSDebugUtility::GetSSDebugAutoEquipWeapon(const UObject* WorldContextObject, int32& outDatabaseId) {
    return false;
}

bool UELSSDebugUtility::GetSSDebugAIEditWrestlerNum(const UObject* WorldContextObject, int32& outEditWrestlerNum) {
    return false;
}

void UELSSDebugUtility::ClearSSDebugStringOnScreen(const UObject* WorldContextObject, ESSDebugStringCategory inCategory) {
}

void UELSSDebugUtility::ApplySSDebugDisableWorldRendering(const UObject* WorldContextObject) {
}

UELSSDebugUtility::UELSSDebugUtility() {
}

