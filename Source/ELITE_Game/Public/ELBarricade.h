#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELBarricade.generated.h"

UCLASS(Blueprintable)
class ELITE_GAME_API AELBarricade : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedCheckCanClimbEdge;
    
public:
    AELBarricade(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsEnableClimbUseImpl(bool& Out_IsEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsConditionImpl_Normal(bool& Out_IsNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsConditionImpl_LittleDiagonal(bool& Out_IsDiagonal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsConditionImpl_Fallendown(bool& Out_IsFallendown);
    
};

