#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESingletonLaunchType.h"
#include "Templates/SubclassOf.h"
#include "SingletonBase.generated.h"

class USingletonBase;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class ELITE_CORE_API USingletonBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickableWhenPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickableInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESingletonLaunchType LaunchType;
    
public:
    USingletonBase();
    UFUNCTION(BlueprintCallable)
    void SetWorldContextObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePreTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePostTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInitialize();
    
    UFUNCTION(BlueprintCallable)
    static USingletonBase* GetInstance(TSubclassOf<USingletonBase> Class);
    
    UFUNCTION(BlueprintCallable)
    void Destroy();
    
};

