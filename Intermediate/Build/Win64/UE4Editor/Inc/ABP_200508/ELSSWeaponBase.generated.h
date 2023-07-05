// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMeshComponent;
struct FSSWeaponParam;
class AELSSPlayer;
#ifdef ABP_200508_ELSSWeaponBase_generated_h
#error "ELSSWeaponBase.generated.h already included, missing '#pragma once' in ELSSWeaponBase.h"
#endif
#define ABP_200508_ELSSWeaponBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_RPC_WRAPPERS \
	virtual void Setup_Implementation(FSSWeaponParam const& weaponParam); \
 \
	DECLARE_FUNCTION(execFinishSticking); \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execStickToPlayer);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Setup_Implementation(FSSWeaponParam const& weaponParam); \
 \
	DECLARE_FUNCTION(execFinishSticking); \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execStickToPlayer);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_EVENT_PARMS \
	struct ELSSWeaponBase_eventSetup_Parms \
	{ \
		FSSWeaponParam weaponParam; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSWeaponBase(); \
	friend struct Z_Construct_UClass_AELSSWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponBase, AELSSPickupBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAELSSWeaponBase(); \
	friend struct Z_Construct_UClass_AELSSWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponBase, AELSSPickupBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponBase(AELSSWeaponBase&&); \
	NO_API AELSSWeaponBase(const AELSSWeaponBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponBase(AELSSWeaponBase&&); \
	NO_API AELSSWeaponBase(const AELSSWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSWeaponBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UserDesignComponent() { return STRUCT_OFFSET(AELSSWeaponBase, UserDesignComponent); } \
	FORCEINLINE static uint32 __PPO__SkeletalMeshComponent() { return STRUCT_OFFSET(AELSSWeaponBase, SkeletalMeshComponent); } \
	FORCEINLINE static uint32 __PPO__DefaultMeshScale() { return STRUCT_OFFSET(AELSSWeaponBase, DefaultMeshScale); } \
	FORCEINLINE static uint32 __PPO__ScaleWhenDrop() { return STRUCT_OFFSET(AELSSWeaponBase, ScaleWhenDrop); } \
	FORCEINLINE static uint32 __PPO__DefaultMeshRelativeLocation() { return STRUCT_OFFSET(AELSSWeaponBase, DefaultMeshRelativeLocation); } \
	FORCEINLINE static uint32 __PPO__MeshRelativeLocationOffsetWhenDrop() { return STRUCT_OFFSET(AELSSWeaponBase, MeshRelativeLocationOffsetWhenDrop); } \
	FORCEINLINE static uint32 __PPO__CommonParam() { return STRUCT_OFFSET(AELSSWeaponBase, CommonParam); } \
	FORCEINLINE static uint32 __PPO__Sticked() { return STRUCT_OFFSET(AELSSWeaponBase, Sticked); } \
	FORCEINLINE static uint32 __PPO__StickedPlayer() { return STRUCT_OFFSET(AELSSWeaponBase, StickedPlayer); } \
	FORCEINLINE static uint32 __PPO__StickRequiredStateId() { return STRUCT_OFFSET(AELSSWeaponBase, StickRequiredStateId); } \
	FORCEINLINE static uint32 __PPO__StickRequiredReactionName() { return STRUCT_OFFSET(AELSSWeaponBase, StickRequiredReactionName); } \
	FORCEINLINE static uint32 __PPO__StickFinishedVelocityXY() { return STRUCT_OFFSET(AELSSWeaponBase, StickFinishedVelocityXY); } \
	FORCEINLINE static uint32 __PPO__StickFinishedVelocityZ() { return STRUCT_OFFSET(AELSSWeaponBase, StickFinishedVelocityZ); } \
	FORCEINLINE static uint32 __PPO__StickFinishedVelocityGravity() { return STRUCT_OFFSET(AELSSWeaponBase, StickFinishedVelocityGravity); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_15_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
