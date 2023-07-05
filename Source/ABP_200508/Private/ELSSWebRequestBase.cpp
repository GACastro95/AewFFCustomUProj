#include "ELSSWebRequestBase.h"

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

UELSSWebRequestBase::UELSSWebRequestBase() {
    this->requestAPIType = eSSModeAPIType::eSSModeAPIType_None;
}

