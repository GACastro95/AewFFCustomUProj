#pragma once
#include "CoreMinimal.h"
#include "EOSIDs.h"
#include "EOSUserContentMetaData.h"
#include "EOSUserContentProgress.h"
#include "EOSUserContentsAPIVersionSettings.h"
#include "EOSUserContentsEventDispatcherDelegate.h"
#include "EOSUserContentsBase.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSUserContentsBase : public UEOSIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSUserContentsEventDispatcher UserContentsEventDispatcher;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEOSUserContentMetaData> m_cMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FEOSUserContentProgress> m_cReadInfo;
    
public:
    UEOSUserContentsBase();
    UFUNCTION(BlueprintCallable)
    void SetRequestReadBytes(int32 _sRequestReadBytes);
    
    UFUNCTION(BlueprintCallable)
    static void SetApiVersion(FEOSUserContentsAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    bool RequestFileList();
    
    UFUNCTION(BlueprintCallable)
    bool RequestDownloadFile(const FString& _strFileName, bool _bAutoRemove);
    
    UFUNCTION(BlueprintCallable)
    bool RequestCancelDownload(const FString& _strFileName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEOSUserContentMetaData> GetMetadata() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetFileMetaDataByIndex(FEOSUserContentMetaData& _rstMetaData, int32 _sIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetFileMetaData(FEOSUserContentMetaData& _rstMetaData, const FString& strFileName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFileCount() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetDownloadProgress(FEOSUserContentProgress& _rstProgress, const FString& _strFileName);
    
    UFUNCTION(BlueprintCallable)
    bool ClearDownloadProgress(const FString& _strFileName);
    
};

