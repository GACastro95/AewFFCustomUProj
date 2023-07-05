#pragma once
#include "CoreMinimal.h"
#include "ELAnimNotifyStateBase.h"
#include "ELConstraintParam.h"
#include "Animation/InputScaleBias.h"
#include "ELAnimNotifyState_Attach.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, Config=Game)
class ELITE_API UELAnimNotifyState_Attach : public UELAnimNotifyStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELConstraintParam> List;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FInputRange HeightRange;
    
public:
    UELAnimNotifyState_Attach();
};

