#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SSStormPhaseParam.h"
#include "ELSSStormAnchor.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELSSStormAnchor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSStormPhaseParam phaseParam;
    
public:
    AELSSStormAnchor();
    UFUNCTION(BlueprintCallable)
    void SetParam(const FSSStormPhaseParam& Param);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShrinkDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadiusMeter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetIntervalDuration() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDuration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnnounceDuration() const;
    
};

