// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_CORE_StringUtil_generated_h
#error "StringUtil.generated.h already included, missing '#pragma once' in StringUtil.h"
#endif
#define ELITE_CORE_StringUtil_generated_h

#define AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_SPARSE_DATA
#define AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCompare); \
	DECLARE_FUNCTION(execConvHiraganaToKatakana); \
	DECLARE_FUNCTION(execExcludeAsiaString); \
	DECLARE_FUNCTION(execSplitByCamel); \
	DECLARE_FUNCTION(execStrcmp); \
	DECLARE_FUNCTION(execToASCIIOnly);


#define AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCompare); \
	DECLARE_FUNCTION(execConvHiraganaToKatakana); \
	DECLARE_FUNCTION(execExcludeAsiaString); \
	DECLARE_FUNCTION(execSplitByCamel); \
	DECLARE_FUNCTION(execStrcmp); \
	DECLARE_FUNCTION(execToASCIIOnly);


#define AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStringUtil(); \
	friend struct Z_Construct_UClass_UStringUtil_Statics; \
public: \
	DECLARE_CLASS(UStringUtil, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(UStringUtil)


#define AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUStringUtil(); \
	friend struct Z_Construct_UClass_UStringUtil_Statics; \
public: \
	DECLARE_CLASS(UStringUtil, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ELITE_Core"), NO_API) \
	DECLARE_SERIALIZER(UStringUtil)


#define AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStringUtil(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStringUtil) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStringUtil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStringUtil); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStringUtil(UStringUtil&&); \
	NO_API UStringUtil(const UStringUtil&); \
public:


#define AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStringUtil(UStringUtil&&); \
	NO_API UStringUtil(const UStringUtil&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStringUtil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStringUtil); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStringUtil)


#define AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_6_PROLOG
#define AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_INCLASS \
	AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_SPARSE_DATA \
	AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELITE_CORE_API UClass* StaticClass<class UStringUtil>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Core_Public_StringUtil_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
