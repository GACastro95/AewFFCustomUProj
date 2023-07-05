#include "ELSSMasterDataLoader.h"

void AELSSMasterDataLoader::OnCompleteLoading(bool inSuccess) {
}

void AELSSMasterDataLoader::ImportMasterDataFromResponseData(const FYGS2SSMasterData& inResponseData) {
}

int32 AELSSMasterDataLoader::GetDataVersionFromResponseData(const FYGS2SSMasterData& inResponseData) {
    return 0;
}



AELSSMasterDataLoader::AELSSMasterDataLoader() {
    this->DoneLoading = false;
    this->Success = false;
    this->MasterData = NULL;
    this->RetryCount = 0;
    this->CurrentYGS2Request = NULL;
}

