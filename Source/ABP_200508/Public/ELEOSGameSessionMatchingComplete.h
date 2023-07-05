#pragma once
#include "CoreMinimal.h"
#include "ELEOSGameSessionPartyData.h"
#include "ELEOSGameSessionMatchingComplete.generated.h"

USTRUCT(BlueprintType)
struct FELEOSGameSessionMatchingComplete {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PlayersPUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FELEOSGameSessionPartyData> PartyData;
    
    ABP_200508_API FELEOSGameSessionMatchingComplete();
};

