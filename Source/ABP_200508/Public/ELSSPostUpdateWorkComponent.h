#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ELSSPostUpdateWorkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API UELSSPostUpdateWorkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UELSSPostUpdateWorkComponent(const FObjectInitializer& ObjectInitializer);

};

