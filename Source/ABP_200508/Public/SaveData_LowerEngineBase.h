#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESaveDataProcResult.h"
#include "SaveData_FileInfo.h"
#include "SaveData_QuotaInfo.h"
#include "SaveData_LowerEngineBase.generated.h"

class USaveGame_RawData;

UCLASS(Blueprintable)
class ABP_200508_API USaveData_LowerEngineBase : public UObject {
    GENERATED_BODY()
public:
    USaveData_LowerEngineBase();
    UFUNCTION(BlueprintCallable)
    bool UpdateLocalFileList(bool _bProjectSavedDir);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult SaveRawData(USaveGame_RawData* _pcRawData, const FString& _strFileKey, int32 _sFileUserIndex);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult LoadRawData_PS4(USaveGame_RawData*& _pcRawData, const FString& _strFileKey, int32 _sFileUserIndex, TArray<uint8>& OutSaveData);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult LoadRawData(USaveGame_RawData*& _pcRawData, const FString& _strFileKey, int32 _sFileUserIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsExistsRawData(const FString& _strFileKey, int32 _sFileUserIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetLocalQuotaInfo(FSaveData_QuotaInfo& _stQuataInfo);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLocalFileListByType(TArray<FSaveData_FileInfo>& _refFileList, const FString& _strFilterName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetLocalFileList(TArray<FSaveData_FileInfo>& _refFileList);
    
    UFUNCTION(BlueprintCallable)
    ESaveDataProcResult DeleteRawData(const FString& _strFileKey, int32 _sFileUserIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CheckValidAllocationOnLocal(int32 _sFileSize);
    
};

