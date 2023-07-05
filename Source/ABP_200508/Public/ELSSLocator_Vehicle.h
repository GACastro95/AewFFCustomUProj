#pragma once
#include "CoreMinimal.h"
#include "ELSSLocator.h"
#include "ESSVehicleLocatorGroup.h"
#include "ELSSLocator_Vehicle.generated.h"

class AActor;

UCLASS(Blueprintable)
class ABP_200508_API AELSSLocator_Vehicle : public AELSSLocator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSVehicleLocatorGroup LocatorGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedVehicle;
    
public:
    AELSSLocator_Vehicle();
};

