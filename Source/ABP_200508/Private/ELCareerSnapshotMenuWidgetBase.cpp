#include "ELCareerSnapshotMenuWidgetBase.h"

UELCareerSnapshotMenuWidgetBase::UELCareerSnapshotMenuWidgetBase() {
    this->DeleteMode = false;
}



void UELCareerSnapshotMenuWidgetBase::SetDeleteModeOnce() {
}

void UELCareerSnapshotMenuWidgetBase::ResetDeleteModeOnce() {
}



void UELCareerSnapshotMenuWidgetBase::MakeItems(const UDataTable* TitleDataTable, const TArray<UCareerSnapshot*> Snapshots, TMap<ECareerScenarioNo, UCareerSnapshotScenarioItem*>& OutItems) {
}

void UELCareerSnapshotMenuWidgetBase::FilterExistsSnapshot(const TArray<UCareerSnapshot*>& Snapshots, TArray<UCareerSnapshot*>& OutSnapshots) {
}





void UELCareerSnapshotMenuWidgetBase::CreateSnapshots(TArray<UCareerSnapshot*>& OutSnapshots) {
}

void UELCareerSnapshotMenuWidgetBase::CallMoveCursor(int32 AddValue, bool IsEnabledLoop) {
}


