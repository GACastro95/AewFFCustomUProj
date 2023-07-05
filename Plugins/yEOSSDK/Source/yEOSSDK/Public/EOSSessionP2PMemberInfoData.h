#pragma once
#include "CoreMinimal.h"
#include "EOSSessionP2PMemberInfoData.generated.h"

USTRUCT(BlueprintType)
struct YEOSSDK_API FEOSSessionP2PMemberInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProductUserID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MemberIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Removed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Disconnected;
    
    FEOSSessionP2PMemberInfoData();
};

