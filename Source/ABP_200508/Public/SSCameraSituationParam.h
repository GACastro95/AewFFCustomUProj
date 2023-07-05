#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSCameraSituationParam.generated.h"

USTRUCT(BlueprintType)
struct FSSCameraSituationParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RestrictUserCameraRotation;
    
    ABP_200508_API FSSCameraSituationParam();
};

