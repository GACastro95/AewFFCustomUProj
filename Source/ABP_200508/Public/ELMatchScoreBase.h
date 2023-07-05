#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ELMatchScoreBase.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API UELMatchScoreBase : public UActorComponent {
    GENERATED_BODY()
public:
    UELMatchScoreBase();
};

