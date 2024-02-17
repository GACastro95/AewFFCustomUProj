#include "SSItemBoxSpawnParamForRound.h"

FSSItemBoxSpawnParamForRound::FSSItemBoxSpawnParamForRound() {
    this->DataGroup = 0;
    this->Round = ESSRound::Round0;
    this->LogType = ESSRoundEventLogType::None;
    this->SpawnTime = 0.00f;
    this->ItemBoxType = ESSItemBoxType::None;
    this->SpawnNumMin = 0;
    this->SpawnNumMax = 0;
    this->SpawnProbability = 0.00f;
    this->LocatorGroup1 = ESSItemBoxLocatorGroup::None;
    this->LocatorGroup2 = ESSItemBoxLocatorGroup::None;
    this->LocatorGroup3 = ESSItemBoxLocatorGroup::None;
    this->Condition = ESSLocatorFilterCondition::None;
}

