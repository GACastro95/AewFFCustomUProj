#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ESSVehicleType.h"
#include "ELSSVehicleInterface.generated.h"

class AELSSPlayer;

UINTERFACE(Blueprintable)
class UELSSVehicleInterface : public UInterface {
    GENERATED_BODY()
};

class IELSSVehicleInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGetOn(AELSSPlayer* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGetOff(AELSSPlayer* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ESSVehicleType GetVehicleType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSpeedPerHour() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetRemainDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetMaxDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetActorCameraBasisLocation() const;
    
};

