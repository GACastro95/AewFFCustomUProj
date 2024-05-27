#pragma once
#include "CoreMinimal.h"
#include "ELAnimNotifyState_HeightOffsetBase.h"
#include "ELAnimNotifyState_HeightOffsetToMedium.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ABP_200508_API UELAnimNotifyState_HeightOffsetToMedium : public UELAnimNotifyState_HeightOffsetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InBlendSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutBlendSeconds;
    
    UELAnimNotifyState_HeightOffsetToMedium();

};

