#pragma once
#include "CoreMinimal.h"
#include "CareerSnapshotParam.h"
#include "SaveDataObjectBase.h"
#include "SaveDataObject_CareerModeSystem.generated.h"

class UELCareerGameParam;

UCLASS(Blueprintable)
class ABP_200508_API USaveDataObject_CareerModeSystem : public USaveDataObjectBase {
    GENERATED_BODY()
public:
    USaveDataObject_CareerModeSystem();

    UFUNCTION(BlueprintCallable)
    void SetSnapshotParams(const TArray<FCareerSnapshotParam>& Params);
    
    UFUNCTION(BlueprintCallable)
    void SetSnapshotParam(int32 Index, const FCareerSnapshotParam& Param);
    
    UFUNCTION(BlueprintCallable)
    bool SetSaveDataToCareerGameParam(UELCareerGameParam* _careerGameParam);
    
    UFUNCTION(BlueprintCallable)
    bool SetCareerGameParamToSaveData(UELCareerGameParam* _careerGameParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSnapshotParams(TArray<FCareerSnapshotParam>& OutParams) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSnapshotParam(int32 Index, FCareerSnapshotParam& OutParam) const;
    
};

