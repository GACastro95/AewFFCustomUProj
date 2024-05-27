#include "ELSSLocator_Vehicle.h"

AELSSLocator_Vehicle::AELSSLocator_Vehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LocatorGroup = ESSVehicleLocatorGroup::All;
    this->SpawnedVehicle = NULL;
}


