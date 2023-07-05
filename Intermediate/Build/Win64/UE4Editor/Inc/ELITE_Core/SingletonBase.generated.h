// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USingletonBase;
class UObject;
#ifdef ELITE_CORE_SingletonBase_generated_h
#error "SingletonBase.generated.h already included, missing '#pragma once' in SingletonBase.h"
#endif
#define ELITE_CORE_SingletonBase_generated_h

#define AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroy); \
	DECLARE_FUNCTION(execGetInstance); \
	DECLARE_FUNCTION(execSetWorldContextObject);


#define AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroy); \
	DECLARE_FUNCTION(execGetInstance); \
	DECLARE_FUNCTION(execSetWorldContextObject);


#define AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_EVENT_PARMS \
	struct SingletonBase_eventReceivePostTick_Parms \
	{ \
		float DeltaSeconds; \
	}; \
	struct SingletonBase_eventReceivePreTick_Parms \
	{ \
		float DeltaSeconds; \
	}; \
	struct SingletonBase_eventReceiveTick_Parms \
	{ \
		float DeltaSeconds; \
	};


#define AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSingletonBase(); \
	friend struct Z_Construct_UClass_USingletonBase_Statics; \
public: \
	DECLARE_CLASS(USingletonBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(USingletonBase)


#define AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSingletonBase(); \
	friend struct Z_Construct_UClass_USingletonBase_Statics; \
public: \
	DECLARE_CLASS(USingletonBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(USingletonBase)


#define AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USingletonBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USingletonBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USingletonBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USingletonBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USingletonBase(USingletonBase&&); \
	NO_API USingletonBase(const USingletonBase&); \
public:


#define AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USingletonBase(USingletonBase&&); \
	NO_API USingletonBase(const USingletonBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USingletonBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USingletonBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USingletonBase)


#define AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bTickableWhenPaused() { return STRUCT_OFFSET(USingletonBase, bTickableWhenPaused); } \
	FORCEINLINE static uint32 __PPO__bTickableInEditor() { return STRUCT_OFFSET(USingletonBase, bTickableInEditor); } \
	FORCEINLINE static uint32 __PPO__LaunchType() { return STRUCT_OFFSET(USingletonBase, LaunchType); }


#define AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_10_PROLOG \
	AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_INCLASS \
	AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_CORE_API UClass* StaticClass<class USingletonBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Core_Public_SingletonBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
