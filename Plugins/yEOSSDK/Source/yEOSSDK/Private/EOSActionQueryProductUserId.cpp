#include "EOSActionQueryProductUserId.h"

UEOSActionQueryProductUserId::UEOSActionQueryProductUserId() {
    this->WorldContextObject = NULL;
    this->UserManager = NULL;
    this->AccountType = EExternalAccountType::Unknown;
    this->RequestNum = 0;
    this->bSuccess = false;
}

UEOSActionQueryProductUserId* UEOSActionQueryProductUserId::EOSActionQueryProductUserId(UObject* NewWorldContextObject, UEOSUserManager* NewUserManager, const FString& NewLocalProductID, const TArray<FString>& NewTargetAccountIDs, EExternalAccountType NewAccountType) {
    return NULL;
}

void UEOSActionQueryProductUserId::Completed() {
}

void UEOSActionQueryProductUserId::Abort() {
}


