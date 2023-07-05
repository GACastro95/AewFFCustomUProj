// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FVector;
class UPrimitiveComponent;
class AActor;
#ifdef ABP_200508_ELSSWeaponThrowProjectile_generated_h
#error "ELSSWeaponThrowProjectile.generated.h already included, missing '#pragma once' in ELSSWeaponThrowProjectile.h"
#endif
#define ABP_200508_ELSSWeaponThrowProjectile_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnProjectileBounce); \
	DECLARE_FUNCTION(execOnProjectileImpact); \
	DECLARE_FUNCTION(execOnProjectileImpactForClient); \
	DECLARE_FUNCTION(execOnRep_HitInfo); \
	DECLARE_FUNCTION(execOnRep_LaunchInfo); \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execSetExternalVisible); \
	DECLARE_FUNCTION(execSetInternalVisible);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnProjectileBounce); \
	DECLARE_FUNCTION(execOnProjectileImpact); \
	DECLARE_FUNCTION(execOnProjectileImpactForClient); \
	DECLARE_FUNCTION(execOnRep_HitInfo); \
	DECLARE_FUNCTION(execOnRep_LaunchInfo); \
	DECLARE_FUNCTION(execOnRep_State); \
	DECLARE_FUNCTION(execSetExternalVisible); \
	DECLARE_FUNCTION(execSetInternalVisible);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSWeaponThrowProjectile(); \
	friend struct Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponThrowProjectile, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponThrowProjectile) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSWeaponThrowProjectile*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwnerWeapon=NETFIELD_REP_START, \
		WeaponID, \
		MoveId, \
		State, \
		LaunchInfo, \
		HitInfo, \
		NETFIELD_REP_END=HitInfo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAELSSWeaponThrowProjectile(); \
	friend struct Z_Construct_UClass_AELSSWeaponThrowProjectile_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponThrowProjectile, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponThrowProjectile) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSWeaponThrowProjectile*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		OwnerWeapon=NETFIELD_REP_START, \
		WeaponID, \
		MoveId, \
		State, \
		LaunchInfo, \
		HitInfo, \
		NETFIELD_REP_END=HitInfo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSWeaponThrowProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSWeaponThrowProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponThrowProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponThrowProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponThrowProjectile(AELSSWeaponThrowProjectile&&); \
	NO_API AELSSWeaponThrowProjectile(const AELSSWeaponThrowProjectile&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponThrowProjectile(AELSSWeaponThrowProjectile&&); \
	NO_API AELSSWeaponThrowProjectile(const AELSSWeaponThrowProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponThrowProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponThrowProjectile); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AELSSWeaponThrowProjectile)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComponent() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile, SphereComponent); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovementComponent() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile, ProjectileMovementComponent); } \
	FORCEINLINE static uint32 __PPO__SkeletalMeshComponent() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile, SkeletalMeshComponent); } \
	FORCEINLINE static uint32 __PPO__UserDesignComponent() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile, UserDesignComponent); } \
	FORCEINLINE static uint32 __PPO__ProjectileType() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile, ProjectileType); } \
	FORCEINLINE static uint32 __PPO__OwnerWeapon() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile, OwnerWeapon); } \
	FORCEINLINE static uint32 __PPO__WeaponID() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile, WeaponID); } \
	FORCEINLINE static uint32 __PPO__MoveId() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile, MoveId); } \
	FORCEINLINE static uint32 __PPO__State() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile, State); } \
	FORCEINLINE static uint32 __PPO__LaunchInfo() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile, LaunchInfo); } \
	FORCEINLINE static uint32 __PPO__HitInfo() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile, HitInfo); } \
	FORCEINLINE static uint32 __PPO__EffectRadius() { return STRUCT_OFFSET(AELSSWeaponThrowProjectile, EffectRadius); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_21_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSWeaponThrowProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrowProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
