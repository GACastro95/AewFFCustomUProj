// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSDamageEvent;
class AActor;
#ifdef ABP_200508_ELSSWeaponTrapObject_Barricade_generated_h
#error "ELSSWeaponTrapObject_Barricade.generated.h already included, missing '#pragma once' in ELSSWeaponTrapObject_Barricade.h"
#endif
#define ABP_200508_ELSSWeaponTrapObject_Barricade_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBreak_Imple); \
	DECLARE_FUNCTION(execOnRep_IsBroken); \
	DECLARE_FUNCTION(execTakeDamage_Imple);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBreak_Imple); \
	DECLARE_FUNCTION(execOnRep_IsBroken); \
	DECLARE_FUNCTION(execTakeDamage_Imple);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSWeaponTrapObject_Barricade(); \
	friend struct Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponTrapObject_Barricade, AELSSWeaponTrapObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponTrapObject_Barricade) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsBroken=NETFIELD_REP_START, \
		NETFIELD_REP_END=IsBroken	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAELSSWeaponTrapObject_Barricade(); \
	friend struct Z_Construct_UClass_AELSSWeaponTrapObject_Barricade_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponTrapObject_Barricade, AELSSWeaponTrapObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponTrapObject_Barricade) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsBroken=NETFIELD_REP_START, \
		NETFIELD_REP_END=IsBroken	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSWeaponTrapObject_Barricade(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSWeaponTrapObject_Barricade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponTrapObject_Barricade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponTrapObject_Barricade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponTrapObject_Barricade(AELSSWeaponTrapObject_Barricade&&); \
	NO_API AELSSWeaponTrapObject_Barricade(const AELSSWeaponTrapObject_Barricade&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponTrapObject_Barricade(AELSSWeaponTrapObject_Barricade&&); \
	NO_API AELSSWeaponTrapObject_Barricade(const AELSSWeaponTrapObject_Barricade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponTrapObject_Barricade); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponTrapObject_Barricade); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AELSSWeaponTrapObject_Barricade)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsBroken() { return STRUCT_OFFSET(AELSSWeaponTrapObject_Barricade, IsBroken); } \
	FORCEINLINE static uint32 __PPO__CollisionProfile_BeforeBroken() { return STRUCT_OFFSET(AELSSWeaponTrapObject_Barricade, CollisionProfile_BeforeBroken); } \
	FORCEINLINE static uint32 __PPO__CollisionProfile_AfterBroken() { return STRUCT_OFFSET(AELSSWeaponTrapObject_Barricade, CollisionProfile_AfterBroken); } \
	FORCEINLINE static uint32 __PPO__SkeletalMesh_BeforeBroken() { return STRUCT_OFFSET(AELSSWeaponTrapObject_Barricade, SkeletalMesh_BeforeBroken); } \
	FORCEINLINE static uint32 __PPO__SkeletalMesh_AfterBroken() { return STRUCT_OFFSET(AELSSWeaponTrapObject_Barricade, SkeletalMesh_AfterBroken); } \
	FORCEINLINE static uint32 __PPO__SoundCue_Break() { return STRUCT_OFFSET(AELSSWeaponTrapObject_Barricade, SoundCue_Break); } \
	FORCEINLINE static uint32 __PPO__ImpulseStrength() { return STRUCT_OFFSET(AELSSWeaponTrapObject_Barricade, ImpulseStrength); } \
	FORCEINLINE static uint32 __PPO__DamageToPlayer() { return STRUCT_OFFSET(AELSSWeaponTrapObject_Barricade, DamageToPlayer); } \
	FORCEINLINE static uint32 __PPO__LifeSpanAfterBroken() { return STRUCT_OFFSET(AELSSWeaponTrapObject_Barricade, LifeSpanAfterBroken); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_11_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSWeaponTrapObject_Barricade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrapObject_Barricade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
