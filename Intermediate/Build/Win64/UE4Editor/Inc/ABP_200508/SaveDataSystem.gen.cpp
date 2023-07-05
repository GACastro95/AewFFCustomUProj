// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveDataSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataSystem() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataSystem_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_AccessorBase_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataType();
	ABP_200508_API UClass* Z_Construct_UClass_USaveGame_RawData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObjectBase_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_DebugBase_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FSaveData_FileInfo();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FSaveData_QuotaInfo();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_ProcessBase_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataProcessType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_LowerEngineBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_Cache_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USaveDataSystem::execChangeAccount)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strEpicAccountUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChangeAccount(Z_Param__strEpicAccountUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execCheckValidAllocationOnLocal_Immediate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckValidAllocationOnLocal_Immediate(Z_Param__sFileSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execClearCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execCreateAccessor)
	{
		P_GET_OBJECT_REF(USaveData_AccessorBase,Z_Param_Out__pcSaveDataAccessor);
		P_GET_ENUM(ESaveDataType,Z_Param__enType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateAccessor(Z_Param_Out__pcSaveDataAccessor,ESaveDataType(Z_Param__enType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execCreateAccessorWithRawData)
	{
		P_GET_OBJECT_REF(USaveData_AccessorBase,Z_Param_Out__pcSaveDataAccessor);
		P_GET_OBJECT(USaveGame_RawData,Z_Param__pcRawData);
		P_GET_UBOOL(Z_Param__bCopyData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateAccessorWithRawData(Z_Param_Out__pcSaveDataAccessor,Z_Param__pcRawData,Z_Param__bCopyData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execCreateSaveDataObject)
	{
		P_GET_OBJECT_REF(USaveDataObjectBase,Z_Param_Out__pcSaveDataObject);
		P_GET_ENUM(ESaveDataType,Z_Param__enType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateSaveDataObject(Z_Param_Out__pcSaveDataObject,ESaveDataType(Z_Param__enType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execCreateSaveDataSystem)
	{
		P_GET_OBJECT_REF(USaveDataSystem,Z_Param_Out__pcSaveDataSystem);
		P_GET_PROPERTY(FStrProperty,Z_Param__strEpicAccountUserID);
		P_GET_PROPERTY(FStrProperty,Z_Param__strEncryptionKey);
		P_GET_UBOOL(Z_Param__bEnableDebug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USaveDataSystem::CreateSaveDataSystem(Z_Param_Out__pcSaveDataSystem,Z_Param__strEpicAccountUserID,Z_Param__strEncryptionKey,Z_Param__bEnableDebug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execDeleteRawData_Immediate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->DeleteRawData_Immediate(Z_Param__strFileKey,Z_Param__sFileUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execExportFiles)
	{
		P_GET_UBOOL(Z_Param__bProjectSavedDir);
		P_GET_PROPERTY(FStrProperty,Z_Param__strExportPath);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFilterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExportFiles(Z_Param__bProjectSavedDir,Z_Param__strExportPath,Z_Param__strFilterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execExportTexts)
	{
		P_GET_UBOOL(Z_Param__bProjectSavedDir);
		P_GET_PROPERTY(FStrProperty,Z_Param__strExportPath);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFilterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ExportTexts(Z_Param__bProjectSavedDir,Z_Param__strExportPath,Z_Param__strFilterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execFindCache)
	{
		P_GET_OBJECT_REF(USaveData_AccessorBase,Z_Param_Out__pcSaveDataAccessor);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindCache(Z_Param_Out__pcSaveDataAccessor,Z_Param__strFileKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execGetDebugBase)
	{
		P_GET_OBJECT_REF(USaveData_DebugBase,Z_Param_Out__pcDebugBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDebugBase(Z_Param_Out__pcDebugBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execGetEpicAccountID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetEpicAccountID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execGetLocalFileList)
	{
		P_GET_TARRAY_REF(FSaveData_FileInfo,Z_Param_Out__refFileList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLocalFileList(Z_Param_Out__refFileList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execGetLocalFileList_Immediate)
	{
		P_GET_TARRAY_REF(FSaveData_FileInfo,Z_Param_Out__refFileList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLocalFileList_Immediate(Z_Param_Out__refFileList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execGetLocalFileListByType)
	{
		P_GET_TARRAY_REF(FSaveData_FileInfo,Z_Param_Out__refFileList);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFilterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLocalFileListByType(Z_Param_Out__refFileList,Z_Param__strFilterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execGetLocalQuotaInfo)
	{
		P_GET_STRUCT_REF(FSaveData_QuotaInfo,Z_Param_Out__stQuataInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLocalQuotaInfo(Z_Param_Out__stQuataInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execGetLocalQuotaInfo_Immediate)
	{
		P_GET_STRUCT_REF(FSaveData_QuotaInfo,Z_Param_Out__stQuataInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLocalQuotaInfo_Immediate(Z_Param_Out__stQuataInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execGetOnlineFileList)
	{
		P_GET_TARRAY_REF(FSaveData_FileInfo,Z_Param_Out__refFileList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOnlineFileList(Z_Param_Out__refFileList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execGetProcessor)
	{
		P_GET_OBJECT_REF(USaveData_ProcessBase,Z_Param_Out__pcProcessBase);
		P_GET_ENUM(ESaveDataProcessType,Z_Param__enProcessType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetProcessor(Z_Param_Out__pcProcessBase,ESaveDataProcessType(Z_Param__enProcessType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execGetProductUserID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetProductUserID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execGetSaveDataSystemForGlobal)
	{
		P_GET_OBJECT_REF(USaveDataSystem,Z_Param_Out__pcInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USaveDataSystem::GetSaveDataSystemForGlobal(Z_Param_Out__pcInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execGetTitleFileList)
	{
		P_GET_TARRAY_REF(FSaveData_FileInfo,Z_Param_Out__refFileList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTitleFileList(Z_Param_Out__refFileList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execImportFiles)
	{
		P_GET_TARRAY(FString,Z_Param__strFileList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ImportFiles(Z_Param__strFileList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execIsExistsRawData_Immediate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExistsRawData_Immediate(Z_Param__strFileKey,Z_Param__sFileUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execIsUpdatingLocalFileList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUpdatingLocalFileList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execIsUpdatingLocalQuotaInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUpdatingLocalQuotaInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execIsUpdatingOnlineFileList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUpdatingOnlineFileList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execIsUpdatingTitleFileList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUpdatingTitleFileList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execIsValidDataForRawData)
	{
		P_GET_OBJECT(USaveGame_RawData,Z_Param__pcRawData);
		P_GET_UBOOL(Z_Param__bDebugMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidDataForRawData(Z_Param__pcRawData,Z_Param__bDebugMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execIsWaitForBGTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWaitForBGTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execLoadRawData_Immediate)
	{
		P_GET_OBJECT_REF(USaveGame_RawData,Z_Param_Out__pcRawData);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->LoadRawData_Immediate(Z_Param_Out__pcRawData,Z_Param__strFileKey,Z_Param__sFileUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execLoadRawData_Immediate_PS4)
	{
		P_GET_OBJECT_REF(USaveGame_RawData,Z_Param_Out__pcRawData);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileUserIndex);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutSaveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->LoadRawData_Immediate_PS4(Z_Param_Out__pcRawData,Z_Param__strFileKey,Z_Param__sFileUserIndex,Z_Param_Out_OutSaveData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execRegistCache)
	{
		P_GET_OBJECT(USaveData_AccessorBase,Z_Param__pcSaveDataAccessor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegistCache(Z_Param__pcSaveDataAccessor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execReleaseSaveDataCache)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		USaveDataSystem::ReleaseSaveDataCache(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execRequestConvertPS5FromPS4)
	{
		P_GET_OBJECT_REF(USaveData_AccessorBase,Z_Param_Out__pcSaveDataAccessor);
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileUserIndex);
		P_GET_UBOOL(Z_Param__bCache);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestConvertPS5FromPS4(Z_Param_Out__pcSaveDataAccessor,Z_Param__strKey,Z_Param__sFileUserIndex,Z_Param__bCache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execRequestCopy)
	{
		P_GET_OBJECT_REF(USaveData_AccessorBase,Z_Param_Out__pcSaveDataAccessor);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSrcKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sSrcFileUserIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param__strDestKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sDestFileUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestCopy(Z_Param_Out__pcSaveDataAccessor,Z_Param__strSrcKey,Z_Param__sSrcFileUserIndex,Z_Param__strDestKey,Z_Param__sDestFileUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execRequestDelete)
	{
		P_GET_OBJECT_REF(USaveData_AccessorBase,Z_Param_Out__pcSaveDataAccessor);
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDelete(Z_Param_Out__pcSaveDataAccessor,Z_Param__strKey,Z_Param__sFileUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execRequestDeleteOnServer)
	{
		P_GET_OBJECT_REF(USaveData_AccessorBase,Z_Param_Out__pcSaveDataAccessor);
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDeleteOnServer(Z_Param_Out__pcSaveDataAccessor,Z_Param__strKey,Z_Param__sFileUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execRequestDownload)
	{
		P_GET_OBJECT_REF(USaveData_AccessorBase,Z_Param_Out__pcSaveDataAccessor);
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileUserIndex);
		P_GET_UBOOL(Z_Param__bTitleFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDownload(Z_Param_Out__pcSaveDataAccessor,Z_Param__strKey,Z_Param__sFileUserIndex,Z_Param__bTitleFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execRequestGetLocalQuotaInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestGetLocalQuotaInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execRequestLoad)
	{
		P_GET_OBJECT_REF(USaveData_AccessorBase,Z_Param_Out__pcSaveDataAccessor);
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileUserIndex);
		P_GET_UBOOL(Z_Param__bDownload);
		P_GET_UBOOL(Z_Param__bCache);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestLoad(Z_Param_Out__pcSaveDataAccessor,Z_Param__strKey,Z_Param__sFileUserIndex,Z_Param__bDownload,Z_Param__bCache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execRequestUpdateLocalFileList)
	{
		P_GET_UBOOL(Z_Param__bProjectSavedDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestUpdateLocalFileList(Z_Param__bProjectSavedDir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execRequestUpdateOnlineFileList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestUpdateOnlineFileList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execRequestUpdateTitleFileList)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out__cSearchTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestUpdateTitleFileList(Z_Param_Out__cSearchTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execSaveRawData_Immediate)
	{
		P_GET_OBJECT(USaveGame_RawData,Z_Param__pcRawData);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->SaveRawData_Immediate(Z_Param__pcRawData,Z_Param__strFileKey,Z_Param__sFileUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execSetOnlineParam)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetOnlineParam(Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execSetSaveDataSystemForGlobal)
	{
		P_GET_OBJECT(USaveDataSystem,Z_Param__pcInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USaveDataSystem::SetSaveDataSystemForGlobal(Z_Param__pcInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execStartDataReset)
	{
		P_GET_UBOOL(Z_Param__bProjectSavedDir);
		P_GET_PROPERTY(FStrProperty,Z_Param__strTargetFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartDataReset(Z_Param__bProjectSavedDir,Z_Param__strTargetFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execUnregistCache)
	{
		P_GET_OBJECT(USaveData_AccessorBase,Z_Param__pcSaveDataAccessor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnregistCache(Z_Param__pcSaveDataAccessor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataSystem::execUpdateLocalFileList_Immediate)
	{
		P_GET_UBOOL(Z_Param__bProjectSavedDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateLocalFileList_Immediate(Z_Param__bProjectSavedDir);
		P_NATIVE_END;
	}
	void USaveDataSystem::StaticRegisterNativesUSaveDataSystem()
	{
		UClass* Class = USaveDataSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeAccount", &USaveDataSystem::execChangeAccount },
			{ "CheckValidAllocationOnLocal_Immediate", &USaveDataSystem::execCheckValidAllocationOnLocal_Immediate },
			{ "ClearCache", &USaveDataSystem::execClearCache },
			{ "CreateAccessor", &USaveDataSystem::execCreateAccessor },
			{ "CreateAccessorWithRawData", &USaveDataSystem::execCreateAccessorWithRawData },
			{ "CreateSaveDataObject", &USaveDataSystem::execCreateSaveDataObject },
			{ "CreateSaveDataSystem", &USaveDataSystem::execCreateSaveDataSystem },
			{ "DeleteRawData_Immediate", &USaveDataSystem::execDeleteRawData_Immediate },
			{ "ExportFiles", &USaveDataSystem::execExportFiles },
			{ "ExportTexts", &USaveDataSystem::execExportTexts },
			{ "FindCache", &USaveDataSystem::execFindCache },
			{ "GetDebugBase", &USaveDataSystem::execGetDebugBase },
			{ "GetEpicAccountID", &USaveDataSystem::execGetEpicAccountID },
			{ "GetLocalFileList", &USaveDataSystem::execGetLocalFileList },
			{ "GetLocalFileList_Immediate", &USaveDataSystem::execGetLocalFileList_Immediate },
			{ "GetLocalFileListByType", &USaveDataSystem::execGetLocalFileListByType },
			{ "GetLocalQuotaInfo", &USaveDataSystem::execGetLocalQuotaInfo },
			{ "GetLocalQuotaInfo_Immediate", &USaveDataSystem::execGetLocalQuotaInfo_Immediate },
			{ "GetOnlineFileList", &USaveDataSystem::execGetOnlineFileList },
			{ "GetProcessor", &USaveDataSystem::execGetProcessor },
			{ "GetProductUserID", &USaveDataSystem::execGetProductUserID },
			{ "GetSaveDataSystemForGlobal", &USaveDataSystem::execGetSaveDataSystemForGlobal },
			{ "GetTitleFileList", &USaveDataSystem::execGetTitleFileList },
			{ "ImportFiles", &USaveDataSystem::execImportFiles },
			{ "IsExistsRawData_Immediate", &USaveDataSystem::execIsExistsRawData_Immediate },
			{ "IsUpdatingLocalFileList", &USaveDataSystem::execIsUpdatingLocalFileList },
			{ "IsUpdatingLocalQuotaInfo", &USaveDataSystem::execIsUpdatingLocalQuotaInfo },
			{ "IsUpdatingOnlineFileList", &USaveDataSystem::execIsUpdatingOnlineFileList },
			{ "IsUpdatingTitleFileList", &USaveDataSystem::execIsUpdatingTitleFileList },
			{ "IsValidDataForRawData", &USaveDataSystem::execIsValidDataForRawData },
			{ "IsWaitForBGTask", &USaveDataSystem::execIsWaitForBGTask },
			{ "LoadRawData_Immediate", &USaveDataSystem::execLoadRawData_Immediate },
			{ "LoadRawData_Immediate_PS4", &USaveDataSystem::execLoadRawData_Immediate_PS4 },
			{ "RegistCache", &USaveDataSystem::execRegistCache },
			{ "ReleaseSaveDataCache", &USaveDataSystem::execReleaseSaveDataCache },
			{ "RequestConvertPS5FromPS4", &USaveDataSystem::execRequestConvertPS5FromPS4 },
			{ "RequestCopy", &USaveDataSystem::execRequestCopy },
			{ "RequestDelete", &USaveDataSystem::execRequestDelete },
			{ "RequestDeleteOnServer", &USaveDataSystem::execRequestDeleteOnServer },
			{ "RequestDownload", &USaveDataSystem::execRequestDownload },
			{ "RequestGetLocalQuotaInfo", &USaveDataSystem::execRequestGetLocalQuotaInfo },
			{ "RequestLoad", &USaveDataSystem::execRequestLoad },
			{ "RequestUpdateLocalFileList", &USaveDataSystem::execRequestUpdateLocalFileList },
			{ "RequestUpdateOnlineFileList", &USaveDataSystem::execRequestUpdateOnlineFileList },
			{ "RequestUpdateTitleFileList", &USaveDataSystem::execRequestUpdateTitleFileList },
			{ "SaveRawData_Immediate", &USaveDataSystem::execSaveRawData_Immediate },
			{ "SetOnlineParam", &USaveDataSystem::execSetOnlineParam },
			{ "SetSaveDataSystemForGlobal", &USaveDataSystem::execSetSaveDataSystemForGlobal },
			{ "StartDataReset", &USaveDataSystem::execStartDataReset },
			{ "UnregistCache", &USaveDataSystem::execUnregistCache },
			{ "UpdateLocalFileList_Immediate", &USaveDataSystem::execUpdateLocalFileList_Immediate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics
	{
		struct SaveDataSystem_eventChangeAccount_Parms
		{
			FString _strEpicAccountUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strEpicAccountUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strEpicAccountUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics::NewProp__strEpicAccountUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics::NewProp__strEpicAccountUserID = { "_strEpicAccountUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventChangeAccount_Parms, _strEpicAccountUserID), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics::NewProp__strEpicAccountUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics::NewProp__strEpicAccountUserID_MetaData)) };
	void Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventChangeAccount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventChangeAccount_Parms), &Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics::NewProp__strEpicAccountUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "ChangeAccount", nullptr, nullptr, sizeof(SaveDataSystem_eventChangeAccount_Parms), Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_ChangeAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_ChangeAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_CheckValidAllocationOnLocal_Immediate_Statics
	{
		struct SaveDataSystem_eventCheckValidAllocationOnLocal_Immediate_Parms
		{
			int32 _sFileSize;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sFileSize;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_CheckValidAllocationOnLocal_Immediate_Statics::NewProp__sFileSize = { "_sFileSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventCheckValidAllocationOnLocal_Immediate_Parms, _sFileSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_CheckValidAllocationOnLocal_Immediate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventCheckValidAllocationOnLocal_Immediate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_CheckValidAllocationOnLocal_Immediate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventCheckValidAllocationOnLocal_Immediate_Parms), &Z_Construct_UFunction_USaveDataSystem_CheckValidAllocationOnLocal_Immediate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_CheckValidAllocationOnLocal_Immediate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CheckValidAllocationOnLocal_Immediate_Statics::NewProp__sFileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CheckValidAllocationOnLocal_Immediate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_CheckValidAllocationOnLocal_Immediate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_CheckValidAllocationOnLocal_Immediate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "CheckValidAllocationOnLocal_Immediate", nullptr, nullptr, sizeof(SaveDataSystem_eventCheckValidAllocationOnLocal_Immediate_Parms), Z_Construct_UFunction_USaveDataSystem_CheckValidAllocationOnLocal_Immediate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_CheckValidAllocationOnLocal_Immediate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_CheckValidAllocationOnLocal_Immediate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_CheckValidAllocationOnLocal_Immediate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_CheckValidAllocationOnLocal_Immediate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_CheckValidAllocationOnLocal_Immediate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_ClearCache_Statics
	{
		struct SaveDataSystem_eventClearCache_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataSystem_ClearCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventClearCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_ClearCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventClearCache_Parms), &Z_Construct_UFunction_USaveDataSystem_ClearCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_ClearCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_ClearCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_ClearCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_ClearCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "ClearCache", nullptr, nullptr, sizeof(SaveDataSystem_eventClearCache_Parms), Z_Construct_UFunction_USaveDataSystem_ClearCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_ClearCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_ClearCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_ClearCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_ClearCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_ClearCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics
	{
		struct SaveDataSystem_eventCreateAccessor_Parms
		{
			USaveData_AccessorBase* _pcSaveDataAccessor;
			ESaveDataType _enType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataAccessor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::NewProp__pcSaveDataAccessor = { "_pcSaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventCreateAccessor_Parms, _pcSaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::NewProp__enType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::NewProp__enType = { "_enType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventCreateAccessor_Parms, _enType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventCreateAccessor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventCreateAccessor_Parms), &Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::NewProp__pcSaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::NewProp__enType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::NewProp__enType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "CreateAccessor", nullptr, nullptr, sizeof(SaveDataSystem_eventCreateAccessor_Parms), Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_CreateAccessor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_CreateAccessor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics
	{
		struct SaveDataSystem_eventCreateAccessorWithRawData_Parms
		{
			USaveData_AccessorBase* _pcSaveDataAccessor;
			USaveGame_RawData* _pcRawData;
			bool _bCopyData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataAccessor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcRawData;
		static void NewProp__bCopyData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bCopyData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::NewProp__pcSaveDataAccessor = { "_pcSaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventCreateAccessorWithRawData_Parms, _pcSaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::NewProp__pcRawData = { "_pcRawData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventCreateAccessorWithRawData_Parms, _pcRawData), Z_Construct_UClass_USaveGame_RawData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::NewProp__bCopyData_SetBit(void* Obj)
	{
		((SaveDataSystem_eventCreateAccessorWithRawData_Parms*)Obj)->_bCopyData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::NewProp__bCopyData = { "_bCopyData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventCreateAccessorWithRawData_Parms), &Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::NewProp__bCopyData_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventCreateAccessorWithRawData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventCreateAccessorWithRawData_Parms), &Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::NewProp__pcSaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::NewProp__pcRawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::NewProp__bCopyData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "CreateAccessorWithRawData", nullptr, nullptr, sizeof(SaveDataSystem_eventCreateAccessorWithRawData_Parms), Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics
	{
		struct SaveDataSystem_eventCreateSaveDataObject_Parms
		{
			USaveDataObjectBase* _pcSaveDataObject;
			ESaveDataType _enType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::NewProp__pcSaveDataObject = { "_pcSaveDataObject", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventCreateSaveDataObject_Parms, _pcSaveDataObject), Z_Construct_UClass_USaveDataObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::NewProp__enType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::NewProp__enType = { "_enType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventCreateSaveDataObject_Parms, _enType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventCreateSaveDataObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventCreateSaveDataObject_Parms), &Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::NewProp__pcSaveDataObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::NewProp__enType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::NewProp__enType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "CreateSaveDataObject", nullptr, nullptr, sizeof(SaveDataSystem_eventCreateSaveDataObject_Parms), Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics
	{
		struct SaveDataSystem_eventCreateSaveDataSystem_Parms
		{
			USaveDataSystem* _pcSaveDataSystem;
			FString _strEpicAccountUserID;
			FString _strEncryptionKey;
			bool _bEnableDebug;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strEpicAccountUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strEpicAccountUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strEncryptionKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strEncryptionKey;
		static void NewProp__bEnableDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bEnableDebug;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp__pcSaveDataSystem = { "_pcSaveDataSystem", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventCreateSaveDataSystem_Parms, _pcSaveDataSystem), Z_Construct_UClass_USaveDataSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp__strEpicAccountUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp__strEpicAccountUserID = { "_strEpicAccountUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventCreateSaveDataSystem_Parms, _strEpicAccountUserID), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp__strEpicAccountUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp__strEpicAccountUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp__strEncryptionKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp__strEncryptionKey = { "_strEncryptionKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventCreateSaveDataSystem_Parms, _strEncryptionKey), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp__strEncryptionKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp__strEncryptionKey_MetaData)) };
	void Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp__bEnableDebug_SetBit(void* Obj)
	{
		((SaveDataSystem_eventCreateSaveDataSystem_Parms*)Obj)->_bEnableDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp__bEnableDebug = { "_bEnableDebug", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventCreateSaveDataSystem_Parms), &Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp__bEnableDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventCreateSaveDataSystem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventCreateSaveDataSystem_Parms), &Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp__pcSaveDataSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp__strEpicAccountUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp__strEncryptionKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp__bEnableDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "CreateSaveDataSystem", nullptr, nullptr, sizeof(SaveDataSystem_eventCreateSaveDataSystem_Parms), Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics
	{
		struct SaveDataSystem_eventDeleteRawData_Immediate_Parms
		{
			FString _strFileKey;
			int32 _sFileUserIndex;
			ESaveDataProcResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sFileUserIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::NewProp__strFileKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::NewProp__strFileKey = { "_strFileKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventDeleteRawData_Immediate_Parms, _strFileKey), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::NewProp__strFileKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::NewProp__strFileKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::NewProp__sFileUserIndex = { "_sFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventDeleteRawData_Immediate_Parms, _sFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventDeleteRawData_Immediate_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::NewProp__strFileKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::NewProp__sFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "DeleteRawData_Immediate", nullptr, nullptr, sizeof(SaveDataSystem_eventDeleteRawData_Immediate_Parms), Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics
	{
		struct SaveDataSystem_eventExportFiles_Parms
		{
			bool _bProjectSavedDir;
			FString _strExportPath;
			FString _strFilterName;
			bool ReturnValue;
		};
		static void NewProp__bProjectSavedDir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bProjectSavedDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strExportPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strExportPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFilterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFilterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp__bProjectSavedDir_SetBit(void* Obj)
	{
		((SaveDataSystem_eventExportFiles_Parms*)Obj)->_bProjectSavedDir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp__bProjectSavedDir = { "_bProjectSavedDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventExportFiles_Parms), &Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp__bProjectSavedDir_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp__strExportPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp__strExportPath = { "_strExportPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventExportFiles_Parms, _strExportPath), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp__strExportPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp__strExportPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp__strFilterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp__strFilterName = { "_strFilterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventExportFiles_Parms, _strFilterName), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp__strFilterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp__strFilterName_MetaData)) };
	void Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventExportFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventExportFiles_Parms), &Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp__bProjectSavedDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp__strExportPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp__strFilterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "ExportFiles", nullptr, nullptr, sizeof(SaveDataSystem_eventExportFiles_Parms), Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_ExportFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_ExportFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics
	{
		struct SaveDataSystem_eventExportTexts_Parms
		{
			bool _bProjectSavedDir;
			FString _strExportPath;
			FString _strFilterName;
			bool ReturnValue;
		};
		static void NewProp__bProjectSavedDir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bProjectSavedDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strExportPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strExportPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFilterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFilterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp__bProjectSavedDir_SetBit(void* Obj)
	{
		((SaveDataSystem_eventExportTexts_Parms*)Obj)->_bProjectSavedDir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp__bProjectSavedDir = { "_bProjectSavedDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventExportTexts_Parms), &Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp__bProjectSavedDir_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp__strExportPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp__strExportPath = { "_strExportPath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventExportTexts_Parms, _strExportPath), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp__strExportPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp__strExportPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp__strFilterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp__strFilterName = { "_strFilterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventExportTexts_Parms, _strFilterName), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp__strFilterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp__strFilterName_MetaData)) };
	void Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventExportTexts_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventExportTexts_Parms), &Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp__bProjectSavedDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp__strExportPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp__strFilterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "ExportTexts", nullptr, nullptr, sizeof(SaveDataSystem_eventExportTexts_Parms), Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_ExportTexts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_ExportTexts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_FindCache_Statics
	{
		struct SaveDataSystem_eventFindCache_Parms
		{
			USaveData_AccessorBase* _pcSaveDataAccessor;
			FString _strFileKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataAccessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::NewProp__pcSaveDataAccessor = { "_pcSaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventFindCache_Parms, _pcSaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::NewProp__strFileKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::NewProp__strFileKey = { "_strFileKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventFindCache_Parms, _strFileKey), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::NewProp__strFileKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::NewProp__strFileKey_MetaData)) };
	void Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventFindCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventFindCache_Parms), &Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::NewProp__pcSaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::NewProp__strFileKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "FindCache", nullptr, nullptr, sizeof(SaveDataSystem_eventFindCache_Parms), Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_FindCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_FindCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_GetDebugBase_Statics
	{
		struct SaveDataSystem_eventGetDebugBase_Parms
		{
			USaveData_DebugBase* _pcDebugBase;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcDebugBase;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_GetDebugBase_Statics::NewProp__pcDebugBase = { "_pcDebugBase", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetDebugBase_Parms, _pcDebugBase), Z_Construct_UClass_USaveData_DebugBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_GetDebugBase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventGetDebugBase_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_GetDebugBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventGetDebugBase_Parms), &Z_Construct_UFunction_USaveDataSystem_GetDebugBase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_GetDebugBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetDebugBase_Statics::NewProp__pcDebugBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetDebugBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_GetDebugBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_GetDebugBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "GetDebugBase", nullptr, nullptr, sizeof(SaveDataSystem_eventGetDebugBase_Parms), Z_Construct_UFunction_USaveDataSystem_GetDebugBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetDebugBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_GetDebugBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetDebugBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_GetDebugBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_GetDebugBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_GetEpicAccountID_Statics
	{
		struct SaveDataSystem_eventGetEpicAccountID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_GetEpicAccountID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetEpicAccountID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_GetEpicAccountID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetEpicAccountID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_GetEpicAccountID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_GetEpicAccountID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "GetEpicAccountID", nullptr, nullptr, sizeof(SaveDataSystem_eventGetEpicAccountID_Parms), Z_Construct_UFunction_USaveDataSystem_GetEpicAccountID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetEpicAccountID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_GetEpicAccountID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetEpicAccountID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_GetEpicAccountID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_GetEpicAccountID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Statics
	{
		struct SaveDataSystem_eventGetLocalFileList_Parms
		{
			TArray<FSaveData_FileInfo> _refFileList;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__refFileList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__refFileList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Statics::NewProp__refFileList_Inner = { "_refFileList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveData_FileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Statics::NewProp__refFileList = { "_refFileList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetLocalFileList_Parms, _refFileList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetLocalFileList_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Statics::NewProp__refFileList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Statics::NewProp__refFileList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "GetLocalFileList", nullptr, nullptr, sizeof(SaveDataSystem_eventGetLocalFileList_Parms), Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_GetLocalFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Immediate_Statics
	{
		struct SaveDataSystem_eventGetLocalFileList_Immediate_Parms
		{
			TArray<FSaveData_FileInfo> _refFileList;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__refFileList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__refFileList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Immediate_Statics::NewProp__refFileList_Inner = { "_refFileList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveData_FileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Immediate_Statics::NewProp__refFileList = { "_refFileList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetLocalFileList_Immediate_Parms, _refFileList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Immediate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetLocalFileList_Immediate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Immediate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Immediate_Statics::NewProp__refFileList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Immediate_Statics::NewProp__refFileList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Immediate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Immediate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Immediate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "GetLocalFileList_Immediate", nullptr, nullptr, sizeof(SaveDataSystem_eventGetLocalFileList_Immediate_Parms), Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Immediate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Immediate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Immediate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Immediate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Immediate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Immediate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics
	{
		struct SaveDataSystem_eventGetLocalFileListByType_Parms
		{
			TArray<FSaveData_FileInfo> _refFileList;
			FString _strFilterName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__refFileList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__refFileList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFilterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFilterName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::NewProp__refFileList_Inner = { "_refFileList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveData_FileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::NewProp__refFileList = { "_refFileList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetLocalFileListByType_Parms, _refFileList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::NewProp__strFilterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::NewProp__strFilterName = { "_strFilterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetLocalFileListByType_Parms, _strFilterName), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::NewProp__strFilterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::NewProp__strFilterName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetLocalFileListByType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::NewProp__refFileList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::NewProp__refFileList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::NewProp__strFilterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "GetLocalFileListByType", nullptr, nullptr, sizeof(SaveDataSystem_eventGetLocalFileListByType_Parms), Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Statics
	{
		struct SaveDataSystem_eventGetLocalQuotaInfo_Parms
		{
			FSaveData_QuotaInfo _stQuataInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stQuataInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Statics::NewProp__stQuataInfo = { "_stQuataInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetLocalQuotaInfo_Parms, _stQuataInfo), Z_Construct_UScriptStruct_FSaveData_QuotaInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventGetLocalQuotaInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventGetLocalQuotaInfo_Parms), &Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Statics::NewProp__stQuataInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "GetLocalQuotaInfo", nullptr, nullptr, sizeof(SaveDataSystem_eventGetLocalQuotaInfo_Parms), Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Immediate_Statics
	{
		struct SaveDataSystem_eventGetLocalQuotaInfo_Immediate_Parms
		{
			FSaveData_QuotaInfo _stQuataInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stQuataInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Immediate_Statics::NewProp__stQuataInfo = { "_stQuataInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetLocalQuotaInfo_Immediate_Parms, _stQuataInfo), Z_Construct_UScriptStruct_FSaveData_QuotaInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Immediate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventGetLocalQuotaInfo_Immediate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Immediate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventGetLocalQuotaInfo_Immediate_Parms), &Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Immediate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Immediate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Immediate_Statics::NewProp__stQuataInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Immediate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Immediate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Immediate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "GetLocalQuotaInfo_Immediate", nullptr, nullptr, sizeof(SaveDataSystem_eventGetLocalQuotaInfo_Immediate_Parms), Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Immediate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Immediate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Immediate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Immediate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Immediate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Immediate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_GetOnlineFileList_Statics
	{
		struct SaveDataSystem_eventGetOnlineFileList_Parms
		{
			TArray<FSaveData_FileInfo> _refFileList;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__refFileList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__refFileList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataSystem_GetOnlineFileList_Statics::NewProp__refFileList_Inner = { "_refFileList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveData_FileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataSystem_GetOnlineFileList_Statics::NewProp__refFileList = { "_refFileList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetOnlineFileList_Parms, _refFileList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_GetOnlineFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetOnlineFileList_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_GetOnlineFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetOnlineFileList_Statics::NewProp__refFileList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetOnlineFileList_Statics::NewProp__refFileList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetOnlineFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_GetOnlineFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_GetOnlineFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "GetOnlineFileList", nullptr, nullptr, sizeof(SaveDataSystem_eventGetOnlineFileList_Parms), Z_Construct_UFunction_USaveDataSystem_GetOnlineFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetOnlineFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_GetOnlineFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetOnlineFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_GetOnlineFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_GetOnlineFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics
	{
		struct SaveDataSystem_eventGetProcessor_Parms
		{
			USaveData_ProcessBase* _pcProcessBase;
			ESaveDataProcessType _enProcessType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcProcessBase;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enProcessType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enProcessType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::NewProp__pcProcessBase = { "_pcProcessBase", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetProcessor_Parms, _pcProcessBase), Z_Construct_UClass_USaveData_ProcessBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::NewProp__enProcessType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::NewProp__enProcessType = { "_enProcessType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetProcessor_Parms, _enProcessType), Z_Construct_UEnum_ELITE_Game_ESaveDataProcessType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventGetProcessor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventGetProcessor_Parms), &Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::NewProp__pcProcessBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::NewProp__enProcessType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::NewProp__enProcessType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "GetProcessor", nullptr, nullptr, sizeof(SaveDataSystem_eventGetProcessor_Parms), Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_GetProcessor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_GetProcessor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_GetProductUserID_Statics
	{
		struct SaveDataSystem_eventGetProductUserID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_GetProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetProductUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_GetProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_GetProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_GetProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "GetProductUserID", nullptr, nullptr, sizeof(SaveDataSystem_eventGetProductUserID_Parms), Z_Construct_UFunction_USaveDataSystem_GetProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_GetProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_GetProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_GetProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_GetSaveDataSystemForGlobal_Statics
	{
		struct SaveDataSystem_eventGetSaveDataSystemForGlobal_Parms
		{
			USaveDataSystem* _pcInstance;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInstance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_GetSaveDataSystemForGlobal_Statics::NewProp__pcInstance = { "_pcInstance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetSaveDataSystemForGlobal_Parms, _pcInstance), Z_Construct_UClass_USaveDataSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_GetSaveDataSystemForGlobal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventGetSaveDataSystemForGlobal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_GetSaveDataSystemForGlobal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventGetSaveDataSystemForGlobal_Parms), &Z_Construct_UFunction_USaveDataSystem_GetSaveDataSystemForGlobal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_GetSaveDataSystemForGlobal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetSaveDataSystemForGlobal_Statics::NewProp__pcInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetSaveDataSystemForGlobal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_GetSaveDataSystemForGlobal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_GetSaveDataSystemForGlobal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "GetSaveDataSystemForGlobal", nullptr, nullptr, sizeof(SaveDataSystem_eventGetSaveDataSystemForGlobal_Parms), Z_Construct_UFunction_USaveDataSystem_GetSaveDataSystemForGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetSaveDataSystemForGlobal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_GetSaveDataSystemForGlobal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetSaveDataSystemForGlobal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_GetSaveDataSystemForGlobal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_GetSaveDataSystemForGlobal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_GetTitleFileList_Statics
	{
		struct SaveDataSystem_eventGetTitleFileList_Parms
		{
			TArray<FSaveData_FileInfo> _refFileList;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__refFileList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__refFileList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataSystem_GetTitleFileList_Statics::NewProp__refFileList_Inner = { "_refFileList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveData_FileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataSystem_GetTitleFileList_Statics::NewProp__refFileList = { "_refFileList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetTitleFileList_Parms, _refFileList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_GetTitleFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventGetTitleFileList_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_GetTitleFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetTitleFileList_Statics::NewProp__refFileList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetTitleFileList_Statics::NewProp__refFileList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_GetTitleFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_GetTitleFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_GetTitleFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "GetTitleFileList", nullptr, nullptr, sizeof(SaveDataSystem_eventGetTitleFileList_Parms), Z_Construct_UFunction_USaveDataSystem_GetTitleFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetTitleFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_GetTitleFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_GetTitleFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_GetTitleFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_GetTitleFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_ImportFiles_Statics
	{
		struct SaveDataSystem_eventImportFiles_Parms
		{
			TArray<FString> _strFileList;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__strFileList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_ImportFiles_Statics::NewProp__strFileList_Inner = { "_strFileList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataSystem_ImportFiles_Statics::NewProp__strFileList = { "_strFileList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventImportFiles_Parms, _strFileList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_ImportFiles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventImportFiles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_ImportFiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventImportFiles_Parms), &Z_Construct_UFunction_USaveDataSystem_ImportFiles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_ImportFiles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_ImportFiles_Statics::NewProp__strFileList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_ImportFiles_Statics::NewProp__strFileList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_ImportFiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_ImportFiles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_ImportFiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "ImportFiles", nullptr, nullptr, sizeof(SaveDataSystem_eventImportFiles_Parms), Z_Construct_UFunction_USaveDataSystem_ImportFiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_ImportFiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_ImportFiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_ImportFiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_ImportFiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_ImportFiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics
	{
		struct SaveDataSystem_eventIsExistsRawData_Immediate_Parms
		{
			FString _strFileKey;
			int32 _sFileUserIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sFileUserIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::NewProp__strFileKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::NewProp__strFileKey = { "_strFileKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventIsExistsRawData_Immediate_Parms, _strFileKey), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::NewProp__strFileKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::NewProp__strFileKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::NewProp__sFileUserIndex = { "_sFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventIsExistsRawData_Immediate_Parms, _sFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventIsExistsRawData_Immediate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventIsExistsRawData_Immediate_Parms), &Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::NewProp__strFileKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::NewProp__sFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "IsExistsRawData_Immediate", nullptr, nullptr, sizeof(SaveDataSystem_eventIsExistsRawData_Immediate_Parms), Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalFileList_Statics
	{
		struct SaveDataSystem_eventIsUpdatingLocalFileList_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalFileList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventIsUpdatingLocalFileList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventIsUpdatingLocalFileList_Parms), &Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalFileList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "IsUpdatingLocalFileList", nullptr, nullptr, sizeof(SaveDataSystem_eventIsUpdatingLocalFileList_Parms), Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalQuotaInfo_Statics
	{
		struct SaveDataSystem_eventIsUpdatingLocalQuotaInfo_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalQuotaInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventIsUpdatingLocalQuotaInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalQuotaInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventIsUpdatingLocalQuotaInfo_Parms), &Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalQuotaInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalQuotaInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalQuotaInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalQuotaInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalQuotaInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "IsUpdatingLocalQuotaInfo", nullptr, nullptr, sizeof(SaveDataSystem_eventIsUpdatingLocalQuotaInfo_Parms), Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalQuotaInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalQuotaInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalQuotaInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalQuotaInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalQuotaInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalQuotaInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_IsUpdatingOnlineFileList_Statics
	{
		struct SaveDataSystem_eventIsUpdatingOnlineFileList_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataSystem_IsUpdatingOnlineFileList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventIsUpdatingOnlineFileList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_IsUpdatingOnlineFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventIsUpdatingOnlineFileList_Parms), &Z_Construct_UFunction_USaveDataSystem_IsUpdatingOnlineFileList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_IsUpdatingOnlineFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_IsUpdatingOnlineFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_IsUpdatingOnlineFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_IsUpdatingOnlineFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "IsUpdatingOnlineFileList", nullptr, nullptr, sizeof(SaveDataSystem_eventIsUpdatingOnlineFileList_Parms), Z_Construct_UFunction_USaveDataSystem_IsUpdatingOnlineFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_IsUpdatingOnlineFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_IsUpdatingOnlineFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_IsUpdatingOnlineFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_IsUpdatingOnlineFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_IsUpdatingOnlineFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_IsUpdatingTitleFileList_Statics
	{
		struct SaveDataSystem_eventIsUpdatingTitleFileList_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataSystem_IsUpdatingTitleFileList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventIsUpdatingTitleFileList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_IsUpdatingTitleFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventIsUpdatingTitleFileList_Parms), &Z_Construct_UFunction_USaveDataSystem_IsUpdatingTitleFileList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_IsUpdatingTitleFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_IsUpdatingTitleFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_IsUpdatingTitleFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_IsUpdatingTitleFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "IsUpdatingTitleFileList", nullptr, nullptr, sizeof(SaveDataSystem_eventIsUpdatingTitleFileList_Parms), Z_Construct_UFunction_USaveDataSystem_IsUpdatingTitleFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_IsUpdatingTitleFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_IsUpdatingTitleFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_IsUpdatingTitleFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_IsUpdatingTitleFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_IsUpdatingTitleFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics
	{
		struct SaveDataSystem_eventIsValidDataForRawData_Parms
		{
			USaveGame_RawData* _pcRawData;
			bool _bDebugMode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcRawData;
		static void NewProp__bDebugMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bDebugMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::NewProp__pcRawData = { "_pcRawData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventIsValidDataForRawData_Parms, _pcRawData), Z_Construct_UClass_USaveGame_RawData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::NewProp__bDebugMode_SetBit(void* Obj)
	{
		((SaveDataSystem_eventIsValidDataForRawData_Parms*)Obj)->_bDebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::NewProp__bDebugMode = { "_bDebugMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventIsValidDataForRawData_Parms), &Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::NewProp__bDebugMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventIsValidDataForRawData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventIsValidDataForRawData_Parms), &Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::NewProp__pcRawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::NewProp__bDebugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "IsValidDataForRawData", nullptr, nullptr, sizeof(SaveDataSystem_eventIsValidDataForRawData_Parms), Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_IsWaitForBGTask_Statics
	{
		struct SaveDataSystem_eventIsWaitForBGTask_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataSystem_IsWaitForBGTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventIsWaitForBGTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_IsWaitForBGTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventIsWaitForBGTask_Parms), &Z_Construct_UFunction_USaveDataSystem_IsWaitForBGTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_IsWaitForBGTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_IsWaitForBGTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_IsWaitForBGTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_IsWaitForBGTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "IsWaitForBGTask", nullptr, nullptr, sizeof(SaveDataSystem_eventIsWaitForBGTask_Parms), Z_Construct_UFunction_USaveDataSystem_IsWaitForBGTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_IsWaitForBGTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_IsWaitForBGTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_IsWaitForBGTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_IsWaitForBGTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_IsWaitForBGTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics
	{
		struct SaveDataSystem_eventLoadRawData_Immediate_Parms
		{
			USaveGame_RawData* _pcRawData;
			FString _strFileKey;
			int32 _sFileUserIndex;
			ESaveDataProcResult ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcRawData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sFileUserIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::NewProp__pcRawData = { "_pcRawData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventLoadRawData_Immediate_Parms, _pcRawData), Z_Construct_UClass_USaveGame_RawData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::NewProp__strFileKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::NewProp__strFileKey = { "_strFileKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventLoadRawData_Immediate_Parms, _strFileKey), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::NewProp__strFileKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::NewProp__strFileKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::NewProp__sFileUserIndex = { "_sFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventLoadRawData_Immediate_Parms, _sFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventLoadRawData_Immediate_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::NewProp__pcRawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::NewProp__strFileKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::NewProp__sFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "LoadRawData_Immediate", nullptr, nullptr, sizeof(SaveDataSystem_eventLoadRawData_Immediate_Parms), Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics
	{
		struct SaveDataSystem_eventLoadRawData_Immediate_PS4_Parms
		{
			USaveGame_RawData* _pcRawData;
			FString _strFileKey;
			int32 _sFileUserIndex;
			TArray<uint8> OutSaveData;
			ESaveDataProcResult ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcRawData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sFileUserIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutSaveData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutSaveData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::NewProp__pcRawData = { "_pcRawData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventLoadRawData_Immediate_PS4_Parms, _pcRawData), Z_Construct_UClass_USaveGame_RawData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::NewProp__strFileKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::NewProp__strFileKey = { "_strFileKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventLoadRawData_Immediate_PS4_Parms, _strFileKey), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::NewProp__strFileKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::NewProp__strFileKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::NewProp__sFileUserIndex = { "_sFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventLoadRawData_Immediate_PS4_Parms, _sFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::NewProp_OutSaveData_Inner = { "OutSaveData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::NewProp_OutSaveData = { "OutSaveData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventLoadRawData_Immediate_PS4_Parms, OutSaveData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventLoadRawData_Immediate_PS4_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::NewProp__pcRawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::NewProp__strFileKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::NewProp__sFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::NewProp_OutSaveData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::NewProp_OutSaveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "LoadRawData_Immediate_PS4", nullptr, nullptr, sizeof(SaveDataSystem_eventLoadRawData_Immediate_PS4_Parms), Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_RegistCache_Statics
	{
		struct SaveDataSystem_eventRegistCache_Parms
		{
			USaveData_AccessorBase* _pcSaveDataAccessor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataAccessor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_RegistCache_Statics::NewProp__pcSaveDataAccessor = { "_pcSaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRegistCache_Parms, _pcSaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_RegistCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventRegistCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_RegistCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventRegistCache_Parms), &Z_Construct_UFunction_USaveDataSystem_RegistCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_RegistCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RegistCache_Statics::NewProp__pcSaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RegistCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RegistCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_RegistCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "RegistCache", nullptr, nullptr, sizeof(SaveDataSystem_eventRegistCache_Parms), Z_Construct_UFunction_USaveDataSystem_RegistCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RegistCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RegistCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RegistCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_RegistCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_RegistCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_ReleaseSaveDataCache_Statics
	{
		struct SaveDataSystem_eventReleaseSaveDataCache_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_ReleaseSaveDataCache_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventReleaseSaveDataCache_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_ReleaseSaveDataCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_ReleaseSaveDataCache_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_ReleaseSaveDataCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_ReleaseSaveDataCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "ReleaseSaveDataCache", nullptr, nullptr, sizeof(SaveDataSystem_eventReleaseSaveDataCache_Parms), Z_Construct_UFunction_USaveDataSystem_ReleaseSaveDataCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_ReleaseSaveDataCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_ReleaseSaveDataCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_ReleaseSaveDataCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_ReleaseSaveDataCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_ReleaseSaveDataCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics
	{
		struct SaveDataSystem_eventRequestConvertPS5FromPS4_Parms
		{
			USaveData_AccessorBase* _pcSaveDataAccessor;
			FString _strKey;
			int32 _sFileUserIndex;
			bool _bCache;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataAccessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sFileUserIndex;
		static void NewProp__bCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bCache;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::NewProp__pcSaveDataAccessor = { "_pcSaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestConvertPS5FromPS4_Parms, _pcSaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestConvertPS5FromPS4_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::NewProp__strKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::NewProp__sFileUserIndex = { "_sFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestConvertPS5FromPS4_Parms, _sFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::NewProp__bCache_SetBit(void* Obj)
	{
		((SaveDataSystem_eventRequestConvertPS5FromPS4_Parms*)Obj)->_bCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::NewProp__bCache = { "_bCache", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventRequestConvertPS5FromPS4_Parms), &Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::NewProp__bCache_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventRequestConvertPS5FromPS4_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventRequestConvertPS5FromPS4_Parms), &Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::NewProp__pcSaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::NewProp__sFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::NewProp__bCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "RequestConvertPS5FromPS4", nullptr, nullptr, sizeof(SaveDataSystem_eventRequestConvertPS5FromPS4_Parms), Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics
	{
		struct SaveDataSystem_eventRequestCopy_Parms
		{
			USaveData_AccessorBase* _pcSaveDataAccessor;
			FString _strSrcKey;
			int32 _sSrcFileUserIndex;
			FString _strDestKey;
			int32 _sDestFileUserIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataAccessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSrcKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSrcKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sSrcFileUserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strDestKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strDestKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sDestFileUserIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp__pcSaveDataAccessor = { "_pcSaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestCopy_Parms, _pcSaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp__strSrcKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp__strSrcKey = { "_strSrcKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestCopy_Parms, _strSrcKey), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp__strSrcKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp__strSrcKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp__sSrcFileUserIndex = { "_sSrcFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestCopy_Parms, _sSrcFileUserIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp__strDestKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp__strDestKey = { "_strDestKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestCopy_Parms, _strDestKey), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp__strDestKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp__strDestKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp__sDestFileUserIndex = { "_sDestFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestCopy_Parms, _sDestFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventRequestCopy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventRequestCopy_Parms), &Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp__pcSaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp__strSrcKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp__sSrcFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp__strDestKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp__sDestFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "RequestCopy", nullptr, nullptr, sizeof(SaveDataSystem_eventRequestCopy_Parms), Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_RequestCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_RequestCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics
	{
		struct SaveDataSystem_eventRequestDelete_Parms
		{
			USaveData_AccessorBase* _pcSaveDataAccessor;
			FString _strKey;
			int32 _sFileUserIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataAccessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sFileUserIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::NewProp__pcSaveDataAccessor = { "_pcSaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestDelete_Parms, _pcSaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestDelete_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::NewProp__strKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::NewProp__sFileUserIndex = { "_sFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestDelete_Parms, _sFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventRequestDelete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventRequestDelete_Parms), &Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::NewProp__pcSaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::NewProp__sFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "RequestDelete", nullptr, nullptr, sizeof(SaveDataSystem_eventRequestDelete_Parms), Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_RequestDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_RequestDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics
	{
		struct SaveDataSystem_eventRequestDeleteOnServer_Parms
		{
			USaveData_AccessorBase* _pcSaveDataAccessor;
			FString _strKey;
			int32 _sFileUserIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataAccessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sFileUserIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::NewProp__pcSaveDataAccessor = { "_pcSaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestDeleteOnServer_Parms, _pcSaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestDeleteOnServer_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::NewProp__strKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::NewProp__sFileUserIndex = { "_sFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestDeleteOnServer_Parms, _sFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventRequestDeleteOnServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventRequestDeleteOnServer_Parms), &Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::NewProp__pcSaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::NewProp__sFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "RequestDeleteOnServer", nullptr, nullptr, sizeof(SaveDataSystem_eventRequestDeleteOnServer_Parms), Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics
	{
		struct SaveDataSystem_eventRequestDownload_Parms
		{
			USaveData_AccessorBase* _pcSaveDataAccessor;
			FString _strKey;
			int32 _sFileUserIndex;
			bool _bTitleFile;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataAccessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sFileUserIndex;
		static void NewProp__bTitleFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bTitleFile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::NewProp__pcSaveDataAccessor = { "_pcSaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestDownload_Parms, _pcSaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestDownload_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::NewProp__strKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::NewProp__sFileUserIndex = { "_sFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestDownload_Parms, _sFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::NewProp__bTitleFile_SetBit(void* Obj)
	{
		((SaveDataSystem_eventRequestDownload_Parms*)Obj)->_bTitleFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::NewProp__bTitleFile = { "_bTitleFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventRequestDownload_Parms), &Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::NewProp__bTitleFile_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventRequestDownload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventRequestDownload_Parms), &Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::NewProp__pcSaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::NewProp__sFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::NewProp__bTitleFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "RequestDownload", nullptr, nullptr, sizeof(SaveDataSystem_eventRequestDownload_Parms), Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_RequestDownload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_RequestDownload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_RequestGetLocalQuotaInfo_Statics
	{
		struct SaveDataSystem_eventRequestGetLocalQuotaInfo_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataSystem_RequestGetLocalQuotaInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventRequestGetLocalQuotaInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestGetLocalQuotaInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventRequestGetLocalQuotaInfo_Parms), &Z_Construct_UFunction_USaveDataSystem_RequestGetLocalQuotaInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_RequestGetLocalQuotaInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestGetLocalQuotaInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestGetLocalQuotaInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_RequestGetLocalQuotaInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "RequestGetLocalQuotaInfo", nullptr, nullptr, sizeof(SaveDataSystem_eventRequestGetLocalQuotaInfo_Parms), Z_Construct_UFunction_USaveDataSystem_RequestGetLocalQuotaInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestGetLocalQuotaInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestGetLocalQuotaInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestGetLocalQuotaInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_RequestGetLocalQuotaInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_RequestGetLocalQuotaInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics
	{
		struct SaveDataSystem_eventRequestLoad_Parms
		{
			USaveData_AccessorBase* _pcSaveDataAccessor;
			FString _strKey;
			int32 _sFileUserIndex;
			bool _bDownload;
			bool _bCache;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataAccessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sFileUserIndex;
		static void NewProp__bDownload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bDownload;
		static void NewProp__bCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bCache;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp__pcSaveDataAccessor = { "_pcSaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestLoad_Parms, _pcSaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestLoad_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp__strKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp__sFileUserIndex = { "_sFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestLoad_Parms, _sFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp__bDownload_SetBit(void* Obj)
	{
		((SaveDataSystem_eventRequestLoad_Parms*)Obj)->_bDownload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp__bDownload = { "_bDownload", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventRequestLoad_Parms), &Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp__bDownload_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp__bCache_SetBit(void* Obj)
	{
		((SaveDataSystem_eventRequestLoad_Parms*)Obj)->_bCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp__bCache = { "_bCache", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventRequestLoad_Parms), &Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp__bCache_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventRequestLoad_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventRequestLoad_Parms), &Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp__pcSaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp__sFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp__bDownload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp__bCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "RequestLoad", nullptr, nullptr, sizeof(SaveDataSystem_eventRequestLoad_Parms), Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_RequestLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_RequestLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList_Statics
	{
		struct SaveDataSystem_eventRequestUpdateLocalFileList_Parms
		{
			bool _bProjectSavedDir;
			bool ReturnValue;
		};
		static void NewProp__bProjectSavedDir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bProjectSavedDir;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList_Statics::NewProp__bProjectSavedDir_SetBit(void* Obj)
	{
		((SaveDataSystem_eventRequestUpdateLocalFileList_Parms*)Obj)->_bProjectSavedDir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList_Statics::NewProp__bProjectSavedDir = { "_bProjectSavedDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventRequestUpdateLocalFileList_Parms), &Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList_Statics::NewProp__bProjectSavedDir_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventRequestUpdateLocalFileList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventRequestUpdateLocalFileList_Parms), &Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList_Statics::NewProp__bProjectSavedDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "RequestUpdateLocalFileList", nullptr, nullptr, sizeof(SaveDataSystem_eventRequestUpdateLocalFileList_Parms), Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_RequestUpdateOnlineFileList_Statics
	{
		struct SaveDataSystem_eventRequestUpdateOnlineFileList_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataSystem_RequestUpdateOnlineFileList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventRequestUpdateOnlineFileList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestUpdateOnlineFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventRequestUpdateOnlineFileList_Parms), &Z_Construct_UFunction_USaveDataSystem_RequestUpdateOnlineFileList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_RequestUpdateOnlineFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestUpdateOnlineFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestUpdateOnlineFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_RequestUpdateOnlineFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "RequestUpdateOnlineFileList", nullptr, nullptr, sizeof(SaveDataSystem_eventRequestUpdateOnlineFileList_Parms), Z_Construct_UFunction_USaveDataSystem_RequestUpdateOnlineFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestUpdateOnlineFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestUpdateOnlineFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestUpdateOnlineFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_RequestUpdateOnlineFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_RequestUpdateOnlineFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics
	{
		struct SaveDataSystem_eventRequestUpdateTitleFileList_Parms
		{
			TArray<FString> _cSearchTags;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cSearchTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cSearchTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cSearchTags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::NewProp__cSearchTags_Inner = { "_cSearchTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::NewProp__cSearchTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::NewProp__cSearchTags = { "_cSearchTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventRequestUpdateTitleFileList_Parms, _cSearchTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::NewProp__cSearchTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::NewProp__cSearchTags_MetaData)) };
	void Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventRequestUpdateTitleFileList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventRequestUpdateTitleFileList_Parms), &Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::NewProp__cSearchTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::NewProp__cSearchTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "RequestUpdateTitleFileList", nullptr, nullptr, sizeof(SaveDataSystem_eventRequestUpdateTitleFileList_Parms), Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics
	{
		struct SaveDataSystem_eventSaveRawData_Immediate_Parms
		{
			USaveGame_RawData* _pcRawData;
			FString _strFileKey;
			int32 _sFileUserIndex;
			ESaveDataProcResult ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcRawData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sFileUserIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::NewProp__pcRawData = { "_pcRawData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventSaveRawData_Immediate_Parms, _pcRawData), Z_Construct_UClass_USaveGame_RawData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::NewProp__strFileKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::NewProp__strFileKey = { "_strFileKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventSaveRawData_Immediate_Parms, _strFileKey), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::NewProp__strFileKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::NewProp__strFileKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::NewProp__sFileUserIndex = { "_sFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventSaveRawData_Immediate_Parms, _sFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventSaveRawData_Immediate_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::NewProp__pcRawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::NewProp__strFileKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::NewProp__sFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "SaveRawData_Immediate", nullptr, nullptr, sizeof(SaveDataSystem_eventSaveRawData_Immediate_Parms), Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics
	{
		struct SaveDataSystem_eventSetOnlineParam_Parms
		{
			FString _strProductUserID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventSetOnlineParam_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventSetOnlineParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventSetOnlineParam_Parms), &Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "SetOnlineParam", nullptr, nullptr, sizeof(SaveDataSystem_eventSetOnlineParam_Parms), Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_SetOnlineParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_SetOnlineParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_SetSaveDataSystemForGlobal_Statics
	{
		struct SaveDataSystem_eventSetSaveDataSystemForGlobal_Parms
		{
			USaveDataSystem* _pcInstance;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInstance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_SetSaveDataSystemForGlobal_Statics::NewProp__pcInstance = { "_pcInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventSetSaveDataSystemForGlobal_Parms, _pcInstance), Z_Construct_UClass_USaveDataSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_SetSaveDataSystemForGlobal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventSetSaveDataSystemForGlobal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_SetSaveDataSystemForGlobal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventSetSaveDataSystemForGlobal_Parms), &Z_Construct_UFunction_USaveDataSystem_SetSaveDataSystemForGlobal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_SetSaveDataSystemForGlobal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_SetSaveDataSystemForGlobal_Statics::NewProp__pcInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_SetSaveDataSystemForGlobal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_SetSaveDataSystemForGlobal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_SetSaveDataSystemForGlobal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "SetSaveDataSystemForGlobal", nullptr, nullptr, sizeof(SaveDataSystem_eventSetSaveDataSystemForGlobal_Parms), Z_Construct_UFunction_USaveDataSystem_SetSaveDataSystemForGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_SetSaveDataSystemForGlobal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_SetSaveDataSystemForGlobal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_SetSaveDataSystemForGlobal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_SetSaveDataSystemForGlobal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_SetSaveDataSystemForGlobal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics
	{
		struct SaveDataSystem_eventStartDataReset_Parms
		{
			bool _bProjectSavedDir;
			FString _strTargetFileName;
			bool ReturnValue;
		};
		static void NewProp__bProjectSavedDir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bProjectSavedDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strTargetFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strTargetFileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::NewProp__bProjectSavedDir_SetBit(void* Obj)
	{
		((SaveDataSystem_eventStartDataReset_Parms*)Obj)->_bProjectSavedDir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::NewProp__bProjectSavedDir = { "_bProjectSavedDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventStartDataReset_Parms), &Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::NewProp__bProjectSavedDir_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::NewProp__strTargetFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::NewProp__strTargetFileName = { "_strTargetFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventStartDataReset_Parms, _strTargetFileName), METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::NewProp__strTargetFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::NewProp__strTargetFileName_MetaData)) };
	void Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventStartDataReset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventStartDataReset_Parms), &Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::NewProp__bProjectSavedDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::NewProp__strTargetFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "StartDataReset", nullptr, nullptr, sizeof(SaveDataSystem_eventStartDataReset_Parms), Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_StartDataReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_StartDataReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_UnregistCache_Statics
	{
		struct SaveDataSystem_eventUnregistCache_Parms
		{
			USaveData_AccessorBase* _pcSaveDataAccessor;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataAccessor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataSystem_UnregistCache_Statics::NewProp__pcSaveDataAccessor = { "_pcSaveDataAccessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataSystem_eventUnregistCache_Parms, _pcSaveDataAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_UnregistCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventUnregistCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_UnregistCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventUnregistCache_Parms), &Z_Construct_UFunction_USaveDataSystem_UnregistCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_UnregistCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_UnregistCache_Statics::NewProp__pcSaveDataAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_UnregistCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_UnregistCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_UnregistCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "UnregistCache", nullptr, nullptr, sizeof(SaveDataSystem_eventUnregistCache_Parms), Z_Construct_UFunction_USaveDataSystem_UnregistCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_UnregistCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_UnregistCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_UnregistCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_UnregistCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_UnregistCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate_Statics
	{
		struct SaveDataSystem_eventUpdateLocalFileList_Immediate_Parms
		{
			bool _bProjectSavedDir;
			bool ReturnValue;
		};
		static void NewProp__bProjectSavedDir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bProjectSavedDir;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate_Statics::NewProp__bProjectSavedDir_SetBit(void* Obj)
	{
		((SaveDataSystem_eventUpdateLocalFileList_Immediate_Parms*)Obj)->_bProjectSavedDir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate_Statics::NewProp__bProjectSavedDir = { "_bProjectSavedDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventUpdateLocalFileList_Immediate_Parms), &Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate_Statics::NewProp__bProjectSavedDir_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataSystem_eventUpdateLocalFileList_Immediate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataSystem_eventUpdateLocalFileList_Immediate_Parms), &Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate_Statics::NewProp__bProjectSavedDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataSystem, nullptr, "UpdateLocalFileList_Immediate", nullptr, nullptr, sizeof(SaveDataSystem_eventUpdateLocalFileList_Immediate_Parms), Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveDataSystem_NoRegister()
	{
		return USaveDataSystem::StaticClass();
	}
	struct Z_Construct_UClass_USaveDataSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcDebugBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcDebugBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcLowerEngine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcLowerEngine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcCache;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cProcesses_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_cProcesses_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_cProcesses_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cProcesses_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cProcesses;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveDataSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveDataSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveDataSystem_ChangeAccount, "ChangeAccount" }, // 2842278
		{ &Z_Construct_UFunction_USaveDataSystem_CheckValidAllocationOnLocal_Immediate, "CheckValidAllocationOnLocal_Immediate" }, // 1694828510
		{ &Z_Construct_UFunction_USaveDataSystem_ClearCache, "ClearCache" }, // 3478726258
		{ &Z_Construct_UFunction_USaveDataSystem_CreateAccessor, "CreateAccessor" }, // 4066636316
		{ &Z_Construct_UFunction_USaveDataSystem_CreateAccessorWithRawData, "CreateAccessorWithRawData" }, // 947982982
		{ &Z_Construct_UFunction_USaveDataSystem_CreateSaveDataObject, "CreateSaveDataObject" }, // 1630111972
		{ &Z_Construct_UFunction_USaveDataSystem_CreateSaveDataSystem, "CreateSaveDataSystem" }, // 4175384391
		{ &Z_Construct_UFunction_USaveDataSystem_DeleteRawData_Immediate, "DeleteRawData_Immediate" }, // 847665569
		{ &Z_Construct_UFunction_USaveDataSystem_ExportFiles, "ExportFiles" }, // 1219814832
		{ &Z_Construct_UFunction_USaveDataSystem_ExportTexts, "ExportTexts" }, // 2437502681
		{ &Z_Construct_UFunction_USaveDataSystem_FindCache, "FindCache" }, // 2941834196
		{ &Z_Construct_UFunction_USaveDataSystem_GetDebugBase, "GetDebugBase" }, // 1100801519
		{ &Z_Construct_UFunction_USaveDataSystem_GetEpicAccountID, "GetEpicAccountID" }, // 1654459806
		{ &Z_Construct_UFunction_USaveDataSystem_GetLocalFileList, "GetLocalFileList" }, // 2019109050
		{ &Z_Construct_UFunction_USaveDataSystem_GetLocalFileList_Immediate, "GetLocalFileList_Immediate" }, // 3999099958
		{ &Z_Construct_UFunction_USaveDataSystem_GetLocalFileListByType, "GetLocalFileListByType" }, // 3296281016
		{ &Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo, "GetLocalQuotaInfo" }, // 2597609717
		{ &Z_Construct_UFunction_USaveDataSystem_GetLocalQuotaInfo_Immediate, "GetLocalQuotaInfo_Immediate" }, // 761336980
		{ &Z_Construct_UFunction_USaveDataSystem_GetOnlineFileList, "GetOnlineFileList" }, // 2547096705
		{ &Z_Construct_UFunction_USaveDataSystem_GetProcessor, "GetProcessor" }, // 3775354946
		{ &Z_Construct_UFunction_USaveDataSystem_GetProductUserID, "GetProductUserID" }, // 4178453363
		{ &Z_Construct_UFunction_USaveDataSystem_GetSaveDataSystemForGlobal, "GetSaveDataSystemForGlobal" }, // 1093850775
		{ &Z_Construct_UFunction_USaveDataSystem_GetTitleFileList, "GetTitleFileList" }, // 2201072312
		{ &Z_Construct_UFunction_USaveDataSystem_ImportFiles, "ImportFiles" }, // 1510713199
		{ &Z_Construct_UFunction_USaveDataSystem_IsExistsRawData_Immediate, "IsExistsRawData_Immediate" }, // 582859340
		{ &Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalFileList, "IsUpdatingLocalFileList" }, // 4163088255
		{ &Z_Construct_UFunction_USaveDataSystem_IsUpdatingLocalQuotaInfo, "IsUpdatingLocalQuotaInfo" }, // 1362805480
		{ &Z_Construct_UFunction_USaveDataSystem_IsUpdatingOnlineFileList, "IsUpdatingOnlineFileList" }, // 3451889527
		{ &Z_Construct_UFunction_USaveDataSystem_IsUpdatingTitleFileList, "IsUpdatingTitleFileList" }, // 3674166238
		{ &Z_Construct_UFunction_USaveDataSystem_IsValidDataForRawData, "IsValidDataForRawData" }, // 151674050
		{ &Z_Construct_UFunction_USaveDataSystem_IsWaitForBGTask, "IsWaitForBGTask" }, // 3497911104
		{ &Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate, "LoadRawData_Immediate" }, // 709081513
		{ &Z_Construct_UFunction_USaveDataSystem_LoadRawData_Immediate_PS4, "LoadRawData_Immediate_PS4" }, // 864918877
		{ &Z_Construct_UFunction_USaveDataSystem_RegistCache, "RegistCache" }, // 3488247140
		{ &Z_Construct_UFunction_USaveDataSystem_ReleaseSaveDataCache, "ReleaseSaveDataCache" }, // 946788166
		{ &Z_Construct_UFunction_USaveDataSystem_RequestConvertPS5FromPS4, "RequestConvertPS5FromPS4" }, // 3056282979
		{ &Z_Construct_UFunction_USaveDataSystem_RequestCopy, "RequestCopy" }, // 1680201216
		{ &Z_Construct_UFunction_USaveDataSystem_RequestDelete, "RequestDelete" }, // 960903644
		{ &Z_Construct_UFunction_USaveDataSystem_RequestDeleteOnServer, "RequestDeleteOnServer" }, // 3398938221
		{ &Z_Construct_UFunction_USaveDataSystem_RequestDownload, "RequestDownload" }, // 680263945
		{ &Z_Construct_UFunction_USaveDataSystem_RequestGetLocalQuotaInfo, "RequestGetLocalQuotaInfo" }, // 286916073
		{ &Z_Construct_UFunction_USaveDataSystem_RequestLoad, "RequestLoad" }, // 2784324047
		{ &Z_Construct_UFunction_USaveDataSystem_RequestUpdateLocalFileList, "RequestUpdateLocalFileList" }, // 1163424864
		{ &Z_Construct_UFunction_USaveDataSystem_RequestUpdateOnlineFileList, "RequestUpdateOnlineFileList" }, // 580758297
		{ &Z_Construct_UFunction_USaveDataSystem_RequestUpdateTitleFileList, "RequestUpdateTitleFileList" }, // 2142653904
		{ &Z_Construct_UFunction_USaveDataSystem_SaveRawData_Immediate, "SaveRawData_Immediate" }, // 3657329943
		{ &Z_Construct_UFunction_USaveDataSystem_SetOnlineParam, "SetOnlineParam" }, // 3909295975
		{ &Z_Construct_UFunction_USaveDataSystem_SetSaveDataSystemForGlobal, "SetSaveDataSystemForGlobal" }, // 1101471841
		{ &Z_Construct_UFunction_USaveDataSystem_StartDataReset, "StartDataReset" }, // 1387285859
		{ &Z_Construct_UFunction_USaveDataSystem_UnregistCache, "UnregistCache" }, // 2446965758
		{ &Z_Construct_UFunction_USaveDataSystem_UpdateLocalFileList_Immediate, "UpdateLocalFileList_Immediate" }, // 3219472652
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveDataSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_pcDebugBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataSystem" },
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_pcDebugBase = { "m_pcDebugBase", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveDataSystem, m_pcDebugBase), Z_Construct_UClass_USaveData_DebugBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_pcDebugBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_pcDebugBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_pcLowerEngine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataSystem" },
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_pcLowerEngine = { "m_pcLowerEngine", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveDataSystem, m_pcLowerEngine), Z_Construct_UClass_USaveData_LowerEngineBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_pcLowerEngine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_pcLowerEngine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_pcCache_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataSystem" },
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_pcCache = { "m_pcCache", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveDataSystem, m_pcCache), Z_Construct_UClass_USaveData_Cache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_pcCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_pcCache_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_cProcesses_ValueProp = { "m_cProcesses", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USaveData_ProcessBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_cProcesses_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_cProcesses_Key_KeyProp = { "m_cProcesses_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_ESaveDataProcessType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_cProcesses_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataSystem" },
		{ "ModuleRelativePath", "Public/SaveDataSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_cProcesses = { "m_cProcesses", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveDataSystem, m_cProcesses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_cProcesses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_cProcesses_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveDataSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_pcDebugBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_pcLowerEngine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_pcCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_cProcesses_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_cProcesses_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_cProcesses_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataSystem_Statics::NewProp_m_cProcesses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveDataSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveDataSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveDataSystem_Statics::ClassParams = {
		&USaveDataSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveDataSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataSystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveDataSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveDataSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveDataSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveDataSystem, 4018602664);
	template<> ABP_200508_API UClass* StaticClass<USaveDataSystem>()
	{
		return USaveDataSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveDataSystem(Z_Construct_UClass_USaveDataSystem, &USaveDataSystem::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveDataSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDataSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
