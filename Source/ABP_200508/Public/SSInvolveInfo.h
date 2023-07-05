#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSInvolveInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSSInvolveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttackUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CollisionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AttackedActors;
    
    ABP_200508_API FSSInvolveInfo();
};

