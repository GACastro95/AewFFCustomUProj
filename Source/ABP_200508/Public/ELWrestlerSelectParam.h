#pragma once
#include "CoreMinimal.h"
#include "EELBelt.h"
#include "EFanReaction.h"
#include "ELWrestlerSelectParam.generated.h"

USTRUCT(BlueprintType)
struct FELWrestlerSelectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EELBelt> AttachBeltForEntranceScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MomentumHUDSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFanReaction FanReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsKeyboardManipulate;
    
    ABP_200508_API FELWrestlerSelectParam();
};

