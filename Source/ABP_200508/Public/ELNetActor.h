#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EELNetRole.h"
#include "ELNetObjectInterface.h"
#include "ELNetActor.generated.h"

UCLASS(Blueprintable)
class AELNetActor : public AActor, public IELNetObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELNetRole ELNetRole;
    
public:
    AELNetActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetELNetTemporaryAuthorityBP(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetELNetModeBP(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetELNetAuthorityBP(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInELNetModeBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasELNetExecAuthorityBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasELNetAuthorityBP();
    

    // Fix for true pure virtual functions not being implemented
};

