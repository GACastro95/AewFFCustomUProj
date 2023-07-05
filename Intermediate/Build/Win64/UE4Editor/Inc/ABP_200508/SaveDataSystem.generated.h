// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USaveData_AccessorBase;
enum class ESaveDataType : uint8;
class USaveGame_RawData;
class USaveDataObjectBase;
class USaveDataSystem;
enum class ESaveDataProcResult : uint8;
class USaveData_DebugBase;
struct FSaveData_FileInfo;
struct FSaveData_QuotaInfo;
class USaveData_ProcessBase;
enum class ESaveDataProcessType : uint8;
class UObject;
#ifdef ABP_200508_SaveDataSystem_generated_h
#error "SaveDataSystem.generated.h already included, missing '#pragma once' in SaveDataSystem.h"
#endif
#define ABP_200508_SaveDataSystem_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeAccount); \
	DECLARE_FUNCTION(execCheckValidAllocationOnLocal_Immediate); \
	DECLARE_FUNCTION(execClearCache); \
	DECLARE_FUNCTION(execCreateAccessor); \
	DECLARE_FUNCTION(execCreateAccessorWithRawData); \
	DECLARE_FUNCTION(execCreateSaveDataObject); \
	DECLARE_FUNCTION(execCreateSaveDataSystem); \
	DECLARE_FUNCTION(execDeleteRawData_Immediate); \
	DECLARE_FUNCTION(execExportFiles); \
	DECLARE_FUNCTION(execExportTexts); \
	DECLARE_FUNCTION(execFindCache); \
	DECLARE_FUNCTION(execGetDebugBase); \
	DECLARE_FUNCTION(execGetEpicAccountID); \
	DECLARE_FUNCTION(execGetLocalFileList); \
	DECLARE_FUNCTION(execGetLocalFileList_Immediate); \
	DECLARE_FUNCTION(execGetLocalFileListByType); \
	DECLARE_FUNCTION(execGetLocalQuotaInfo); \
	DECLARE_FUNCTION(execGetLocalQuotaInfo_Immediate); \
	DECLARE_FUNCTION(execGetOnlineFileList); \
	DECLARE_FUNCTION(execGetProcessor); \
	DECLARE_FUNCTION(execGetProductUserID); \
	DECLARE_FUNCTION(execGetSaveDataSystemForGlobal); \
	DECLARE_FUNCTION(execGetTitleFileList); \
	DECLARE_FUNCTION(execImportFiles); \
	DECLARE_FUNCTION(execIsExistsRawData_Immediate); \
	DECLARE_FUNCTION(execIsUpdatingLocalFileList); \
	DECLARE_FUNCTION(execIsUpdatingLocalQuotaInfo); \
	DECLARE_FUNCTION(execIsUpdatingOnlineFileList); \
	DECLARE_FUNCTION(execIsUpdatingTitleFileList); \
	DECLARE_FUNCTION(execIsValidDataForRawData); \
	DECLARE_FUNCTION(execIsWaitForBGTask); \
	DECLARE_FUNCTION(execLoadRawData_Immediate); \
	DECLARE_FUNCTION(execLoadRawData_Immediate_PS4); \
	DECLARE_FUNCTION(execRegistCache); \
	DECLARE_FUNCTION(execReleaseSaveDataCache); \
	DECLARE_FUNCTION(execRequestConvertPS5FromPS4); \
	DECLARE_FUNCTION(execRequestCopy); \
	DECLARE_FUNCTION(execRequestDelete); \
	DECLARE_FUNCTION(execRequestDeleteOnServer); \
	DECLARE_FUNCTION(execRequestDownload); \
	DECLARE_FUNCTION(execRequestGetLocalQuotaInfo); \
	DECLARE_FUNCTION(execRequestLoad); \
	DECLARE_FUNCTION(execRequestUpdateLocalFileList); \
	DECLARE_FUNCTION(execRequestUpdateOnlineFileList); \
	DECLARE_FUNCTION(execRequestUpdateTitleFileList); \
	DECLARE_FUNCTION(execSaveRawData_Immediate); \
	DECLARE_FUNCTION(execSetOnlineParam); \
	DECLARE_FUNCTION(execSetSaveDataSystemForGlobal); \
	DECLARE_FUNCTION(execStartDataReset); \
	DECLARE_FUNCTION(execUnregistCache); \
	DECLARE_FUNCTION(execUpdateLocalFileList_Immediate);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeAccount); \
	DECLARE_FUNCTION(execCheckValidAllocationOnLocal_Immediate); \
	DECLARE_FUNCTION(execClearCache); \
	DECLARE_FUNCTION(execCreateAccessor); \
	DECLARE_FUNCTION(execCreateAccessorWithRawData); \
	DECLARE_FUNCTION(execCreateSaveDataObject); \
	DECLARE_FUNCTION(execCreateSaveDataSystem); \
	DECLARE_FUNCTION(execDeleteRawData_Immediate); \
	DECLARE_FUNCTION(execExportFiles); \
	DECLARE_FUNCTION(execExportTexts); \
	DECLARE_FUNCTION(execFindCache); \
	DECLARE_FUNCTION(execGetDebugBase); \
	DECLARE_FUNCTION(execGetEpicAccountID); \
	DECLARE_FUNCTION(execGetLocalFileList); \
	DECLARE_FUNCTION(execGetLocalFileList_Immediate); \
	DECLARE_FUNCTION(execGetLocalFileListByType); \
	DECLARE_FUNCTION(execGetLocalQuotaInfo); \
	DECLARE_FUNCTION(execGetLocalQuotaInfo_Immediate); \
	DECLARE_FUNCTION(execGetOnlineFileList); \
	DECLARE_FUNCTION(execGetProcessor); \
	DECLARE_FUNCTION(execGetProductUserID); \
	DECLARE_FUNCTION(execGetSaveDataSystemForGlobal); \
	DECLARE_FUNCTION(execGetTitleFileList); \
	DECLARE_FUNCTION(execImportFiles); \
	DECLARE_FUNCTION(execIsExistsRawData_Immediate); \
	DECLARE_FUNCTION(execIsUpdatingLocalFileList); \
	DECLARE_FUNCTION(execIsUpdatingLocalQuotaInfo); \
	DECLARE_FUNCTION(execIsUpdatingOnlineFileList); \
	DECLARE_FUNCTION(execIsUpdatingTitleFileList); \
	DECLARE_FUNCTION(execIsValidDataForRawData); \
	DECLARE_FUNCTION(execIsWaitForBGTask); \
	DECLARE_FUNCTION(execLoadRawData_Immediate); \
	DECLARE_FUNCTION(execLoadRawData_Immediate_PS4); \
	DECLARE_FUNCTION(execRegistCache); \
	DECLARE_FUNCTION(execReleaseSaveDataCache); \
	DECLARE_FUNCTION(execRequestConvertPS5FromPS4); \
	DECLARE_FUNCTION(execRequestCopy); \
	DECLARE_FUNCTION(execRequestDelete); \
	DECLARE_FUNCTION(execRequestDeleteOnServer); \
	DECLARE_FUNCTION(execRequestDownload); \
	DECLARE_FUNCTION(execRequestGetLocalQuotaInfo); \
	DECLARE_FUNCTION(execRequestLoad); \
	DECLARE_FUNCTION(execRequestUpdateLocalFileList); \
	DECLARE_FUNCTION(execRequestUpdateOnlineFileList); \
	DECLARE_FUNCTION(execRequestUpdateTitleFileList); \
	DECLARE_FUNCTION(execSaveRawData_Immediate); \
	DECLARE_FUNCTION(execSetOnlineParam); \
	DECLARE_FUNCTION(execSetSaveDataSystemForGlobal); \
	DECLARE_FUNCTION(execStartDataReset); \
	DECLARE_FUNCTION(execUnregistCache); \
	DECLARE_FUNCTION(execUpdateLocalFileList_Immediate);


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveDataSystem(); \
	friend struct Z_Construct_UClass_USaveDataSystem_Statics; \
public: \
	DECLARE_CLASS(USaveDataSystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveDataSystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUSaveDataSystem(); \
	friend struct Z_Construct_UClass_USaveDataSystem_Statics; \
public: \
	DECLARE_CLASS(USaveDataSystem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(USaveDataSystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveDataSystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveDataSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataSystem(USaveDataSystem&&); \
	NO_API USaveDataSystem(const USaveDataSystem&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataSystem(USaveDataSystem&&); \
	NO_API USaveDataSystem(const USaveDataSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveDataSystem)


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcDebugBase() { return STRUCT_OFFSET(USaveDataSystem, m_pcDebugBase); } \
	FORCEINLINE static uint32 __PPO__m_pcLowerEngine() { return STRUCT_OFFSET(USaveDataSystem, m_pcLowerEngine); } \
	FORCEINLINE static uint32 __PPO__m_pcCache() { return STRUCT_OFFSET(USaveDataSystem, m_pcCache); } \
	FORCEINLINE static uint32 __PPO__m_cProcesses() { return STRUCT_OFFSET(USaveDataSystem, m_cProcesses); }


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_20_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class USaveDataSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SaveDataSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
