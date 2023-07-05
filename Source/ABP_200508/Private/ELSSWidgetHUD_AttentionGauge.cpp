#include "ELSSWidgetHUD_AttentionGauge.h"

void UELSSWidgetHUD_AttentionGauge::UpdateAttentionValue(float InDeltaTime) {
}

void UELSSWidgetHUD_AttentionGauge::Update(float InDeltaTime) {
}

void UELSSWidgetHUD_AttentionGauge::SortToIndex(int32 InFromIndex, int32 InToIndex) {
}

void UELSSWidgetHUD_AttentionGauge::SetVisibleFeverEffect(bool inIsVisible, bool InPlayStartSE, bool InPlayEndSE) {
}

void UELSSWidgetHUD_AttentionGauge::SetAttentionPointToStack(int32 InAddValue, ESSAttentionReason InActType) {
}

void UELSSWidgetHUD_AttentionGauge::ResetAttentionGauge() {
}



void UELSSWidgetHUD_AttentionGauge::MovePointArray() {
}


FString UELSSWidgetHUD_AttentionGauge::GetBoostText(float InAttentionBoostValue) {
    return TEXT("");
}

void UELSSWidgetHUD_AttentionGauge::GetAttentionPointFromStack() {
}

void UELSSWidgetHUD_AttentionGauge::ApplyMaxAttentionValue(int32 InMaxAttentionValue) {
}

void UELSSWidgetHUD_AttentionGauge::ApplyIconAnim(ESSAttentionGaugeStateLevel inState) {
}


void UELSSWidgetHUD_AttentionGauge::ApplyAttentionValue(int32 InAttentionValue, int32 InAddValue, ESSAttentionReason InActType, bool InGaugeTransition) {
}

void UELSSWidgetHUD_AttentionGauge::ApplyAttentionPts(int32 InAttentionValue) {
}

void UELSSWidgetHUD_AttentionGauge::ApplyAttentionBoostValue(float InAttentionBoostValue) {
}

UELSSWidgetHUD_AttentionGauge::UELSSWidgetHUD_AttentionGauge() {
    this->FeverEndAnim = NULL;
    this->FeverStartAnim = NULL;
    this->FeverLoopAnim = NULL;
    this->CrowdIconLowAnim = NULL;
    this->CrowdIconMidAnim = NULL;
    this->CrowdIconHighAnim = NULL;
    this->BuffInAnim = NULL;
    this->BuffOutAnim = NULL;
    this->AttentionPtsM_1 = NULL;
    this->AttentionPtsM_10 = NULL;
    this->AttentionPtsM_100 = NULL;
    this->AttentionPtsM_1000 = NULL;
    this->MaxAttentionPtsM_1 = NULL;
    this->MaxAttentionPtsM_10 = NULL;
    this->MaxAttentionPtsM_100 = NULL;
    this->MaxAttentionPtsM_1000 = NULL;
    this->PtsVerticalBox = NULL;
    this->AttentionPts_1000Widget = NULL;
    this->AttentionPts_100Widget = NULL;
    this->AttentionPts_10Widget = NULL;
    this->MaxAttentionPts_1000Widget = NULL;
    this->MaxAttentionPts_100Widget = NULL;
    this->MaxAttentionPts_10Widget = NULL;
    this->IsCompleteDuration = true;
    this->IsFeverTime = false;
    this->IsBoostTextShow = false;
    this->AttentionElapsed = 0.00f;
    this->MaxAttentionValue = 0;
    this->AttentionDuration = 0;
    this->AttentionValue = 0;
    this->IdealAttentionValue = 0;
    this->StackIndex = 0;
}

