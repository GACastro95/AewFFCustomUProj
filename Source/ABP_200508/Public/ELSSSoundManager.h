#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ELSSManagerActorInterface.h"
#include "ESSAnnounce.h"
#include "ESSDamageSE.h"
#include "ESSHitGroundSE.h"
#include "ESSSpawnPickupSE.h"
#include "ELSSSoundManager.generated.h"

class UAtomComponent;
class UELSSSoundData;
class UMeshComponent;
class USoundAtomCue;

UCLASS(Blueprintable)
class ABP_200508_API AELSSSoundManager : public AActor, public IELSSManagerActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopSEUniqueIdGenerator;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSSoundData* SoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UELSSSoundData> SoundDataSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StatusIsLoadCompleted;
    
    AELSSSoundManager();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopLoopSE(int32 loopSEUniqueId);
    
    UFUNCTION(BlueprintCallable)
    void RequestLoad();
    
    UFUNCTION(BlueprintCallable)
    void PlaySE_SpawnPickup(ESSSpawnPickupSE inSpawnPickupSE, UMeshComponent* inMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void PlaySE_HitGround(ESSHitGroundSE inHitGroundSE, UMeshComponent* inMeshComponent, bool inPlay2D);
    
    UFUNCTION(BlueprintCallable)
    void PlaySE_Damage(ESSDamageSE inDamageSE, UMeshComponent* inMeshComponent, bool inPlay2D);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 PlayLoop3DSE_OutAtomComponent(USoundAtomCue* InCue, UMeshComponent* inMeshComponent, UAtomComponent*& out_AtomComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 PlayLoop3DSE(USoundAtomCue* InCue, UMeshComponent* inMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 PlayLoop2DSE(const FString& CueName);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnnounce(ESSAnnounce inAnnounce);
    
    UFUNCTION(BlueprintCallable)
    void Play3DSEAttached_ForString(const FString& CueName, UMeshComponent* inMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void Play3DSEAtLocation_ForString(const FString& CueName, const FVector& InLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Play3DSE(USoundAtomCue* InCue, UMeshComponent* inMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    void Play2DSE_ForString(const FString& CueName);
    
    UFUNCTION(BlueprintCallable)
    void Play2DSE_ForCueEvent(USoundAtomCue* InCue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadImpl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USoundAtomCue* GetSoundAtomCue_HitGround(ESSHitGroundSE inHitGroundSE, UMeshComponent* inMeshComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USoundAtomCue* GetSoundAtomCue_Damage(ESSDamageSE inDamageSE) const;
    
    UFUNCTION(BlueprintCallable)
    void CompleteLoading();
    
    
    // Fix for true pure virtual functions not being implemented
};

