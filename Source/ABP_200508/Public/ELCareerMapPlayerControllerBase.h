#pragma once
#include "CoreMinimal.h"
#include "ELMenuPlayerControllerBase.h"
#include "OnTransderOperateInputDelegate.h"
#include "ELCareerMapPlayerControllerBase.generated.h"

class APawn;
class UInputComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELCareerMapPlayerControllerBase : public AELMenuPlayerControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransderOperateInput OnTransderOperateInput;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* m_InputComponent;
    
public:
    AELCareerMapPlayerControllerBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void TransferOperatePawn(APawn* ApplyPawn);
    
public:
    UFUNCTION(BlueprintCallable)
    void BroadcastApplyPawn(APawn* ApplyPawn);
    
};

