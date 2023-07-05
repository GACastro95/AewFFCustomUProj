// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSInstanceManagerBase;
enum class EEOSObjectType : uint8;
#ifdef YEOSSDK_EOSInstanceBase_generated_h
#error "EOSInstanceBase.generated.h already included, missing '#pragma once' in EOSInstanceBase.h"
#endif
#define YEOSSDK_EOSInstanceBase_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInstanceID); \
	DECLARE_FUNCTION(execGetInstanceManagerForDebug); \
	DECLARE_FUNCTION(execGetObjectType);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInstanceID); \
	DECLARE_FUNCTION(execGetInstanceManagerForDebug); \
	DECLARE_FUNCTION(execGetObjectType);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSInstanceBase(); \
	friend struct Z_Construct_UClass_UEOSInstanceBase_Statics; \
public: \
	DECLARE_CLASS(UEOSInstanceBase, UEOSLockebleCommon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSInstanceBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUEOSInstanceBase(); \
	friend struct Z_Construct_UClass_UEOSInstanceBase_Statics; \
public: \
	DECLARE_CLASS(UEOSInstanceBase, UEOSLockebleCommon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSInstanceBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSInstanceBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSInstanceBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSInstanceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSInstanceBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSInstanceBase(UEOSInstanceBase&&); \
	NO_API UEOSInstanceBase(const UEOSInstanceBase&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSInstanceBase(UEOSInstanceBase&&); \
	NO_API UEOSInstanceBase(const UEOSInstanceBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSInstanceBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSInstanceBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSInstanceBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcRefAPIRequestManager() { return STRUCT_OFFSET(UEOSInstanceBase, m_pcRefAPIRequestManager); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_10_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSInstanceBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSInstanceBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
