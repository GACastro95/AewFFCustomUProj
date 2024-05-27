#include "ELSSLocator_PlayerStart.h"

AELSSLocator_PlayerStart::AELSSLocator_PlayerStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerStartLocatorId = 0;
}

ESSPlayerStartLocatorType AELSSLocator_PlayerStart::GetPlayerStartLocatorType() const {
    return ESSPlayerStartLocatorType::P1;
}

ESSPlayerStartLocatorAreaId AELSSLocator_PlayerStart::GetPlayerStartLocatorAreaId() const {
    return ESSPlayerStartLocatorAreaId::Area_A;
}


