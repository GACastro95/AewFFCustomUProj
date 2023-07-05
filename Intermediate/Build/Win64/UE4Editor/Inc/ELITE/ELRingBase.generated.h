// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AActor;
#ifdef ELITE_ELRingBase_generated_h
#error "ELRingBase.generated.h already included, missing '#pragma once' in ELRingBase.h"
#endif
#define ELITE_ELRingBase_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNearRope);


#define AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNearRope);


#define AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELRingBase(); \
	friend struct Z_Construct_UClass_AELRingBase_Statics; \
public: \
	DECLARE_CLASS(AELRingBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(AELRingBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_INCLASS \
private: \
	static void StaticRegisterNativesAELRingBase(); \
	friend struct Z_Construct_UClass_AELRingBase_Statics; \
public: \
	DECLARE_CLASS(AELRingBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ELITE"), NO_API) \
	DECLARE_SERIALIZER(AELRingBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELRingBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELRingBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELRingBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELRingBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELRingBase(AELRingBase&&); \
	NO_API AELRingBase(const AELRingBase&); \
public:


#define AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELRingBase(AELRingBase&&); \
	NO_API AELRingBase(const AELRingBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELRingBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELRingBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELRingBase)


#define AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RopesList_N() { return STRUCT_OFFSET(AELRingBase, RopesList_N); }


#define AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_7_PROLOG
#define AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_INCLASS \
	AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_API UClass* StaticClass<class AELRingBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_ELRingBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
