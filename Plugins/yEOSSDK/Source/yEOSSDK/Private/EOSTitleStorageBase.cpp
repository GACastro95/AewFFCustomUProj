#include "EOSTitleStorageBase.h"

UEOSTitleStorageBase::UEOSTitleStorageBase() {
}

void UEOSTitleStorageBase::SetRequestReadBytes(int32 _sRequestReadBytes) {
}

void UEOSTitleStorageBase::SetApiVersion(FEOSTitleStorageAPIVersionSettings _stAPIVerSetting) {
}

bool UEOSTitleStorageBase::RequestFileList(const TArray<FString>& _strFileTags) {
    return false;
}

bool UEOSTitleStorageBase::RequestDownloadFile(const FString& _strFileName, bool _bAutoRemove) {
    return false;
}

bool UEOSTitleStorageBase::RequestCancelDownload(const FString& _strFileName) {
    return false;
}

TArray<FEOSTitleStorageFileMetaData> UEOSTitleStorageBase::GetMetadata() const {
    return TArray<FEOSTitleStorageFileMetaData>();
}

bool UEOSTitleStorageBase::GetFileMetaDataByIndex(FEOSTitleStorageFileMetaData& _rstMetaData, int32 _sIndex) {
    return false;
}

bool UEOSTitleStorageBase::GetFileMetaData(FEOSTitleStorageFileMetaData& _rstMetaData, const FString& strFileName) {
    return false;
}

int32 UEOSTitleStorageBase::GetFileCount() const {
    return 0;
}

bool UEOSTitleStorageBase::GetDownloadProgress(FEOSTitleStorageProgress& _rstProgress, const FString& _strFileName) {
    return false;
}

bool UEOSTitleStorageBase::ClearDownloadProgress(const FString& _strFileName) {
    return false;
}


