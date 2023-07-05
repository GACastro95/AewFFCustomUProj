#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildBodyNodeTS.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FBuildBodyNodeTS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Scale;
    
    FBuildBodyNodeTS();
};

