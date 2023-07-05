// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESaveDataType : uint8;
struct FSaveData_FileInfo;
enum class ESaveDataProcResult : uint8;
enum class ESaveDataAccessorProcMode : uint8;
struct FSaveData_QuotaInfo;
class USaveDataObjectBase;
class USaveGame_RawData;
class USaveDataSystem;
#ifdef ABP_200508_SaveData_AccessorBase_generated_h
#error "SaveData_AccessorBase.generated.h already included, missing '#pragma once' in SaveData_AccessorBase.h"
#endif
#define ABP_200508_SaveData_AccessorBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertSaveDataTypeAndIndexFromFileKey); \
	DECLARE_FUNCTION(execDispose); \
	DECLARE_FUNCTION(execGetDataAccessRefCount); \
	DECLARE_FUNCTION(execGetDebugModeForBackGroundProcess); \
	DECLARE_FUNCTION(execGetFileKey); \
	DECLARE_FUNCTION(execGetFileList); \
	DECLARE_FUNCTION(execGetFileUserIndex); \
	DECLARE_FUNCTION(execGetLastBackGroundProcResult); \
	DECLARE_FUNCTION(execGetProcMode); \
	DECLARE_FUNCTION(execGetQuotaInfo); \
	DECLARE_FUNCTION(execGetSaveDataFileKeyWithType); \
	DECLARE_FUNCTION(execGetSaveDataObject); \
	DECLARE_FUNCTION(execGetSaveDataType); \
	DECLARE_FUNCTION(execGetSaveGame_RawData); \
	DECLARE_FUNCTION(execGetSearchTags); \
	DECLARE_FUNCTION(execImmediateCopy); \
	DECLARE_FUNCTION(execImmediateDelete); \
	DECLARE_FUNCTION(execImmediateLoad); \
	DECLARE_FUNCTION(execImmediateSave); \
	DECLARE_FUNCTION(execIsBusy); \
	DECLARE_FUNCTION(execIsCanceledTask); \
	DECLARE_FUNCTION(execIsSuccessBackGroundProcResult); \
	DECLARE_FUNCTION(execIsUpdatedData); \
	DECLARE_FUNCTION(execRequestConvertPS5FromPS4); \
	DECLARE_FUNCTION(execRequestCopy); \
	DECLARE_FUNCTION(execRequestDelete); \
	DECLARE_FUNCTION(execRequestDeleteOnServer); \
	DECLARE_FUNCTION(execRequestDownload); \
	DECLARE_FUNCTION(execRequestGetLocalQuotaInfo); \
	DECLARE_FUNCTION(execRequestLoad); \
	DECLARE_FUNCTION(execRequestSave); \
	DECLARE_FUNCTION(execRequestUpdateLocalFileList); \
	DECLARE_FUNCTION(execRequestUpdateOnlineFileList); \
	DECLARE_FUNCTION(execRequestUpdateTitleFileList); \
	DECLARE_FUNCTION(execRequestUpload); \
	DECLARE_FUNCTION(execSetCachedFlag); \
	DECLARE_FUNCTION(execSetDataType); \
	DECLARE_FUNCTION(execSetDebugModeForBackGroundProcess); \
	DECLARE_FUNCTION(execSetFileKey); \
	DECLARE_FUNCTION(execSetRequestCacheFlag); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execSetUpdatedData); \
	DECLARE_FUNCTION(execSetupSaveGame_RawData);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertSaveDataTypeAndIndexFromFileKey); \
	DECLARE_FUNCTION(execDispose); \
	DECLARE_FUNCTION(execGetDataAccessRefCount); \
	DECLARE_FUNCTION(execGetDebugModeForBackGroundProcess); \
	DECLARE_FUNCTION(execGetFileKey); \
	DECLARE_FUNCTION(execGetFileList); \
	DECLARE_FUNCTION(execGetFileUserIndex); \
	DECLARE_FUNCTION(execGetLastBackGroundProcResult); \
	DECLARE_FUNCTION(execGetProcMode); \
	DECLARE_FUNCTION(execGetQuotaInfo); \
	DECLARE_FUNCTION(execGetSaveDataFileKeyWithType); \
	DECLARE_FUNCTION(execGetSaveDataObject); \
	DECLARE_FUNCTION(execGetSaveDataType); \
	DECLARE_FUNCTION(execGetSaveGame_RawData); \
	DECLARE_FUNCTION(execGetSearchTags); \
	DECLARE_FUNCTION(execImmediateCopy); \
	DECLARE_FUNCTION(execImmediateDelete); \
	DECLARE_FUNCTION(execImmediateLoad); \
	DECLARE_FUNCTION(execImmediateSave); \
	DECLARE_FUNCTION(execIsBusy); \
	DECLARE_FUNCTION(execIsCanceledTask); \
	DECLARE_FUNCTION(execIsSuccessBackGroundProcResult); \
	DECLARE_FUNCTION(execIsUpdatedData); \
	DECLARE_FUNCTION(execRequestConvertPS5FromPS4); \
	DECLARE_FUNCTION(execRequestCopy); \
	DECLARE_FUNCTION(execRequestDelete); \
	DECLARE_FUNCTION(execRequestDeleteOnServer); \
	DECLARE_FUNCTION(execRequestDownload); \
	DECLARE_FUNCTION(execRequestGetLocalQuotaInfo); \
	DECLARE_FUNCTION(execRequestLoad); \
	DECLARE_FUNCTION(execRequestSave); \
	DECLARE_FUNCTION(execRequestUpdateLocalFileList); \
	DECLARE_FUNCTION(execRequestUpdateOnlineFileList); \
	DECLARE_FUNCTION(execRequestUpdateTitleFileList); \
	DECLARE_FUNCTION(execRequestUpload); \
	DECLARE_FUNCTION(execSetCachedFlag); \
	DECLARE_FUNCTION(execSetDataType); \
	DECLARE_FUNCTION(execSetDebugModeForBackGroundProcess); \
	DECLARE_FUNCTION(execSetFileKey); \
	DECLARE_FUNCTION(execSetRequestCacheFlag); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execSetUpdatedData); \
	DECLARE_FUNCTION(execSetupSaveGame_RawData);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveData_AccessorBase(); \
	friend struct Z_Construct_UClass_USaveData_AccessorBase_Statics; \
public: \
	DECLARE_CLASS(USaveData_AccessorBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveData_AccessorBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSaveData_AccessorBase(); \
	friend struct Z_Construct_UClass_USaveData_AccessorBase_Statics; \
public: \
	DECLARE_CLASS(USaveData_AccessorBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveData_AccessorBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveData_AccessorBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveData_AccessorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveData_AccessorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveData_AccessorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveData_AccessorBase(USaveData_AccessorBase&&); \
	NO_API USaveData_AccessorBase(const USaveData_AccessorBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveData_AccessorBase(USaveData_AccessorBase&&); \
	NO_API USaveData_AccessorBase(const USaveData_AccessorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveData_AccessorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveData_AccessorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveData_AccessorBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcSaveGameBaseShared() { return STRUCT_OFFSET(USaveData_AccessorBase, m_pcSaveGameBaseShared); } \
	FORCEINLINE static uint32 __PPO__m_pcSaveGame_RawData() { return STRUCT_OFFSET(USaveData_AccessorBase, m_pcSaveGame_RawData); }


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_17_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class USaveData_AccessorBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SaveData_AccessorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
