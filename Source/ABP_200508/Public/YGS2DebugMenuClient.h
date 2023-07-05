#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YGS2CommandData.h"
#include "YGS2DebugMenuClientUpdateDispatcherDelegate.h"
#include "YGS2DebugMenuClient.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UYGS2DebugMenuClient : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYGS2DebugMenuClientUpdateDispatcher DebugMenuClientUpdateDispatcher;
    
    UYGS2DebugMenuClient();
    UFUNCTION(BlueprintCallable)
    FString GetRequestErrorString();
    
    UFUNCTION(BlueprintCallable)
    TArray<FYGS2CommandData> GetCommands();
    
};

