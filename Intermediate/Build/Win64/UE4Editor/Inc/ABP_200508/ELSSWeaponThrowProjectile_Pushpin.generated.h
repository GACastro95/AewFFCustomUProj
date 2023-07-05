// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize10;
#ifdef ABP_200508_ELSSWeaponThrowProjectile_Pushpin_generated_h
#error "ELSSWeaponThrowProjectile_Pushpin.generated.h already included, missing '#pragma once' in ELSSWeaponThrowProjectile_Pushpin.h"
#endif
#define ABP_200508_ELSSWeaponThrowProjectile_Pushpin_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_RPC_WRAPPERS \
	virtual void PerformOnImpact_Multicast_Implementation(FVector_NetQuantize10 const& NewLocation, float inYaw); \
 \
	DECLARE_FUNCTION(execPerformOnImpact_Multicast);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PerformOnImpact_Multicast_Implementation(FVector_NetQuantize10 const& NewLocation, float inYaw); \
 \
	DECLARE_FUNCTION(execPerformOnImpact_Multicast);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_EVENT_PARMS \
	struct ELSSWeaponThrowProjectile_Pushpin_eventPerformOnImpact_Multicast_Parms \
	{ \
		FVector_NetQuantize10 NewLocation; \
		float inYaw; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSWeaponThrowProjectile_Pushpin(); \
	friend struct Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponThrowProjectile_Pushpin, AELSSWeaponThrowProjectile, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponThrowProjectile_Pushpin) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsSteppedOn=NETFIELD_REP_START, \
		NETFIELD_REP_END=IsSteppedOn	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAELSSWeaponThrowProjectile_Pushpin(); \
	friend struct Z_Construct_UClass_AELSSWeaponThrowProjectile_Pushpin_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponThrowProjectile_Pushpin, AELSSWeaponThrowProjectile, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponThrowProjectile_Pushpin) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsSteppedOn=NETFIELD_REP_START, \
		NETFIELD_REP_END=IsSteppedOn	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSWeaponThrowProjectile_Pushpin(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSWeaponThrowProjectile_Pushpin) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponThrowProjectile_Pushpin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponThrowProjectile_Pushpin); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponThrowProjectile_Pushpin(AELSSWeaponThrowProjectile_Pushpin&&); \
	NO_API AELSSWeaponThrowProjectile_Pushpin(const AELSSWeaponThrowProjectile_Pushpin&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponThrowProjectile_Pushpin(AELSSWeaponThrowProjectile_Pushpin&&); \
	NO_API AELSSWeaponThrowProjectile_Pushpin(const AELSSWeaponThrowProjectile_Pushpin&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponThrowProjectile_Pushpin); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponThrowProjectile_Pushpin); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AELSSWeaponThrowProjectile_Pushpin)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LifeSpanAfterImpact() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_Pushpin, LifeSpanAfterImpact); } \
	FORCEINLINE static uint32 __PPO__SplashEffectDatabaseRowName() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_Pushpin, SplashEffectDatabaseRowName); } \
	FORCEINLINE static uint32 __PPO__SpreadPlacementProfileName() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_Pushpin, SpreadPlacementProfileName); } \
	FORCEINLINE static uint32 __PPO__TraceDistanceOnImpact() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_Pushpin, TraceDistanceOnImpact); } \
	FORCEINLINE static uint32 __PPO__SoundCue_Pushpin() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_Pushpin, SoundCue_Pushpin); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSWeaponThrowProjectile_Pushpin>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Pushpin_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
