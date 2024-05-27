#include "ELMatchResultMenuFlowControllerBase.h"
#include "Templates/SubclassOf.h"

AELMatchResultMenuFlowControllerBase::AELMatchResultMenuFlowControllerBase() {
}

UELMatchResultMenuBase* AELMatchResultMenuFlowControllerBase::StartExtraMenuSequence(TSubclassOf<UELMatchResultMenuBase> InMenuClass) {
    return NULL;
}

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

void AELMatchResultMenuFlowControllerBase::EndExtraMenuSequence() {
}



