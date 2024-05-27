#include "ELMenuPlayerControllerBase.h"
#include "ELMenuCheatManager.h"

AELMenuPlayerControllerBase::AELMenuPlayerControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CheatClass = UELMenuCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
}

void AELMenuPlayerControllerBase::RemoveActionWithMultiPadManager() {
}

void AELMenuPlayerControllerBase::BindActionWithMultiPadManager(AELCareerMultiPadManager* pPadManager) {
}


