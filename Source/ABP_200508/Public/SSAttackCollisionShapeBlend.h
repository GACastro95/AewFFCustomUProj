#pragma once
#include "CoreMinimal.h"
#include "ELSSAttackShapeParam.h"
#include "SSAttackCollisionShapeBlend.generated.h"

USTRUCT(BlueprintType)
struct FSSAttackCollisionShapeBlend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTimeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELSSAttackShapeParam> StartShapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELSSAttackShapeParam> BlendParams;
    
    ABP_200508_API FSSAttackCollisionShapeBlend();
};

