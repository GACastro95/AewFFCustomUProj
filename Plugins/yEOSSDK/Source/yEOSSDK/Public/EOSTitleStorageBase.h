#pragma once
#include "CoreMinimal.h"
#include "EOSIDs.h"
#include "EOSTitleStorageAPIVersionSettings.h"
#include "EOSTitleStorageEventDispatcherDelegate.h"
#include "EOSTitleStorageFileMetaData.h"
#include "EOSTitleStorageProgress.h"
#include "EOSTitleStorageBase.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSTitleStorageBase : public UEOSIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSTitleStorageEventDispatcher TitleStorageEventDispatcher;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEOSTitleStorageFileMetaData> m_cMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FEOSTitleStorageProgress> m_cReadInfo;
    
public:
    UEOSTitleStorageBase();
    UFUNCTION(BlueprintCallable)
    void SetRequestReadBytes(int32 _sRequestReadBytes);
    
    UFUNCTION(BlueprintCallable)
    static void SetApiVersion(FEOSTitleStorageAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    bool RequestFileList(const TArray<FString>& _strFileTags);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDownloadFile(const FString& _strFileName, bool _bAutoRemove);
    
    UFUNCTION(BlueprintCallable)
    bool RequestCancelDownload(const FString& _strFileName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEOSTitleStorageFileMetaData> GetMetadata() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetFileMetaDataByIndex(FEOSTitleStorageFileMetaData& _rstMetaData, int32 _sIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetFileMetaData(FEOSTitleStorageFileMetaData& _rstMetaData, const FString& strFileName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFileCount() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetDownloadProgress(FEOSTitleStorageProgress& _rstProgress, const FString& _strFileName);
    
    UFUNCTION(BlueprintCallable)
    bool ClearDownloadProgress(const FString& _strFileName);
    
};

