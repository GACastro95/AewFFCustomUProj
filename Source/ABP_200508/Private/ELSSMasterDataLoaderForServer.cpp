#include "ELSSMasterDataLoaderForServer.h"

void AELSSMasterDataLoaderForServer::SetVersionInfo(int32 inDataVersion, const FString& inYGS2URL) {
}

bool AELSSMasterDataLoaderForServer::RequestGetSSMasterDataForServer() {
    return false;
}




AELSSMasterDataLoaderForServer::AELSSMasterDataLoaderForServer() {
    this->MaxRetryCount = 10;
}

