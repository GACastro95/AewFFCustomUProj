#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "ECareerAttireType.h"
#include "ECareerEventActionMember.h"
#include "CareerEventMemberInfo.generated.h"

USTRUCT(BlueprintType)
struct FCareerEventMemberInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerEventActionMember MemberType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECareerAttireType Attire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetPointID;
    
    ABP_200508_API FCareerEventMemberInfo();
};

