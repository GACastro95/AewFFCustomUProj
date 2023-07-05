#pragma once
#include "CoreMinimal.h"
#include "SSNearInteractableObjectStatus.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSSNearInteractableObjectStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    ABP_200508_API FSSNearInteractableObjectStatus();
};

