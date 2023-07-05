#include "EOSStats.h"

void UEOSStats::SetApiVersion(FEOSStatsAPIVersionSettings _stAPIVerSetting) {
}

bool UEOSStats::RequestQueryTargetStats(const FString& _strProductID, const FEOSQueryStatOption& _stQueryStatOption) {
    return false;
}

bool UEOSStats::RequestQueryStats(const FEOSQueryStatOption& _stQueryStatOption) {
    return false;
}

bool UEOSStats::RequestIngestStats(const TArray<FEOSIngestStatParam>& _cIngestStatParams) {
    return false;
}

bool UEOSStats::RequestIngestStat(const FString& _strStatName, int32 _sAmount) {
    return false;
}

int32 UEOSStats::GetTargetStatsCount(const FString& _strProductID) {
    return 0;
}

bool UEOSStats::GetTargetStatByName(const FString& _strProductID, FEOSStatData& _stStatData, const FString& _strStatName) {
    return false;
}

bool UEOSStats::GetTargetStat(const FString& _strProductID, FEOSStatData& _stStatData, int32 _sIndex) {
    return false;
}

int32 UEOSStats::GetStatsCount() {
    return 0;
}

bool UEOSStats::GetStatByName(FEOSStatData& _stStatData, const FString& _strStatName) {
    return false;
}

bool UEOSStats::GetStat(FEOSStatData& _stStatData, int32 _sIndex) {
    return false;
}

UEOSStats::UEOSStats() {
}

