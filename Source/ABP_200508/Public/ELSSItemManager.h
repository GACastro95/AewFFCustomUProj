#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ELSSManagerActorInterface.h"
#include "ESSItemBoxType.h"
#include "ESSJewelSpawnReason.h"
#include "ESSRarity.h"
#include "ESSSpawnItemCategory.h"
#include "ESSSpawnPickupReason.h"
#include "SSItemBoxParam.h"
#include "SSItemBoxSpawnParamForRound.h"
#include "SSLotRarityParam.h"
#include "SSRoundParam.h"
#include "Templates/SubclassOf.h"
#include "ELSSItemManager.generated.h"

class AELSSItemBase;
class AELSSItemBox;
class AELSSLocator_ItemBox;
class AELSSPickupBase;
class AELSSPlayer;
class AELSSShieldBase;
class AELSSWeaponBase;
class UDataTable;
class UELSSMasterData;

UCLASS(Blueprintable)
class ABP_200508_API AELSSItemManager : public AActor, public IELSSManagerActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttentionExpItem_SpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttentionExpItem_SpawnVelocityXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttentionExpItem_SpawnVelocityZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttentionExpItem_GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FrontOfActor_SpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontOfActor_SpawnVelocityXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontOfActor_SpawnVelocityZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontOfActor_GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSItemBox*> TeamTreasureBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SpawnedTeamTreasureBoxTeamIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSWeaponBase> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSWeaponBase> WeaponMeleeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSWeaponBase> WeaponGunClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSWeaponBase> WeaponThrowClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSWeaponBase> WeaponTrapClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSWeaponBase> WeaponFgfBallClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSShieldBase> ShieldClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultSpawnVelocityXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultSpawnVelocityZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickupCanTouchReservedTime_Attention;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickupCanTouchReservedTime_Gimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickupCanTouchReservedTime_ItemBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELSSMasterData* MasterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ExcludedPikcup_HpItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ExcludedPikcup_ExpItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ExcludedPikcup_ShieldItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ExcludedPikcup_OtherItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ExcludedPikcup_Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ExcludedPikcup_Jewel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSItemBoxSpawnParamForRound> ItemBoxSpawnParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LotRarityParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSLotRarityParam> LotRarityParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ItemBoxParamTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSItemBoxParam> ItemBoxParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TreasureBoxItemSpawnVelocityXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TreasureBoxItemSpawnVelocityZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TreasureBoxItemSpawnGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> LoadRequestItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AELSSItemBase> itemptrtest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath pathtest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, TSubclassOf<AELSSItemBase>> LoadedItemClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ReservedJewelItemIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSItemBox*> ValidItemBoxList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSPickupBase*> ValidPickupList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSPickupBase*> ValidCarrotList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSPickupBase*> ValidBlackDiaList;
    
public:
    AELSSItemManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<AActor*> SpawnSpecifiedNumFromItemBox(ESSItemBoxType inItemBoxType, int32 inSpawnNum, const FVector& InLocation, const FRotator& InRotation);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnPickupWeaponObject(int32 inDatabaseId, const FVector& InLocation, const FRotator& InRotation, ESSSpawnPickupReason inReason);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnPickupShieldObject(int32 inDatabaseId, const FVector& InLocation, const FRotator& InRotation, ESSSpawnPickupReason inReason);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> SpawnPickupObjectsFromItemBox(ESSItemBoxType inItemBoxType, const FVector& InLocation, const FRotator& InRotation);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnPickupItemObject(int32 inDatabaseId, const FVector& InLocation, const FRotator& InRotation, ESSSpawnPickupReason inReason);
    
    UFUNCTION(BlueprintCallable)
    void SpawnItemBoxFromRound(FSSItemBoxSpawnParamForRound& inSpawnParam);
    
    UFUNCTION(BlueprintCallable)
    void SpawnItemBoxFromFgf(bool first, int32 SpawnNum, int32 filterId);
    
    UFUNCTION(BlueprintCallable)
    void SpawnItemBoxFromAbility(ESSItemBoxType InType, int32 InTeamId, const FVector& InLocation, const FRotator& InRotation);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnItemBox(ESSItemBoxType InType, int32 InTeamId, AELSSLocator_ItemBox* inLocator, bool inSkipAnim);
    
    UFUNCTION(BlueprintCallable)
    void SpawnExpItemFromAttention(AActor* inPlayerActor, int32 inExpItemLotGroupID);
    
    UFUNCTION(BlueprintCallable)
    void OnTickRound(const FSSRoundParam& inRoundParam, float newRoundTime, float prevRoundTime);
    
    UFUNCTION(BlueprintCallable)
    void OnEndRound(const FSSRoundParam& inRoundParam);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginRound(const FSSRoundParam& inRoundParam);
    
    UFUNCTION(BlueprintCallable)
    int32 LotWeapon(int32 inLotGroupID, ESSRarity inRarity);
    
    UFUNCTION(BlueprintCallable)
    int32 LotSpawnNumByItemBoxType(ESSItemBoxType inItemBoxType);
    
    UFUNCTION(BlueprintCallable)
    int32 LotSpawnNum(int32 inLotGroupID);
    
    UFUNCTION(BlueprintCallable)
    ESSRarity LotRarity(int32 inLotGroupID);
    
    UFUNCTION(BlueprintCallable)
    ESSSpawnItemCategory LotItemCategory(int32 inLotGroupID);
    
    UFUNCTION(BlueprintCallable)
    int32 LotItem(int32 inLotGroupID, ESSSpawnItemCategory inCategory);
    
    UFUNCTION(BlueprintCallable)
    bool LotAndSpawnJewel_NotLaunch(ESSJewelSpawnReason inReason, const FVector& InLocation, const FRotator& InRotation, AELSSPlayer* inDamageCauser, TArray<AELSSPickupBase*>& outPickups, bool withResetArray);
    
    UFUNCTION(BlueprintCallable)
    bool LotAndSpawnJewel(ESSJewelSpawnReason inReason, const FVector& InLocation, const FRotator& InRotation, AELSSPlayer* inDamageCauser);
    
    UFUNCTION(BlueprintCallable)
    bool LotAndReserveJewel(ESSJewelSpawnReason inReason, AELSSPlayer* inDamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void LoadAsyncItemClasses();
    
    UFUNCTION(BlueprintCallable)
    void LaunchPickupObject(AActor* inPickupObject, const FVector& InVelocity, float inGravityScale, bool inCanTouchImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadCompleted() const;
    
    UFUNCTION(BlueprintCallable)
    TSubclassOf<AActor> GetPickupObjectClass(ESSSpawnItemCategory inCategory, int32 inDatabaseId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<AELSSItemBox> GetItemBoxClass(ESSItemBoxType InType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalcScatterLaunchVelocityDefault(const FRotator& inBaseRotation, int32 inSpawnNum, int32 inSpawnIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalcScatterLaunchVelocity(const FRotator& inBaseRotation, int32 inSpawnNum, int32 inSpawnIndex, float inVelocityXY, float inVelocityZ) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalcLaunchVelocity(const FRotator& inBaseRotation, float inVelocityXY, float inVelocityZ) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform CalcAbilityItemBoxLocation(const FVector& inOriginLocation, const FRotator& inOriginRotation);
    

    // Fix for true pure virtual functions not being implemented
};

