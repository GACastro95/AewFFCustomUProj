#pragma once
#include "CoreMinimal.h"
#include "CareerSnapshotImage.generated.h"

USTRUCT(BlueprintType)
struct FCareerSnapshotImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> PhotoData;
    
    ABP_200508_API FCareerSnapshotImage();
};

