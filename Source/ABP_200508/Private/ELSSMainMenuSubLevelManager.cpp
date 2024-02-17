#include "ELSSMainMenuSubLevelManager.h"


void AELSSMainMenuSubLevelManager::MakeRequestData(ESSMainMenuSubLevelSituation inSituation) {
}


void AELSSMainMenuSubLevelManager::InitializeSubLevelInfos() {
}

bool AELSSMainMenuSubLevelManager::GetSubLevelParam(ESSMainMenuSubLevel InType, FSSMainMenuSubLevelParam& OutParam) const {
    return false;
}

bool AELSSMainMenuSubLevelManager::GetSituationParam(ESSMainMenuSubLevelSituation inSituation, FSSMainMenuSubLevelSituationParam& OutParam) const {
    return false;
}

ESSMainMenuSubLevelSituation AELSSMainMenuSubLevelManager::GetCurrentSituation() const {
    return ESSMainMenuSubLevelSituation::None;
}

void AELSSMainMenuSubLevelManager::EmptyAllRequests() {
}

void AELSSMainMenuSubLevelManager::CancelAllRequests() {
}

AELSSMainMenuSubLevelManager::AELSSMainMenuSubLevelManager() {
    this->MainMenuSubLevelParamTable = NULL;
    this->SituationParamTable_Default = NULL;
    this->SituationParamTable_Swith = NULL;
    this->MainMenuSubLevelSituationParamTable = NULL;
    this->CurrentSituation = ESSMainMenuSubLevelSituation::None;
    this->ReservedMenuWrestlersVisibility = false;
}

