#include "ELSSUIManagerBase.h"
#include "Templates/SubclassOf.h"

AELSSUIManagerBase::AELSSUIManagerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerController = NULL;
}

void AELSSUIManagerBase::Unload(UELSSUIManagerHandle* Handle) {
}

void AELSSUIManagerBase::SetPlayerController(APlayerController* Controller) {
}




UELSSUIManagerHandle* AELSSUIManagerBase::LoadAsync(TSoftClassPtr<UELSSPanelBase> WidgetClass) {
    return NULL;
}

bool AELSSUIManagerBase::IsLoadComplete(UELSSUIManagerHandle* Handle) {
    return false;
}

void AELSSUIManagerBase::Initialize() {
}

void AELSSUIManagerBase::Finalize() {
}

void AELSSUIManagerBase::DumpHandleInfo(int32 Index) {
}

void AELSSUIManagerBase::Dump() {
}

UELSSPanelBase* AELSSUIManagerBase::CreateImmediate(UObject* WorldContextObject, TSubclassOf<UELSSPanelBase> WidgetClass, int32 ZOrder) {
    return NULL;
}

UELSSPanelBase* AELSSUIManagerBase::CreateFromUI(UObject* WorldContextObject, TSoftClassPtr<UELSSPanelBase> basePanel, int32 ZOrder) {
    return NULL;
}

UELSSPanelBase* AELSSUIManagerBase::CreateFromHandle(UObject* WorldContextObject, UELSSUIManagerHandle* Handle, int32 ZOrder) {
    return NULL;
}


bool AELSSUIManagerBase::Check(UELSSUIManagerHandle* lhs, UELSSUIManagerHandle* rhs) {
    return false;
}


