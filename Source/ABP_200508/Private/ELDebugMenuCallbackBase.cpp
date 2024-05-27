#include "ELDebugMenuCallbackBase.h"

UELDebugMenuCallbackBase::UELDebugMenuCallbackBase() {
}


void UELDebugMenuCallbackBase::RequestExit() {
}

void UELDebugMenuCallbackBase::ReleaseCallbackInstance() {
}





void UELDebugMenuCallbackBase::Initialize_Implementation(UGameInstance* GameInstance, UELDebugMenuRootBase* IngameDebugMenu, UELDebugMenuManager* DebugMenuManager) {
}

UWorld* UELDebugMenuCallbackBase::GetWorldForBP() const {
    return NULL;
}

bool UELDebugMenuCallbackBase::CreateELDebugMenuCallbackInstance(UELDebugMenuCallbackBase*& Instance, const FString& BPPath) {
    return false;
}

void UELDebugMenuCallbackBase::BindUIValueChanged() {
}

void UELDebugMenuCallbackBase::BindSetupUI() {
}

void UELDebugMenuCallbackBase::BindResetUI() {
}

void UELDebugMenuCallbackBase::BindClickUI() {
}


