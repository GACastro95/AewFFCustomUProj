#include "ELInGamePlayerControllerBase.h"
#include "ELInGameCheatManager.h"

AELInGamePlayerControllerBase::AELInGamePlayerControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheatClass = UELInGameCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
}

void AELInGamePlayerControllerBase::UnbindAcceptAction() {
}


void AELInGamePlayerControllerBase::BindAcceptAction() {
}


