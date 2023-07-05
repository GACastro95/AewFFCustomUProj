#pragma once
#include "CoreMinimal.h"
#include "AttireParam.h"
#include "EditBodyParam.h"
#include "EditWrestlerSettings.h"
#include "PresetParam.h"
#include "WrestlerNameString.h"
#include "PersonParamBase.h"
#include "CAWTempParam.generated.h"

USTRUCT(BlueprintType)
struct ELITE_API FCAWTempParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWrestlerNameString EditWrestlerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPersonParamBase PersonParamBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditBodyParam BodyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttireParam DefaultAttire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttireParam ScoutPlainAttire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPresetParam PresetParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditWrestlerSettings EditWrestlerSettings;
    
    FCAWTempParam();
};

