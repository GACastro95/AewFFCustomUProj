#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EOSPlayerSanction.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSPlayerSanction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime TimePlaced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Action;
    
    FEOSPlayerSanction();
};

