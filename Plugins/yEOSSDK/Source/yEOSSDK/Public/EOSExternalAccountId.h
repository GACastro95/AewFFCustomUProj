#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EExternalAccountType.h"
#include "EOSExternalAccountId.generated.h"

USTRUCT(BlueprintType)
struct FEOSExternalAccountId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExternalAccountType AccountIdType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccountId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastLoginTime;
    
    YEOSSDK_API FEOSExternalAccountId();
};

