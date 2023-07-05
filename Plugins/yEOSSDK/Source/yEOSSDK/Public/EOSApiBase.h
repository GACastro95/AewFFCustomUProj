#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOSAPIBaseEventDispatcharDelegate.h"
#include "EOSApiBase.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSApiBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSAPIBaseEventDispatchar EOSAPIBaseEventDispatchar;
    
    UEOSApiBase();
};

