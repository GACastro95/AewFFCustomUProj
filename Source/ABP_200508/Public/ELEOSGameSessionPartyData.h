#pragma once
#include "CoreMinimal.h"
#include "ELEOSGameSessionPartyData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FELEOSGameSessionPartyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PartyOwnerPUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* PartyDataObject;
    
    ABP_200508_API FELEOSGameSessionPartyData();
};

