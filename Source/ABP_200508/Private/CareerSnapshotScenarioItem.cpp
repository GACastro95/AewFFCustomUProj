#include "CareerSnapshotScenarioItem.h"

UCareerSnapshotScenarioItem::UCareerSnapshotScenarioItem() {
}

void UCareerSnapshotScenarioItem::RemoveSnapshot(UCareerSnapshot* Snapshot) {
}

void UCareerSnapshotScenarioItem::Init(ECareerScenarioNo No) {
}

int32 UCareerSnapshotScenarioItem::GetUnlockedTitlesNum() const {
    return 0;
}

int32 UCareerSnapshotScenarioItem::GetTitlesNum() const {
    return 0;
}

void UCareerSnapshotScenarioItem::GetTitleItems(TArray<UCareerSnapshotTitleItem*>& OutTitleItems) const {
}

int32 UCareerSnapshotScenarioItem::GetSnapshotsNum() const {
    return 0;
}

FText UCareerSnapshotScenarioItem::GetScenarioText() const {
    return FText::GetEmpty();
}

ECareerScenarioNo UCareerSnapshotScenarioItem::GetScenarioNo() const {
    return ECareerScenarioNo::None;
}

UCareerSnapshot* UCareerSnapshotScenarioItem::GetRecentSnapshot() const {
    return NULL;
}

void UCareerSnapshotScenarioItem::ConstractTitles(const UDataTable* TitleDataTable) {
}

void UCareerSnapshotScenarioItem::CollectSnapshots(const TArray<UCareerSnapshot*>& Snapshots) {
}


