#pragma once
#include "CoreMinimal.h"
#include "AttireParam.h"
#include "CostumeParam.h"
#include "PresetParam.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FPresetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttireParam RingAttire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttireParam EntranceAttire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCostumeParam RosterAttire;
    
    FPresetParam();
};

