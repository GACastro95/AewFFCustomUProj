// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize10;
class AActor;
#ifdef ABP_200508_ELSSWeaponThrowProjectile_Bomb_generated_h
#error "ELSSWeaponThrowProjectile_Bomb.generated.h already included, missing '#pragma once' in ELSSWeaponThrowProjectile_Bomb.h"
#endif
#define ABP_200508_ELSSWeaponThrowProjectile_Bomb_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_RPC_WRAPPERS \
	virtual void PerformOnImpact_Multicast_Implementation(FVector_NetQuantize10 const& NewLocation); \
 \
	DECLARE_FUNCTION(execApplyDamage); \
	DECLARE_FUNCTION(execPerformOnImpact_Multicast); \
	DECLARE_FUNCTION(execTakeDamageToAny);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PerformOnImpact_Multicast_Implementation(FVector_NetQuantize10 const& NewLocation); \
 \
	DECLARE_FUNCTION(execApplyDamage); \
	DECLARE_FUNCTION(execPerformOnImpact_Multicast); \
	DECLARE_FUNCTION(execTakeDamageToAny);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_EVENT_PARMS \
	struct ELSSWeaponThrowProjectile_Bomb_eventPerformOnImpact_Multicast_Parms \
	{ \
		FVector_NetQuantize10 NewLocation; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSWeaponThrowProjectile_Bomb(); \
	friend struct Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponThrowProjectile_Bomb, AELSSWeaponThrowProjectile, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponThrowProjectile_Bomb)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAELSSWeaponThrowProjectile_Bomb(); \
	friend struct Z_Construct_UClass_AELSSWeaponThrowProjectile_Bomb_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponThrowProjectile_Bomb, AELSSWeaponThrowProjectile, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponThrowProjectile_Bomb)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSWeaponThrowProjectile_Bomb(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSWeaponThrowProjectile_Bomb) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponThrowProjectile_Bomb); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponThrowProjectile_Bomb); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponThrowProjectile_Bomb(AELSSWeaponThrowProjectile_Bomb&&); \
	NO_API AELSSWeaponThrowProjectile_Bomb(const AELSSWeaponThrowProjectile_Bomb&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponThrowProjectile_Bomb(AELSSWeaponThrowProjectile_Bomb&&); \
	NO_API AELSSWeaponThrowProjectile_Bomb(const AELSSWeaponThrowProjectile_Bomb&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponThrowProjectile_Bomb); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponThrowProjectile_Bomb); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AELSSWeaponThrowProjectile_Bomb)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LifeSpanAfterImpact() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_Bomb, LifeSpanAfterImpact); } \
	FORCEINLINE static uint32 __PPO__SplashEffectDatabaseRowName() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_Bomb, SplashEffectDatabaseRowName); } \
	FORCEINLINE static uint32 __PPO__DamageRadius() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile_Bomb, DamageRadius); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSWeaponThrowProjectile_Bomb>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_Bomb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
