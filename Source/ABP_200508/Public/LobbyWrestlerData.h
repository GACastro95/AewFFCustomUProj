#pragma once
#include "CoreMinimal.h"
#include "LobbyWrestlerData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FLobbyWrestlerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> WrestlerArray;
    
    ABP_200508_API FLobbyWrestlerData();
};

