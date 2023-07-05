#include "EOSAntiCheatClient.h"

bool UEOSAntiCheatClient::SetupInternalCallback() {
    return false;
}

void UEOSAntiCheatClient::SetApiVersion(FEOSAntiCheatAPIVersionSettings _stAPIVerSetting) {
}

bool UEOSAntiCheatClient::EndSession() {
    return false;
}

EEOSAntiCheatClientViolationType UEOSAntiCheatClient::ClientTickSession() {
    return EEOSAntiCheatClientViolationType::None;
}

bool UEOSAntiCheatClient::BeginSession(EEOSAntiCheatClientMode _enClinetMode) {
    return false;
}

UEOSAntiCheatClient::UEOSAntiCheatClient() {
}

