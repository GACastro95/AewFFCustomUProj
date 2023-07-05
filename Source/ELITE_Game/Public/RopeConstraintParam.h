#pragma once
#include "CoreMinimal.h"
#include "RopeConstraintParam.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRopeConstraintParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDirX;
    
    ELITE_GAME_API FRopeConstraintParam();
};

