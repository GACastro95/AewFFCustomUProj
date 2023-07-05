// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FVector_NetQuantize10;
#ifdef ABP_200508_ELSSWeaponThrowProjectile_FireBottle_generated_h
#error "ELSSWeaponThrowProjectile_FireBottle.generated.h already included, missing '#pragma once' in ELSSWeaponThrowProjectile_FireBottle.h"
#endif
#define ABP_200508_ELSSWeaponThrowProjectile_FireBottle_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_RPC_WRAPPERS \
	virtual void PerformOnImpact_Multicast_Implementation(FVector_NetQuantize10 const& NewLocation, float inYaw); \
 \
	DECLARE_FUNCTION(execOnBeginOverlapTrigger); \
	DECLARE_FUNCTION(execOnEndOverlapTrigger); \
	DECLARE_FUNCTION(execPerformOnImpact_Multicast);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PerformOnImpact_Multicast_Implementation(FVector_NetQuantize10 const& NewLocation, float inYaw); \
 \
	DECLARE_FUNCTION(execOnBeginOverlapTrigger); \
	DECLARE_FUNCTION(execOnEndOverlapTrigger); \
	DECLARE_FUNCTION(execPerformOnImpact_Multicast);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_EVENT_PARMS \
	struct ELSSWeaponThrowProjectile_FireBottle_eventPerformOnImpact_Multicast_Parms \
	{ \
		FVector_NetQuantize10 NewLocation; \
		float inYaw; \
	}; \
	struct ELSSWeaponThrowProjectile_FireBottle_eventPlayBurnLoopSE_Impl_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSWeaponThrowProjectile_FireBottle_eventPlayBurnLoopSE_Impl_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSWeaponThrowProjectile_FireBottle(); \
	friend struct Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponThrowProjectile_FireBottle, AELSSWeaponThrowProjectile, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponThrowProjectile_FireBottle)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAELSSWeaponThrowProjectile_FireBottle(); \
	friend struct Z_Construct_UClass_AELSSWeaponThrowProjectile_FireBottle_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponThrowProjectile_FireBottle, AELSSWeaponThrowProjectile, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponThrowProjectile_FireBottle)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSWeaponThrowProjectile_FireBottle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSWeaponThrowProjectile_FireBottle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponThrowProjectile_FireBottle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponThrowProjectile_FireBottle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponThrowProjectile_FireBottle(AELSSWeaponThrowProjectile_FireBottle&&); \
	NO_API AELSSWeaponThrowProjectile_FireBottle(const AELSSWeaponThrowProjectile_FireBottle&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponThrowProjectile_FireBottle(AELSSWeaponThrowProjectile_FireBottle&&); \
	NO_API AELSSWeaponThrowProjectile_FireBottle(const AELSSWeaponThrowProjectile_FireBottle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponThrowProjectile_FireBottle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponThrowProjectile_FireBottle); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AELSSWeaponThrowProjectile_FireBottle)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ParticleSystemComponent() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, ParticleSystemComponent); } \
	FORCEINLINE static uint32 __PPO__TriggerCollision() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, TriggerCollision); } \
	FORCEINLINE static uint32 __PPO__LifeSpanAfterImpact() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, LifeSpanAfterImpact); } \
	FORCEINLINE static uint32 __PPO__SplashEffectDatabaseRowName() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, SplashEffectDatabaseRowName); } \
	FORCEINLINE static uint32 __PPO__SpreadPlacementProfileName() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, SpreadPlacementProfileName); } \
	FORCEINLINE static uint32 __PPO__TraceDistanceOnImpact() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, TraceDistanceOnImpact); } \
	FORCEINLINE static uint32 __PPO__OverlappingPlayer() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, OverlappingPlayer); } \
	FORCEINLINE static uint32 __PPO__BadStatusDuration() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, BadStatusDuration); } \
	FORCEINLINE static uint32 __PPO__BadStatusIntervalTime() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_FireBottle, BadStatusIntervalTime); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_14_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSWeaponThrowProjectile_FireBottle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_FireBottle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
