// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_CORE_EasyInstancedHelper_generated_h
#error "EasyInstancedHelper.generated.h already included, missing '#pragma once' in EasyInstancedHelper.h"
#endif
#define ELITE_CORE_EasyInstancedHelper_generated_h

#define AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_RPC_WRAPPERS \
	virtual void OnInitialize_Implementation(); \
 \
	DECLARE_FUNCTION(execOnInitialize);


#define AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnInitialize_Implementation(); \
 \
	DECLARE_FUNCTION(execOnInitialize);


#define AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_EVENT_PARMS \
	struct EasyInstancedHelper_eventOnTick_Parms \
	{ \
		float DeltaTime; \
	};


#define AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEasyInstancedHelper(); \
	friend struct Z_Construct_UClass_UEasyInstancedHelper_Statics; \
public: \
	DECLARE_CLASS(UEasyInstancedHelper, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(UEasyInstancedHelper) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUEasyInstancedHelper(); \
	friend struct Z_Construct_UClass_UEasyInstancedHelper_Statics; \
public: \
	DECLARE_CLASS(UEasyInstancedHelper, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(UEasyInstancedHelper) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEasyInstancedHelper(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEasyInstancedHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyInstancedHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyInstancedHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEasyInstancedHelper(UEasyInstancedHelper&&); \
	NO_API UEasyInstancedHelper(const UEasyInstancedHelper&); \
public:


#define AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEasyInstancedHelper(UEasyInstancedHelper&&); \
	NO_API UEasyInstancedHelper(const UEasyInstancedHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEasyInstancedHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEasyInstancedHelper); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UEasyInstancedHelper)


#define AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_8_PROLOG \
	AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_EVENT_PARMS


#define AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_INCLASS \
	AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_CORE_API UClass* StaticClass<class UEasyInstancedHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Core_Public_EasyInstancedHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
