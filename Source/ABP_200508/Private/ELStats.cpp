#include "ELStats.h"

void UELStats::SetYGS2Manager(UELYGS2Manager* InManager) {
}

bool UELStats::SetUserId(const FString& UserId, EPlatformType Platform) {
    return false;
}

bool UELStats::SetStats(const FString& Name, int32 Value, bool bIngestEOS) {
    return false;
}

void UELStats::SetSeason(int32 Season) {
}

void UELStats::SetEOSStats(UEOSStats* InEOSStats) {
}

void UELStats::SetDisconnectionFlag() {
}

bool UELStats::RequestQueryYGS2StatsGroup(const FString& GroupName) {
    return false;
}

bool UELStats::RequestQueryStatsFromSaveData() {
    return false;
}

bool UELStats::RequestQueryStats() {
    return false;
}

void UELStats::OnYGS2ResponseQuery(EYGS2ErrorType ErrorType, UYGS2RequestBase* Request) {
}

void UELStats::OnYGS2ResponseIngest(EYGS2ErrorType ErrorType, UYGS2RequestBase* Request) {
}

void UELStats::OnQueryStatsCompleted(EEOSStatsEvent EOSStatsEvent, const FString& UserId, const TArray<FEOSStatData>& Stats) {
}

void UELStats::OnQueryFirstStatsCompleted(EEOSStatsEvent EOSStatsEvent, const FString& UserId, const TArray<FEOSStatData>& Stats) {
}

bool UELStats::MinStats(const FString& Name, int32 Value, bool bIngestEOS) {
    return false;
}

bool UELStats::MaxStats(const FString& Name, int32 Value, bool bIngestEOS) {
    return false;
}

bool UELStats::IsFirstQueryCompleted() const {
    return false;
}

int32 UELStats::IngestYGS2StatsGroup(const FString& GroupName) {
    return 0;
}

bool UELStats::IngestEOSStats(const FString& Name, bool bNow) {
    return false;
}

bool UELStats::IngestDisconnectionStats() {
    return false;
}

int32 UELStats::IngestDirtyYGS2Stats() {
    return 0;
}

int32 UELStats::IngestDirtyStats() {
    return 0;
}

int32 UELStats::IngestDirtyEOSStats() {
    return 0;
}

int32 UELStats::GetStats(const FString& Name) const {
    return 0;
}

void UELStats::GetStatDataCache(TArray<FELStatDataCache>& Data) {
}

bool UELStats::ClearStats(const FString& Name) {
    return false;
}

void UELStats::ClearDisconnectionCount() {
}

void UELStats::ClearCache() {
}

bool UELStats::AddStats(const FString& Name, int32 Value, bool bIngestEOS) {
    return false;
}

void UELStats::AddRankMatchSeasonCountStats() {
}

bool UELStats::AddAndSetStats(const FString& Name, int32 Value, bool bIngestEOS) {
    return false;
}

UELStats::UELStats() {
    this->EOSStats = NULL;
    this->YGS2Manager = NULL;
    this->bDirtySave = false;
    this->bDirtyEOS = false;
    this->bFirstQueryCompleted = false;
    this->YGSStatsGroups.AddDefaulted(22);
    this->RankMatchSeason = 0;
}

