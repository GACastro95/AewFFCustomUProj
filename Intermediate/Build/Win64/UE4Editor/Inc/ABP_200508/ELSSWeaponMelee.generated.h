// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELSSWeaponMelee_generated_h
#error "ELSSWeaponMelee.generated.h already included, missing '#pragma once' in ELSSWeaponMelee.h"
#endif
#define ABP_200508_ELSSWeaponMelee_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecreaseRemainDurability); \
	DECLARE_FUNCTION(execGetRemainDurability); \
	DECLARE_FUNCTION(execOnRep_RemainDurability); \
	DECLARE_FUNCTION(execSetRemainDurability);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecreaseRemainDurability); \
	DECLARE_FUNCTION(execGetRemainDurability); \
	DECLARE_FUNCTION(execOnRep_RemainDurability); \
	DECLARE_FUNCTION(execSetRemainDurability);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSWeaponMelee(); \
	friend struct Z_Construct_UClass_AELSSWeaponMelee_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponMelee, AELSSWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponMelee) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RemainDurability=NETFIELD_REP_START, \
		NETFIELD_REP_END=RemainDurability	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_INCLASS \
private: \
	static void StaticRegisterNativesAELSSWeaponMelee(); \
	friend struct Z_Construct_UClass_AELSSWeaponMelee_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponMelee, AELSSWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponMelee) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RemainDurability=NETFIELD_REP_START, \
		NETFIELD_REP_END=RemainDurability	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSWeaponMelee(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSWeaponMelee) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponMelee); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponMelee); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponMelee(AELSSWeaponMelee&&); \
	NO_API AELSSWeaponMelee(const AELSSWeaponMelee&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponMelee(AELSSWeaponMelee&&); \
	NO_API AELSSWeaponMelee(const AELSSWeaponMelee&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponMelee); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponMelee); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSWeaponMelee)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RemainDurability() { return STRUCT_OFFSET(AELSSWeaponMelee, RemainDurability); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_6_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSWeaponMelee>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponMelee_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
