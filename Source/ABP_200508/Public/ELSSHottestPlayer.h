#pragma once
#include "CoreMinimal.h"
#include "WrestlerSetupParam.h"
#include "ELSSActorCommonInterface.h"
#include "ELSSCharacter.h"
#include "SSWrestlerSetupParam.h"
#include "ELSSHottestPlayer.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ABP_200508_API AELSSHottestPlayer : public AELSSCharacter, public IELSSActorCommonInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWrestlerSetupParam SSWrestlerSetupParam;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CostumeID;
    
public:
    AELSSHottestPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    float PlayMotion(UAnimMontage* PlayMontage);
    
    UFUNCTION(BlueprintCallable)
    FSSWrestlerSetupParam GetSSWrestlerSetupParam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCostumeID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FWrestlerSetupParam CreateWrestlerSetupParam(const FSSWrestlerSetupParam& inSSWrestlerSetupParam) const;
    

    // Fix for true pure virtual functions not being implemented
};

