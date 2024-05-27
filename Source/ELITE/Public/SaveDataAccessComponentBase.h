#pragma once
#include "CoreMinimal.h"
#include "ESaveDataType.h"
#include "Components/ActorComponent.h"
#include "SaveDataAccessParam.h"
#include "SaveDataAccessComponentBase.generated.h"

class UELSaveDataAccessObjectBase;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ELITE_API USaveDataAccessComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBusy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 JobIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSaveDataAccessParam> Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESaveDataType, UELSaveDataAccessObjectBase*> SaveDataAccessObjectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ESaveDataType> AccessDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSilent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateNew;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ESaveDataType> AccessDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ESaveDataType> LoadedSaveDataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ESaveDataType> SaveDataTypeList;
    
public:
    USaveDataAccessComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartSave(const TArray<ESaveDataType>& List);
    
    UFUNCTION(BlueprintCallable)
    void StartLoad();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SaveProcess(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void LoadProcess(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    UELSaveDataAccessObjectBase* GetSaveDataAccessObject(const ESaveDataType& DataType);
    
};

