// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSAntiCheatClientMode : uint8;
enum class EEOSAntiCheatClientViolationType : uint8;
struct FEOSAntiCheatAPIVersionSettings;
#ifdef YEOSSDK_EOSAntiCheatClient_generated_h
#error "EOSAntiCheatClient.generated.h already included, missing '#pragma once' in EOSAntiCheatClient.h"
#endif
#define YEOSSDK_EOSAntiCheatClient_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginSession); \
	DECLARE_FUNCTION(execClientTickSession); \
	DECLARE_FUNCTION(execEndSession); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetupInternalCallback);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginSession); \
	DECLARE_FUNCTION(execClientTickSession); \
	DECLARE_FUNCTION(execEndSession); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetupInternalCallback);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSAntiCheatClient(); \
	friend struct Z_Construct_UClass_UEOSAntiCheatClient_Statics; \
public: \
	DECLARE_CLASS(UEOSAntiCheatClient, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSAntiCheatClient)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEOSAntiCheatClient(); \
	friend struct Z_Construct_UClass_UEOSAntiCheatClient_Statics; \
public: \
	DECLARE_CLASS(UEOSAntiCheatClient, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSAntiCheatClient)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSAntiCheatClient(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSAntiCheatClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSAntiCheatClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSAntiCheatClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSAntiCheatClient(UEOSAntiCheatClient&&); \
	NO_API UEOSAntiCheatClient(const UEOSAntiCheatClient&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSAntiCheatClient(UEOSAntiCheatClient&&); \
	NO_API UEOSAntiCheatClient(const UEOSAntiCheatClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSAntiCheatClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSAntiCheatClient); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSAntiCheatClient)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_13_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSAntiCheatClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
