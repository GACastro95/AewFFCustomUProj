#pragma once
#include "CoreMinimal.h"
#include "ELMenuWidgetBase.h"
#include "ESaveDataAccessorEvent.h"
#include "ESaveDataProcResult.h"
#include "ELTitleWidgetBase.generated.h"

class AELGameCommonPlayerControllerBase;
class USaveData_AccessorBase;

UCLASS(Blueprintable, EditInlineNew)
class ELITE_API UELTitleWidgetBase : public UELMenuWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USaveData_AccessorBase*> m_DeleteSaveDataAccessors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USaveData_AccessorBase*> m_ConvertSaveDataAccessors;
    
public:
    UELTitleWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    bool StartConvertSaveData();
    
    UFUNCTION(BlueprintCallable)
    bool PreStartConvertSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedDecide(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedAnyKey(AELGameCommonPlayerControllerBase* Controller);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedAnalogL();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndConvertSaveData(const bool IsConvertFailed, const bool IsChangeLanguageType, const int32 ChangeLanguageType, const ESaveDataProcResult SaveDataProcResult);
    
    UFUNCTION(BlueprintCallable)
    void DeleteSaveData();
    
    UFUNCTION(BlueprintCallable)
    void CallBack_EndDelete(ESaveDataAccessorEvent Event, USaveData_AccessorBase* SaveDataAccessor, ESaveDataProcResult Result);
    
    UFUNCTION(BlueprintCallable)
    void CallBack_EndConvert(ESaveDataAccessorEvent Event, USaveData_AccessorBase* SaveDataAccessor, ESaveDataProcResult Result);
    
};

