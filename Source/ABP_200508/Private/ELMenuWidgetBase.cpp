#include "ELMenuWidgetBase.h"

UELMenuWidgetBase::UELMenuWidgetBase() {
    this->MenuTop = NULL;
    this->TabIndex = 0;
    this->PreTabIndex = 0;
    this->PreTabIndex2P = 0;
    this->LastTabIndex = 0;
    this->bDecisionKeyboard = false;
}

void UELMenuWidgetBase::UpdateFromStackPrevious_Implementation() {
}

void UELMenuWidgetBase::SetMenuTop(UUserWidget* MenuTopWidget) {
}

void UELMenuWidgetBase::SetDecisionKeyboard(bool bFlag) {
}

void UELMenuWidgetBase::ResetTabCursor() {
}

void UELMenuWidgetBase::OpenMenu_Implementation() {
}







bool UELMenuWidgetBase::IsPreparedMenu_Implementation() {
    return false;
}

bool UELMenuWidgetBase::IsDecisionKeyboard() const {
    return false;
}

void UELMenuWidgetBase::CloseMenu_Implementation() {
}

void UELMenuWidgetBase::BroadcastOutAnimFinished() {
}

void UELMenuWidgetBase::BroadcastInAnimFinished() {
}

void UELMenuWidgetBase::BroadcastFinishedMenuWithResult_Integer(int32 _WidgetOperationResult) {
}

void UELMenuWidgetBase::BroadcastFinishedMenu() {
}

void UELMenuWidgetBase::BroadcastCanceledMenu() {
}


