#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESSAnnounce.h"
#include "ESSDamageSE.h"
#include "ESSFgfTeamAnnounce.h"
#include "ESSHitGroundSE.h"
#include "ESSRarity.h"
#include "ESSSpawnPickupSE.h"
#include "SSDamageSEData.h"
#include "ELSSSoundData.generated.h"

class AActor;
class UDataTable;
class UMeshComponent;
class USoundAtomCue;

UCLASS(Blueprintable)
class ABP_200508_API UELSSSoundData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DamageSEDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSDamageSE, FSSDamageSEData> DamageSEDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSRarity, USoundAtomCue*> SpawnPickupSE_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSRarity, USoundAtomCue*> SpawnPickupSE_ExpItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSSpawnPickupSE, USoundAtomCue*> SpawnPickupSEAtomCue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OwnerActor;
    
public:
    UELSSSoundData();
    UFUNCTION(BlueprintCallable)
    void SetOwner(AActor* inOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFgfTeamAnnounce(ESSFgfTeamAnnounce inAnnounce, bool isDragonTeam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnnounce(ESSAnnounce inAnnounce);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(AActor* inOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundAtomCue* GetSoundAtomCue_SpawnPickup(ESSSpawnPickupSE inPickupSE) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    USoundAtomCue* GetSoundAtomCue_HitGround(ESSHitGroundSE inHitGroundSE, UMeshComponent* inMeshComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USoundAtomCue* GetSoundAtomCue_Damage(ESSDamageSE inDamageSE) const;
    
};

