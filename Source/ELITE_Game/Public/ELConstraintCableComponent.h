#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "RopeConstraintParam.h"
#include "ELConstraintCableComponent.generated.h"

class AActor;
class UAnimMontage;
class UAnimSequenceBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ELITE_GAME_API UELConstraintCableComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FRopeConstraintParam> Constraints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftClassPath> TriggerNotifyStateClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckInsideOfMontageAnimNotifyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString KeyNamePrefix;
    
public:
    UELConstraintCableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateConstraintLocation(const FName SocketName, const FVector SocketLocation, const AActor* Actor, const bool bDirX);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstraintStarted(const FName SocketName, const FRopeConstraintParam& Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstraintFinished(const AActor* Actor, const FName SocketName);
    
    UFUNCTION(BlueprintCallable)
    void Constraint_Start(UAnimSequenceBase* Animation, const FName SocketName, AActor* RopeActor, const bool bDirX);
    
    UFUNCTION(BlueprintCallable)
    void Constraint_FinishArray(UAnimSequenceBase* Animation, const TArray<FName>& SocketNames);
    
    UFUNCTION(BlueprintCallable)
    void Constraint_Finish(UAnimSequenceBase* Animation, const FName SocketName);
    
private:
    UFUNCTION(BlueprintCallable)
    void AutoConstraintFinish(UAnimMontage* Montage, bool bInterrupted);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AllConstraint_Finish(UAnimSequenceBase* Animation);
    
};

