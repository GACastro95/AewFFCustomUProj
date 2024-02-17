#pragma once
#include "CoreMinimal.h"
#include "EELLocalTournamentEntryScale.h"
#include "EELLocalTournamentType.h"
#include "ELLocalTournamentBaseSetting.generated.h"

USTRUCT(BlueprintType)
struct FELLocalTournamentBaseSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TournamentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELLocalTournamentType TournamentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELLocalTournamentEntryScale EntryScale;
    
    ABP_200508_API FELLocalTournamentBaseSetting();
};

