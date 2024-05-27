#include "ELCareerStoryCardLottery.h"

AELCareerStoryCardLottery::AELCareerStoryCardLottery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AELCareerStoryCardLottery::Lottery(ECareerStoryTiming timing) {
}

int32 AELCareerStoryCardLottery::GetStoryCardRewardAForVeryShort(ECareerStoryCardRegularReward& _RewardType, int32 _Number) {
    return 0;
}

FCareerRegularRewardInfo AELCareerStoryCardLottery::GetStoryCardRegularRewardAForVeryShort(int32 _Number) {
    return FCareerRegularRewardInfo{};
}

FCareerRegularRewardInfo AELCareerStoryCardLottery::GetStoryCardRegularRewardAForMiniGame(int32 _Number) {
    return FCareerRegularRewardInfo{};
}

TArray<FCareerStoryCard> AELCareerStoryCardLottery::GetCareerStoryCardTableVeryShort() {
    return TArray<FCareerStoryCard>();
}

TArray<FCareerStoryCard> AELCareerStoryCardLottery::GetCareerStoryCardTableMiniGame() {
    return TArray<FCareerStoryCard>();
}

TArray<FCareerStoryCard> AELCareerStoryCardLottery::GetCareerStoryCardTableLong() {
    return TArray<FCareerStoryCard>();
}

TArray<FCareerStoryCard> AELCareerStoryCardLottery::GetCareerStoryCardTableDebug() {
    return TArray<FCareerStoryCard>();
}

TArray<FCareerStoryCard> AELCareerStoryCardLottery::GetCareerStoryCardTableDark() {
    return TArray<FCareerStoryCard>();
}

TArray<FCareerStoryCard> AELCareerStoryCardLottery::GetCareerStoryCardTableCommand() {
    return TArray<FCareerStoryCard>();
}

TArray<FCareerStoryCard> AELCareerStoryCardLottery::GetCareerStoryCardTable() {
    return TArray<FCareerStoryCard>();
}

void AELCareerStoryCardLottery::CombineStoryCards() {
}

void AELCareerStoryCardLottery::Add_StoryOpponent_RowData(FCareerStoryOpponent _Data) {
}

void AELCareerStoryCardLottery::Add_StoryCard_RowData_VeryShort(FCareerStoryCard _Data) {
}

void AELCareerStoryCardLottery::Add_StoryCard_RowData_MiniGame(FCareerStoryCard _Data) {
}

void AELCareerStoryCardLottery::Add_StoryCard_RowData_Long(FCareerStoryCard _Data) {
}

void AELCareerStoryCardLottery::Add_StoryCard_RowData_Debug(FCareerStoryCard _Data) {
}

void AELCareerStoryCardLottery::Add_StoryCard_RowData_Dark(FCareerStoryCard _Data) {
}

void AELCareerStoryCardLottery::Add_StoryCard_RowData_Command(FCareerStoryCard _Data) {
}

void AELCareerStoryCardLottery::Add_StoryCard_RowData(FCareerStoryCard _Data) {
}


