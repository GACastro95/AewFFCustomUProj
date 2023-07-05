#pragma once
#include "CoreMinimal.h"
#include "YGS2RequestBase.h"
#include "YGS2SSPlayerData.h"
#include "YGS2Req_SetSSPlayerData.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_SetSSPlayerData : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_SetSSPlayerData();
    UFUNCTION(BlueprintCallable)
    void SetPlayerData(FYGS2SSPlayerData Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYGS2SSPlayerData GetPlayerData() const;
    
};

