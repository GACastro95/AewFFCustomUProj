#pragma once
#include "CoreMinimal.h"
#include "YGS2AnalyticsData.h"
#include "YGS2RequestBase.h"
#include "YGS2Req_Analytics.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_Analytics : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_Analytics();

    UFUNCTION(BlueprintCallable)
    void SetAnalyticsData(const FYGS2AnalyticsData& _stAnalyticsData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetResultID() const;
    
};

