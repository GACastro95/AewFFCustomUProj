// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystem;
struct FStPassiveSkillData;
#ifdef ABP_200508_ELPlayerEffectBase_generated_h
#error "ELPlayerEffectBase.generated.h already included, missing '#pragma once' in ELPlayerEffectBase.h"
#endif
#define ABP_200508_ELPlayerEffectBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGuardBreakEffect); \
	DECLARE_FUNCTION(execGetNoDownEffect); \
	DECLARE_FUNCTION(execGetPassiveSkillEffect); \
	DECLARE_FUNCTION(execGetReversalEffect); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGuardBreakEffect); \
	DECLARE_FUNCTION(execGetNoDownEffect); \
	DECLARE_FUNCTION(execGetPassiveSkillEffect); \
	DECLARE_FUNCTION(execGetReversalEffect); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_EVENT_PARMS \
	struct ELPlayerEffectBase_eventPassiveSkillEvent_BP_Parms \
	{ \
		FStPassiveSkillData PassiveSkillData; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELPlayerEffectBase(); \
	friend struct Z_Construct_UClass_UELPlayerEffectBase_Statics; \
public: \
	DECLARE_CLASS(UELPlayerEffectBase, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELPlayerEffectBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELPlayerEffectBase(); \
	friend struct Z_Construct_UClass_UELPlayerEffectBase_Statics; \
public: \
	DECLARE_CLASS(UELPlayerEffectBase, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELPlayerEffectBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELPlayerEffectBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELPlayerEffectBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELPlayerEffectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELPlayerEffectBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELPlayerEffectBase(UELPlayerEffectBase&&); \
	NO_API UELPlayerEffectBase(const UELPlayerEffectBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELPlayerEffectBase(UELPlayerEffectBase&&); \
	NO_API UELPlayerEffectBase(const UELPlayerEffectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELPlayerEffectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELPlayerEffectBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UELPlayerEffectBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELPlayerEffectBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELPlayerEffectBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
