#include "YCAM_AutoAnimPreview.h"

void AYCAM_AutoAnimPreview::Uninit_Implementation() {
}

void AYCAM_AutoAnimPreview::StrikeDistanceTestStart() {
}

void AYCAM_AutoAnimPreview::StopPreview_Implementation() {
}

void AYCAM_AutoAnimPreview::PreviewStartToArray(TArray<int32> In_SettingMenuIDs, EAutoAnimMode In_Mode) {
}

void AYCAM_AutoAnimPreview::PreviewStartAll() {
}

void AYCAM_AutoAnimPreview::PreviewStart(int32 In_SettingMenuID, EAutoAnimMode In_Mode) {
}


void AYCAM_AutoAnimPreview::Init() {
}

void AYCAM_AutoAnimPreview::ExecuteDequeMode() {
}

void AYCAM_AutoAnimPreview::DivingDistanceTestStart() {
}

void AYCAM_AutoAnimPreview::DistanceTestStart() {
}

void AYCAM_AutoAnimPreview::AllTestStart() {
}

void AYCAM_AutoAnimPreview::AddPlaySituationFromCategoryItemID(const TArray<int32>& In_CategoryItemIDs) {
}

void AYCAM_AutoAnimPreview::AddCategoryItemIDFromSettingMenuID(int32 In_SettingMenuID, TArray<int32>& Out_CategoryItemIDs) {
}

AYCAM_AutoAnimPreview::AYCAM_AutoAnimPreview() {
    this->Mode = EAutoAnimMode::None;
    this->isPlayAnim = false;
    this->isDuplicateCategory = false;
}

