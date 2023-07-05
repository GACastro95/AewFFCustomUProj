#include "ELSSMasterDataLoaderForClient.h"

UYGS2RequestBase* AELSSMasterDataLoaderForClient::Request_GetSSMasterDataVersion(bool inDataVersionOnly) {
    return NULL;
}

UYGS2RequestBase* AELSSMasterDataLoaderForClient::Request_GetSSMasterData(bool inDataVersionOnly, int32 inRetryCount) {
    return NULL;
}



void AELSSMasterDataLoaderForClient::OnErrorResponse_GetSSMasterDataVersion(const FRequest_ErrSetupData& apiErrData, const int32 errRetryCnt) {
}

void AELSSMasterDataLoaderForClient::OnErrorResponse_GetSSMasterData(const FRequest_ErrSetupData& apiErrData, const int32 errRetryCnt) {
}


void AELSSMasterDataLoaderForClient::ImportMasterDataFromYGS2Response(UYGS2RequestBase* inRequest) {
}

void AELSSMasterDataLoaderForClient::ImportMasterDataFromResponse(UYGS2RequestBase* inRequest) {
}

int32 AELSSMasterDataLoaderForClient::GetDataVersionFromYGS2Response(UYGS2RequestBase* inRequest) {
    return 0;
}

int32 AELSSMasterDataLoaderForClient::GetDataVersionFromResponse(UYGS2RequestBase* inRequest) {
    return 0;
}

AELSSMasterDataLoaderForClient::AELSSMasterDataLoaderForClient() {
}

