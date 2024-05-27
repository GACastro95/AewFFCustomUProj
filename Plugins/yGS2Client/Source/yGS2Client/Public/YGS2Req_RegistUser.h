#pragma once
#include "CoreMinimal.h"
#include "YGS2RequestBase.h"
#include "YGS2Req_RegistUser.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_RegistUser : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_RegistUser();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSecret() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetKey() const;
    
};

