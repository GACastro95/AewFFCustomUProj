#pragma once
#include "CoreMinimal.h"
#include "EYGS2GetInfoStatus.h"
#include "YGS2RequestBase.h"
#include "YGS2Req_GetInfo.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_GetInfo : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_GetInfo();
    UFUNCTION(BlueprintCallable)
    void SetAccountInfo(const FString& EpicAccountID, const FString& ProductUserID, const FString& EOSIDHash);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYGS2GetInfoStatus GetStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetServerVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetServerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetServerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPermission() const;
    
};

