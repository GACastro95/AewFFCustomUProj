#include "ELOperationalWidgetBase.h"

UELOperationalWidgetBase::UELOperationalWidgetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->InputPlayerController = NULL;
    this->InputPlayerIndex = 0;
    this->CursorIndex = 0;
    this->PreCursorIndex = 0;
    this->LastCursorIndex = 0;
    this->DispCursorNum = 0;
    this->IsEnabledInput = true;
}

void UELOperationalWidgetBase::SetLastCursorIndex(int32 LastIndex) {
}

void UELOperationalWidgetBase::SetDispCursorNum(int32 CursorNum) {
}

void UELOperationalWidgetBase::SetCursorIndex(int32 Index) {
}

void UELOperationalWidgetBase::SetButtonHold(bool bHold) {
}


bool UELOperationalWidgetBase::IsControllerJustKeyRepeat() {
    return false;
}

bool UELOperationalWidgetBase::IsButtonHold() {
    return false;
}

void UELOperationalWidgetBase::EnableUpdateInputPlayerIndex() {
}

void UELOperationalWidgetBase::DisableUpdateInputPlayerIndex() {
}


