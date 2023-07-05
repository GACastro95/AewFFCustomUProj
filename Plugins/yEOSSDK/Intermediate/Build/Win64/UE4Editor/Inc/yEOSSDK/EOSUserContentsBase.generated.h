// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSUserContentProgress;
struct FEOSUserContentMetaData;
struct FEOSUserContentsAPIVersionSettings;
#ifdef YEOSSDK_EOSUserContentsBase_generated_h
#error "EOSUserContentsBase.generated.h already included, missing '#pragma once' in EOSUserContentsBase.h"
#endif
#define YEOSSDK_EOSUserContentsBase_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearDownloadProgress); \
	DECLARE_FUNCTION(execGetDownloadProgress); \
	DECLARE_FUNCTION(execGetFileCount); \
	DECLARE_FUNCTION(execGetFileMetaData); \
	DECLARE_FUNCTION(execGetFileMetaDataByIndex); \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execRequestCancelDownload); \
	DECLARE_FUNCTION(execRequestDownloadFile); \
	DECLARE_FUNCTION(execRequestFileList); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetRequestReadBytes);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearDownloadProgress); \
	DECLARE_FUNCTION(execGetDownloadProgress); \
	DECLARE_FUNCTION(execGetFileCount); \
	DECLARE_FUNCTION(execGetFileMetaData); \
	DECLARE_FUNCTION(execGetFileMetaDataByIndex); \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execRequestCancelDownload); \
	DECLARE_FUNCTION(execRequestDownloadFile); \
	DECLARE_FUNCTION(execRequestFileList); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetRequestReadBytes);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSUserContentsBase(); \
	friend struct Z_Construct_UClass_UEOSUserContentsBase_Statics; \
public: \
	DECLARE_CLASS(UEOSUserContentsBase, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSUserContentsBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUEOSUserContentsBase(); \
	friend struct Z_Construct_UClass_UEOSUserContentsBase_Statics; \
public: \
	DECLARE_CLASS(UEOSUserContentsBase, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSUserContentsBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSUserContentsBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSUserContentsBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSUserContentsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSUserContentsBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSUserContentsBase(UEOSUserContentsBase&&); \
	NO_API UEOSUserContentsBase(const UEOSUserContentsBase&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSUserContentsBase(UEOSUserContentsBase&&); \
	NO_API UEOSUserContentsBase(const UEOSUserContentsBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSUserContentsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSUserContentsBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSUserContentsBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cMetaData() { return STRUCT_OFFSET(UEOSUserContentsBase, m_cMetaData); } \
	FORCEINLINE static uint32 __PPO__m_cReadInfo() { return STRUCT_OFFSET(UEOSUserContentsBase, m_cReadInfo); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_10_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSUserContentsBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
