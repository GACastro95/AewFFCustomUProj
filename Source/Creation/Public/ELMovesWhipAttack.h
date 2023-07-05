#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesWhipAttackPart.h"
#include "ELMovesWhipAttack.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesWhipAttack : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesWhipAttackPart Front_Stand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesWhipAttackPart Back_Stand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesWhipAttackPart Front_HandStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesWhipAttackPart Back_HandStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesWhipAttackPart Front_StandLeftHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesWhipAttackPart Front_StandRightHead;
    
    FELMovesWhipAttack();
};

