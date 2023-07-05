#pragma once
#include "CoreMinimal.h"
#include "ELMoves_Finisher.h"
#include "CreateTeamMemberInfo.h"
#include "InGameTagFinisher.generated.h"

USTRUCT(BlueprintType)
struct FInGameTagFinisher {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateTeamMemberInfo TagPartner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMoves_Finisher Finisher;
    
    ABP_200508_API FInGameTagFinisher();
};

