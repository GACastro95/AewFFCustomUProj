#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ELHoldComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ELITE_GAME_API UELHoldComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPutOnHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPutOnFoot;
    
public:
    UELHoldComponent(const FObjectInitializer& ObjectInitializer);

};

