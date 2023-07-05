// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSWeaponTrapMode : uint8;
class AELSSPlayer;
enum class ESSWeaponTrapObjectType : uint8;
struct FVector;
class AActor;
enum class ESSDamageReason : uint8;
#ifdef ABP_200508_ELSSWeaponTrapObject_generated_h
#error "ELSSWeaponTrapObject.generated.h already included, missing '#pragma once' in ELSSWeaponTrapObject.h"
#endif
#define ABP_200508_ELSSWeaponTrapObject_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_RPC_WRAPPERS \
	virtual void SetGuideVisual_Implementation(bool NewCanPut); \
 \
	DECLARE_FUNCTION(execAddDurability); \
	DECLARE_FUNCTION(execCanPut); \
	DECLARE_FUNCTION(execChangeMode); \
	DECLARE_FUNCTION(execChangeMode_Guide); \
	DECLARE_FUNCTION(execChangeMode_Trap); \
	DECLARE_FUNCTION(execGetIsAfterPut); \
	DECLARE_FUNCTION(execGetIsBroken); \
	DECLARE_FUNCTION(execGetMaxDurability); \
	DECLARE_FUNCTION(execGetObjectOwner); \
	DECLARE_FUNCTION(execGetObjectType); \
	DECLARE_FUNCTION(execGetRemainDurability); \
	DECLARE_FUNCTION(execOnRep_Mode); \
	DECLARE_FUNCTION(execOnRep_ObjectOwner); \
	DECLARE_FUNCTION(execPlayHitEffect); \
	DECLARE_FUNCTION(execPut); \
	DECLARE_FUNCTION(execReserveDestroy); \
	DECLARE_FUNCTION(execSetExternalVisible); \
	DECLARE_FUNCTION(execSetGuideVisual); \
	DECLARE_FUNCTION(execSetInternalVisible); \
	DECLARE_FUNCTION(execSetObjectOwner); \
	DECLARE_FUNCTION(execSetRemainDurability); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execUpdateGuideVisual);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetGuideVisual_Implementation(bool NewCanPut); \
 \
	DECLARE_FUNCTION(execAddDurability); \
	DECLARE_FUNCTION(execCanPut); \
	DECLARE_FUNCTION(execChangeMode); \
	DECLARE_FUNCTION(execChangeMode_Guide); \
	DECLARE_FUNCTION(execChangeMode_Trap); \
	DECLARE_FUNCTION(execGetIsAfterPut); \
	DECLARE_FUNCTION(execGetIsBroken); \
	DECLARE_FUNCTION(execGetMaxDurability); \
	DECLARE_FUNCTION(execGetObjectOwner); \
	DECLARE_FUNCTION(execGetObjectType); \
	DECLARE_FUNCTION(execGetRemainDurability); \
	DECLARE_FUNCTION(execOnRep_Mode); \
	DECLARE_FUNCTION(execOnRep_ObjectOwner); \
	DECLARE_FUNCTION(execPlayHitEffect); \
	DECLARE_FUNCTION(execPut); \
	DECLARE_FUNCTION(execReserveDestroy); \
	DECLARE_FUNCTION(execSetExternalVisible); \
	DECLARE_FUNCTION(execSetGuideVisual); \
	DECLARE_FUNCTION(execSetInternalVisible); \
	DECLARE_FUNCTION(execSetObjectOwner); \
	DECLARE_FUNCTION(execSetRemainDurability); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execUpdateGuideVisual);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_EVENT_PARMS \
	struct ELSSWeaponTrapObject_eventSetGuideVisual_Parms \
	{ \
		bool NewCanPut; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSWeaponTrapObject(); \
	friend struct Z_Construct_UClass_AELSSWeaponTrapObject_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponTrapObject, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponTrapObject) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSWeaponTrapObject*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		objectOwner=NETFIELD_REP_START, \
		ModeRep, \
		NETFIELD_REP_END=ModeRep	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAELSSWeaponTrapObject(); \
	friend struct Z_Construct_UClass_AELSSWeaponTrapObject_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponTrapObject, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponTrapObject) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSWeaponTrapObject*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		objectOwner=NETFIELD_REP_START, \
		ModeRep, \
		NETFIELD_REP_END=ModeRep	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSWeaponTrapObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSWeaponTrapObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponTrapObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponTrapObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponTrapObject(AELSSWeaponTrapObject&&); \
	NO_API AELSSWeaponTrapObject(const AELSSWeaponTrapObject&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponTrapObject(AELSSWeaponTrapObject&&); \
	NO_API AELSSWeaponTrapObject(const AELSSWeaponTrapObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponTrapObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponTrapObject); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AELSSWeaponTrapObject)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__UserDesignComponent() { return STRUCT_OFFSET(AELSSWeaponTrapObject, UserDesignComponent); } \
	FORCEINLINE static uint32 __PPO__CheckPutTriggerCollision() { return STRUCT_OFFSET(AELSSWeaponTrapObject, CheckPutTriggerCollision); } \
	FORCEINLINE static uint32 __PPO__SkeletalMeshComponent() { return STRUCT_OFFSET(AELSSWeaponTrapObject, SkeletalMeshComponent); } \
	FORCEINLINE static uint32 __PPO__GuideMesh() { return STRUCT_OFFSET(AELSSWeaponTrapObject, GuideMesh); } \
	FORCEINLINE static uint32 __PPO__ObjectType() { return STRUCT_OFFSET(AELSSWeaponTrapObject, ObjectType); } \
	FORCEINLINE static uint32 __PPO__objectOwner() { return STRUCT_OFFSET(AELSSWeaponTrapObject, objectOwner); } \
	FORCEINLINE static uint32 __PPO__ModeRep() { return STRUCT_OFFSET(AELSSWeaponTrapObject, ModeRep); } \
	FORCEINLINE static uint32 __PPO__IsCanPutGuideVisiual() { return STRUCT_OFFSET(AELSSWeaponTrapObject, IsCanPutGuideVisiual); } \
	FORCEINLINE static uint32 __PPO__CheckPutTriggerProfileName() { return STRUCT_OFFSET(AELSSWeaponTrapObject, CheckPutTriggerProfileName); } \
	FORCEINLINE static uint32 __PPO__TempActorsToIgnore() { return STRUCT_OFFSET(AELSSWeaponTrapObject, TempActorsToIgnore); } \
	FORCEINLINE static uint32 __PPO__HitEffectLineTraceScale() { return STRUCT_OFFSET(AELSSWeaponTrapObject, HitEffectLineTraceScale); } \
	FORCEINLINE static uint32 __PPO__HitEffectLineTraceObjectTypes() { return STRUCT_OFFSET(AELSSWeaponTrapObject, HitEffectLineTraceObjectTypes); } \
	FORCEINLINE static uint32 __PPO__SoundCue_Hit() { return STRUCT_OFFSET(AELSSWeaponTrapObject, SoundCue_Hit); } \
	FORCEINLINE static uint32 __PPO__IsReserveDestroy() { return STRUCT_OFFSET(AELSSWeaponTrapObject, IsReserveDestroy); } \
	FORCEINLINE static uint32 __PPO__RemainDurability() { return STRUCT_OFFSET(AELSSWeaponTrapObject, RemainDurability); } \
	FORCEINLINE static uint32 __PPO__MaxDurability() { return STRUCT_OFFSET(AELSSWeaponTrapObject, MaxDurability); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_19_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSWeaponTrapObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
