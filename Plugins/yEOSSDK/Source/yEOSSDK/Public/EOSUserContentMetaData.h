#pragma once
#include "CoreMinimal.h"
#include "EOSUserContentMetaData.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSUserContentMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Hash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FileSize;
    
    FEOSUserContentMetaData();
};

