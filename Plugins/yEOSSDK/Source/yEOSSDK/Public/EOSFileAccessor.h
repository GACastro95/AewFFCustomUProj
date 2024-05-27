#pragma once
#include "CoreMinimal.h"
#include "EOSCommon.h"
#include "EOSFileAccessor.generated.h"

class UEOSUserContentBinary;
class UTexture2D;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSFileAccessor : public UEOSCommon {
    GENERATED_BODY()
public:
    UEOSFileAccessor();

    UFUNCTION(BlueprintCallable)
    static bool WriteBinaryToGameSavedDir(UEOSUserContentBinary* _pcBinary, const FString& _strFileName, const FString& _strSubDir);
    
    UFUNCTION(BlueprintCallable)
    static bool WriteBinary(UEOSUserContentBinary* _pcBinary, const FString& _strPath);
    
    UFUNCTION(BlueprintCallable)
    static bool ReadBinaryFromGameSavedDir(UEOSUserContentBinary*& _pcBinary, const FString& _strFileName, const FString& _strSubDir);
    
    UFUNCTION(BlueprintCallable)
    static bool ReadBinary(UEOSUserContentBinary*& _pcBinary, const FString& _strPath);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadTextureFromGameSaved(UTexture2D*& _pcLoadedTexture, const FString& _strFileName, const FString& _strSubDir);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadTextureFromFile(UTexture2D*& _pcLoadedTexture, const FString& _strFilePath);
    
    UFUNCTION(BlueprintCallable)
    static bool IsExistFile(const FString& _strPath);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSaveDataPath(FString& _strPath, const FString& _strFileName, const FString& _strSubDir);
    
};

