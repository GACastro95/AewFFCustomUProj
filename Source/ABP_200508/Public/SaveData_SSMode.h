#pragma once
#include "CoreMinimal.h"
#include "ELSaveGameBase.h"
#include "SSLastPlayRecord.h"
#include "SSLoadoutSettings.h"
#include "SSResultRecoveryData.h"
#include "SSWrestlerSettings.h"
#include "SaveData_SSMode.generated.h"

UCLASS(Blueprintable)
class USaveData_SSMode : public UELSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWrestlerSettings WrestlerSettings;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSLoadoutSettings LoadoutSettings[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSLastPlayRecord LastPlayRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSResultRecoveryData ResultRecoveryData;
    
    USaveData_SSMode();

};

