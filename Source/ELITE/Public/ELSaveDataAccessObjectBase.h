#pragma once
#include "CoreMinimal.h"
#include "ESaveDataAccessorEvent.h"
#include "UObject/Object.h"
#include "ESaveDataProcResult.h"
#include "ESaveDataType.h"
#include "Engine/EngineTypes.h"
#include "SaveDataCreatedDelegateDelegate.h"
#include "SaveDataLoadedDelegateDelegate.h"
#include "SaveDataUpdatedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "ELSaveDataAccessObjectBase.generated.h"

class UELSaveDataAccessObjectBase;
class USaveDataObjectBase;
class USaveData_AccessorBase;
class UWorld;

UCLASS(Abstract, Blueprintable)
class ELITE_API UELSaveDataAccessObjectBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccessCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_IsCachedData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESaveDataType m_SaveDataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESaveDataProcResult LastResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle RequestTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> FileNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USaveData_AccessorBase*> SaveOnlyAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSaveDataCreatedDelegate m_CreatedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSaveDataLoadedDelegate m_LoadedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSaveDataUpdatedDelegate m_UpdatedDelegate;
    
public:
    UELSaveDataAccessObjectBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WriteData(USaveDataObjectBase* SaveDataObject, const bool bInitialize);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateData(ESaveDataType _saveDataType, FSaveDataUpdatedDelegate _delegate, const float Timeout);
    
    UFUNCTION(BlueprintCallable)
    static UELSaveDataAccessObjectBase* Update(UObject* Outer, const ESaveDataType InSaveDataType, FSaveDataUpdatedDelegate Delegate, const float Timeout);
    
    UFUNCTION(BlueprintCallable)
    static UELSaveDataAccessObjectBase* Save(UObject* Outer, const ESaveDataType InSaveDataType, FSaveDataCreatedDelegate Delegate, const float Timeout);
    
private:
    UFUNCTION(BlueprintCallable)
    void RequestTermination(const bool IsSuccess, const ESaveDataProcResult ProcResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ReadData(USaveDataObjectBase* SaveDataObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnbindAccessor(USaveData_AccessorBase* SaveDataAccessor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnStartUpdateData(ESaveDataProcResult& ProcResult, ESaveDataType _saveDataType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnStartLoadData(ESaveDataProcResult& ProcResult, ESaveDataType _saveDataType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnStartCreateData(ESaveDataProcResult& ProcResult, ESaveDataType _saveDataType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ESaveDataProcResult OnRequestTermination(const bool IsSuccess, const ESaveDataProcResult InProcResult);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoadedData(bool _isSuccess, USaveData_AccessorBase* _saveDataAccessor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCreatedData(bool _isSuccess, USaveData_AccessorBase* _saveDataAccessor);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadData(ESaveDataType _saveDataType, FSaveDataLoadedDelegate _delegate, const float Timeout);
    
    UFUNCTION(BlueprintCallable)
    static UELSaveDataAccessObjectBase* Load(UObject* Outer, const ESaveDataType InSaveDataType, FSaveDataLoadedDelegate Delegate, const float Timeout);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportSaveDataType(const ESaveDataType& SaveDataType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsRequestComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAccessCache() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    USaveDataObjectBase* GetSaveDataObject(TSubclassOf<USaveDataObjectBase> Class, ESaveDataProcResult& ProcResult, USaveData_AccessorBase* SaveDataAccessor, const uint8 AccessFlags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESaveDataType GetRequestedSaveDataType() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESaveDataProcResult GetLastResult() const;
    
    UFUNCTION(BlueprintCallable)
    static UELSaveDataAccessObjectBase* CreateSaveDataAccessObject(const ESaveDataType SaveDataType, UObject* Outer);
    
    UFUNCTION(BlueprintCallable)
    void CreateData(ESaveDataType _saveDataType, FSaveDataCreatedDelegate _delegate, const float Timeout);
    
private:
    UFUNCTION(BlueprintCallable)
    void Callback_RequestProcessEnd(ESaveDataAccessorEvent Event, USaveData_AccessorBase* SaveDataAccessor, ESaveDataProcResult Result);
    
};

