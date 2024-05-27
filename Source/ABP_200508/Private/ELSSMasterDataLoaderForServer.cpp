#include "ELSSMasterDataLoaderForServer.h"

AELSSMasterDataLoaderForServer::AELSSMasterDataLoaderForServer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxRetryCount = 10;
}

void AELSSMasterDataLoaderForServer::SetVersionInfo(int32 inDataVersion, const FString& inYGS2URL) {
}

bool AELSSMasterDataLoaderForServer::RequestGetSSMasterDataForServer() {
    return false;
}





