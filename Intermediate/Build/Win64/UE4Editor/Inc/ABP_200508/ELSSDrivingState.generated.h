// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELSSDrivingState_generated_h
#error "ELSSDrivingState.generated.h already included, missing '#pragma once' in ELSSDrivingState.h"
#endif
#define ABP_200508_ELSSDrivingState_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRequestDamageMotion);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRequestDamageMotion);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSDrivingState(); \
	friend struct Z_Construct_UClass_UELSSDrivingState_Statics; \
public: \
	DECLARE_CLASS(UELSSDrivingState, UELSSActionStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSDrivingState)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUELSSDrivingState(); \
	friend struct Z_Construct_UClass_UELSSDrivingState_Statics; \
public: \
	DECLARE_CLASS(UELSSDrivingState, UELSSActionStateBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSDrivingState)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSDrivingState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSDrivingState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSDrivingState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSDrivingState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSDrivingState(UELSSDrivingState&&); \
	NO_API UELSSDrivingState(const UELSSDrivingState&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSDrivingState(UELSSDrivingState&&); \
	NO_API UELSSDrivingState(const UELSSDrivingState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSDrivingState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSDrivingState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSDrivingState)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsRequestedDamageMotion() { return STRUCT_OFFSET(UELSSDrivingState, IsRequestedDamageMotion); } \
	FORCEINLINE static uint32 __PPO__RequestedDamageCauserYaw() { return STRUCT_OFFSET(UELSSDrivingState, RequestedDamageCauserYaw); } \
	FORCEINLINE static uint32 __PPO__MontageDamage() { return STRUCT_OFFSET(UELSSDrivingState, MontageDamage); } \
	FORCEINLINE static uint32 __PPO__MontageDrivingPose() { return STRUCT_OFFSET(UELSSDrivingState, MontageDrivingPose); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_8_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSDrivingState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSDrivingState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
