#include "ELSSWebRequestBase.h"

UELSSWebRequestBase::UELSSWebRequestBase() {
    this->requestAPIType = eSSModeAPIType::eSSModeAPIType_None;
}

bool UELSSWebRequestBase::RequestWebAPI() {
    return false;
}

void UELSSWebRequestBase::RequestCancel() {
}

FString UELSSWebRequestBase::GetRequestURL() {
    return TEXT("");
}

void UELSSWebRequestBase::ErrorDialogEnd(const yEnDialogBoxResult dialogResult) {
}

bool UELSSWebRequestBase::AnyRequestWebAPI(const FELSSRequestData& activateData) {
    return false;
}


