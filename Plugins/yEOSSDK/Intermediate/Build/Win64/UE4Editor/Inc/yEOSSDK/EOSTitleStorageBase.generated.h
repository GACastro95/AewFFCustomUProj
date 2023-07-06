// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSTitleStorageProgress;
struct FEOSTitleStorageFileMetaData;
struct FEOSTitleStorageAPIVersionSettings;
#ifdef YEOSSDK_EOSTitleStorageBase_generated_h
#error "EOSTitleStorageBase.generated.h already included, missing '#pragma once' in EOSTitleStorageBase.h"
#endif
#define YEOSSDK_EOSTitleStorageBase_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_RPC_WRAPPERS \
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


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSTitleStorageBase(); \
	friend struct Z_Construct_UClass_UEOSTitleStorageBase_Statics; \
public: \
	DECLARE_CLASS(UEOSTitleStorageBase, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSTitleStorageBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUEOSTitleStorageBase(); \
	friend struct Z_Construct_UClass_UEOSTitleStorageBase_Statics; \
public: \
	DECLARE_CLASS(UEOSTitleStorageBase, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSTitleStorageBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSTitleStorageBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSTitleStorageBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSTitleStorageBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSTitleStorageBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSTitleStorageBase(UEOSTitleStorageBase&&); \
	NO_API UEOSTitleStorageBase(const UEOSTitleStorageBase&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSTitleStorageBase(UEOSTitleStorageBase&&); \
	NO_API UEOSTitleStorageBase(const UEOSTitleStorageBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSTitleStorageBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSTitleStorageBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSTitleStorageBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cMetaData() { return STRUCT_OFFSET(UEOSTitleStorageBase, m_cMetaData); } \
	FORCEINLINE static uint32 __PPO__m_cReadInfo() { return STRUCT_OFFSET(UEOSTitleStorageBase, m_cReadInfo); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_10_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSTitleStorageBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS