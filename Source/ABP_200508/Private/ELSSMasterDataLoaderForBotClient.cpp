#include "ELSSMasterDataLoaderForBotClient.h"

void AELSSMasterDataLoaderForBotClient::SetVersionInfo(int32 inDataVersion, const FString& inYGS2URL) {
}

bool AELSSMasterDataLoaderForBotClient::RequestGetSSMasterData(bool inDataVersionOnly) {
    return false;
}





AELSSMasterDataLoaderForBotClient::AELSSMasterDataLoaderForBotClient() {
    this->MaxRetryCount = 10;
    this->DataVersion = 0;
}

