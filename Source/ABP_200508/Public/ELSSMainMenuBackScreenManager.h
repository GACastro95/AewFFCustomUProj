#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELSSMainMenuBackScreenManager.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELSSMainMenuBackScreenManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackScreenDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TextureType;
    
public:
    AELSSMainMenuBackScreenManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBackScreenTick(float InDeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
};

