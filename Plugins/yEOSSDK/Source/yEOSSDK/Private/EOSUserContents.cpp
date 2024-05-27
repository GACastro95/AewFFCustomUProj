#include "EOSUserContents.h"

UEOSUserContents::UEOSUserContents() {
}

void UEOSUserContents::SetRequestWriteBytes(int32 _sRequestWriteBytes) {
}

bool UEOSUserContents::RequestUploadFile(const FString& _strFileName, UEOSUserContentBinary* _cBinary, bool _bAutoRemove) {
    return false;
}

bool UEOSUserContents::RequestDuplicateFile(const FString& _strSrcFileName, const FString& _strDestFileName) {
    return false;
}

bool UEOSUserContents::RequestDeleteFile(const FString& _strFileName) {
    return false;
}

bool UEOSUserContents::RequestCancelUpload(const FString& _strFileName) {
    return false;
}

bool UEOSUserContents::GetUploadProgress(FEOSUserContentProgress& _rstProgress, const FString& _strFileName) {
    return false;
}

bool UEOSUserContents::ClearUploadProgress(const FString& _strFileName) {
    return false;
}


