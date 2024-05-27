#pragma once
#include "CoreMinimal.h"
#include "EELAchievementList.h"
#include "SaveDataObjectBase.h"
#include "SaveDataObject_Achievement.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API USaveDataObject_Achievement : public USaveDataObjectBase {
    GENERATED_BODY()
public:
    USaveDataObject_Achievement();

    UFUNCTION(BlueprintCallable)
    void SetAchievementStatus(EELAchievementList _Achievement, bool _Status);
    
    UFUNCTION(BlueprintCallable)
    void SetAchievementCount(EELAchievementList _Achievement, int32 _Count);
    
    UFUNCTION(BlueprintCallable)
    bool GetAchievementStatus(EELAchievementList _Achievement);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAchievementCount(EELAchievementList _Achievement);
    
    UFUNCTION(BlueprintCallable)
    int32 AddAchievementCount(EELAchievementList _Achievement, int32 _Add);
    
};

