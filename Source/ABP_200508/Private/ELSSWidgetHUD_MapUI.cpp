#include "ELSSWidgetHUD_MapUI.h"

FVector2D UELSSWidgetHUD_MapUI::WorldLocationToUI(const FVector& InWorldLocation) {
    return FVector2D{};
}

void UELSSWidgetHUD_MapUI::UpdateStormZone() {
}

void UELSSWidgetHUD_MapUI::UpdatePlayer() {
}

void UELSSWidgetHUD_MapUI::UpdateMiniMap() {
}

void UELSSWidgetHUD_MapUI::UpdateItemBox() {
}

void UELSSWidgetHUD_MapUI::UpdateHorseSaddle() {
}

void UELSSWidgetHUD_MapUI::UpdateEnemy() {
}

void UELSSWidgetHUD_MapUI::UpdateCarrotMedal() {
}

void UELSSWidgetHUD_MapUI::UpdateAnnounceStorm() {
}

void UELSSWidgetHUD_MapUI::UpdateAnnounceGuide() {
}

void UELSSWidgetHUD_MapUI::Update() {
}

void UELSSWidgetHUD_MapUI::SwitchMapMode(bool InIsWholeMapMode) {
}

void UELSSWidgetHUD_MapUI::ShowOffIcons() {
}

void UELSSWidgetHUD_MapUI::SetVisibleOperationButton(bool InIsShow) {
}

void UELSSWidgetHUD_MapUI::SetVisibleAnnounceStormAndGuide(bool InIsShow) {
}

void UELSSWidgetHUD_MapUI::SetStormActor(AELSSStorm* InStormActor) {
}

void UELSSWidgetHUD_MapUI::SetMinimapTexture(int32 InMinimapID) {
}


bool UELSSWidgetHUD_MapUI::IsUsingItemBoxSearchAbility() {
    return false;
}

bool UELSSWidgetHUD_MapUI::IsUsingEnemySearchAbility() {
    return false;
}

bool UELSSWidgetHUD_MapUI::IsTreasureBox(ESSItemBoxType InType) {
    return false;
}


float UELSSWidgetHUD_MapUI::GetItemBoxVisibleDistance() {
    return 0.0f;
}

int32 UELSSWidgetHUD_MapUI::GetFloor(float InZpos) {
    return 0;
}

float UELSSWidgetHUD_MapUI::GetEnemyVisibleDistance() {
    return 0.0f;
}

float UELSSWidgetHUD_MapUI::GetCanvasScale() {
    return 0.0f;
}


void UELSSWidgetHUD_MapUI::ChangeMapMode(bool InIsWholeMapMode) {
}

void UELSSWidgetHUD_MapUI::ApplyWatchGameMode() {
}

void UELSSWidgetHUD_MapUI::ApplyKOCount(int32 InKOCount) {
}

void UELSSWidgetHUD_MapUI::ApplyAreaShrinkTime(float InSecond) {
}

void UELSSWidgetHUD_MapUI::ApplyAliveCount(int32 InAliveCount) {
}

UELSSWidgetHUD_MapUI::UELSSWidgetHUD_MapUI() {
    this->PlayerFloor = 0;
    this->MiniMapTypeIndex = 0;
    this->DefaultMinimapId = 10000;
    this->MapCanvasSize = 0.00f;
    this->IsWholeMap = false;
    this->IsDoneInit = false;
    this->IsSearchAbilityUsing = false;
    this->IsWatchGameMode = false;
    this->MapCanvas = NULL;
    this->MiniMapCashed = NULL;
    this->MapOperationButton = NULL;
    this->CarrotMedal01Widgets = NULL;
    this->CarrotMedal02Widgets = NULL;
    this->ItemManager = NULL;
    this->MapImage = NULL;
    this->PlayerIcon = NULL;
    this->PlayerSight = NULL;
    this->StormGuide = NULL;
    this->StormZone = NULL;
    this->AnnounceStorm = NULL;
    this->MiniMapFrameWidget = NULL;
    this->PlayerActor = NULL;
    this->PlayerController = NULL;
    this->StormActor = NULL;
    this->MiniMapZoom = NULL;
    this->MiniMapInfo = NULL;
    this->MapTypeDataTable = NULL;
    this->TextureMaterial = NULL;
}

