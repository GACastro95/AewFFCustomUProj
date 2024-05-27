#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "EELNetRole.h"
#include "ELNetObjectInterface.h"
#include "ELNetworkGUID.h"
#include "ELNetGameState.generated.h"

class AActor;
class UELReplicationComponent;
class UELReplicationManager;

UCLASS(Blueprintable)
class AELNetGameState : public AGameState, public IELNetObjectInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELNetRole ELNetRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELReplicationComponent* ReplicationRPCComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELReplicationComponent* ReplicationPropertyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELReplicationManager* ReplicationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldTimeSecondsFromStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldRealTimeSecondsFromStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RealDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaledRealDeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RealDeltaTimeAverageInner;
    
public:
    AELNetGameState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ToggleUseFixedFrameRate();
    
    UFUNCTION(BlueprintCallable)
    void SetUseFixedFrameRate(bool bUseFixedFrameRate);
    
    UFUNCTION(BlueprintCallable)
    void SetNetActorTickOrder(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    bool SetELNetTemporaryAuthorityBP(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetELNetModeBP(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetELNetAuthorityBP(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInELNetModeBP();
    
    UFUNCTION(BlueprintCallable)
    void InitializeWorldTimeSeconds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasELNetExecAuthorityBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasELNetAuthorityBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWorldTimeSecondsFromStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWorldRealTimeSecondsFromStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScaledRealDeltaTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UELReplicationManager* GetReplicationManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRealDeltaTime() const;
    
    UFUNCTION(BlueprintCallable)
    FELNetworkGUID GetNextReplicationGuid();
    

    // Fix for true pure virtual functions not being implemented
};

