#include "EOSUserContentsBase.h"

UEOSUserContentsBase::UEOSUserContentsBase() {
}

void UEOSUserContentsBase::SetRequestReadBytes(int32 _sRequestReadBytes) {
}

void UEOSUserContentsBase::SetApiVersion(FEOSUserContentsAPIVersionSettings _stAPIVerSetting) {
}

bool UEOSUserContentsBase::RequestFileList() {
    return false;
}

bool UEOSUserContentsBase::RequestDownloadFile(const FString& _strFileName, bool _bAutoRemove) {
    return false;
}

bool UEOSUserContentsBase::RequestCancelDownload(const FString& _strFileName) {
    return false;
}

TArray<FEOSUserContentMetaData> UEOSUserContentsBase::GetMetadata() const {
    return TArray<FEOSUserContentMetaData>();
}

bool UEOSUserContentsBase::GetFileMetaDataByIndex(FEOSUserContentMetaData& _rstMetaData, int32 _sIndex) {
    return false;
}

bool UEOSUserContentsBase::GetFileMetaData(FEOSUserContentMetaData& _rstMetaData, const FString& strFileName) {
    return false;
}

int32 UEOSUserContentsBase::GetFileCount() const {
    return 0;
}

bool UEOSUserContentsBase::GetDownloadProgress(FEOSUserContentProgress& _rstProgress, const FString& _strFileName) {
    return false;
}

bool UEOSUserContentsBase::ClearDownloadProgress(const FString& _strFileName) {
    return false;
}


