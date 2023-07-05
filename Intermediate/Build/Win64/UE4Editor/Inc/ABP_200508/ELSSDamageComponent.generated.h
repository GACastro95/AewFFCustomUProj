// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef ABP_200508_ELSSDamageComponent_generated_h
#error "ELSSDamageComponent.generated.h already included, missing '#pragma once' in ELSSDamageComponent.h"
#endif
#define ABP_200508_ELSSDamageComponent_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBlowVector); \
	DECLARE_FUNCTION(execSetBlowVector);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBlowVector); \
	DECLARE_FUNCTION(execSetBlowVector);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSDamageComponent(); \
	friend struct Z_Construct_UClass_UELSSDamageComponent_Statics; \
public: \
	DECLARE_CLASS(UELSSDamageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSDamageComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELSSDamageComponent(); \
	friend struct Z_Construct_UClass_UELSSDamageComponent_Statics; \
public: \
	DECLARE_CLASS(UELSSDamageComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSDamageComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSDamageComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSDamageComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSDamageComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSDamageComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSDamageComponent(UELSSDamageComponent&&); \
	NO_API UELSSDamageComponent(const UELSSDamageComponent&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSDamageComponent(UELSSDamageComponent&&); \
	NO_API UELSSDamageComponent(const UELSSDamageComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSDamageComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSDamageComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSDamageComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LastBlowVector() { return STRUCT_OFFSET(UELSSDamageComponent, LastBlowVector); } \
	FORCEINLINE static uint32 __PPO__HitEffectLineTraceObjectTypes() { return STRUCT_OFFSET(UELSSDamageComponent, HitEffectLineTraceObjectTypes); } \
	FORCEINLINE static uint32 __PPO__SyncHitHeightDiff() { return STRUCT_OFFSET(UELSSDamageComponent, SyncHitHeightDiff); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_9_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSDamageComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSDamageComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
