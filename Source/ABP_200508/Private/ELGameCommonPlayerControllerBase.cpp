#include "ELGameCommonPlayerControllerBase.h"

AELGameCommonPlayerControllerBase::AELGameCommonPlayerControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->InputKeyStateNow = yEnInputKey::None;
    this->InputKeyStatePre = yEnInputKey::None;
    this->ExecInputKeyNow = yEnInputKey::None;
    this->ExecInputKeyPre = yEnInputKey::None;
    this->RepeatCheckKey = yEnInputKey::None;
    this->LStickX = 0.00f;
    this->LStickY = 0.00f;
    this->RStickX = 0.00f;
    this->RStickY = 0.00f;
    this->LTrigger = 0.00f;
    this->RTrigger = 0.00f;
    this->MousePosX = 0.00f;
    this->MousePosY = 0.00f;
    this->IsCheckRepeat = false;
    this->CurrentRepeatSpan = 0.00f;
    this->RepeatElapsedTime = 0.00f;
    this->CheckingKeyboardMouseInputState = false;
    this->IsInputLimit = false;
}

void AELGameCommonPlayerControllerBase::SetInputParam(const FyMenuInputParam InParam) {
}

void AELGameCommonPlayerControllerBase::SetEnableSimultaneousInputByLRStick(bool _state) {
}

void AELGameCommonPlayerControllerBase::SetControllerEnabled(int32 ControllerId, int32 Enabled) {
}

bool AELGameCommonPlayerControllerBase::IsLastInputMouse() {
    return false;
}

bool AELGameCommonPlayerControllerBase::IsKeyRepeat() const {
    return false;
}

FyMenuInputParam AELGameCommonPlayerControllerBase::GetInputParam() const {
    return FyMenuInputParam{};
}

UELLocalPlayer* AELGameCommonPlayerControllerBase::GetELLocalPlayer() {
    return NULL;
}

int32 AELGameCommonPlayerControllerBase::GetControllerId() const {
    return 0;
}


