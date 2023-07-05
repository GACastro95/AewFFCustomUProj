#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ELCareerEventComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API UELCareerEventComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UELCareerEventComponent();
};

