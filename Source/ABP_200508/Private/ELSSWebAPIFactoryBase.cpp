#include "ELSSWebAPIFactoryBase.h"

void UELSSWebAPIFactoryBase::SetInstance(UELSSWebAPIFactoryBase* Instance) {
}

void UELSSWebAPIFactoryBase::Reset() {
}

UELGameInstance* UELSSWebAPIFactoryBase::GetGameInstance() {
    return NULL;
}

UELSSWebAPIFactoryBase::UELSSWebAPIFactoryBase() {
    this->ssOnlineError = NULL;
}

