// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize10;
#ifdef ABP_200508_ELSSWeaponThrowProjectile_Oil_generated_h
#error "ELSSWeaponThrowProjectile_Oil.generated.h already included, missing '#pragma once' in ELSSWeaponThrowProjectile_Oil.h"
#endif
#define ABP_200508_ELSSWeaponThrowProjectile_Oil_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_RPC_WRAPPERS \
	virtual void PerformOnImpact_Multicast_Implementation(FVector_NetQuantize10 const& NewLocation, float inYaw); \
 \
	DECLARE_FUNCTION(execPerformOnImpact_Multicast);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PerformOnImpact_Multicast_Implementation(FVector_NetQuantize10 const& NewLocation, float inYaw); \
 \
	DECLARE_FUNCTION(execPerformOnImpact_Multicast);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_EVENT_PARMS \
	struct ELSSWeaponThrowProjectile_Oil_eventPerformOnImpact_Multicast_Parms \
	{ \
		FVector_NetQuantize10 NewLocation; \
		float inYaw; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSWeaponThrowProjectile_Oil(); \
	friend struct Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponThrowProjectile_Oil, AELSSWeaponThrowProjectile, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponThrowProjectile_Oil)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_INCLASS \
private: \
	static void StaticRegisterNativesAELSSWeaponThrowProjectile_Oil(); \
	friend struct Z_Construct_UClass_AELSSWeaponThrowProjectile_Oil_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponThrowProjectile_Oil, AELSSWeaponThrowProjectile, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponThrowProjectile_Oil)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSWeaponThrowProjectile_Oil(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSWeaponThrowProjectile_Oil) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponThrowProjectile_Oil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponThrowProjectile_Oil); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponThrowProjectile_Oil(AELSSWeaponThrowProjectile_Oil&&); \
	NO_API AELSSWeaponThrowProjectile_Oil(const AELSSWeaponThrowProjectile_Oil&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponThrowProjectile_Oil(AELSSWeaponThrowProjectile_Oil&&); \
	NO_API AELSSWeaponThrowProjectile_Oil(const AELSSWeaponThrowProjectile_Oil&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponThrowProjectile_Oil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponThrowProjectile_Oil); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AELSSWeaponThrowProjectile_Oil)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LifeSpanAfterImpact() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_Oil, LifeSpanAfterImpact); } \
	FORCEINLINE static uint32 __PPO__SplashEffectDatabaseRowName() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_Oil, SplashEffectDatabaseRowName); } \
	FORCEINLINE static uint32 __PPO__SpreadPlacementProfileName() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_Oil, SpreadPlacementProfileName); } \
	FORCEINLINE static uint32 __PPO__TraceDistanceOnImpact() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_Oil, TraceDistanceOnImpact); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_7_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSWeaponThrowProjectile_Oil>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Oil_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
