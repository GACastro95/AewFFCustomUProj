// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESeesawRelationType_N : uint8;
enum class ESeesawBuffType_N : uint8;
class AELCharacter_Native;
enum class ESeesawStateType_N : uint8;
#ifdef ABP_200508_ELSeesawSystem_generated_h
#error "ELSeesawSystem.generated.h already included, missing '#pragma once' in ELSeesawSystem.h"
#endif
#define ABP_200508_ELSeesawSystem_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalSeesawValue_N); \
	DECLARE_FUNCTION(execGetBuffType_N); \
	DECLARE_FUNCTION(execGetRelationType_N); \
	DECLARE_FUNCTION(execGetStateType_N); \
	DECLARE_FUNCTION(execSetBuffType_N); \
	DECLARE_FUNCTION(execSetStateType_N);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalSeesawValue_N); \
	DECLARE_FUNCTION(execGetBuffType_N); \
	DECLARE_FUNCTION(execGetRelationType_N); \
	DECLARE_FUNCTION(execGetStateType_N); \
	DECLARE_FUNCTION(execSetBuffType_N); \
	DECLARE_FUNCTION(execSetStateType_N);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSeesawSystem(); \
	friend struct Z_Construct_UClass_UELSeesawSystem_Statics; \
public: \
	DECLARE_CLASS(UELSeesawSystem, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSeesawSystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUELSeesawSystem(); \
	friend struct Z_Construct_UClass_UELSeesawSystem_Statics; \
public: \
	DECLARE_CLASS(UELSeesawSystem, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSeesawSystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSeesawSystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSeesawSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSeesawSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSeesawSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSeesawSystem(UELSeesawSystem&&); \
	NO_API UELSeesawSystem(const UELSeesawSystem&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSeesawSystem(UELSeesawSystem&&); \
	NO_API UELSeesawSystem(const UELSeesawSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSeesawSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSeesawSystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UELSeesawSystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SeesawParam_N() { return STRUCT_OFFSET(UELSeesawSystem, SeesawParam_N); } \
	FORCEINLINE static uint32 __PPO__StateType_N() { return STRUCT_OFFSET(UELSeesawSystem, StateType_N); } \
	FORCEINLINE static uint32 __PPO__BuffType_N() { return STRUCT_OFFSET(UELSeesawSystem, BuffType_N); } \
	FORCEINLINE static uint32 __PPO__BuffActiveSec_N() { return STRUCT_OFFSET(UELSeesawSystem, BuffActiveSec_N); } \
	FORCEINLINE static uint32 __PPO__bPenaltyBuff_N() { return STRUCT_OFFSET(UELSeesawSystem, bPenaltyBuff_N); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_12_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSeesawSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSeesawSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
