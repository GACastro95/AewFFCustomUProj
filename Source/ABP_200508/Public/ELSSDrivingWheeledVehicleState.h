#pragma once
#include "CoreMinimal.h"
#include "ELSSDrivingState.h"
#include "ELSSDrivingWheeledVehicleState.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ABP_200508_API UELSSDrivingWheeledVehicleState : public UELSSDrivingState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageDrivingPoseL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageDrivingPoseR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageDrivingPoseBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageDrivingPoseBackL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageDrivingPoseBackR;
    
public:
    UELSSDrivingWheeledVehicleState();
};

