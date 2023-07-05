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
struct FVector;
struct FHitResult;
class AELSSPlayer;
#ifdef ABP_200508_ELSSWeaponGunBullet_generated_h
#error "ELSSWeaponGunBullet.generated.h already included, missing '#pragma once' in ELSSWeaponGunBullet.h"
#endif
#define ABP_200508_ELSSWeaponGunBullet_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnProjectileImpact); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnProjectileImpact); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSWeaponGunBullet(); \
	friend struct Z_Construct_UClass_AELSSWeaponGunBullet_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponGunBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponGunBullet) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSWeaponGunBullet*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BulletOwner=NETFIELD_REP_START, \
		MoveId, \
		WeaponID, \
		NETFIELD_REP_END=WeaponID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAELSSWeaponGunBullet(); \
	friend struct Z_Construct_UClass_AELSSWeaponGunBullet_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponGunBullet, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponGunBullet) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSWeaponGunBullet*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BulletOwner=NETFIELD_REP_START, \
		MoveId, \
		WeaponID, \
		NETFIELD_REP_END=WeaponID	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSWeaponGunBullet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSWeaponGunBullet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponGunBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponGunBullet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponGunBullet(AELSSWeaponGunBullet&&); \
	NO_API AELSSWeaponGunBullet(const AELSSWeaponGunBullet&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponGunBullet(AELSSWeaponGunBullet&&); \
	NO_API AELSSWeaponGunBullet(const AELSSWeaponGunBullet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponGunBullet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponGunBullet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSWeaponGunBullet)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SphereComponent() { return STRUCT_OFFSET(AELSSWeaponGunBullet, SphereComponent); } \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(AELSSWeaponGunBullet, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__SkeletalMeshComponent() { return STRUCT_OFFSET(AELSSWeaponGunBullet, SkeletalMeshComponent); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovementComponent() { return STRUCT_OFFSET(AELSSWeaponGunBullet, ProjectileMovementComponent); } \
	FORCEINLINE static uint32 __PPO__BulletOwner() { return STRUCT_OFFSET(AELSSWeaponGunBullet, BulletOwner); } \
	FORCEINLINE static uint32 __PPO__MoveId() { return STRUCT_OFFSET(AELSSWeaponGunBullet, MoveId); } \
	FORCEINLINE static uint32 __PPO__WeaponID() { return STRUCT_OFFSET(AELSSWeaponGunBullet, WeaponID); } \
	FORCEINLINE static uint32 __PPO__DoneHit() { return STRUCT_OFFSET(AELSSWeaponGunBullet, DoneHit); } \
	FORCEINLINE static uint32 __PPO__SavedHit() { return STRUCT_OFFSET(AELSSWeaponGunBullet, SavedHit); } \
	FORCEINLINE static uint32 __PPO__BallisticEffectActor() { return STRUCT_OFFSET(AELSSWeaponGunBullet, BallisticEffectActor); } \
	FORCEINLINE static uint32 __PPO__HitEffectToFieldRowName() { return STRUCT_OFFSET(AELSSWeaponGunBullet, HitEffectToFieldRowName); } \
	FORCEINLINE static uint32 __PPO__BallisticEffectRowName() { return STRUCT_OFFSET(AELSSWeaponGunBullet, BallisticEffectRowName); } \
	FORCEINLINE static uint32 __PPO__OverrideDecalThickness() { return STRUCT_OFFSET(AELSSWeaponGunBullet, OverrideDecalThickness); } \
	FORCEINLINE static uint32 __PPO__PlayDecalDelaySec() { return STRUCT_OFFSET(AELSSWeaponGunBullet, PlayDecalDelaySec); } \
	FORCEINLINE static uint32 __PPO__IgnoreGravityTimeRemain() { return STRUCT_OFFSET(AELSSWeaponGunBullet, IgnoreGravityTimeRemain); } \
	FORCEINLINE static uint32 __PPO__IgnoreGravityTime() { return STRUCT_OFFSET(AELSSWeaponGunBullet, IgnoreGravityTime); } \
	FORCEINLINE static uint32 __PPO__BeforeHitCollisionProfile() { return STRUCT_OFFSET(AELSSWeaponGunBullet, BeforeHitCollisionProfile); } \
	FORCEINLINE static uint32 __PPO__BeforeHitGravityScale() { return STRUCT_OFFSET(AELSSWeaponGunBullet, BeforeHitGravityScale); } \
	FORCEINLINE static uint32 __PPO__AfterHitCollisionProfile() { return STRUCT_OFFSET(AELSSWeaponGunBullet, AfterHitCollisionProfile); } \
	FORCEINLINE static uint32 __PPO__AfterHitGravityScale() { return STRUCT_OFFSET(AELSSWeaponGunBullet, AfterHitGravityScale); } \
	FORCEINLINE static uint32 __PPO__AfterHitLifeSpan() { return STRUCT_OFFSET(AELSSWeaponGunBullet, AfterHitLifeSpan); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_17_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSWeaponGunBullet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGunBullet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
