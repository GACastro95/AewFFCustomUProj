#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESaveDataAccessorProcMode.h"
#include "ESaveDataProcResult.h"
#include "ESaveDataType.h"
#include "SaveData_FileInfo.h"
#include "SaveData_QuotaInfo.h"
#include "SaveData_AccessorDispatcherDelegate.h"
#include "SaveData_AccessorBase.generated.h"

class UELSaveGameBase;
class USaveDataObjectBase;
class USaveDataSystem;
class USaveGame_RawData;

UCLASS(Blueprintable)
class ABP_200508_API USaveData_AccessorBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveData_AccessorDispatcher SaveData_AccessorDispatcher;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSaveGameBase* m_pcSaveGameBaseShared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGame_RawData* m_pcSaveGame_RawData;
    
public:
    USaveData_AccessorBase();
    UFUNCTION(BlueprintCallable)
    bool SetupSaveGame_RawData(USaveGame_RawData* _pcRawData, bool _bCopyData);
    
    UFUNCTION(BlueprintCallable)
    void SetUpdatedData();
    
    UFUNCTION(BlueprintCallable)
    bool Setup(ESaveDataAccessorProcMode _enProcMode, USaveDataSystem* _pcRefSystem);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetRequestCacheFlag(bool _bCacheRequest);
    
public:
    UFUNCTION(BlueprintCallable)
    bool SetFileKey(const FString& _strFileKey, int32 _sFileUserIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugModeForBackGroundProcess(bool _bDebugMode);
    
    UFUNCTION(BlueprintCallable)
    bool SetDataType(ESaveDataType _enSaveDataType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCachedFlag(bool _bCache);
    
public:
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult RequestUpload();
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult RequestUpdateTitleFileList(const TArray<FString>& _cSearchTags);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult RequestUpdateOnlineFileList();
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult RequestUpdateLocalFileList(bool _bProjectSavedDir);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult RequestSave(bool _bUpload);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult RequestLoad(bool _bDownload, bool _bBackGroundDecrypt);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult RequestGetLocalQuotaInfo();
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult RequestDownload(bool _bTitleFile);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult RequestDeleteOnServer();
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult RequestDelete();
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult RequestCopy(const FString& _strFileKeyDest, int32 _sDestFileUserIndex);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult RequestConvertPS5FromPS4();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpdatedData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuccessBackGroundProcResult() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsCanceledTask();
    
    UFUNCTION(BlueprintCallable)
    bool IsBusy();
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult ImmediateSave(bool _bDebugMode);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult ImmediateLoad(bool _bDebugMode);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult ImmediateDelete();
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult ImmediateCopy(const FString& _strFileKeyDest, int32 _sDestFileUserIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetSearchTags() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSaveGame_RawData(USaveGame_RawData*& _pcRawData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESaveDataType GetSaveDataType() const;
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult GetSaveDataObject(USaveDataObjectBase*& _pcSaveDataObject, uint8 _uSaveDataAccessFlags);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSaveDataFileKeyWithType(FString& _strFileName, ESaveDataType _enType, int32 _strFileIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetQuotaInfo(FSaveData_QuotaInfo& _stQuataInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESaveDataAccessorProcMode GetProcMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESaveDataProcResult GetLastBackGroundProcResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFileUserIndex() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetFileList(TArray<FSaveData_FileInfo>& _refFileList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFileKey(bool _bWithProductUserID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugModeForBackGroundProcess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDataAccessRefCount() const;
    
    UFUNCTION(BlueprintCallable)
    bool Dispose();
    
    UFUNCTION(BlueprintCallable)
    static bool ConvertSaveDataTypeAndIndexFromFileKey(ESaveDataType& _enType, int32& _sFileIndex, const FString& _strFileName);
    
};

