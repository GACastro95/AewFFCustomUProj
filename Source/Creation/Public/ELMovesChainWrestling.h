#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesChainWrestlingLoop.h"
#include "ELMovesChainWrestlingStart.h"
#include "ELMovesChainWrestling.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesChainWrestling : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesChainWrestlingStart Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesChainWrestlingStart Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesChainWrestlingLoop ArmWringer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesChainWrestlingLoop SideHeadLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesChainWrestlingLoop HammerLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELMovesChainWrestlingLoop DownSideHeadLock;
    
    FELMovesChainWrestling();
};

