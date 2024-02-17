#pragma once
#include "CoreMinimal.h"
#include "WrestlerSetupParam.h"
#include "EWrestlerID_N.h"
#include "Components/ActorComponent.h"
#include "SSWrestlerSetupParam.h"
#include "ELSSCharacterSetupComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API UELSSCharacterSetupComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UELSSCharacterSetupComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateDefaultMotion(EWrestlerID_N inWrestlerId, const FWrestlerSetupParam& inWrestlerSetupParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupMesh(EWrestlerID_N inWrestlerId, const FSSWrestlerSetupParam& inWrestlerSetupParam, bool inUGCLimit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBlockedUserUGC(const FSSWrestlerSetupParam& inWrestlerSetupParam) const;
    
};

