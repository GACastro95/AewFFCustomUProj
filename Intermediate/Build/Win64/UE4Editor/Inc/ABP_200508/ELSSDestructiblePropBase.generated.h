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
enum class ESSDamageReason : uint8;
#ifdef ABP_200508_ELSSDestructiblePropBase_generated_h
#error "ELSSDestructiblePropBase.generated.h already included, missing '#pragma once' in ELSSDestructiblePropBase.h"
#endif
#define ABP_200508_ELSSDestructiblePropBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_RPC_WRAPPERS \
	virtual void Setup_Implementation(); \
 \
	DECLARE_FUNCTION(execAddAttentionPoint); \
	DECLARE_FUNCTION(execAddDurability); \
	DECLARE_FUNCTION(execBreak_Imple); \
	DECLARE_FUNCTION(execGetMaxDurability); \
	DECLARE_FUNCTION(execGetRemainDurability); \
	DECLARE_FUNCTION(execOnRep_IsBroken); \
	DECLARE_FUNCTION(execPlayHitEffect); \
	DECLARE_FUNCTION(execSetRemainDurability); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Setup_Implementation(); \
 \
	DECLARE_FUNCTION(execAddAttentionPoint); \
	DECLARE_FUNCTION(execAddDurability); \
	DECLARE_FUNCTION(execBreak_Imple); \
	DECLARE_FUNCTION(execGetMaxDurability); \
	DECLARE_FUNCTION(execGetRemainDurability); \
	DECLARE_FUNCTION(execOnRep_IsBroken); \
	DECLARE_FUNCTION(execPlayHitEffect); \
	DECLARE_FUNCTION(execSetRemainDurability); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_EVENT_PARMS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSDestructiblePropBase(); \
	friend struct Z_Construct_UClass_AELSSDestructiblePropBase_Statics; \
public: \
	DECLARE_CLASS(AELSSDestructiblePropBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSDestructiblePropBase) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSDestructiblePropBase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsBroken=NETFIELD_REP_START, \
		NETFIELD_REP_END=IsBroken	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAELSSDestructiblePropBase(); \
	friend struct Z_Construct_UClass_AELSSDestructiblePropBase_Statics; \
public: \
	DECLARE_CLASS(AELSSDestructiblePropBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSDestructiblePropBase) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSDestructiblePropBase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsBroken=NETFIELD_REP_START, \
		NETFIELD_REP_END=IsBroken	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSDestructiblePropBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSDestructiblePropBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSDestructiblePropBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSDestructiblePropBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSDestructiblePropBase(AELSSDestructiblePropBase&&); \
	NO_API AELSSDestructiblePropBase(const AELSSDestructiblePropBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSDestructiblePropBase(AELSSDestructiblePropBase&&); \
	NO_API AELSSDestructiblePropBase(const AELSSDestructiblePropBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSDestructiblePropBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSDestructiblePropBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AELSSDestructiblePropBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DestructibleMeshAsset() { return STRUCT_OFFSET(AELSSDestructiblePropBase, DestructibleMeshAsset); } \
	FORCEINLINE static uint32 __PPO__SoundCue_Break() { return STRUCT_OFFSET(AELSSDestructiblePropBase, SoundCue_Break); } \
	FORCEINLINE static uint32 __PPO__IsCopyMaterialToDM() { return STRUCT_OFFSET(AELSSDestructiblePropBase, IsCopyMaterialToDM); } \
	FORCEINLINE static uint32 __PPO__IsPhysicsDP() { return STRUCT_OFFSET(AELSSDestructiblePropBase, IsPhysicsDP); } \
	FORCEINLINE static uint32 __PPO__DisableInvolveFeedbackReaction() { return STRUCT_OFFSET(AELSSDestructiblePropBase, DisableInvolveFeedbackReaction); } \
	FORCEINLINE static uint32 __PPO__ImpulseStrength() { return STRUCT_OFFSET(AELSSDestructiblePropBase, ImpulseStrength); } \
	FORCEINLINE static uint32 __PPO__DamageToPlayer() { return STRUCT_OFFSET(AELSSDestructiblePropBase, DamageToPlayer); } \
	FORCEINLINE static uint32 __PPO__HitEffectLineTraceScale() { return STRUCT_OFFSET(AELSSDestructiblePropBase, HitEffectLineTraceScale); } \
	FORCEINLINE static uint32 __PPO__HitEffectLineTraceObjectTypes() { return STRUCT_OFFSET(AELSSDestructiblePropBase, HitEffectLineTraceObjectTypes); } \
	FORCEINLINE static uint32 __PPO__AttentionPoint() { return STRUCT_OFFSET(AELSSDestructiblePropBase, AttentionPoint); } \
	FORCEINLINE static uint32 __PPO__RemainDurability() { return STRUCT_OFFSET(AELSSDestructiblePropBase, RemainDurability); } \
	FORCEINLINE static uint32 __PPO__MaxDurability() { return STRUCT_OFFSET(AELSSDestructiblePropBase, MaxDurability); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_16_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSDestructiblePropBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSDestructiblePropBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
