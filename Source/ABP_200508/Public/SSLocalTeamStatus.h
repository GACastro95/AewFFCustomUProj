#pragma once
#include "CoreMinimal.h"
#include "SSLocalTeamMemberStatus.h"
#include "SSLocalTeamStatus.generated.h"

USTRUCT(BlueprintType)
struct FSSLocalTeamStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSLocalTeamMemberStatus> MemberStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLocalPlayerTeam;
    
    ABP_200508_API FSSLocalTeamStatus();
};

