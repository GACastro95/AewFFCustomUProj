#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "UserArrowComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API UUserArrowComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UUserArrowComponent(const FObjectInitializer& ObjectInitializer);

};

