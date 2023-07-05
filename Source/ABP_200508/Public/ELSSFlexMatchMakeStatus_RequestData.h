#pragma once
#include "CoreMinimal.h"
#include "ELSSFlexMatchMakeStatus_RequestData.generated.h"

USTRUCT(BlueprintType)
struct FELSSFlexMatchMakeStatus_RequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TicketId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequestID;
    
    ABP_200508_API FELSSFlexMatchMakeStatus_RequestData();
};

