#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EasyInstancedHelper.generated.h"

class UEasyGameInstanceSubsystem;

UCLASS(Abstract, Blueprintable, Config=Engine, DefaultConfig)
class ELITE_CORE_API UEasyInstancedHelper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegistToDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickableWhenPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEasyGameInstanceSubsystem* OwnerSubsystem;
    
    UEasyInstancedHelper();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeinitialize();
    
};

