#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELLocalTournamentArenaSetting.generated.h"

USTRUCT(BlueprintType)
struct FELLocalTournamentArenaSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ArenaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CustomArenaID;
    
    ABP_200508_API FELLocalTournamentArenaSetting();
};

