#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELSSSilhouetteActor.generated.h"

class AELSSPlayer;

UCLASS(Blueprintable)
class ABP_200508_API AELSSSilhouetteActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayer* TargetPlayer;
    
public:
    AELSSSilhouetteActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdatePose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTargetPlayer(AELSSPlayer* inTargetPlayer);
    
};

