#include "ELSSMasterDataLoaderForBotClient.h"

AELSSMasterDataLoaderForBotClient::AELSSMasterDataLoaderForBotClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxRetryCount = 10;
    this->DataVersion = 0;
}

void AELSSMasterDataLoaderForBotClient::SetVersionInfo(int32 inDataVersion, const FString& inYGS2URL) {
}

bool AELSSMasterDataLoaderForBotClient::RequestGetSSMasterData(bool inDataVersionOnly) {
    return false;
}






