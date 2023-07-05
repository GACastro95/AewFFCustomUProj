#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESaveDataType.h"
#include "UnavailableDlcData.h"
#include "AdjustedDlcSaveDataDelegateDelegate.h"
#include "ELAdjustDlcSaveDataAccessObjectBase.generated.h"

class UELAdjustDlcSaveDataAccessObjectBase;
class UWorld;

UCLASS(Abstract, Blueprintable)
class ELITE_API UELAdjustDlcSaveDataAccessObjectBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAdjustedDlcSaveDataDelegate AdjustedDelegate;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> World;
    
public:
    UELAdjustDlcSaveDataAccessObjectBase();
    UFUNCTION(BlueprintCallable)
    void StartCheck(FUnavailableDlcData _unavailableDlcData, FAdjustedDlcSaveDataDelegate _delegate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartCheck(FUnavailableDlcData _unavailableDlcData);
    
    UFUNCTION(BlueprintCallable)
    void EndCheck();
    
public:
    UFUNCTION(BlueprintCallable)
    static UELAdjustDlcSaveDataAccessObjectBase* CreateAdjustDlcSaveDataAccessObject(const ESaveDataType SaveDataType, UObject* Outer);
    
    UFUNCTION(BlueprintCallable)
    static UELAdjustDlcSaveDataAccessObjectBase* CheckAdjustDlcSaveData(const ESaveDataType SaveDataType, UObject* Outer, FUnavailableDlcData _unavailableDlcData, FAdjustedDlcSaveDataDelegate Delegate);
    
};

