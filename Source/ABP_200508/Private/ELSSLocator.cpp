#include "ELSSLocator.h"

int32 AELSSLocator::GetSortOrder() const {
    return 0;
}

ESSPlayerStartLocatorType AELSSLocator::GetPlayerStartLocatorType() const {
    return ESSPlayerStartLocatorType::P1;
}

ESSPlayerStartLocatorAreaId AELSSLocator::GetPlayerStartLocatorAreaId() const {
    return ESSPlayerStartLocatorAreaId::Area_A;
}

ESSLocatorType AELSSLocator::GetLocatorType() const {
    return ESSLocatorType::Default;
}

int32 AELSSLocator::GetFilterID() const {
    return 0;
}

FRotator AELSSLocator::GetActorRotationYawOnly() const {
    return FRotator{};
}

AELSSLocator::AELSSLocator() {
    this->Type = ESSLocatorType::Default;
    this->PlayerStartType = ESSPlayerStartLocatorType::P1;
    this->PlayerStartAreaId = ESSPlayerStartLocatorAreaId::Area_A;
    this->FilterID = 0;
}

