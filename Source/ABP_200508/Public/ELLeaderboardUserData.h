#pragma once
#include "CoreMinimal.h"
#include "EExternalAccountType.h"
#include "EOSLeaderboardsRecordData.h"
#include "ELLeaderboardUserData.generated.h"

USTRUCT(BlueprintType)
struct FELLeaderboardUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSLeaderboardsRecordData Record;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExternalAccountType AccountIdType;
    
    ABP_200508_API FELLeaderboardUserData();
};

