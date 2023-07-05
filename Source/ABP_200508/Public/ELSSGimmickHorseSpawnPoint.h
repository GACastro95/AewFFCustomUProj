#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELSSGimmickInteractable.h"
#include "ELSSGimmickHorseSpawnPoint.generated.h"

class AELSSPlayer;
class UMeshComponent;
class USoundAtomCue;

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSGimmickHorseSpawnPoint : public AELSSGimmickInteractable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractDuration;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnVehicleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnedEffectDatabaseRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsSpawned, meta=(AllowPrivateAccess=true))
    bool isSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SpawnedSound;
    
public:
    AELSSGimmickHorseSpawnPoint();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SpawnVehicle_Server(AELSSPlayer* inInteractPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SpawnVehicle(AELSSPlayer* inInteractPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSpawned(bool NewIsSpawned);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnableGimmick(bool Enable);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnSpawned_Multicast();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetSpawnTransform() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UMeshComponent* GetMesh() const;
    
};

