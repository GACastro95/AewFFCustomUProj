#pragma once
#include "CoreMinimal.h"
#include "FootCtrlParam.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFootCtrlParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Sync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiffHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoreActors;
    
    ABP_200508_API FFootCtrlParam();
};

