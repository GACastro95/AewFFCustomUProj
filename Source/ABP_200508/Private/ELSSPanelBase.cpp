#include "ELSSPanelBase.h"

void UELSSPanelBase::SetZOrderInPanel(UELSSWidgetBase* widgetBase, int32 ZOrder) {
}

void UELSSPanelBase::SetVisible_Implementation(bool inIsVisible) {
}

void UELSSPanelBase::SetupChildren(UCanvasPanel* rootCanvas) {
}

void UELSSPanelBase::OnUpdate_Implementation(float DeltaTime) {
}

void UELSSPanelBase::OnDestroy_Implementation() {
}

void UELSSPanelBase::OnCreate_Implementation(int32 ZOrder) {
}

void UELSSPanelBase::OnClosePanelNative() {
}

bool UELSSPanelBase::GetVisible_Implementation() {
    return false;
}

UELSSPanelBase::UELSSPanelBase() : UUserWidget(FObjectInitializer::Get()) {
    this->CommonLayoutWidget = NULL;
}

