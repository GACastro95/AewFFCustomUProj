#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "EELNetRole.h"
#include "ELNetObjectInterface.h"
#include "ELNetPlayerController.generated.h"

UCLASS(Blueprintable)
class AELNetPlayerController : public APlayerController, public IELNetObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ELControllerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELNetRole ELNetRole;
    
public:
    AELNetPlayerController();
    UFUNCTION(BlueprintCallable)
    bool SetELNetTemporaryAuthorityBP(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetELNetModeBP(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetELNetAuthorityBP(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetControllerID(int32 NewControllerID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInELNetModeBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasELNetExecAuthorityBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasELNetAuthorityBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetControllerId() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

