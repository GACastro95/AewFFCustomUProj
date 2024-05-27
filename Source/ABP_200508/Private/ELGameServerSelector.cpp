#include "ELGameServerSelector.h"

UELGameServerSelector::UELGameServerSelector() {
}

bool UELGameServerSelector::SetupServers(const FString& Data, const FString& Key, const FString& SubKey) {
    return false;
}

bool UELGameServerSelector::RequestCheckServer() {
    return false;
}

bool UELGameServerSelector::OverrideYGS2ClientSetupParam(FString& AreaName, FYGS2ClientSetupParam& OutSetupParam, int32 Index, const FString& Key, const FString& SubKey, const FString& TargetOnlineVersion) const {
    return false;
}

bool UELGameServerSelector::OverrideSSModeServerEnvData(FSSModeServerParam& outServerData, const FString& Key, const FString& SubKey) const {
    return false;
}

bool UELGameServerSelector::OverrideSSModeEndpointParam(TArray<FSSServerEndpoint>& outServerData, const FString& Key, const FString& SubKey) const {
    return false;
}

void UELGameServerSelector::OnYGS2Response(EYGS2ErrorType ErrorType, UYGS2RequestBase* RequestBase) {
}

int32 UELGameServerSelector::GetServerNum() const {
    return 0;
}

FString UELGameServerSelector::GetServerId() {
    return TEXT("");
}


