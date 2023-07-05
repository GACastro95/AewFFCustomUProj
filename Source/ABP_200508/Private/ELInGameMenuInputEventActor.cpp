#include "ELInGameMenuInputEventActor.h"

void AELInGameMenuInputEventActor::UnBindInputEventOtherController() {
}

void AELInGameMenuInputEventActor::UnbindInputEventAll() {
}

void AELInGameMenuInputEventActor::SetDefaultBindingControllerID() {
}

void AELInGameMenuInputEventActor::InputEvent_AnyKey(TEnumAsByte<EInputEvent> KeyEvent) {
}

void AELInGameMenuInputEventActor::InputEvent(yEnInputKey InputKey, TEnumAsByte<EInputEvent> KeyEvent, APlayerController* PlayerController) {
}

bool AELInGameMenuInputEventActor::BindInputEventOtherController() {
    return false;
}

bool AELInGameMenuInputEventActor::BindInputEventAllControllers() {
    return false;
}

bool AELInGameMenuInputEventActor::BindInputEvent(AELInGamePlayerControllerBase* PlayerController) {
    return false;
}

AELInGameMenuInputEventActor::AELInGameMenuInputEventActor() {
}

