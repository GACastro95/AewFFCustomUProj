#pragma once
#include "CoreMinimal.h"
#include "EOSInstanceBase.h"
#include "SSModeAntiCheatData.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API USSModeAntiCheatData : public UEOSInstanceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueNetID;
    
    USSModeAntiCheatData();
};

