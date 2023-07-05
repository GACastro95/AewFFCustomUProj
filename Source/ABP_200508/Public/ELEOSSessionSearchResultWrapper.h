#pragma once
#include "CoreMinimal.h"
#include "ELEOSSessionSearchResultWrapper.generated.h"

class UEOSCommunityInfoBase;

USTRUCT(BlueprintType)
struct FELEOSSessionSearchResultWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UEOSCommunityInfoBase*> Results;
    
    ABP_200508_API FELEOSSessionSearchResultWrapper();
};

