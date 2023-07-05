#pragma once
#include "CoreMinimal.h"
#include "ELSSLobbyData.generated.h"

USTRUCT(BlueprintType)
struct FELSSLobbyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> selectSpawnPointCount;
    
    ABP_200508_API FELSSLobbyData();
};

