#include "ELInGameMenuInputEventBase.h"

UELInGameMenuInputEventBase::UELInGameMenuInputEventBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UELInGameMenuInputEventBase::InputEvent_AnyKey(TEnumAsByte<EInputEvent> KeyEvent) {
}

void UELInGameMenuInputEventBase::InputEvent(yEnInputKey InputKey, TEnumAsByte<EInputEvent> KeyEvent, APlayerController* PlayerController) {
}


