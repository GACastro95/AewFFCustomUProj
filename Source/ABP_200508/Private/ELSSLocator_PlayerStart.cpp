#include "ELSSLocator_PlayerStart.h"

ESSPlayerStartLocatorType AELSSLocator_PlayerStart::GetPlayerStartLocatorType() const {
    return ESSPlayerStartLocatorType::P1;
}

ESSPlayerStartLocatorAreaId AELSSLocator_PlayerStart::GetPlayerStartLocatorAreaId() const {
    return ESSPlayerStartLocatorAreaId::Area_A;
}

AELSSLocator_PlayerStart::AELSSLocator_PlayerStart() {
    this->PlayerStartLocatorId = 0;
}

