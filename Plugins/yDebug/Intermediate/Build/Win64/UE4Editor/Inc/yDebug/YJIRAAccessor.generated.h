// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UYJIRAAccessor;
struct FJIRASearchCondition;
struct FJIRATaskParam;
struct FJIRASearchParam;
struct FJIRASetupParam;
#ifdef YDEBUG_YJIRAAccessor_generated_h
#error "YJIRAAccessor.generated.h already included, missing '#pragma once' in YJIRAAccessor.h"
#endif
#define YDEBUG_YJIRAAccessor_generated_h

#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateYJIRAAccessor); \
	DECLARE_FUNCTION(execGenerateJIRAQueryLanguage); \
	DECLARE_FUNCTION(execRequestAppendTask); \
	DECLARE_FUNCTION(execRequestDeleteTask); \
	DECLARE_FUNCTION(execRequestGetTask); \
	DECLARE_FUNCTION(execRequestSearchTask); \
	DECLARE_FUNCTION(execRequestUpdateTask); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateYJIRAAccessor); \
	DECLARE_FUNCTION(execGenerateJIRAQueryLanguage); \
	DECLARE_FUNCTION(execRequestAppendTask); \
	DECLARE_FUNCTION(execRequestDeleteTask); \
	DECLARE_FUNCTION(execRequestGetTask); \
	DECLARE_FUNCTION(execRequestSearchTask); \
	DECLARE_FUNCTION(execRequestUpdateTask); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYJIRAAccessor(); \
	friend struct Z_Construct_UClass_UYJIRAAccessor_Statics; \
public: \
	DECLARE_CLASS(UYJIRAAccessor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yDebug"), NO_API) \
	DECLARE_SERIALIZER(UYJIRAAccessor)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUYJIRAAccessor(); \
	friend struct Z_Construct_UClass_UYJIRAAccessor_Statics; \
public: \
	DECLARE_CLASS(UYJIRAAccessor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yDebug"), NO_API) \
	DECLARE_SERIALIZER(UYJIRAAccessor)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYJIRAAccessor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYJIRAAccessor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYJIRAAccessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYJIRAAccessor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYJIRAAccessor(UYJIRAAccessor&&); \
	NO_API UYJIRAAccessor(const UYJIRAAccessor&); \
public:


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYJIRAAccessor(UYJIRAAccessor&&); \
	NO_API UYJIRAAccessor(const UYJIRAAccessor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYJIRAAccessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYJIRAAccessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UYJIRAAccessor)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_14_PROLOG
#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_INCLASS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YDEBUG_API UClass* StaticClass<class UYJIRAAccessor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YJIRAAccessor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
