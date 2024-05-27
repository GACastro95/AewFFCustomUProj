#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EWrestlerID_N.h"
#include "ESSWrestlerType.h"
#include "SSWrestlerParam.h"
#include "SSMenuWrestlerSelectData.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API USSMenuWrestlerSelectData : public UObject {
    GENERATED_BODY()
public:
    USSMenuWrestlerSelectData();

    UFUNCTION(BlueprintCallable)
    void SetSelectWrestlerParam(const EWrestlerID_N selectWrestlerId, const int32 EditWrestlerID);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectWrestlerPanelId(const int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectWrestlerId(const int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectEditWrestlerType(const ESSWrestlerType ID);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectEditWrestlerPresetId(const int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    bool IsCustomWrestler();
    
    UFUNCTION(BlueprintCallable)
    FSSWrestlerParam GetWrestlerParam();
    
    UFUNCTION(BlueprintCallable)
    EWrestlerID_N GetSelectWrestlerTypeId();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectWrestlerPanelId();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectWrestlerID();
    
    UFUNCTION(BlueprintCallable)
    ESSWrestlerType GetSelectEditWrestlerType();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectEditWrestlerPresetID();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectCustomWrestlerId();
    
};

