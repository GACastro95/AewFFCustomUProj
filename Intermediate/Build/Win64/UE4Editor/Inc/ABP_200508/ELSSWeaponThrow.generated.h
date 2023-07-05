// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELSSWeaponThrow_generated_h
#error "ELSSWeaponThrow.generated.h already included, missing '#pragma once' in ELSSWeaponThrow.h"
#endif
#define ABP_200508_ELSSWeaponThrow_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecreaseQuantity); \
	DECLARE_FUNCTION(execGetQuantity); \
	DECLARE_FUNCTION(execOnRep_Quantity); \
	DECLARE_FUNCTION(execSetQuantity);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecreaseQuantity); \
	DECLARE_FUNCTION(execGetQuantity); \
	DECLARE_FUNCTION(execOnRep_Quantity); \
	DECLARE_FUNCTION(execSetQuantity);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSWeaponThrow(); \
	friend struct Z_Construct_UClass_AELSSWeaponThrow_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponThrow, AELSSWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponThrow) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Quantity=NETFIELD_REP_START, \
		NETFIELD_REP_END=Quantity	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAELSSWeaponThrow(); \
	friend struct Z_Construct_UClass_AELSSWeaponThrow_Statics; \
public: \
	DECLARE_CLASS(AELSSWeaponThrow, AELSSWeaponBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSWeaponThrow) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Quantity=NETFIELD_REP_START, \
		NETFIELD_REP_END=Quantity	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSWeaponThrow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSWeaponThrow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponThrow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponThrow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponThrow(AELSSWeaponThrow&&); \
	NO_API AELSSWeaponThrow(const AELSSWeaponThrow&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSWeaponThrow(AELSSWeaponThrow&&); \
	NO_API AELSSWeaponThrow(const AELSSWeaponThrow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSWeaponThrow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSWeaponThrow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSWeaponThrow)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponSubParam() { return STRUCT_OFFSET(AELSSWeaponThrow, WeaponSubParam); } \
	FORCEINLINE static uint32 __PPO__MoveId() { return STRUCT_OFFSET(AELSSWeaponThrow, MoveId); } \
	FORCEINLINE static uint32 __PPO__StockedProjectile() { return STRUCT_OFFSET(AELSSWeaponThrow, StockedProjectile); } \
	FORCEINLINE static uint32 __PPO__VisualProjectile() { return STRUCT_OFFSET(AELSSWeaponThrow, VisualProjectile); } \
	FORCEINLINE static uint32 __PPO__Quantity() { return STRUCT_OFFSET(AELSSWeaponThrow, Quantity); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_9_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSWeaponThrow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWeaponThrow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
