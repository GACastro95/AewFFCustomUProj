// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSAttackCollisionParam;
struct FSSAttackCollisionShapeBlend;
class AActor;
struct FSSDamageEvent;
struct FSSInvolveInfo;
class UPrimitiveComponent;
struct FHitResult;
struct FVector;
class USceneComponent;
struct FSSAttackInfo;
#ifdef ABP_200508_ELSSAttackerComponent_generated_h
#error "ELSSAttackerComponent.generated.h already included, missing '#pragma once' in ELSSAttackerComponent.h"
#endif
#define ABP_200508_ELSSAttackerComponent_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivateAttack); \
	DECLARE_FUNCTION(execCheckDamage); \
	DECLARE_FUNCTION(execClearAttack); \
	DECLARE_FUNCTION(execDeactivateAttack); \
	DECLARE_FUNCTION(execForceUpdate); \
	DECLARE_FUNCTION(execForceUpdateInvolveCollision); \
	DECLARE_FUNCTION(execGetInvolveInfo); \
	DECLARE_FUNCTION(execIsEnableInvolve); \
	DECLARE_FUNCTION(execOnBeginOverlapAttack); \
	DECLARE_FUNCTION(execOnBeginOverlapInvolve); \
	DECLARE_FUNCTION(execOnBeginOverlapTramp); \
	DECLARE_FUNCTION(execOnEndOverlapAttack); \
	DECLARE_FUNCTION(execOnEndOverlapInvolve); \
	DECLARE_FUNCTION(execOnEndOverlapTramp); \
	DECLARE_FUNCTION(execPerformInvolve); \
	DECLARE_FUNCTION(execPerformInvolvePlayerOnly); \
	DECLARE_FUNCTION(execPerformInvolvePropOnly); \
	DECLARE_FUNCTION(execSetCollisionOffset); \
	DECLARE_FUNCTION(execSetParentComponent); \
	DECLARE_FUNCTION(execSetupInvolve); \
	DECLARE_FUNCTION(execTryAttack); \
	DECLARE_FUNCTION(execTryInvolve); \
	DECLARE_FUNCTION(execUpdateCollisionShape); \
	DECLARE_FUNCTION(execUpdateInvolveCollision);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateAttack); \
	DECLARE_FUNCTION(execCheckDamage); \
	DECLARE_FUNCTION(execClearAttack); \
	DECLARE_FUNCTION(execDeactivateAttack); \
	DECLARE_FUNCTION(execForceUpdate); \
	DECLARE_FUNCTION(execForceUpdateInvolveCollision); \
	DECLARE_FUNCTION(execGetInvolveInfo); \
	DECLARE_FUNCTION(execIsEnableInvolve); \
	DECLARE_FUNCTION(execOnBeginOverlapAttack); \
	DECLARE_FUNCTION(execOnBeginOverlapInvolve); \
	DECLARE_FUNCTION(execOnBeginOverlapTramp); \
	DECLARE_FUNCTION(execOnEndOverlapAttack); \
	DECLARE_FUNCTION(execOnEndOverlapInvolve); \
	DECLARE_FUNCTION(execOnEndOverlapTramp); \
	DECLARE_FUNCTION(execPerformInvolve); \
	DECLARE_FUNCTION(execPerformInvolvePlayerOnly); \
	DECLARE_FUNCTION(execPerformInvolvePropOnly); \
	DECLARE_FUNCTION(execSetCollisionOffset); \
	DECLARE_FUNCTION(execSetParentComponent); \
	DECLARE_FUNCTION(execSetupInvolve); \
	DECLARE_FUNCTION(execTryAttack); \
	DECLARE_FUNCTION(execTryInvolve); \
	DECLARE_FUNCTION(execUpdateCollisionShape); \
	DECLARE_FUNCTION(execUpdateInvolveCollision);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSAttackerComponent(); \
	friend struct Z_Construct_UClass_UELSSAttackerComponent_Statics; \
public: \
	DECLARE_CLASS(UELSSAttackerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSAttackerComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUELSSAttackerComponent(); \
	friend struct Z_Construct_UClass_UELSSAttackerComponent_Statics; \
public: \
	DECLARE_CLASS(UELSSAttackerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSAttackerComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSAttackerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSAttackerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSAttackerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSAttackerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSAttackerComponent(UELSSAttackerComponent&&); \
	NO_API UELSSAttackerComponent(const UELSSAttackerComponent&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSAttackerComponent(UELSSAttackerComponent&&); \
	NO_API UELSSAttackerComponent(const UELSSAttackerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSAttackerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSAttackerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSAttackerComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AttackCollisions() { return STRUCT_OFFSET(UELSSAttackerComponent, AttackCollisions); } \
	FORCEINLINE static uint32 __PPO__ParentComponent() { return STRUCT_OFFSET(UELSSAttackerComponent, ParentComponent); } \
	FORCEINLINE static uint32 __PPO__ShapeBlend() { return STRUCT_OFFSET(UELSSAttackerComponent, ShapeBlend); } \
	FORCEINLINE static uint32 __PPO__BlendTimeCount() { return STRUCT_OFFSET(UELSSAttackerComponent, BlendTimeCount); } \
	FORCEINLINE static uint32 __PPO__AttackOverlaps() { return STRUCT_OFFSET(UELSSAttackerComponent, AttackOverlaps); } \
	FORCEINLINE static uint32 __PPO__InvolveCollision() { return STRUCT_OFFSET(UELSSAttackerComponent, InvolveCollision); } \
	FORCEINLINE static uint32 __PPO__InvolvePropDuration() { return STRUCT_OFFSET(UELSSAttackerComponent, InvolvePropDuration); } \
	FORCEINLINE static uint32 __PPO__InvolvePlayerDuration() { return STRUCT_OFFSET(UELSSAttackerComponent, InvolvePlayerDuration); } \
	FORCEINLINE static uint32 __PPO__InvolveInfo() { return STRUCT_OFFSET(UELSSAttackerComponent, InvolveInfo); } \
	FORCEINLINE static uint32 __PPO__TrampCollision() { return STRUCT_OFFSET(UELSSAttackerComponent, TrampCollision); } \
	FORCEINLINE static uint32 __PPO__TrampActors() { return STRUCT_OFFSET(UELSSAttackerComponent, TrampActors); } \
	FORCEINLINE static uint32 __PPO__TrampVelocityDirectionFactor() { return STRUCT_OFFSET(UELSSAttackerComponent, TrampVelocityDirectionFactor); } \
	FORCEINLINE static uint32 __PPO__TrampDuration() { return STRUCT_OFFSET(UELSSAttackerComponent, TrampDuration); } \
	FORCEINLINE static uint32 __PPO__TrampVelocityCoef() { return STRUCT_OFFSET(UELSSAttackerComponent, TrampVelocityCoef); } \
	FORCEINLINE static uint32 __PPO__TrampVelocityMax() { return STRUCT_OFFSET(UELSSAttackerComponent, TrampVelocityMax); } \
	FORCEINLINE static uint32 __PPO__bExecutingAttack() { return STRUCT_OFFSET(UELSSAttackerComponent, bExecutingAttack); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_19_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSAttackerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSAttackerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
