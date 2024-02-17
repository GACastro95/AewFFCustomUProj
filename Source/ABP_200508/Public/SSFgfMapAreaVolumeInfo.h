#pragma once
#include "CoreMinimal.h"
#include "ESSFgfMapAreaType.h"
#include "SSFgfMapAreaVolumeInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSFgfMapAreaVolumeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSFgfMapAreaType FgfMapAreaType;
    
    ABP_200508_API FSSFgfMapAreaVolumeInfo();
};

