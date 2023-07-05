// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGameSingleton;
class UWorld;
#ifdef ELITE_CORE_GameSingleton_generated_h
#error "GameSingleton.generated.h already included, missing '#pragma once' in GameSingleton.h"
#endif
#define ELITE_CORE_GameSingleton_generated_h

#define AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateSingletonInstance); \
	DECLARE_FUNCTION(execDeleteSingletonInstance); \
	DECLARE_FUNCTION(execGetSingletonInstance); \
	DECLARE_FUNCTION(execGetWorldForBP);


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateSingletonInstance); \
	DECLARE_FUNCTION(execDeleteSingletonInstance); \
	DECLARE_FUNCTION(execGetSingletonInstance); \
	DECLARE_FUNCTION(execGetWorldForBP);


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_EVENT_PARMS \
	struct GameSingleton_eventOnPostTick_Parms \
	{ \
		float DeltaSeconds; \
	}; \
	struct GameSingleton_eventOnPreTick_Parms \
	{ \
		float DeltaSeconds; \
	}; \
	struct GameSingleton_eventOnTick_Parms \
	{ \
		float DeltaSeconds; \
	};


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameSingleton(); \
	friend struct Z_Construct_UClass_UGameSingleton_Statics; \
public: \
	DECLARE_CLASS(UGameSingleton, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(UGameSingleton)


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUGameSingleton(); \
	friend struct Z_Construct_UClass_UGameSingleton_Statics; \
public: \
	DECLARE_CLASS(UGameSingleton, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(UGameSingleton)


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameSingleton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameSingleton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSingleton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSingleton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSingleton(UGameSingleton&&); \
	NO_API UGameSingleton(const UGameSingleton&); \
public:


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameSingleton(UGameSingleton&&); \
	NO_API UGameSingleton(const UGameSingleton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameSingleton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameSingleton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameSingleton)


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bTickableWhenPaused() { return STRUCT_OFFSET(UGameSingleton, bTickableWhenPaused); } \
	FORCEINLINE static uint32 __PPO__bTickableInEditor() { return STRUCT_OFFSET(UGameSingleton, bTickableInEditor); }


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_9_PROLOG \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_INCLASS \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_CORE_API UClass* StaticClass<class UGameSingleton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Core_Public_GameSingleton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
