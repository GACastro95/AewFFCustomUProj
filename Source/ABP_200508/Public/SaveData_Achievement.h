#pragma once
#include "CoreMinimal.h"
#include "ELSaveGameBase.h"
#include "SaveData_Achievement.generated.h"

UCLASS(Blueprintable)
class USaveData_Achievement : public UELSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_bAchievementStatusArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_sAchievementCountArray;
    
    USaveData_Achievement();
};

