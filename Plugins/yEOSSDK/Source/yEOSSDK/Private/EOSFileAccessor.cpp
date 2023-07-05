#include "EOSFileAccessor.h"

bool UEOSFileAccessor::WriteBinaryToGameSavedDir(UEOSUserContentBinary* _pcBinary, const FString& _strFileName, const FString& _strSubDir) {
    return false;
}

bool UEOSFileAccessor::WriteBinary(UEOSUserContentBinary* _pcBinary, const FString& _strPath) {
    return false;
}

bool UEOSFileAccessor::ReadBinaryFromGameSavedDir(UEOSUserContentBinary*& _pcBinary, const FString& _strFileName, const FString& _strSubDir) {
    return false;
}

bool UEOSFileAccessor::ReadBinary(UEOSUserContentBinary*& _pcBinary, const FString& _strPath) {
    return false;
}

bool UEOSFileAccessor::LoadTextureFromGameSaved(UTexture2D*& _pcLoadedTexture, const FString& _strFileName, const FString& _strSubDir) {
    return false;
}

bool UEOSFileAccessor::LoadTextureFromFile(UTexture2D*& _pcLoadedTexture, const FString& _strFilePath) {
    return false;
}

bool UEOSFileAccessor::IsExistFile(const FString& _strPath) {
    return false;
}

bool UEOSFileAccessor::GetSaveDataPath(FString& _strPath, const FString& _strFileName, const FString& _strSubDir) {
    return false;
}

UEOSFileAccessor::UEOSFileAccessor() {
}

