#pragma once
#include "CoreMinimal.h"
#include "SSMapAreaVolumeInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSMapAreaVolumeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapAreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MiniMapId;
    
    ABP_200508_API FSSMapAreaVolumeInfo();
};

