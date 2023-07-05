#pragma once
#include "CoreMinimal.h"
#include "WheeledVehicleMovementComponent4W.h"
#include "ELSSWheeledVehicleMovement.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API UELSSWheeledVehicleMovement : public UWheeledVehicleMovementComponent4W {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ReplicatedRawThrottleInput;
    
public:
    UELSSWheeledVehicleMovement();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUpdateStateExtend(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear, float InRawThrottleInput);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetThrottleInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSteeringInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReplicatedRawThrottleInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrakeInput() const;
    
};

