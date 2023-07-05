// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELSSWeaponTrap_generated_h
#error "ELSSWeaponTrap.generated.h already included, missing '#pragma once' in ELSSWeaponTrap.h"
#endif
#define ABP_200508_ELSSWeaponTrap_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecreaseQuantity); \
	DECLARE_FUNCTION(execGetQuantity); \
	DECLARE_FUNCTION(execOnRep_Quantity); \
	DECLARE_FUNCTION(execOnRep_StockedObject); \
	DECLARE_FUNCTION(execSetQuantity);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecreaseQuantity); \
	DECLARE_FUNCTION(execGetQuantity); \
	DECLARE_FUNCTION(execOnRep_Quantity); \
	DECLARE_FUNCTION(execOnRep_StockedObject); \
	DECLARE_FUNCTION(execSetQuantity);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSWeaponTrap(); \
	friend struct Z_Construct_UClass_AELSSWeaponTrap_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponTrap, AELSSWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponTrap) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StockedObjectRep=NETFIELD_REP_START, \
		Quantity, \
		NETFIELD_REP_END=Quantity	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAELSSWeaponTrap(); \
	friend struct Z_Construct_UClass_AELSSWeaponTrap_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponTrap, AELSSWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponTrap) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StockedObjectRep=NETFIELD_REP_START, \
		Quantity, \
		NETFIELD_REP_END=Quantity	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSWeaponTrap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSWeaponTrap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponTrap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponTrap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponTrap(AELSSWeaponTrap&&); \
	NO_API AELSSWeaponTrap(const AELSSWeaponTrap&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponTrap(AELSSWeaponTrap&&); \
	NO_API AELSSWeaponTrap(const AELSSWeaponTrap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponTrap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponTrap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSWeaponTrap)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SkeletalMeshComponent_Attach() { return STRUCT_OFFSET(AELSSWeaponTrap, SkeletalMeshComponent_Attach); } \
	FORCEINLINE static uint32 __PPO__WeaponSubParam() { return STRUCT_OFFSET(AELSSWeaponTrap, WeaponSubParam); } \
	FORCEINLINE static uint32 __PPO__StockedObjectRep() { return STRUCT_OFFSET(AELSSWeaponTrap, StockedObjectRep); } \
	FORCEINLINE static uint32 __PPO__StockedObjectLocal() { return STRUCT_OFFSET(AELSSWeaponTrap, StockedObjectLocal); } \
	FORCEINLINE static uint32 __PPO__Quantity() { return STRUCT_OFFSET(AELSSWeaponTrap, Quantity); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_10_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSWeaponTrap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponTrap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
