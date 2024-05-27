#include "CareerSnapshotTitleItem.h"

UCareerSnapshotTitleItem::UCareerSnapshotTitleItem() {
}

void UCareerSnapshotTitleItem::RemoveSnapshot(UCareerSnapshot* Snapshot) {
}

void UCareerSnapshotTitleItem::Init(const FSnapshotTitle& NewTitle) {
}

FText UCareerSnapshotTitleItem::GetWeekText() const {
    return FText::GetEmpty();
}

FText UCareerSnapshotTitleItem::GetTitleText() const {
    return FText::GetEmpty();
}

TArray<UCareerSnapshot*> UCareerSnapshotTitleItem::GetSnapshots() const {
    return TArray<UCareerSnapshot*>();
}

int32 UCareerSnapshotTitleItem::GetSnapshotNum() const {
    return 0;
}

UCareerSnapshot* UCareerSnapshotTitleItem::GetRecentSnapshot() const {
    return NULL;
}

void UCareerSnapshotTitleItem::CollectSnapshots(TArray<UCareerSnapshot*>& Snapshots) {
}


