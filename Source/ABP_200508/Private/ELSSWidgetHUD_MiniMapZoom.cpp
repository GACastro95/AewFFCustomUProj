#include "ELSSWidgetHUD_MiniMapZoom.h"

FVector2D UELSSWidgetHUD_MiniMapZoom::WorldPosToCanvasPos(const FVector& InWorldPos) {
    return FVector2D{};
}

void UELSSWidgetHUD_MiniMapZoom::UpdateTeamTreasureBox() {
}

void UELSSWidgetHUD_MiniMapZoom::UpdateStormZone() {
}

void UELSSWidgetHUD_MiniMapZoom::UpdatePlayer() {
}

void UELSSWidgetHUD_MiniMapZoom::UpdateItemBoxAndTreasureBox() {
}

void UELSSWidgetHUD_MiniMapZoom::UpdateHorseSaddle() {
}

void UELSSWidgetHUD_MiniMapZoom::UpdateFGFGoal() {
}

void UELSSWidgetHUD_MiniMapZoom::UpdateFGFBall() {
}

void UELSSWidgetHUD_MiniMapZoom::UpdateEnemy() {
}

void UELSSWidgetHUD_MiniMapZoom::UpdateCarrotMedal() {
}

void UELSSWidgetHUD_MiniMapZoom::UpdateBlackDiamond() {
}

void UELSSWidgetHUD_MiniMapZoom::UpdateAnnounceStorm() {
}

void UELSSWidgetHUD_MiniMapZoom::UpdateAnnounceGuide() {
}

void UELSSWidgetHUD_MiniMapZoom::UpdateAlly() {
}

void UELSSWidgetHUD_MiniMapZoom::Update() {
}

void UELSSWidgetHUD_MiniMapZoom::ShowOffIcons() {
}

void UELSSWidgetHUD_MiniMapZoom::SetVisibleOperationButton(bool inIsVisible) {
}

void UELSSWidgetHUD_MiniMapZoom::SetVisibleAnnounceStormAndGuide(bool InIsShow) {
}

void UELSSWidgetHUD_MiniMapZoom::SetStormActor(AELSSStorm* InStormActor) {
}

void UELSSWidgetHUD_MiniMapZoom::SetPlayerActor(AActor* inPlayerActor) {
}

void UELSSWidgetHUD_MiniMapZoom::SetMinimapTexture(int32 InMinimapID) {
}


void UELSSWidgetHUD_MiniMapZoom::SetAreaShrinkTime(float InSecond) {
}

void UELSSWidgetHUD_MiniMapZoom::PlayOut() {
}

void UELSSWidgetHUD_MiniMapZoom::PlayIn() {
}

bool UELSSWidgetHUD_MiniMapZoom::IsUsingItemBoxSearchAbility() {
    return false;
}

bool UELSSWidgetHUD_MiniMapZoom::IsUsingEnemySearchAbility() {
    return false;
}

bool UELSSWidgetHUD_MiniMapZoom::IsTreasureBox(ESSItemBoxType InType) {
    return false;
}


float UELSSWidgetHUD_MiniMapZoom::GetItemBoxVisibleDistance() {
    return 0.0f;
}

int32 UELSSWidgetHUD_MiniMapZoom::GetFloor(float InZpos) {
    return 0;
}

float UELSSWidgetHUD_MiniMapZoom::GetEnemyVisibleDistance() {
    return 0.0f;
}

float UELSSWidgetHUD_MiniMapZoom::GetCanvasScale() {
    return 0.0f;
}


FVector2D UELSSWidgetHUD_MiniMapZoom::CanvasPosToMaterialPos(const FVector2D& InCanvasPos) {
    return FVector2D{};
}

void UELSSWidgetHUD_MiniMapZoom::ApplyWatchGameMode() {
}

void UELSSWidgetHUD_MiniMapZoom::ApplyKOCount(int32 InKOCount) {
}

void UELSSWidgetHUD_MiniMapZoom::ApplyAreaShrinkTime(float InSecond) {
}

void UELSSWidgetHUD_MiniMapZoom::ApplyAliveCount(int32 InAliveCount) {
}

UELSSWidgetHUD_MiniMapZoom::UELSSWidgetHUD_MiniMapZoom() {
    this->SSPlayerController = NULL;
    this->KOMaterial_10 = NULL;
    this->KOMaterial_01 = NULL;
    this->AliveMaterial_10 = NULL;
    this->AliveMaterial_01 = NULL;
    this->ShrinkTimeMinMaterial_10 = NULL;
    this->ShrinkTimeMinMaterial_01 = NULL;
    this->ShrinkTimeSecMaterial_10 = NULL;
    this->ShrinkTimeSecMaterial_01 = NULL;
    this->PlayInAnim = NULL;
    this->PlayOutAnim = NULL;
    this->ShrinkTimeWidget = NULL;
    this->KO10Widget = NULL;
    this->Alive10Widget = NULL;
    this->OperationButtonWidget = NULL;
    this->StormGuide = NULL;
    this->StormZone = NULL;
    this->AnnounceStorm = NULL;
    this->PlayerIcon = NULL;
    this->MapCanvas = NULL;
    this->MiniMapImage = NULL;
    this->CarrotMedal01Widgets = NULL;
    this->CarrotMedal02Widgets = NULL;
    this->ItemManager = NULL;
    this->FgfManager = NULL;
    this->PlayerActor = NULL;
    this->StormActor = NULL;
    this->IsDoneInit = false;
    this->IsShowShrinkTime = false;
    this->IsSearchAbilityUsing = false;
    this->IsWatchGameMode = false;
    this->PlayerFloor = 0;
    this->MiniMapTypeIndex = 0;
    this->Minutes = 0;
    this->Seconds = 0;
    this->RuleType = ESSRuleType::BattleRoyale;
    this->BlackDiamondIcon01Widget = NULL;
    this->BlackDiamondIcon02Widget = NULL;
    this->TeamTreasureBoxIcon01Widget = NULL;
    this->TeamTreasureBoxIcon02Widget = NULL;
    this->FGFBallIcon01Widget = NULL;
    this->FGFBallIcon02Widget = NULL;
    this->FGFOpponentBallIcon01Widget = NULL;
    this->FGFOpponentBallIcon02Widget = NULL;
}

