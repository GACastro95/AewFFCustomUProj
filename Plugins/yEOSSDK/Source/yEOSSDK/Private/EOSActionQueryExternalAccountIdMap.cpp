#include "EOSActionQueryExternalAccountIdMap.h"

UEOSActionQueryExternalAccountIdMap::UEOSActionQueryExternalAccountIdMap() {
    this->WorldContextObject = NULL;
    this->UserManager = NULL;
    this->RequestNum = 0;
    this->bSuccess = false;
}

UEOSActionQueryExternalAccountIdMap* UEOSActionQueryExternalAccountIdMap::EOSActionQueryExternalAccountIdMap(UObject* NewWorldContextObject, UEOSUserManager* NewUserManager, const FString& NewLocalProductID, const TArray<FString>& NewTargetProductIDs) {
    return NULL;
}

void UEOSActionQueryExternalAccountIdMap::Completed() {
}

void UEOSActionQueryExternalAccountIdMap::Abort() {
}


