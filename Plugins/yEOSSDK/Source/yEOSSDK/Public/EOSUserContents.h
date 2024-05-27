#pragma once
#include "CoreMinimal.h"
#include "EOSUserContentProgress.h"
#include "EOSUserContentsBase.h"
#include "EOSUserContents.generated.h"

class UEOSUserContentBinary;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSUserContents : public UEOSUserContentsBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FEOSUserContentProgress> m_cWriteInfo;
    
public:
    UEOSUserContents();

    UFUNCTION(BlueprintCallable)
    void SetRequestWriteBytes(int32 _sRequestWriteBytes);
    
    UFUNCTION(BlueprintCallable)
    bool RequestUploadFile(const FString& _strFileName, UEOSUserContentBinary* _cBinary, bool _bAutoRemove);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDuplicateFile(const FString& _strSrcFileName, const FString& _strDestFileName);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDeleteFile(const FString& _strFileName);
    
    UFUNCTION(BlueprintCallable)
    bool RequestCancelUpload(const FString& _strFileName);
    
    UFUNCTION(BlueprintCallable)
    bool GetUploadProgress(FEOSUserContentProgress& _rstProgress, const FString& _strFileName);
    
    UFUNCTION(BlueprintCallable)
    bool ClearUploadProgress(const FString& _strFileName);
    
};

