#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PartIKInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPartIKInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttachTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttachLocation;
    
    ABP_200508_API FPartIKInfo();
};

