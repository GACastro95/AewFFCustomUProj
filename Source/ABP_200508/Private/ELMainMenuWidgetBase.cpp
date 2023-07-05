#include "ELMainMenuWidgetBase.h"

void UELMainMenuWidgetBase::SetEnableHoldOkPerController(int32 ControllerId, bool bEnable) {
}

void UELMainMenuWidgetBase::SetEnableHoldOkAllController(bool bEnable) {
}

void UELMainMenuWidgetBase::SetEnableHoldOk(bool bEnable) {
}

void UELMainMenuWidgetBase::SetBlockInputController(int32 ControllerId, bool bBlock) {
}









































void UELMainMenuWidgetBase::OnEndNative() {
}

void UELMainMenuWidgetBase::MouseStartHoldOk() {
}

bool UELMainMenuWidgetBase::IsLastInputKeyByKeyboardMouse(APlayerController* _playerController) {
    return false;
}

bool UELMainMenuWidgetBase::IsEnableHoldOkPerController(int32 ControllerId) {
    return false;
}

bool UELMainMenuWidgetBase::IsEnableHoldOk() {
    return false;
}

bool UELMainMenuWidgetBase::IsBlockInputController(int32 ControllerId) {
    return false;
}

float UELMainMenuWidgetBase::GetOkHoldTime() {
    return 0.0f;
}

void UELMainMenuWidgetBase::GetLastInputKeyboardKeyInfo(int32 _controllerId, bool& _findKey, EKeyMappingType& _Result) {
}

void UELMainMenuWidgetBase::GetLastInputGamepadKeyInfo(int32 _controllerId, bool& _findKey, EKeyMappingType& _Result) {
}

int32 UELMainMenuWidgetBase::GetHoldOkControllerId() {
    return 0;
}

void UELMainMenuWidgetBase::CancelHoldOk() {
}

void UELMainMenuWidgetBase::CalcListCursorUp(int32 Current, int32 Size, bool IsRepeat, int32& Next, bool& bMoved) {
}

void UELMainMenuWidgetBase::CalcListCursorDown(int32 Current, int32 Size, bool IsRepeat, int32& Next, bool& bMoved) {
}

void UELMainMenuWidgetBase::CalcListCursor(int32 Current, int32 ChangeNum, int32 Size, bool IsRepeat, int32& Next, bool& bMoved) {
}

void UELMainMenuWidgetBase::CalcGridCursorUp(int32 Current, int32 Size, int32 Width, bool IsRepeat, int32& Next, bool& bMoved) {
}

void UELMainMenuWidgetBase::CalcGridCursorRight(int32 Current, int32 Size, int32 Width, bool IsRepeat, int32& Next, bool& bMoved) {
}

void UELMainMenuWidgetBase::CalcGridCursorLeft(int32 Current, int32 Size, int32 Width, bool IsRepeat, int32& Next, bool& bMoved) {
}

void UELMainMenuWidgetBase::CalcGridCursorDown(int32 Current, int32 Size, int32 Width, bool IsRepeat, int32& Next, bool& bMoved) {
}

void UELMainMenuWidgetBase::CalcGridCursor(int32 Current, int32 ChangeXNum, int32 ChangeYNum, int32 Size, int32 Width, bool IsRepeat, int32& Next, bool& bMoved) {
}

UELMainMenuWidgetBase::UELMainMenuWidgetBase() {
}

