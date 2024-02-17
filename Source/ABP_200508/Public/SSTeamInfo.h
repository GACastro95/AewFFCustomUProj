#pragma once
#include "CoreMinimal.h"
#include "SSTeamMemberInfo.h"
#include "SSTeamInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSTeamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSTeamMemberInfo> Member;
    
    ABP_200508_API FSSTeamInfo();
};

