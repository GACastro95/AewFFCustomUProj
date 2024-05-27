#include "EOSActionQueryExternalAccountId.h"

UEOSActionQueryExternalAccountId::UEOSActionQueryExternalAccountId() {
    this->WorldContextObject = NULL;
    this->UserManager = NULL;
    this->AccountType = EExternalAccountType::Unknown;
}

UEOSActionQueryExternalAccountId* UEOSActionQueryExternalAccountId::EOSActionQueryExternalAccountId(UObject* NewWorldContextObject, UEOSUserManager* NewUserManager, const FString& NewLocalProductID, const FString& NewTargetProductID, EExternalAccountType NewAccountType) {
    return NULL;
}

void UEOSActionQueryExternalAccountId::Abort() {
}


