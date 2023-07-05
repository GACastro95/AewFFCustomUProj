// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
class AELSSPickupBase;
class AELSSPlayer;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ABP_200508_ELSSPickupBase_generated_h
#error "ELSSPickupBase.generated.h already included, missing '#pragma once' in ELSSPickupBase.h"
#endif
#define ABP_200508_ELSSPickupBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_RPC_WRAPPERS \
	virtual void OnCanTouch_Implementation(bool flg); \
	virtual void OnPickedup_Implementation(AActor* OtherActor); \
	virtual void Pickup_Implementation(AActor* OtherActor); \
 \
	DECLARE_FUNCTION(execAttachRarityEffect); \
	DECLARE_FUNCTION(execCanBePickup); \
	DECLARE_FUNCTION(execCanMinimapVisible); \
	DECLARE_FUNCTION(execCheckCurrentEquipped); \
	DECLARE_FUNCTION(execCheckUpdateLostTimer); \
	DECLARE_FUNCTION(execDestroyAfterLostEffect); \
	DECLARE_FUNCTION(execDetachRarityEffect); \
	DECLARE_FUNCTION(execDoInteract); \
	DECLARE_FUNCTION(execGetIsNeedInteract); \
	DECLARE_FUNCTION(execGetMinimapLocation); \
	DECLARE_FUNCTION(execGetValueForInventoryIcon); \
	DECLARE_FUNCTION(execIsBroken); \
	DECLARE_FUNCTION(execLaunch); \
	DECLARE_FUNCTION(execLostEffect); \
	DECLARE_FUNCTION(execLostEffect_Impl); \
	DECLARE_FUNCTION(execOnCanTouch); \
	DECLARE_FUNCTION(execOnEquipCurrent); \
	DECLARE_FUNCTION(execOnInteractBeginOverlap); \
	DECLARE_FUNCTION(execOnInteractEndOverlap); \
	DECLARE_FUNCTION(execOnLaunchStop); \
	DECLARE_FUNCTION(execOnPickedup); \
	DECLARE_FUNCTION(execOnRep_IsCanTouch); \
	DECLARE_FUNCTION(execOnRep_IsLaunchStop); \
	DECLARE_FUNCTION(execOnRep_LaunchInfo); \
	DECLARE_FUNCTION(execOnRep_PickupOwner); \
	DECLARE_FUNCTION(execOnRep_PickupTrans); \
	DECLARE_FUNCTION(execOnUnEquipCurrent); \
	DECLARE_FUNCTION(execPickup); \
	DECLARE_FUNCTION(execPickupFailedOnFullInventory); \
	DECLARE_FUNCTION(execPickupOnTouch); \
	DECLARE_FUNCTION(execRefreshVisibility); \
	DECLARE_FUNCTION(execSetExternalVisible); \
	DECLARE_FUNCTION(execSetInternalVisible); \
	DECLARE_FUNCTION(execSetPickupOwner); \
	DECLARE_FUNCTION(execToAttachParamRowName); \
	DECLARE_FUNCTION(execUpdateLostTimer);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnCanTouch_Implementation(bool flg); \
	virtual void OnPickedup_Implementation(AActor* OtherActor); \
	virtual void Pickup_Implementation(AActor* OtherActor); \
 \
	DECLARE_FUNCTION(execAttachRarityEffect); \
	DECLARE_FUNCTION(execCanBePickup); \
	DECLARE_FUNCTION(execCanMinimapVisible); \
	DECLARE_FUNCTION(execCheckCurrentEquipped); \
	DECLARE_FUNCTION(execCheckUpdateLostTimer); \
	DECLARE_FUNCTION(execDestroyAfterLostEffect); \
	DECLARE_FUNCTION(execDetachRarityEffect); \
	DECLARE_FUNCTION(execDoInteract); \
	DECLARE_FUNCTION(execGetIsNeedInteract); \
	DECLARE_FUNCTION(execGetMinimapLocation); \
	DECLARE_FUNCTION(execGetValueForInventoryIcon); \
	DECLARE_FUNCTION(execIsBroken); \
	DECLARE_FUNCTION(execLaunch); \
	DECLARE_FUNCTION(execLostEffect); \
	DECLARE_FUNCTION(execLostEffect_Impl); \
	DECLARE_FUNCTION(execOnCanTouch); \
	DECLARE_FUNCTION(execOnEquipCurrent); \
	DECLARE_FUNCTION(execOnInteractBeginOverlap); \
	DECLARE_FUNCTION(execOnInteractEndOverlap); \
	DECLARE_FUNCTION(execOnLaunchStop); \
	DECLARE_FUNCTION(execOnPickedup); \
	DECLARE_FUNCTION(execOnRep_IsCanTouch); \
	DECLARE_FUNCTION(execOnRep_IsLaunchStop); \
	DECLARE_FUNCTION(execOnRep_LaunchInfo); \
	DECLARE_FUNCTION(execOnRep_PickupOwner); \
	DECLARE_FUNCTION(execOnRep_PickupTrans); \
	DECLARE_FUNCTION(execOnUnEquipCurrent); \
	DECLARE_FUNCTION(execPickup); \
	DECLARE_FUNCTION(execPickupFailedOnFullInventory); \
	DECLARE_FUNCTION(execPickupOnTouch); \
	DECLARE_FUNCTION(execRefreshVisibility); \
	DECLARE_FUNCTION(execSetExternalVisible); \
	DECLARE_FUNCTION(execSetInternalVisible); \
	DECLARE_FUNCTION(execSetPickupOwner); \
	DECLARE_FUNCTION(execToAttachParamRowName); \
	DECLARE_FUNCTION(execUpdateLostTimer);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_EVENT_PARMS \
	struct ELSSPickupBase_eventOnCanTouch_Parms \
	{ \
		bool flg; \
	}; \
	struct ELSSPickupBase_eventOnPickedup_Parms \
	{ \
		AActor* OtherActor; \
	}; \
	struct ELSSPickupBase_eventPickup_Parms \
	{ \
		AActor* OtherActor; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSPickupBase(); \
	friend struct Z_Construct_UClass_AELSSPickupBase_Statics; \
public: \
	DECLARE_CLASS(AELSSPickupBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSPickupBase) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSPickupBase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DatabaseId=NETFIELD_REP_START, \
		LaunchInfo, \
		PickupTrans, \
		IsLaunchStop, \
		IsCanTouch, \
		PickupOwner, \
		SpawnedTime, \
		SpawnReason, \
		NETFIELD_REP_END=SpawnReason	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAELSSPickupBase(); \
	friend struct Z_Construct_UClass_AELSSPickupBase_Statics; \
public: \
	DECLARE_CLASS(AELSSPickupBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSPickupBase) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSPickupBase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DatabaseId=NETFIELD_REP_START, \
		LaunchInfo, \
		PickupTrans, \
		IsLaunchStop, \
		IsCanTouch, \
		PickupOwner, \
		SpawnedTime, \
		SpawnReason, \
		NETFIELD_REP_END=SpawnReason	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSPickupBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSPickupBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSPickupBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSPickupBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSPickupBase(AELSSPickupBase&&); \
	NO_API AELSSPickupBase(const AELSSPickupBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSPickupBase(AELSSPickupBase&&); \
	NO_API AELSSPickupBase(const AELSSPickupBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSPickupBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSPickupBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AELSSPickupBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComponent() { return STRUCT_OFFSET(AELSSPickupBase, SphereComponent); } \
	FORCEINLINE static uint32 __PPO__InteractCollision() { return STRUCT_OFFSET(AELSSPickupBase, InteractCollision); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovementComponent() { return STRUCT_OFFSET(AELSSPickupBase, ProjectileMovementComponent); } \
	FORCEINLINE static uint32 __PPO__LaunchInfo() { return STRUCT_OFFSET(AELSSPickupBase, LaunchInfo); } \
	FORCEINLINE static uint32 __PPO__PickupTrans() { return STRUCT_OFFSET(AELSSPickupBase, PickupTrans); } \
	FORCEINLINE static uint32 __PPO__OverlappingActors() { return STRUCT_OFFSET(AELSSPickupBase, OverlappingActors); } \
	FORCEINLINE static uint32 __PPO__PickupOwner() { return STRUCT_OFFSET(AELSSPickupBase, PickupOwner); } \
	FORCEINLINE static uint32 __PPO__RarityEffectDatabaseRowNames() { return STRUCT_OFFSET(AELSSPickupBase, RarityEffectDatabaseRowNames); } \
	FORCEINLINE static uint32 __PPO__RarityEffect() { return STRUCT_OFFSET(AELSSPickupBase, RarityEffect); } \
	FORCEINLINE static uint32 __PPO__LostEffectDatabaseRowName() { return STRUCT_OFFSET(AELSSPickupBase, LostEffectDatabaseRowName); } \
	FORCEINLINE static uint32 __PPO__LostEffectDelaySec() { return STRUCT_OFFSET(AELSSPickupBase, LostEffectDelaySec); } \
	FORCEINLINE static uint32 __PPO__DestroyAfterLostEffectDelaySec() { return STRUCT_OFFSET(AELSSPickupBase, DestroyAfterLostEffectDelaySec); } \
	FORCEINLINE static uint32 __PPO__CalledLostEffect() { return STRUCT_OFFSET(AELSSPickupBase, CalledLostEffect); } \
	FORCEINLINE static uint32 __PPO__LostSec() { return STRUCT_OFFSET(AELSSPickupBase, LostSec); } \
	FORCEINLINE static uint32 __PPO__LostTimer() { return STRUCT_OFFSET(AELSSPickupBase, LostTimer); } \
	FORCEINLINE static uint32 __PPO__bReservedLostByTimer() { return STRUCT_OFFSET(AELSSPickupBase, bReservedLostByTimer); } \
	FORCEINLINE static uint32 __PPO__SpawnedTime() { return STRUCT_OFFSET(AELSSPickupBase, SpawnedTime); } \
	FORCEINLINE static uint32 __PPO__PlaySpawnedSEConditionTime() { return STRUCT_OFFSET(AELSSPickupBase, PlaySpawnedSEConditionTime); } \
	FORCEINLINE static uint32 __PPO__SpawnReason() { return STRUCT_OFFSET(AELSSPickupBase, SpawnReason); } \
	FORCEINLINE static uint32 __PPO__InteractUIOffset() { return STRUCT_OFFSET(AELSSPickupBase, InteractUIOffset); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_21_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSPickupBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSPickupBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
