#pragma once
#include "CoreMinimal.h"
#include "ELSSPlayerData.generated.h"

USTRUCT(BlueprintType)
struct FELSSPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playerRegion;
    
    ABP_200508_API FELSSPlayerData();
};

