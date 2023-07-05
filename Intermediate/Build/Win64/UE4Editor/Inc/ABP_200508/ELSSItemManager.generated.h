// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
struct FVector;
struct FRotator;
enum class ESSSpawnItemCategory : uint8;
class AActor;
enum class ESSRarity : uint8;
enum class ESSItemBoxType : uint8;
struct FSSRoundParam;
class AELSSLocator_ItemBox;
struct FSSItemBoxSpawnParamForRound;
enum class ESSSpawnPickupReason : uint8;
class AELSSItemBox;
#ifdef ABP_200508_ELSSItemManager_generated_h
#error "ELSSItemManager.generated.h already included, missing '#pragma once' in ELSSItemManager.h"
#endif
#define ABP_200508_ELSSItemManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_RPC_WRAPPERS \
	virtual FTransform CalcAbilityItemBoxLocation_Implementation(FVector const& inOriginLocation, FRotator const& inOriginRotation); \
 \
	DECLARE_FUNCTION(execCalcAbilityItemBoxLocation); \
	DECLARE_FUNCTION(execCalcLaunchVelocity); \
	DECLARE_FUNCTION(execCalcScatterLaunchVelocity); \
	DECLARE_FUNCTION(execCalcScatterLaunchVelocityDefault); \
	DECLARE_FUNCTION(execGetPickupObjectClass); \
	DECLARE_FUNCTION(execIsLoadCompleted); \
	DECLARE_FUNCTION(execLaunchPickupObject); \
	DECLARE_FUNCTION(execLoadAsyncItemClasses); \
	DECLARE_FUNCTION(execLotItem); \
	DECLARE_FUNCTION(execLotItemCategory); \
	DECLARE_FUNCTION(execLotRarity); \
	DECLARE_FUNCTION(execLotSpawnNum); \
	DECLARE_FUNCTION(execLotSpawnNumByItemBoxType); \
	DECLARE_FUNCTION(execLotWeapon); \
	DECLARE_FUNCTION(execOnBeginRound); \
	DECLARE_FUNCTION(execOnEndRound); \
	DECLARE_FUNCTION(execOnTickRound); \
	DECLARE_FUNCTION(execSpawnExpItemFromAttention); \
	DECLARE_FUNCTION(execSpawnItemBox); \
	DECLARE_FUNCTION(execSpawnItemBoxFromAbility); \
	DECLARE_FUNCTION(execSpawnItemBoxFromRound); \
	DECLARE_FUNCTION(execSpawnPickupItemObject); \
	DECLARE_FUNCTION(execSpawnPickupObjectsFromItemBox); \
	DECLARE_FUNCTION(execSpawnPickupShieldObject); \
	DECLARE_FUNCTION(execSpawnPickupWeaponObject); \
	DECLARE_FUNCTION(execSpawnSpecifiedNumFromItemBox);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FTransform CalcAbilityItemBoxLocation_Implementation(FVector const& inOriginLocation, FRotator const& inOriginRotation); \
 \
	DECLARE_FUNCTION(execCalcAbilityItemBoxLocation); \
	DECLARE_FUNCTION(execCalcLaunchVelocity); \
	DECLARE_FUNCTION(execCalcScatterLaunchVelocity); \
	DECLARE_FUNCTION(execCalcScatterLaunchVelocityDefault); \
	DECLARE_FUNCTION(execGetPickupObjectClass); \
	DECLARE_FUNCTION(execIsLoadCompleted); \
	DECLARE_FUNCTION(execLaunchPickupObject); \
	DECLARE_FUNCTION(execLoadAsyncItemClasses); \
	DECLARE_FUNCTION(execLotItem); \
	DECLARE_FUNCTION(execLotItemCategory); \
	DECLARE_FUNCTION(execLotRarity); \
	DECLARE_FUNCTION(execLotSpawnNum); \
	DECLARE_FUNCTION(execLotSpawnNumByItemBoxType); \
	DECLARE_FUNCTION(execLotWeapon); \
	DECLARE_FUNCTION(execOnBeginRound); \
	DECLARE_FUNCTION(execOnEndRound); \
	DECLARE_FUNCTION(execOnTickRound); \
	DECLARE_FUNCTION(execSpawnExpItemFromAttention); \
	DECLARE_FUNCTION(execSpawnItemBox); \
	DECLARE_FUNCTION(execSpawnItemBoxFromAbility); \
	DECLARE_FUNCTION(execSpawnItemBoxFromRound); \
	DECLARE_FUNCTION(execSpawnPickupItemObject); \
	DECLARE_FUNCTION(execSpawnPickupObjectsFromItemBox); \
	DECLARE_FUNCTION(execSpawnPickupShieldObject); \
	DECLARE_FUNCTION(execSpawnPickupWeaponObject); \
	DECLARE_FUNCTION(execSpawnSpecifiedNumFromItemBox);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_EVENT_PARMS \
	struct ELSSItemManager_eventCalcAbilityItemBoxLocation_Parms \
	{ \
		FVector inOriginLocation; \
		FRotator inOriginRotation; \
		FTransform ReturnValue; \
	}; \
	struct ELSSItemManager_eventGetItemBoxClass_Parms \
	{ \
		ESSItemBoxType InType; \
		TSubclassOf<AELSSItemBox>  ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSItemManager_eventGetItemBoxClass_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSItemManager(); \
	friend struct Z_Construct_UClass_AELSSItemManager_Statics; \
public: \
	DECLARE_CLASS(AELSSItemManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSItemManager) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSItemManager*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAELSSItemManager(); \
	friend struct Z_Construct_UClass_AELSSItemManager_Statics; \
public: \
	DECLARE_CLASS(AELSSItemManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSItemManager) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSItemManager*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSItemManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSItemManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSItemManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSItemManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSItemManager(AELSSItemManager&&); \
	NO_API AELSSItemManager(const AELSSItemManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSItemManager(AELSSItemManager&&); \
	NO_API AELSSItemManager(const AELSSItemManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSItemManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSItemManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSItemManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AttentionExpItem_SpawnOffset() { return STRUCT_OFFSET(AELSSItemManager, AttentionExpItem_SpawnOffset); } \
	FORCEINLINE static uint32 __PPO__AttentionExpItem_SpawnVelocityXY() { return STRUCT_OFFSET(AELSSItemManager, AttentionExpItem_SpawnVelocityXY); } \
	FORCEINLINE static uint32 __PPO__AttentionExpItem_SpawnVelocityZ() { return STRUCT_OFFSET(AELSSItemManager, AttentionExpItem_SpawnVelocityZ); } \
	FORCEINLINE static uint32 __PPO__AttentionExpItem_GravityScale() { return STRUCT_OFFSET(AELSSItemManager, AttentionExpItem_GravityScale); } \
	FORCEINLINE static uint32 __PPO__WeaponClass() { return STRUCT_OFFSET(AELSSItemManager, WeaponClass); } \
	FORCEINLINE static uint32 __PPO__WeaponMeleeClass() { return STRUCT_OFFSET(AELSSItemManager, WeaponMeleeClass); } \
	FORCEINLINE static uint32 __PPO__WeaponGunClass() { return STRUCT_OFFSET(AELSSItemManager, WeaponGunClass); } \
	FORCEINLINE static uint32 __PPO__WeaponThrowClass() { return STRUCT_OFFSET(AELSSItemManager, WeaponThrowClass); } \
	FORCEINLINE static uint32 __PPO__WeaponTrapClass() { return STRUCT_OFFSET(AELSSItemManager, WeaponTrapClass); } \
	FORCEINLINE static uint32 __PPO__ShieldClass() { return STRUCT_OFFSET(AELSSItemManager, ShieldClass); } \
	FORCEINLINE static uint32 __PPO__DefaultSpawnVelocityXY() { return STRUCT_OFFSET(AELSSItemManager, DefaultSpawnVelocityXY); } \
	FORCEINLINE static uint32 __PPO__DefaultSpawnVelocityZ() { return STRUCT_OFFSET(AELSSItemManager, DefaultSpawnVelocityZ); } \
	FORCEINLINE static uint32 __PPO__DefaultGravityScale() { return STRUCT_OFFSET(AELSSItemManager, DefaultGravityScale); } \
	FORCEINLINE static uint32 __PPO__PickupCanTouchReservedTime_Attention() { return STRUCT_OFFSET(AELSSItemManager, PickupCanTouchReservedTime_Attention); } \
	FORCEINLINE static uint32 __PPO__PickupCanTouchReservedTime_Gimmick() { return STRUCT_OFFSET(AELSSItemManager, PickupCanTouchReservedTime_Gimmick); } \
	FORCEINLINE static uint32 __PPO__PickupCanTouchReservedTime_ItemBox() { return STRUCT_OFFSET(AELSSItemManager, PickupCanTouchReservedTime_ItemBox); } \
	FORCEINLINE static uint32 __PPO__MasterData() { return STRUCT_OFFSET(AELSSItemManager, MasterData); } \
	FORCEINLINE static uint32 __PPO__ExcludedPikcup_HpItem() { return STRUCT_OFFSET(AELSSItemManager, ExcludedPikcup_HpItem); } \
	FORCEINLINE static uint32 __PPO__ExcludedPikcup_ExpItem() { return STRUCT_OFFSET(AELSSItemManager, ExcludedPikcup_ExpItem); } \
	FORCEINLINE static uint32 __PPO__ExcludedPikcup_ShieldItem() { return STRUCT_OFFSET(AELSSItemManager, ExcludedPikcup_ShieldItem); } \
	FORCEINLINE static uint32 __PPO__ExcludedPikcup_OtherItem() { return STRUCT_OFFSET(AELSSItemManager, ExcludedPikcup_OtherItem); } \
	FORCEINLINE static uint32 __PPO__ExcludedPikcup_Weapon() { return STRUCT_OFFSET(AELSSItemManager, ExcludedPikcup_Weapon); } \
	FORCEINLINE static uint32 __PPO__ItemBoxSpawnParam() { return STRUCT_OFFSET(AELSSItemManager, ItemBoxSpawnParam); } \
	FORCEINLINE static uint32 __PPO__LotRarityParamTable() { return STRUCT_OFFSET(AELSSItemManager, LotRarityParamTable); } \
	FORCEINLINE static uint32 __PPO__LotRarityParamArray() { return STRUCT_OFFSET(AELSSItemManager, LotRarityParamArray); } \
	FORCEINLINE static uint32 __PPO__ItemBoxParamTable() { return STRUCT_OFFSET(AELSSItemManager, ItemBoxParamTable); } \
	FORCEINLINE static uint32 __PPO__ItemBoxParamArray() { return STRUCT_OFFSET(AELSSItemManager, ItemBoxParamArray); } \
	FORCEINLINE static uint32 __PPO__TreasureBoxItemSpawnVelocityXY() { return STRUCT_OFFSET(AELSSItemManager, TreasureBoxItemSpawnVelocityXY); } \
	FORCEINLINE static uint32 __PPO__TreasureBoxItemSpawnVelocityZ() { return STRUCT_OFFSET(AELSSItemManager, TreasureBoxItemSpawnVelocityZ); } \
	FORCEINLINE static uint32 __PPO__TreasureBoxItemSpawnGravityScale() { return STRUCT_OFFSET(AELSSItemManager, TreasureBoxItemSpawnGravityScale); } \
	FORCEINLINE static uint32 __PPO__LoadRequestItemId() { return STRUCT_OFFSET(AELSSItemManager, LoadRequestItemId); } \
	FORCEINLINE static uint32 __PPO__itemptrtest() { return STRUCT_OFFSET(AELSSItemManager, itemptrtest); } \
	FORCEINLINE static uint32 __PPO__pathtest() { return STRUCT_OFFSET(AELSSItemManager, pathtest); } \
	FORCEINLINE static uint32 __PPO__LoadedItemClassMap() { return STRUCT_OFFSET(AELSSItemManager, LoadedItemClassMap); } \
	FORCEINLINE static uint32 __PPO__ValidItemBoxList() { return STRUCT_OFFSET(AELSSItemManager, ValidItemBoxList); } \
	FORCEINLINE static uint32 __PPO__ValidPickupList() { return STRUCT_OFFSET(AELSSItemManager, ValidPickupList); } \
	FORCEINLINE static uint32 __PPO__ValidCarrotList() { return STRUCT_OFFSET(AELSSItemManager, ValidCarrotList); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_29_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSItemManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSItemManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
