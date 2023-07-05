#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StPassiveSkillData.h"
#include "ELPlayerEffectBase.generated.h"

class UDataTable;
class UParticleSystem;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API UELPlayerEffectBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EffectDataTable;
    
    UELPlayerEffectBase();
    UFUNCTION(BlueprintCallable)
    void Setup(int32 ControllerId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PassiveSkillEvent_BP(const FStPassiveSkillData& PassiveSkillData);
    
    UFUNCTION(BlueprintCallable)
    UParticleSystem* GetReversalEffect();
    
    UFUNCTION(BlueprintCallable)
    UParticleSystem* GetPassiveSkillEffect();
    
    UFUNCTION(BlueprintCallable)
    UParticleSystem* GetNoDownEffect();
    
    UFUNCTION(BlueprintCallable)
    UParticleSystem* GetGuardBreakEffect();
    
};

