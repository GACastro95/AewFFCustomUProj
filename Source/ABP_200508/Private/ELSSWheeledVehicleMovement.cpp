#include "ELSSWheeledVehicleMovement.h"
#include "Net/UnrealNetwork.h"

void UELSSWheeledVehicleMovement::ServerUpdateStateExtend_Implementation(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear, float InRawThrottleInput) {
}

float UELSSWheeledVehicleMovement::GetThrottleInput() const {
    return 0.0f;
}

float UELSSWheeledVehicleMovement::GetSteeringInput() const {
    return 0.0f;
}

float UELSSWheeledVehicleMovement::GetReplicatedRawThrottleInput() const {
    return 0.0f;
}

float UELSSWheeledVehicleMovement::GetBrakeInput() const {
    return 0.0f;
}

void UELSSWheeledVehicleMovement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UELSSWheeledVehicleMovement, ReplicatedRawThrottleInput);
}

UELSSWheeledVehicleMovement::UELSSWheeledVehicleMovement() {
    this->ReplicatedRawThrottleInput = 0.00f;
}

