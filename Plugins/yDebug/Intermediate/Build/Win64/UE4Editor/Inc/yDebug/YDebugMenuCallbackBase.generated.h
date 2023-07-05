// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UYDebugMenuCallbackBase;
struct FYDebugMenuSimpleUIParamBase;
class UWorld;
#ifdef YDEBUG_YDebugMenuCallbackBase_generated_h
#error "YDebugMenuCallbackBase.generated.h already included, missing '#pragma once' in YDebugMenuCallbackBase.h"
#endif
#define YDEBUG_YDebugMenuCallbackBase_generated_h

#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateDebugMenuCallbackInstance); \
	DECLARE_FUNCTION(execGeRegistKey); \
	DECLARE_FUNCTION(execGetUIParam); \
	DECLARE_FUNCTION(execGetWorldForBP); \
	DECLARE_FUNCTION(execOnClickUI_Direct); \
	DECLARE_FUNCTION(execOnResetUI_Direct); \
	DECLARE_FUNCTION(execOnSetupUI_Direct); \
	DECLARE_FUNCTION(execOnUIValueChanged_Direct);


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateDebugMenuCallbackInstance); \
	DECLARE_FUNCTION(execGeRegistKey); \
	DECLARE_FUNCTION(execGetUIParam); \
	DECLARE_FUNCTION(execGetWorldForBP); \
	DECLARE_FUNCTION(execOnClickUI_Direct); \
	DECLARE_FUNCTION(execOnResetUI_Direct); \
	DECLARE_FUNCTION(execOnSetupUI_Direct); \
	DECLARE_FUNCTION(execOnUIValueChanged_Direct);


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_EVENT_PARMS \
	struct YDebugMenuCallbackBase_eventOnClickUI_Parms \
	{ \
		FYDebugMenuSimpleUIParamBase UIParam; \
		FString RegistKey; \
	}; \
	struct YDebugMenuCallbackBase_eventOnResetUI_Parms \
	{ \
		FYDebugMenuSimpleUIParamBase UIParam; \
		FString RegistKey; \
	}; \
	struct YDebugMenuCallbackBase_eventOnSetupUI_Parms \
	{ \
		FYDebugMenuSimpleUIParamBase UIParam; \
		FString RegistKey; \
	}; \
	struct YDebugMenuCallbackBase_eventOnUIValueChanged_Parms \
	{ \
		FYDebugMenuSimpleUIParamBase UIParam; \
		FString RegistKey; \
	};


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYDebugMenuCallbackBase(); \
	friend struct Z_Construct_UClass_UYDebugMenuCallbackBase_Statics; \
public: \
	DECLARE_CLASS(UYDebugMenuCallbackBase, UYDBG_ReferBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yDebug"), NO_API) \
	DECLARE_SERIALIZER(UYDebugMenuCallbackBase)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUYDebugMenuCallbackBase(); \
	friend struct Z_Construct_UClass_UYDebugMenuCallbackBase_Statics; \
public: \
	DECLARE_CLASS(UYDebugMenuCallbackBase, UYDBG_ReferBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yDebug"), NO_API) \
	DECLARE_SERIALIZER(UYDebugMenuCallbackBase)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYDebugMenuCallbackBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYDebugMenuCallbackBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYDebugMenuCallbackBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYDebugMenuCallbackBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYDebugMenuCallbackBase(UYDebugMenuCallbackBase&&); \
	NO_API UYDebugMenuCallbackBase(const UYDebugMenuCallbackBase&); \
public:


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYDebugMenuCallbackBase(UYDebugMenuCallbackBase&&); \
	NO_API UYDebugMenuCallbackBase(const UYDebugMenuCallbackBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYDebugMenuCallbackBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYDebugMenuCallbackBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UYDebugMenuCallbackBase)


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_11_PROLOG \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_EVENT_PARMS


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_INCLASS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YDEBUG_API UClass* StaticClass<class UYDebugMenuCallbackBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_YDebugMenuCallbackBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
