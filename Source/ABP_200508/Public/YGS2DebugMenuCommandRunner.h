#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYGS2ErrorType.h"
#include "YGS2DebugMenuCommandRunner.generated.h"

class UYGS2RequestBase;

UCLASS(Blueprintable)
class ABP_200508_API UYGS2DebugMenuCommandRunner : public UObject {
    GENERATED_BODY()
public:
    UYGS2DebugMenuCommandRunner();
private:
    UFUNCTION(BlueprintCallable)
    void OnYGS2Response(EYGS2ErrorType _enYGS2ErrorType, UYGS2RequestBase* _pcYGS2RequestBase);
    
public:
    UFUNCTION(BlueprintCallable)
    FString GetRequestErrorString();
    
};

