#pragma once
#include "CoreMinimal.h"
#include "YGS2RequestBase.h"
#include "YGS2Req_Ping.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_Ping : public UYGS2RequestBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strAreaName;
    
public:
    UYGS2Req_Ping();
    UFUNCTION(BlueprintCallable)
    void SetAreaName(const FString& _AreaName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPingUpTime_MicroSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPingTime_MicroSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPingDownTime_MicroSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAreaName() const;
    
};

