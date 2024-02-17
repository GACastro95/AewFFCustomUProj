#include "ELSSLocatorManager.h"

TArray<AELSSLocator*> AELSSLocatorManager::GetPlayerStartLocatorList(ESSPlayerStartLocatorType StartType) const {
    return TArray<AELSSLocator*>();
}

TArray<AELSSLocator*> AELSSLocatorManager::GetLocatorListWithFiltering(ESSLocatorType InType, bool InUseFiltering, int32 inFilterID) const {
    return TArray<AELSSLocator*>();
}

TArray<AELSSLocator*> AELSSLocatorManager::GetLocatorListFromNear(ESSLocatorType InType, const FVector& inOrigin, float inDistance, int32 inMaxNum, bool InUseFiltering, int32 inFilterID) const {
    return TArray<AELSSLocator*>();
}

TArray<AELSSLocator*> AELSSLocatorManager::GetLocatorListForRespawn(ESSLocatorType InType, const FVector& inOrigin) const {
    return TArray<AELSSLocator*>();
}

AELSSLocatorManager::AELSSLocatorManager() {
}

