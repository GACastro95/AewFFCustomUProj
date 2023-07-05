#include "ELSSModeServiceParam.h"

bool UELSSModeServiceParam::Setup(const FString& Data) {
    return false;
}

bool UELSSModeServiceParam::IsIgnoreMaintenance() const {
    return false;
}

bool UELSSModeServiceParam::IsEndSetup() const {
    return false;
}

FString UELSSModeServiceParam::GetTitle(const FString& Language) const {
    return TEXT("");
}

ESSModeServiceState UELSSModeServiceParam::GetState() const {
    return ESSModeServiceState::None;
}

bool UELSSModeServiceParam::GetMaintenanceOutTime(FDateTime& outDateTime, bool checkEnabled) const {
    return false;
}

bool UELSSModeServiceParam::GetMaintenanceInTime(FDateTime& outDateTime, bool checkEnabled) const {
    return false;
}

FString UELSSModeServiceParam::GetBody(const FString& Language) const {
    return TEXT("");
}

UELSSModeServiceParam::UELSSModeServiceParam() {
}

