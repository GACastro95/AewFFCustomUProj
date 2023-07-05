#pragma once
#include "CoreMinimal.h"
#include "ELAnimNotifyState_HeightOffsetBase.h"
#include "ELAnimNotifyState_HeightOffset.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ABP_200508_API UELAnimNotifyState_HeightOffset : public UELAnimNotifyState_HeightOffsetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetCastID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InBlendSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutBlendSeconds;
    
    UELAnimNotifyState_HeightOffset();
};

