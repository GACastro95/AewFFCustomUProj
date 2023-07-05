#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESaveDataProcResult.h"
#include "ESaveDataProcessType.h"
#include "ESaveDataType.h"
#include "SaveData_FileInfo.h"
#include "SaveData_QuotaInfo.h"
#include "SaveDataSystem.generated.h"

class USaveDataObjectBase;
class USaveDataSystem;
class USaveData_AccessorBase;
class USaveData_Cache;
class USaveData_DebugBase;
class USaveData_LowerEngineBase;
class USaveData_ProcessBase;
class USaveGame_RawData;

UCLASS(Blueprintable)
class ABP_200508_API USaveDataSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveData_DebugBase* m_pcDebugBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveData_LowerEngineBase* m_pcLowerEngine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveData_Cache* m_pcCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESaveDataProcessType, USaveData_ProcessBase*> m_cProcesses;
    
public:
    USaveDataSystem();
    UFUNCTION(BlueprintCallable)
    bool UpdateLocalFileList_Immediate(bool _bProjectSavedDir);
    
    UFUNCTION(BlueprintCallable)
    bool UnregistCache(USaveData_AccessorBase* _pcSaveDataAccessor);
    
    UFUNCTION(BlueprintCallable)
    bool StartDataReset(bool _bProjectSavedDir, const FString& _strTargetFileName);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSaveDataSystemForGlobal(USaveDataSystem* _pcInstance);
    
    UFUNCTION(BlueprintCallable)
    bool SetOnlineParam(const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult SaveRawData_Immediate(USaveGame_RawData* _pcRawData, const FString& _strFileKey, int32 _sFileUserIndex);
    
    UFUNCTION(BlueprintCallable)
    bool RequestUpdateTitleFileList(const TArray<FString>& _cSearchTags);
    
    UFUNCTION(BlueprintCallable)
    bool RequestUpdateOnlineFileList();
    
    UFUNCTION(BlueprintCallable)
    bool RequestUpdateLocalFileList(bool _bProjectSavedDir);
    
    UFUNCTION(BlueprintCallable)
    bool RequestLoad(USaveData_AccessorBase*& _pcSaveDataAccessor, const FString& _strKey, int32 _sFileUserIndex, bool _bDownload, bool _bCache);
    
    UFUNCTION(BlueprintCallable)
    bool RequestGetLocalQuotaInfo();
    
    UFUNCTION(BlueprintCallable)
    bool RequestDownload(USaveData_AccessorBase*& _pcSaveDataAccessor, const FString& _strKey, int32 _sFileUserIndex, bool _bTitleFile);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDeleteOnServer(USaveData_AccessorBase*& _pcSaveDataAccessor, const FString& _strKey, int32 _sFileUserIndex);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDelete(USaveData_AccessorBase*& _pcSaveDataAccessor, const FString& _strKey, int32 _sFileUserIndex);
    
    UFUNCTION(BlueprintCallable)
    bool RequestCopy(USaveData_AccessorBase*& _pcSaveDataAccessor, const FString& _strSrcKey, int32 _sSrcFileUserIndex, const FString& _strDestKey, int32 _sDestFileUserIndex);
    
    UFUNCTION(BlueprintCallable)
    bool RequestConvertPS5FromPS4(USaveData_AccessorBase*& _pcSaveDataAccessor, const FString& _strKey, int32 _sFileUserIndex, bool _bCache);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ReleaseSaveDataCache(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool RegistCache(USaveData_AccessorBase* _pcSaveDataAccessor);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult LoadRawData_Immediate_PS4(USaveGame_RawData*& _pcRawData, const FString& _strFileKey, int32 _sFileUserIndex, TArray<uint8>& OutSaveData);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult LoadRawData_Immediate(USaveGame_RawData*& _pcRawData, const FString& _strFileKey, int32 _sFileUserIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsWaitForBGTask();
    
    UFUNCTION(BlueprintCallable)
    bool IsValidDataForRawData(USaveGame_RawData* _pcRawData, bool _bDebugMode);
    
    UFUNCTION(BlueprintCallable)
    bool IsUpdatingTitleFileList();
    
    UFUNCTION(BlueprintCallable)
    bool IsUpdatingOnlineFileList();
    
    UFUNCTION(BlueprintCallable)
    bool IsUpdatingLocalQuotaInfo();
    
    UFUNCTION(BlueprintCallable)
    bool IsUpdatingLocalFileList();
    
    UFUNCTION(BlueprintCallable)
    bool IsExistsRawData_Immediate(const FString& _strFileKey, int32 _sFileUserIndex);
    
    UFUNCTION(BlueprintCallable)
    bool ImportFiles(TArray<FString> _strFileList);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTitleFileList(TArray<FSaveData_FileInfo>& _refFileList);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSaveDataSystemForGlobal(USaveDataSystem*& _pcInstance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetProductUserID() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetProcessor(USaveData_ProcessBase*& _pcProcessBase, ESaveDataProcessType _enProcessType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetOnlineFileList(TArray<FSaveData_FileInfo>& _refFileList);
    
    UFUNCTION(BlueprintCallable)
    bool GetLocalQuotaInfo_Immediate(FSaveData_QuotaInfo& _stQuataInfo);
    
    UFUNCTION(BlueprintCallable)
    bool GetLocalQuotaInfo(FSaveData_QuotaInfo& _stQuataInfo);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLocalFileListByType(TArray<FSaveData_FileInfo>& _refFileList, const FString& _strFilterName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLocalFileList_Immediate(TArray<FSaveData_FileInfo>& _refFileList);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLocalFileList(TArray<FSaveData_FileInfo>& _refFileList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEpicAccountID() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetDebugBase(USaveData_DebugBase*& _pcDebugBase);
    
    UFUNCTION(BlueprintCallable)
    bool FindCache(USaveData_AccessorBase*& _pcSaveDataAccessor, const FString& _strFileKey);
    
    UFUNCTION(BlueprintCallable)
    bool ExportTexts(bool _bProjectSavedDir, const FString& _strExportPath, const FString& _strFilterName);
    
    UFUNCTION(BlueprintCallable)
    bool ExportFiles(bool _bProjectSavedDir, const FString& _strExportPath, const FString& _strFilterName);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult DeleteRawData_Immediate(const FString& _strFileKey, int32 _sFileUserIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateSaveDataSystem(USaveDataSystem*& _pcSaveDataSystem, const FString& _strEpicAccountUserID, const FString& _strEncryptionKey, bool _bEnableDebug);
    
    UFUNCTION(BlueprintCallable)
    bool CreateSaveDataObject(USaveDataObjectBase*& _pcSaveDataObject, ESaveDataType _enType);
    
    UFUNCTION(BlueprintCallable)
    bool CreateAccessorWithRawData(USaveData_AccessorBase*& _pcSaveDataAccessor, USaveGame_RawData* _pcRawData, bool _bCopyData);
    
    UFUNCTION(BlueprintCallable)
    bool CreateAccessor(USaveData_AccessorBase*& _pcSaveDataAccessor, ESaveDataType _enType);
    
    UFUNCTION(BlueprintCallable)
    bool ClearCache();
    
    UFUNCTION(BlueprintCallable)
    bool CheckValidAllocationOnLocal_Immediate(int32 _sFileSize);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeAccount(const FString& _strEpicAccountUserID);
    
};

