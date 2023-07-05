#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SSSyncStatusForWatch_Owner.generated.h"

USTRUCT(BlueprintType)
struct FSSSyncStatusForWatch_Owner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 CameraDirection;
    
    ABP_200508_API FSSSyncStatusForWatch_Owner();
};

