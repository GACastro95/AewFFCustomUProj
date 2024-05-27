#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELWeaponFallMove.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELWeaponFallMove : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFootIKOnly_N;
    
public:
    AELWeaponFallMove(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableFootIKOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeaponHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetFloorCollision(bool IsOnOneFoot, UPrimitiveComponent*& ignoreComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginExcludedFromPlayerCollision(AActor* HitActor);
    
};

