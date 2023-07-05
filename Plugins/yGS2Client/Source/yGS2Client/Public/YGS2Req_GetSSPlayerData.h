#pragma once
#include "CoreMinimal.h"
#include "YGS2RequestBase.h"
#include "YGS2SSPlayerData.h"
#include "YGS2Req_GetSSPlayerData.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_GetSSPlayerData : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_GetSSPlayerData();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYGS2SSPlayerData GetPlayerData() const;
    
};

