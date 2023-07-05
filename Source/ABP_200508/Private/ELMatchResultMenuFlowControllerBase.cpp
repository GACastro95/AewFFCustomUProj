#include "ELMatchResultMenuFlowControllerBase.h"
#include "Templates/SubclassOf.h"

void AELMatchResultMenuFlowControllerBase::Start() {
}

void AELMatchResultMenuFlowControllerBase::SetMenuSequence(TArray<TSubclassOf<UELMatchResultMenuBase>> InSeqeuence) {
}

void AELMatchResultMenuFlowControllerBase::SetMenuBG(TSubclassOf<UELMatchResultMenuBase> InMenuBGClass) {
}

void AELMatchResultMenuFlowControllerBase::OnOpenedDisconnectedDialog() {
}

void AELMatchResultMenuFlowControllerBase::OnClosedDisconnectedDialog() {
}

UELMatchResultMenuBase* AELMatchResultMenuFlowControllerBase::GetCurrentMenu() {
    return NULL;
}


AELMatchResultMenuFlowControllerBase::AELMatchResultMenuFlowControllerBase() {
}

