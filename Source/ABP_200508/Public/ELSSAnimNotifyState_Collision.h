#pragma once
#include "CoreMinimal.h"
#include "ELSSAnimNotifyStateBase.h"
#include "ELSSAnimNotifyState_Collision.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ABP_200508_API UELSSAnimNotifyState_Collision : public UELSSAnimNotifyStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveCollisionHeightScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveCollisionRadiusScale;
    
public:
    UELSSAnimNotifyState_Collision();
};

