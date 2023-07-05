#include "SSVehicleSpawnParamForRound.h"

FSSVehicleSpawnParamForRound::FSSVehicleSpawnParamForRound() {
    this->Round = ESSRound::Round0;
    this->LogType = ESSRoundEventLogType::None;
    this->SpawnTime = 0.00f;
    this->VehicleId = 0;
    this->SpawnNumMin = 0;
    this->SpawnNumMax = 0;
    this->SpawnProbability = 0.00f;
    this->LocatorGroup1 = ESSVehicleLocatorGroup::None;
    this->LocatorGroup2 = ESSVehicleLocatorGroup::None;
    this->LocatorGroup3 = ESSVehicleLocatorGroup::None;
}

