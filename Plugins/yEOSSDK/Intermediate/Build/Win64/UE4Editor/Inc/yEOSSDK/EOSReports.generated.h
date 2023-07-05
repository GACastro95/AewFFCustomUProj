// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSPlayerReportsCategory : uint8;
struct FEOSReportsAPIVersionSettings;
#ifdef YEOSSDK_EOSReports_generated_h
#error "EOSReports.generated.h already included, missing '#pragma once' in EOSReports.h"
#endif
#define YEOSSDK_EOSReports_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendReport); \
	DECLARE_FUNCTION(execSetApiVersion);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendReport); \
	DECLARE_FUNCTION(execSetApiVersion);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSReports(); \
	friend struct Z_Construct_UClass_UEOSReports_Statics; \
public: \
	DECLARE_CLASS(UEOSReports, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSReports)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUEOSReports(); \
	friend struct Z_Construct_UClass_UEOSReports_Statics; \
public: \
	DECLARE_CLASS(UEOSReports, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSReports)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSReports(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSReports) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSReports); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSReports); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSReports(UEOSReports&&); \
	NO_API UEOSReports(const UEOSReports&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSReports(UEOSReports&&); \
	NO_API UEOSReports(const UEOSReports&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSReports); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSReports); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSReports)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_9_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSReports>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReports_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
