#include "ELCreateWrestlerGameStateBase.h"
#include "CustomWrestlerAssistComponent.h"

AELCreateWrestlerGameStateBase::AELCreateWrestlerGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EditWrestlerCoreComponentClass = UCustomWrestlerAssistComponent::StaticClass();
    this->EditWrestlerCoreComponent = NULL;
}


