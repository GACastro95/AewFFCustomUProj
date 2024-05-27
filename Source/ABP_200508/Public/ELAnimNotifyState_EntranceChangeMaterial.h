#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ELEntranceChangeMaterialSet.h"
#include "ELAnimNotifyState_EntranceChangeMaterial.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class ABP_200508_API UELAnimNotifyState_EntranceChangeMaterial : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FELEntranceChangeMaterialSet> MaterialSetArray;
    
    UELAnimNotifyState_EntranceChangeMaterial();

};

