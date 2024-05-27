#include "ELSSLocator.h"

AELSSLocator::AELSSLocator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = ESSLocatorType::Default;
    this->PlayerStartType = ESSPlayerStartLocatorType::P1;
    this->PlayerStartAreaId = ESSPlayerStartLocatorAreaId::Area_A;
    this->filterId = 0;
}

int32 AELSSLocator::GetSortOrder() const {
    return 0;
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


