#include "ELCreateWrestlerGameStateBase.h"
#include "CustomWrestlerAssistComponent.h"

AELCreateWrestlerGameStateBase::AELCreateWrestlerGameStateBase() {
    this->EditWrestlerCoreComponentClass = UCustomWrestlerAssistComponent::StaticClass();
    this->EditWrestlerCoreComponent = NULL;
}

