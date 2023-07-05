// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELSSWeaponGun_generated_h
#error "ELSSWeaponGun.generated.h already included, missing '#pragma once' in ELSSWeaponGun.h"
#endif
#define ABP_200508_ELSSWeaponGun_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecreaseAmmo); \
	DECLARE_FUNCTION(execGetAmmo); \
	DECLARE_FUNCTION(execOnRep_Ammo); \
	DECLARE_FUNCTION(execSetAmmo);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecreaseAmmo); \
	DECLARE_FUNCTION(execGetAmmo); \
	DECLARE_FUNCTION(execOnRep_Ammo); \
	DECLARE_FUNCTION(execSetAmmo);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSWeaponGun(); \
	friend struct Z_Construct_UClass_AELSSWeaponGun_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponGun, AELSSWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponGun) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ammo=NETFIELD_REP_START, \
		NETFIELD_REP_END=ammo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_INCLASS \
private: \
	static void StaticRegisterNativesAELSSWeaponGun(); \
	friend struct Z_Construct_UClass_AELSSWeaponGun_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponGun, AELSSWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponGun) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ammo=NETFIELD_REP_START, \
		NETFIELD_REP_END=ammo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSWeaponGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSWeaponGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponGun(AELSSWeaponGun&&); \
	NO_API AELSSWeaponGun(const AELSSWeaponGun&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponGun(AELSSWeaponGun&&); \
	NO_API AELSSWeaponGun(const AELSSWeaponGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponGun); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSWeaponGun)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponSubParam() { return STRUCT_OFFSET(AELSSWeaponGun, WeaponSubParam); } \
	FORCEINLINE static uint32 __PPO__ammo() { return STRUCT_OFFSET(AELSSWeaponGun, ammo); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_7_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSWeaponGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponGun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
