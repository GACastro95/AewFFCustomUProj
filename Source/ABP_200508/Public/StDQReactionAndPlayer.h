#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERefereeDQReactionKind_N.h"
#include "StDQReactionAndPlayer.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FStDQReactionAndPlayer : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERefereeDQReactionKind_N Reaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Player;
    
    ABP_200508_API FStDQReactionAndPlayer();
};

