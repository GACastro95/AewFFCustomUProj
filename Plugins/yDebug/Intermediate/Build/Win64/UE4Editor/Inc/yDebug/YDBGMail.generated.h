// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UYDBGMail;
struct FYDBGMailHeader;
struct FYDBGMailBody;
#ifdef YDEBUG_YDBGMail_generated_h
#error "YDBGMail.generated.h already included, missing '#pragma once' in YDBGMail.h"
#endif
#define YDEBUG_YDBGMail_generated_h

#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execCreateYDBGMail); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execSend);


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execCreateYDBGMail); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execSend);


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYDBGMail(); \
	friend struct Z_Construct_UClass_UYDBGMail_Statics; \
public: \
	DECLARE_CLASS(UYDBGMail, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yDebug"), NO_API) \
	DECLARE_SERIALIZER(UYDBGMail)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUYDBGMail(); \
	friend struct Z_Construct_UClass_UYDBGMail_Statics; \
public: \
	DECLARE_CLASS(UYDBGMail, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yDebug"), NO_API) \
	DECLARE_SERIALIZER(UYDBGMail)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYDBGMail(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYDBGMail) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYDBGMail); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYDBGMail); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYDBGMail(UYDBGMail&&); \
	NO_API UYDBGMail(const UYDBGMail&); \
public:


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYDBGMail(UYDBGMail&&); \
	NO_API UYDBGMail(const UYDBGMail&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYDBGMail); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYDBGMail); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UYDBGMail)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_10_PROLOG
#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_INCLASS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YDEBUG_API UClass* StaticClass<class UYDBGMail>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDBGMail_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
