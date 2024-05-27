#pragma once
#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "ELSceneCaptureComponent2D.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ELITE_CORE_API UELSceneCaptureComponent2D : public USceneCaptureComponent2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StreamingFactor;
    
    UELSceneCaptureComponent2D(const FObjectInitializer& ObjectInitializer);

};

