#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyWrestlerDataEditComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CREATION_API UMyWrestlerDataEditComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMyWrestlerDataEditComponent();
};

