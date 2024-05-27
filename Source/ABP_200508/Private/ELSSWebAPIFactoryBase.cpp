#include "ELSSWebAPIFactoryBase.h"

UELSSWebAPIFactoryBase::UELSSWebAPIFactoryBase() {
    this->ssOnlineError = NULL;
}

void UELSSWebAPIFactoryBase::SetInstance(UELSSWebAPIFactoryBase* Instance) {
}

void UELSSWebAPIFactoryBase::Reset() {
}

UELGameInstance* UELSSWebAPIFactoryBase::GetGameInstance() {
    return NULL;
}


