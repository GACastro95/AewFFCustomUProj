// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_AccessorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_AccessorBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_AccessorBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_AccessorBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataType();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FSaveData_FileInfo();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataAccessorProcMode();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FSaveData_QuotaInfo();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObjectBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveGame_RawData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataSystem_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_SaveData_AccessorDispatcher__DelegateSignature();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSaveGameBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USaveData_AccessorBase::execConvertSaveDataTypeAndIndexFromFileKey)
	{
		P_GET_ENUM_REF(ESaveDataType,Z_Param_Out__enType);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__sFileIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USaveData_AccessorBase::ConvertSaveDataTypeAndIndexFromFileKey((ESaveDataType&)(Z_Param_Out__enType),Z_Param_Out__sFileIndex,Z_Param__strFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execDispose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Dispose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execGetDataAccessRefCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDataAccessRefCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execGetDebugModeForBackGroundProcess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDebugModeForBackGroundProcess();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execGetFileKey)
	{
		P_GET_UBOOL(Z_Param__bWithProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFileKey(Z_Param__bWithProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execGetFileList)
	{
		P_GET_TARRAY_REF(FSaveData_FileInfo,Z_Param_Out__refFileList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFileList(Z_Param_Out__refFileList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execGetFileUserIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFileUserIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execGetLastBackGroundProcResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->GetLastBackGroundProcResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execGetProcMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataAccessorProcMode*)Z_Param__Result=P_THIS->GetProcMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execGetQuotaInfo)
	{
		P_GET_STRUCT_REF(FSaveData_QuotaInfo,Z_Param_Out__stQuataInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetQuotaInfo(Z_Param_Out__stQuataInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execGetSaveDataFileKeyWithType)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__strFileName);
		P_GET_ENUM(ESaveDataType,Z_Param__enType);
		P_GET_PROPERTY(FIntProperty,Z_Param__strFileIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USaveData_AccessorBase::GetSaveDataFileKeyWithType(Z_Param_Out__strFileName,ESaveDataType(Z_Param__enType),Z_Param__strFileIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execGetSaveDataObject)
	{
		P_GET_OBJECT_REF(USaveDataObjectBase,Z_Param_Out__pcSaveDataObject);
		P_GET_PROPERTY(FByteProperty,Z_Param__uSaveDataAccessFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->GetSaveDataObject(Z_Param_Out__pcSaveDataObject,Z_Param__uSaveDataAccessFlags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execGetSaveDataType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataType*)Z_Param__Result=P_THIS->GetSaveDataType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execGetSaveGame_RawData)
	{
		P_GET_OBJECT_REF(USaveGame_RawData,Z_Param_Out__pcRawData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSaveGame_RawData(Z_Param_Out__pcRawData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execGetSearchTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetSearchTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execImmediateCopy)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileKeyDest);
		P_GET_PROPERTY(FIntProperty,Z_Param__sDestFileUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->ImmediateCopy(Z_Param__strFileKeyDest,Z_Param__sDestFileUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execImmediateDelete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->ImmediateDelete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execImmediateLoad)
	{
		P_GET_UBOOL(Z_Param__bDebugMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->ImmediateLoad(Z_Param__bDebugMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execImmediateSave)
	{
		P_GET_UBOOL(Z_Param__bDebugMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->ImmediateSave(Z_Param__bDebugMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execIsBusy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBusy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execIsCanceledTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCanceledTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execIsSuccessBackGroundProcResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSuccessBackGroundProcResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execIsUpdatedData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUpdatedData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execRequestConvertPS5FromPS4)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->RequestConvertPS5FromPS4();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execRequestCopy)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileKeyDest);
		P_GET_PROPERTY(FIntProperty,Z_Param__sDestFileUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->RequestCopy(Z_Param__strFileKeyDest,Z_Param__sDestFileUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execRequestDelete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->RequestDelete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execRequestDeleteOnServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->RequestDeleteOnServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execRequestDownload)
	{
		P_GET_UBOOL(Z_Param__bTitleFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->RequestDownload(Z_Param__bTitleFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execRequestGetLocalQuotaInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->RequestGetLocalQuotaInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execRequestLoad)
	{
		P_GET_UBOOL(Z_Param__bDownload);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->RequestLoad(Z_Param__bDownload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execRequestSave)
	{
		P_GET_UBOOL(Z_Param__bUpload);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->RequestSave(Z_Param__bUpload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execRequestUpdateLocalFileList)
	{
		P_GET_UBOOL(Z_Param__bProjectSavedDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->RequestUpdateLocalFileList(Z_Param__bProjectSavedDir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execRequestUpdateOnlineFileList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->RequestUpdateOnlineFileList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execRequestUpdateTitleFileList)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out__cSearchTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->RequestUpdateTitleFileList(Z_Param_Out__cSearchTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execRequestUpload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->RequestUpload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execSetCachedFlag)
	{
		P_GET_UBOOL(Z_Param__bCache);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCachedFlag(Z_Param__bCache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execSetDataType)
	{
		P_GET_ENUM(ESaveDataType,Z_Param__enSaveDataType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetDataType(ESaveDataType(Z_Param__enSaveDataType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execSetDebugModeForBackGroundProcess)
	{
		P_GET_UBOOL(Z_Param__bDebugMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDebugModeForBackGroundProcess(Z_Param__bDebugMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execSetFileKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFileKey(Z_Param__strFileKey,Z_Param__sFileUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execSetRequestCacheFlag)
	{
		P_GET_UBOOL(Z_Param__bCacheRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRequestCacheFlag(Z_Param__bCacheRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execSetup)
	{
		P_GET_ENUM(ESaveDataAccessorProcMode,Z_Param__enProcMode);
		P_GET_OBJECT(USaveDataSystem,Z_Param__pcRefSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Setup(ESaveDataAccessorProcMode(Z_Param__enProcMode),Z_Param__pcRefSystem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execSetUpdatedData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpdatedData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_AccessorBase::execSetupSaveGame_RawData)
	{
		P_GET_OBJECT(USaveGame_RawData,Z_Param__pcRawData);
		P_GET_UBOOL(Z_Param__bCopyData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupSaveGame_RawData(Z_Param__pcRawData,Z_Param__bCopyData);
		P_NATIVE_END;
	}
	void USaveData_AccessorBase::StaticRegisterNativesUSaveData_AccessorBase()
	{
		UClass* Class = USaveData_AccessorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertSaveDataTypeAndIndexFromFileKey", &USaveData_AccessorBase::execConvertSaveDataTypeAndIndexFromFileKey },
			{ "Dispose", &USaveData_AccessorBase::execDispose },
			{ "GetDataAccessRefCount", &USaveData_AccessorBase::execGetDataAccessRefCount },
			{ "GetDebugModeForBackGroundProcess", &USaveData_AccessorBase::execGetDebugModeForBackGroundProcess },
			{ "GetFileKey", &USaveData_AccessorBase::execGetFileKey },
			{ "GetFileList", &USaveData_AccessorBase::execGetFileList },
			{ "GetFileUserIndex", &USaveData_AccessorBase::execGetFileUserIndex },
			{ "GetLastBackGroundProcResult", &USaveData_AccessorBase::execGetLastBackGroundProcResult },
			{ "GetProcMode", &USaveData_AccessorBase::execGetProcMode },
			{ "GetQuotaInfo", &USaveData_AccessorBase::execGetQuotaInfo },
			{ "GetSaveDataFileKeyWithType", &USaveData_AccessorBase::execGetSaveDataFileKeyWithType },
			{ "GetSaveDataObject", &USaveData_AccessorBase::execGetSaveDataObject },
			{ "GetSaveDataType", &USaveData_AccessorBase::execGetSaveDataType },
			{ "GetSaveGame_RawData", &USaveData_AccessorBase::execGetSaveGame_RawData },
			{ "GetSearchTags", &USaveData_AccessorBase::execGetSearchTags },
			{ "ImmediateCopy", &USaveData_AccessorBase::execImmediateCopy },
			{ "ImmediateDelete", &USaveData_AccessorBase::execImmediateDelete },
			{ "ImmediateLoad", &USaveData_AccessorBase::execImmediateLoad },
			{ "ImmediateSave", &USaveData_AccessorBase::execImmediateSave },
			{ "IsBusy", &USaveData_AccessorBase::execIsBusy },
			{ "IsCanceledTask", &USaveData_AccessorBase::execIsCanceledTask },
			{ "IsSuccessBackGroundProcResult", &USaveData_AccessorBase::execIsSuccessBackGroundProcResult },
			{ "IsUpdatedData", &USaveData_AccessorBase::execIsUpdatedData },
			{ "RequestConvertPS5FromPS4", &USaveData_AccessorBase::execRequestConvertPS5FromPS4 },
			{ "RequestCopy", &USaveData_AccessorBase::execRequestCopy },
			{ "RequestDelete", &USaveData_AccessorBase::execRequestDelete },
			{ "RequestDeleteOnServer", &USaveData_AccessorBase::execRequestDeleteOnServer },
			{ "RequestDownload", &USaveData_AccessorBase::execRequestDownload },
			{ "RequestGetLocalQuotaInfo", &USaveData_AccessorBase::execRequestGetLocalQuotaInfo },
			{ "RequestLoad", &USaveData_AccessorBase::execRequestLoad },
			{ "RequestSave", &USaveData_AccessorBase::execRequestSave },
			{ "RequestUpdateLocalFileList", &USaveData_AccessorBase::execRequestUpdateLocalFileList },
			{ "RequestUpdateOnlineFileList", &USaveData_AccessorBase::execRequestUpdateOnlineFileList },
			{ "RequestUpdateTitleFileList", &USaveData_AccessorBase::execRequestUpdateTitleFileList },
			{ "RequestUpload", &USaveData_AccessorBase::execRequestUpload },
			{ "SetCachedFlag", &USaveData_AccessorBase::execSetCachedFlag },
			{ "SetDataType", &USaveData_AccessorBase::execSetDataType },
			{ "SetDebugModeForBackGroundProcess", &USaveData_AccessorBase::execSetDebugModeForBackGroundProcess },
			{ "SetFileKey", &USaveData_AccessorBase::execSetFileKey },
			{ "SetRequestCacheFlag", &USaveData_AccessorBase::execSetRequestCacheFlag },
			{ "Setup", &USaveData_AccessorBase::execSetup },
			{ "SetUpdatedData", &USaveData_AccessorBase::execSetUpdatedData },
			{ "SetupSaveGame_RawData", &USaveData_AccessorBase::execSetupSaveGame_RawData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics
	{
		struct SaveData_AccessorBase_eventConvertSaveDataTypeAndIndexFromFileKey_Parms
		{
			ESaveDataType _enType;
			int32 _sFileIndex;
			FString _strFileName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sFileIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::NewProp__enType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::NewProp__enType = { "_enType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventConvertSaveDataTypeAndIndexFromFileKey_Parms, _enType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::NewProp__sFileIndex = { "_sFileIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventConvertSaveDataTypeAndIndexFromFileKey_Parms, _sFileIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventConvertSaveDataTypeAndIndexFromFileKey_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::NewProp__strFileName_MetaData)) };
	void Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventConvertSaveDataTypeAndIndexFromFileKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventConvertSaveDataTypeAndIndexFromFileKey_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::NewProp__enType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::NewProp__enType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::NewProp__sFileIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "ConvertSaveDataTypeAndIndexFromFileKey", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventConvertSaveDataTypeAndIndexFromFileKey_Parms), Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_Dispose_Statics
	{
		struct SaveData_AccessorBase_eventDispose_Parms
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
	void Z_Construct_UFunction_USaveData_AccessorBase_Dispose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventDispose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_Dispose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventDispose_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_Dispose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_Dispose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_Dispose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_Dispose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_Dispose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "Dispose", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventDispose_Parms), Z_Construct_UFunction_USaveData_AccessorBase_Dispose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_Dispose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_Dispose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_Dispose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_Dispose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_Dispose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_GetDataAccessRefCount_Statics
	{
		struct SaveData_AccessorBase_eventGetDataAccessRefCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetDataAccessRefCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventGetDataAccessRefCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_GetDataAccessRefCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetDataAccessRefCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_GetDataAccessRefCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_GetDataAccessRefCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "GetDataAccessRefCount", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventGetDataAccessRefCount_Parms), Z_Construct_UFunction_USaveData_AccessorBase_GetDataAccessRefCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetDataAccessRefCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_GetDataAccessRefCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetDataAccessRefCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_GetDataAccessRefCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_GetDataAccessRefCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_GetDebugModeForBackGroundProcess_Statics
	{
		struct SaveData_AccessorBase_eventGetDebugModeForBackGroundProcess_Parms
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
	void Z_Construct_UFunction_USaveData_AccessorBase_GetDebugModeForBackGroundProcess_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventGetDebugModeForBackGroundProcess_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetDebugModeForBackGroundProcess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventGetDebugModeForBackGroundProcess_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_GetDebugModeForBackGroundProcess_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_GetDebugModeForBackGroundProcess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetDebugModeForBackGroundProcess_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_GetDebugModeForBackGroundProcess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_GetDebugModeForBackGroundProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "GetDebugModeForBackGroundProcess", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventGetDebugModeForBackGroundProcess_Parms), Z_Construct_UFunction_USaveData_AccessorBase_GetDebugModeForBackGroundProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetDebugModeForBackGroundProcess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_GetDebugModeForBackGroundProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetDebugModeForBackGroundProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_GetDebugModeForBackGroundProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_GetDebugModeForBackGroundProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_GetFileKey_Statics
	{
		struct SaveData_AccessorBase_eventGetFileKey_Parms
		{
			bool _bWithProductUserID;
			FString ReturnValue;
		};
		static void NewProp__bWithProductUserID_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bWithProductUserID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveData_AccessorBase_GetFileKey_Statics::NewProp__bWithProductUserID_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventGetFileKey_Parms*)Obj)->_bWithProductUserID = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetFileKey_Statics::NewProp__bWithProductUserID = { "_bWithProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventGetFileKey_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_GetFileKey_Statics::NewProp__bWithProductUserID_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetFileKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventGetFileKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_GetFileKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetFileKey_Statics::NewProp__bWithProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetFileKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_GetFileKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_GetFileKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "GetFileKey", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventGetFileKey_Parms), Z_Construct_UFunction_USaveData_AccessorBase_GetFileKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetFileKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_GetFileKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetFileKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_GetFileKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_GetFileKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_GetFileList_Statics
	{
		struct SaveData_AccessorBase_eventGetFileList_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetFileList_Statics::NewProp__refFileList_Inner = { "_refFileList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveData_FileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetFileList_Statics::NewProp__refFileList = { "_refFileList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventGetFileList_Parms, _refFileList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventGetFileList_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_GetFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetFileList_Statics::NewProp__refFileList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetFileList_Statics::NewProp__refFileList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_GetFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_GetFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "GetFileList", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventGetFileList_Parms), Z_Construct_UFunction_USaveData_AccessorBase_GetFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_GetFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_GetFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_GetFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_GetFileUserIndex_Statics
	{
		struct SaveData_AccessorBase_eventGetFileUserIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetFileUserIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventGetFileUserIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_GetFileUserIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetFileUserIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_GetFileUserIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_GetFileUserIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "GetFileUserIndex", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventGetFileUserIndex_Parms), Z_Construct_UFunction_USaveData_AccessorBase_GetFileUserIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetFileUserIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_GetFileUserIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetFileUserIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_GetFileUserIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_GetFileUserIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_GetLastBackGroundProcResult_Statics
	{
		struct SaveData_AccessorBase_eventGetLastBackGroundProcResult_Parms
		{
			ESaveDataProcResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetLastBackGroundProcResult_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetLastBackGroundProcResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventGetLastBackGroundProcResult_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_GetLastBackGroundProcResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetLastBackGroundProcResult_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetLastBackGroundProcResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_GetLastBackGroundProcResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_GetLastBackGroundProcResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "GetLastBackGroundProcResult", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventGetLastBackGroundProcResult_Parms), Z_Construct_UFunction_USaveData_AccessorBase_GetLastBackGroundProcResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetLastBackGroundProcResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_GetLastBackGroundProcResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetLastBackGroundProcResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_GetLastBackGroundProcResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_GetLastBackGroundProcResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_GetProcMode_Statics
	{
		struct SaveData_AccessorBase_eventGetProcMode_Parms
		{
			ESaveDataAccessorProcMode ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetProcMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetProcMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventGetProcMode_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataAccessorProcMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_GetProcMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetProcMode_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetProcMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_GetProcMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_GetProcMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "GetProcMode", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventGetProcMode_Parms), Z_Construct_UFunction_USaveData_AccessorBase_GetProcMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetProcMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_GetProcMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetProcMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_GetProcMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_GetProcMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_GetQuotaInfo_Statics
	{
		struct SaveData_AccessorBase_eventGetQuotaInfo_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetQuotaInfo_Statics::NewProp__stQuataInfo = { "_stQuataInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventGetQuotaInfo_Parms, _stQuataInfo), Z_Construct_UScriptStruct_FSaveData_QuotaInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_AccessorBase_GetQuotaInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventGetQuotaInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetQuotaInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventGetQuotaInfo_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_GetQuotaInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_GetQuotaInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetQuotaInfo_Statics::NewProp__stQuataInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetQuotaInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_GetQuotaInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_GetQuotaInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "GetQuotaInfo", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventGetQuotaInfo_Parms), Z_Construct_UFunction_USaveData_AccessorBase_GetQuotaInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetQuotaInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_GetQuotaInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetQuotaInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_GetQuotaInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_GetQuotaInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics
	{
		struct SaveData_AccessorBase_eventGetSaveDataFileKeyWithType_Parms
		{
			FString _strFileName;
			ESaveDataType _enType;
			int32 _strFileIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__strFileIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventGetSaveDataFileKeyWithType_Parms, _strFileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::NewProp__enType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::NewProp__enType = { "_enType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventGetSaveDataFileKeyWithType_Parms, _enType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::NewProp__strFileIndex = { "_strFileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventGetSaveDataFileKeyWithType_Parms, _strFileIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventGetSaveDataFileKeyWithType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventGetSaveDataFileKeyWithType_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::NewProp__enType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::NewProp__enType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::NewProp__strFileIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "GetSaveDataFileKeyWithType", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventGetSaveDataFileKeyWithType_Parms), Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject_Statics
	{
		struct SaveData_AccessorBase_eventGetSaveDataObject_Parms
		{
			USaveDataObjectBase* _pcSaveDataObject;
			uint8 _uSaveDataAccessFlags;
			ESaveDataProcResult ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSaveDataObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__uSaveDataAccessFlags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject_Statics::NewProp__pcSaveDataObject = { "_pcSaveDataObject", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventGetSaveDataObject_Parms, _pcSaveDataObject), Z_Construct_UClass_USaveDataObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject_Statics::NewProp__uSaveDataAccessFlags = { "_uSaveDataAccessFlags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventGetSaveDataObject_Parms, _uSaveDataAccessFlags), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventGetSaveDataObject_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject_Statics::NewProp__pcSaveDataObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject_Statics::NewProp__uSaveDataAccessFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "GetSaveDataObject", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventGetSaveDataObject_Parms), Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataType_Statics
	{
		struct SaveData_AccessorBase_eventGetSaveDataType_Parms
		{
			ESaveDataType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventGetSaveDataType_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "GetSaveDataType", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventGetSaveDataType_Parms), Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_GetSaveGame_RawData_Statics
	{
		struct SaveData_AccessorBase_eventGetSaveGame_RawData_Parms
		{
			USaveGame_RawData* _pcRawData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcRawData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetSaveGame_RawData_Statics::NewProp__pcRawData = { "_pcRawData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventGetSaveGame_RawData_Parms, _pcRawData), Z_Construct_UClass_USaveGame_RawData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_AccessorBase_GetSaveGame_RawData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventGetSaveGame_RawData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetSaveGame_RawData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventGetSaveGame_RawData_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_GetSaveGame_RawData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_GetSaveGame_RawData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetSaveGame_RawData_Statics::NewProp__pcRawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetSaveGame_RawData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_GetSaveGame_RawData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_GetSaveGame_RawData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "GetSaveGame_RawData", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventGetSaveGame_RawData_Parms), Z_Construct_UFunction_USaveData_AccessorBase_GetSaveGame_RawData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetSaveGame_RawData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_GetSaveGame_RawData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetSaveGame_RawData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_GetSaveGame_RawData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_GetSaveGame_RawData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_GetSearchTags_Statics
	{
		struct SaveData_AccessorBase_eventGetSearchTags_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetSearchTags_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_GetSearchTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventGetSearchTags_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_GetSearchTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetSearchTags_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_GetSearchTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_GetSearchTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_GetSearchTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "GetSearchTags", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventGetSearchTags_Parms), Z_Construct_UFunction_USaveData_AccessorBase_GetSearchTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetSearchTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_GetSearchTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_GetSearchTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_GetSearchTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_GetSearchTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics
	{
		struct SaveData_AccessorBase_eventImmediateCopy_Parms
		{
			FString _strFileKeyDest;
			int32 _sDestFileUserIndex;
			ESaveDataProcResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileKeyDest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileKeyDest;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sDestFileUserIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::NewProp__strFileKeyDest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::NewProp__strFileKeyDest = { "_strFileKeyDest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventImmediateCopy_Parms, _strFileKeyDest), METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::NewProp__strFileKeyDest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::NewProp__strFileKeyDest_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::NewProp__sDestFileUserIndex = { "_sDestFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventImmediateCopy_Parms, _sDestFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventImmediateCopy_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::NewProp__strFileKeyDest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::NewProp__sDestFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "ImmediateCopy", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventImmediateCopy_Parms), Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_ImmediateDelete_Statics
	{
		struct SaveData_AccessorBase_eventImmediateDelete_Parms
		{
			ESaveDataProcResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_ImmediateDelete_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_ImmediateDelete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventImmediateDelete_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_ImmediateDelete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_ImmediateDelete_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_ImmediateDelete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_ImmediateDelete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_ImmediateDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "ImmediateDelete", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventImmediateDelete_Parms), Z_Construct_UFunction_USaveData_AccessorBase_ImmediateDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_ImmediateDelete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_ImmediateDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_ImmediateDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_ImmediateDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_ImmediateDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad_Statics
	{
		struct SaveData_AccessorBase_eventImmediateLoad_Parms
		{
			bool _bDebugMode;
			ESaveDataProcResult ReturnValue;
		};
		static void NewProp__bDebugMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bDebugMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad_Statics::NewProp__bDebugMode_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventImmediateLoad_Parms*)Obj)->_bDebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad_Statics::NewProp__bDebugMode = { "_bDebugMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventImmediateLoad_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad_Statics::NewProp__bDebugMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventImmediateLoad_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad_Statics::NewProp__bDebugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "ImmediateLoad", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventImmediateLoad_Parms), Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave_Statics
	{
		struct SaveData_AccessorBase_eventImmediateSave_Parms
		{
			bool _bDebugMode;
			ESaveDataProcResult ReturnValue;
		};
		static void NewProp__bDebugMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bDebugMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave_Statics::NewProp__bDebugMode_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventImmediateSave_Parms*)Obj)->_bDebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave_Statics::NewProp__bDebugMode = { "_bDebugMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventImmediateSave_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave_Statics::NewProp__bDebugMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventImmediateSave_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave_Statics::NewProp__bDebugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "ImmediateSave", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventImmediateSave_Parms), Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_IsBusy_Statics
	{
		struct SaveData_AccessorBase_eventIsBusy_Parms
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
	void Z_Construct_UFunction_USaveData_AccessorBase_IsBusy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventIsBusy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_IsBusy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventIsBusy_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_IsBusy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_IsBusy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_IsBusy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_IsBusy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_IsBusy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "IsBusy", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventIsBusy_Parms), Z_Construct_UFunction_USaveData_AccessorBase_IsBusy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_IsBusy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_IsBusy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_IsBusy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_IsBusy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_IsBusy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_IsCanceledTask_Statics
	{
		struct SaveData_AccessorBase_eventIsCanceledTask_Parms
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
	void Z_Construct_UFunction_USaveData_AccessorBase_IsCanceledTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventIsCanceledTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_IsCanceledTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventIsCanceledTask_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_IsCanceledTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_IsCanceledTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_IsCanceledTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_IsCanceledTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_IsCanceledTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "IsCanceledTask", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventIsCanceledTask_Parms), Z_Construct_UFunction_USaveData_AccessorBase_IsCanceledTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_IsCanceledTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_IsCanceledTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_IsCanceledTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_IsCanceledTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_IsCanceledTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_IsSuccessBackGroundProcResult_Statics
	{
		struct SaveData_AccessorBase_eventIsSuccessBackGroundProcResult_Parms
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
	void Z_Construct_UFunction_USaveData_AccessorBase_IsSuccessBackGroundProcResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventIsSuccessBackGroundProcResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_IsSuccessBackGroundProcResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventIsSuccessBackGroundProcResult_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_IsSuccessBackGroundProcResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_IsSuccessBackGroundProcResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_IsSuccessBackGroundProcResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_IsSuccessBackGroundProcResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_IsSuccessBackGroundProcResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "IsSuccessBackGroundProcResult", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventIsSuccessBackGroundProcResult_Parms), Z_Construct_UFunction_USaveData_AccessorBase_IsSuccessBackGroundProcResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_IsSuccessBackGroundProcResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_IsSuccessBackGroundProcResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_IsSuccessBackGroundProcResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_IsSuccessBackGroundProcResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_IsSuccessBackGroundProcResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_IsUpdatedData_Statics
	{
		struct SaveData_AccessorBase_eventIsUpdatedData_Parms
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
	void Z_Construct_UFunction_USaveData_AccessorBase_IsUpdatedData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventIsUpdatedData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_IsUpdatedData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventIsUpdatedData_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_IsUpdatedData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_IsUpdatedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_IsUpdatedData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_IsUpdatedData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_IsUpdatedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "IsUpdatedData", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventIsUpdatedData_Parms), Z_Construct_UFunction_USaveData_AccessorBase_IsUpdatedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_IsUpdatedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_IsUpdatedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_IsUpdatedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_IsUpdatedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_IsUpdatedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_RequestConvertPS5FromPS4_Statics
	{
		struct SaveData_AccessorBase_eventRequestConvertPS5FromPS4_Parms
		{
			ESaveDataProcResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestConvertPS5FromPS4_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestConvertPS5FromPS4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventRequestConvertPS5FromPS4_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_RequestConvertPS5FromPS4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestConvertPS5FromPS4_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestConvertPS5FromPS4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_RequestConvertPS5FromPS4_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_RequestConvertPS5FromPS4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "RequestConvertPS5FromPS4", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventRequestConvertPS5FromPS4_Parms), Z_Construct_UFunction_USaveData_AccessorBase_RequestConvertPS5FromPS4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestConvertPS5FromPS4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_RequestConvertPS5FromPS4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestConvertPS5FromPS4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_RequestConvertPS5FromPS4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_RequestConvertPS5FromPS4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics
	{
		struct SaveData_AccessorBase_eventRequestCopy_Parms
		{
			FString _strFileKeyDest;
			int32 _sDestFileUserIndex;
			ESaveDataProcResult ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileKeyDest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileKeyDest;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sDestFileUserIndex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::NewProp__strFileKeyDest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::NewProp__strFileKeyDest = { "_strFileKeyDest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventRequestCopy_Parms, _strFileKeyDest), METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::NewProp__strFileKeyDest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::NewProp__strFileKeyDest_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::NewProp__sDestFileUserIndex = { "_sDestFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventRequestCopy_Parms, _sDestFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventRequestCopy_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::NewProp__strFileKeyDest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::NewProp__sDestFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "RequestCopy", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventRequestCopy_Parms), Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_RequestDelete_Statics
	{
		struct SaveData_AccessorBase_eventRequestDelete_Parms
		{
			ESaveDataProcResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestDelete_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestDelete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventRequestDelete_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_RequestDelete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestDelete_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestDelete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_RequestDelete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_RequestDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "RequestDelete", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventRequestDelete_Parms), Z_Construct_UFunction_USaveData_AccessorBase_RequestDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestDelete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_RequestDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_RequestDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_RequestDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_RequestDeleteOnServer_Statics
	{
		struct SaveData_AccessorBase_eventRequestDeleteOnServer_Parms
		{
			ESaveDataProcResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestDeleteOnServer_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestDeleteOnServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventRequestDeleteOnServer_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_RequestDeleteOnServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestDeleteOnServer_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestDeleteOnServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_RequestDeleteOnServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_RequestDeleteOnServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "RequestDeleteOnServer", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventRequestDeleteOnServer_Parms), Z_Construct_UFunction_USaveData_AccessorBase_RequestDeleteOnServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestDeleteOnServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_RequestDeleteOnServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestDeleteOnServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_RequestDeleteOnServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_RequestDeleteOnServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload_Statics
	{
		struct SaveData_AccessorBase_eventRequestDownload_Parms
		{
			bool _bTitleFile;
			ESaveDataProcResult ReturnValue;
		};
		static void NewProp__bTitleFile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bTitleFile;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload_Statics::NewProp__bTitleFile_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventRequestDownload_Parms*)Obj)->_bTitleFile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload_Statics::NewProp__bTitleFile = { "_bTitleFile", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventRequestDownload_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload_Statics::NewProp__bTitleFile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventRequestDownload_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload_Statics::NewProp__bTitleFile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "RequestDownload", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventRequestDownload_Parms), Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_RequestGetLocalQuotaInfo_Statics
	{
		struct SaveData_AccessorBase_eventRequestGetLocalQuotaInfo_Parms
		{
			ESaveDataProcResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestGetLocalQuotaInfo_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestGetLocalQuotaInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventRequestGetLocalQuotaInfo_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_RequestGetLocalQuotaInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestGetLocalQuotaInfo_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestGetLocalQuotaInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_RequestGetLocalQuotaInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_RequestGetLocalQuotaInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "RequestGetLocalQuotaInfo", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventRequestGetLocalQuotaInfo_Parms), Z_Construct_UFunction_USaveData_AccessorBase_RequestGetLocalQuotaInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestGetLocalQuotaInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_RequestGetLocalQuotaInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestGetLocalQuotaInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_RequestGetLocalQuotaInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_RequestGetLocalQuotaInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad_Statics
	{
		struct SaveData_AccessorBase_eventRequestLoad_Parms
		{
			bool _bDownload;
			ESaveDataProcResult ReturnValue;
		};
		static void NewProp__bDownload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bDownload;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad_Statics::NewProp__bDownload_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventRequestLoad_Parms*)Obj)->_bDownload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad_Statics::NewProp__bDownload = { "_bDownload", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventRequestLoad_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad_Statics::NewProp__bDownload_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventRequestLoad_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad_Statics::NewProp__bDownload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "RequestLoad", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventRequestLoad_Parms), Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_RequestSave_Statics
	{
		struct SaveData_AccessorBase_eventRequestSave_Parms
		{
			bool _bUpload;
			ESaveDataProcResult ReturnValue;
		};
		static void NewProp__bUpload_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bUpload;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveData_AccessorBase_RequestSave_Statics::NewProp__bUpload_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventRequestSave_Parms*)Obj)->_bUpload = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestSave_Statics::NewProp__bUpload = { "_bUpload", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventRequestSave_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_RequestSave_Statics::NewProp__bUpload_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestSave_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventRequestSave_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_RequestSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestSave_Statics::NewProp__bUpload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestSave_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestSave_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_RequestSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_RequestSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "RequestSave", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventRequestSave_Parms), Z_Construct_UFunction_USaveData_AccessorBase_RequestSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_RequestSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_RequestSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_RequestSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList_Statics
	{
		struct SaveData_AccessorBase_eventRequestUpdateLocalFileList_Parms
		{
			bool _bProjectSavedDir;
			ESaveDataProcResult ReturnValue;
		};
		static void NewProp__bProjectSavedDir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bProjectSavedDir;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList_Statics::NewProp__bProjectSavedDir_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventRequestUpdateLocalFileList_Parms*)Obj)->_bProjectSavedDir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList_Statics::NewProp__bProjectSavedDir = { "_bProjectSavedDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventRequestUpdateLocalFileList_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList_Statics::NewProp__bProjectSavedDir_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventRequestUpdateLocalFileList_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList_Statics::NewProp__bProjectSavedDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "RequestUpdateLocalFileList", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventRequestUpdateLocalFileList_Parms), Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateOnlineFileList_Statics
	{
		struct SaveData_AccessorBase_eventRequestUpdateOnlineFileList_Parms
		{
			ESaveDataProcResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateOnlineFileList_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateOnlineFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventRequestUpdateOnlineFileList_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateOnlineFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateOnlineFileList_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateOnlineFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateOnlineFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateOnlineFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "RequestUpdateOnlineFileList", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventRequestUpdateOnlineFileList_Parms), Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateOnlineFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateOnlineFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateOnlineFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateOnlineFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateOnlineFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateOnlineFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics
	{
		struct SaveData_AccessorBase_eventRequestUpdateTitleFileList_Parms
		{
			TArray<FString> _cSearchTags;
			ESaveDataProcResult ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cSearchTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cSearchTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cSearchTags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::NewProp__cSearchTags_Inner = { "_cSearchTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::NewProp__cSearchTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::NewProp__cSearchTags = { "_cSearchTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventRequestUpdateTitleFileList_Parms, _cSearchTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::NewProp__cSearchTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::NewProp__cSearchTags_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventRequestUpdateTitleFileList_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::NewProp__cSearchTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::NewProp__cSearchTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "RequestUpdateTitleFileList", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventRequestUpdateTitleFileList_Parms), Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_RequestUpload_Statics
	{
		struct SaveData_AccessorBase_eventRequestUpload_Parms
		{
			ESaveDataProcResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestUpload_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_RequestUpload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventRequestUpload_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_RequestUpload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestUpload_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_RequestUpload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_RequestUpload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_RequestUpload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "RequestUpload", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventRequestUpload_Parms), Z_Construct_UFunction_USaveData_AccessorBase_RequestUpload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestUpload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_RequestUpload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_RequestUpload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_RequestUpload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_RequestUpload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_SetCachedFlag_Statics
	{
		struct SaveData_AccessorBase_eventSetCachedFlag_Parms
		{
			bool _bCache;
		};
		static void NewProp__bCache_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bCache;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveData_AccessorBase_SetCachedFlag_Statics::NewProp__bCache_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventSetCachedFlag_Parms*)Obj)->_bCache = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_SetCachedFlag_Statics::NewProp__bCache = { "_bCache", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventSetCachedFlag_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_SetCachedFlag_Statics::NewProp__bCache_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_SetCachedFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_SetCachedFlag_Statics::NewProp__bCache,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_SetCachedFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_SetCachedFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "SetCachedFlag", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventSetCachedFlag_Parms), Z_Construct_UFunction_USaveData_AccessorBase_SetCachedFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_SetCachedFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_SetCachedFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_SetCachedFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_SetCachedFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_SetCachedFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_SetDataType_Statics
	{
		struct SaveData_AccessorBase_eventSetDataType_Parms
		{
			ESaveDataType _enSaveDataType;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enSaveDataType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enSaveDataType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_SetDataType_Statics::NewProp__enSaveDataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_SetDataType_Statics::NewProp__enSaveDataType = { "_enSaveDataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventSetDataType_Parms, _enSaveDataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_AccessorBase_SetDataType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventSetDataType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_SetDataType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventSetDataType_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_SetDataType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_SetDataType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_SetDataType_Statics::NewProp__enSaveDataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_SetDataType_Statics::NewProp__enSaveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_SetDataType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_SetDataType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_SetDataType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "SetDataType", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventSetDataType_Parms), Z_Construct_UFunction_USaveData_AccessorBase_SetDataType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_SetDataType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_SetDataType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_SetDataType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_SetDataType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_SetDataType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_SetDebugModeForBackGroundProcess_Statics
	{
		struct SaveData_AccessorBase_eventSetDebugModeForBackGroundProcess_Parms
		{
			bool _bDebugMode;
		};
		static void NewProp__bDebugMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bDebugMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveData_AccessorBase_SetDebugModeForBackGroundProcess_Statics::NewProp__bDebugMode_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventSetDebugModeForBackGroundProcess_Parms*)Obj)->_bDebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_SetDebugModeForBackGroundProcess_Statics::NewProp__bDebugMode = { "_bDebugMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventSetDebugModeForBackGroundProcess_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_SetDebugModeForBackGroundProcess_Statics::NewProp__bDebugMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_SetDebugModeForBackGroundProcess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_SetDebugModeForBackGroundProcess_Statics::NewProp__bDebugMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_SetDebugModeForBackGroundProcess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_SetDebugModeForBackGroundProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "SetDebugModeForBackGroundProcess", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventSetDebugModeForBackGroundProcess_Parms), Z_Construct_UFunction_USaveData_AccessorBase_SetDebugModeForBackGroundProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_SetDebugModeForBackGroundProcess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_SetDebugModeForBackGroundProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_SetDebugModeForBackGroundProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_SetDebugModeForBackGroundProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_SetDebugModeForBackGroundProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics
	{
		struct SaveData_AccessorBase_eventSetFileKey_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::NewProp__strFileKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::NewProp__strFileKey = { "_strFileKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventSetFileKey_Parms, _strFileKey), METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::NewProp__strFileKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::NewProp__strFileKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::NewProp__sFileUserIndex = { "_sFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventSetFileKey_Parms, _sFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventSetFileKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventSetFileKey_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::NewProp__strFileKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::NewProp__sFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "SetFileKey", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventSetFileKey_Parms), Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_SetRequestCacheFlag_Statics
	{
		struct SaveData_AccessorBase_eventSetRequestCacheFlag_Parms
		{
			bool _bCacheRequest;
		};
		static void NewProp__bCacheRequest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bCacheRequest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveData_AccessorBase_SetRequestCacheFlag_Statics::NewProp__bCacheRequest_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventSetRequestCacheFlag_Parms*)Obj)->_bCacheRequest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_SetRequestCacheFlag_Statics::NewProp__bCacheRequest = { "_bCacheRequest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventSetRequestCacheFlag_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_SetRequestCacheFlag_Statics::NewProp__bCacheRequest_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_SetRequestCacheFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_SetRequestCacheFlag_Statics::NewProp__bCacheRequest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_SetRequestCacheFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_SetRequestCacheFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "SetRequestCacheFlag", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventSetRequestCacheFlag_Parms), Z_Construct_UFunction_USaveData_AccessorBase_SetRequestCacheFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_SetRequestCacheFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_SetRequestCacheFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_SetRequestCacheFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_SetRequestCacheFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_SetRequestCacheFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics
	{
		struct SaveData_AccessorBase_eventSetup_Parms
		{
			ESaveDataAccessorProcMode _enProcMode;
			USaveDataSystem* _pcRefSystem;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enProcMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enProcMode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcRefSystem;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::NewProp__enProcMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::NewProp__enProcMode = { "_enProcMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventSetup_Parms, _enProcMode), Z_Construct_UEnum_ELITE_Game_ESaveDataAccessorProcMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::NewProp__pcRefSystem = { "_pcRefSystem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventSetup_Parms, _pcRefSystem), Z_Construct_UClass_USaveDataSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventSetup_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::NewProp__enProcMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::NewProp__enProcMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::NewProp__pcRefSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "Setup", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventSetup_Parms), Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_SetUpdatedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_SetUpdatedData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_SetUpdatedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "SetUpdatedData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_SetUpdatedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_SetUpdatedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_SetUpdatedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_SetUpdatedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics
	{
		struct SaveData_AccessorBase_eventSetupSaveGame_RawData_Parms
		{
			USaveGame_RawData* _pcRawData;
			bool _bCopyData;
			bool ReturnValue;
		};
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::NewProp__pcRawData = { "_pcRawData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_AccessorBase_eventSetupSaveGame_RawData_Parms, _pcRawData), Z_Construct_UClass_USaveGame_RawData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::NewProp__bCopyData_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventSetupSaveGame_RawData_Parms*)Obj)->_bCopyData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::NewProp__bCopyData = { "_bCopyData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventSetupSaveGame_RawData_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::NewProp__bCopyData_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_AccessorBase_eventSetupSaveGame_RawData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_AccessorBase_eventSetupSaveGame_RawData_Parms), &Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::NewProp__pcRawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::NewProp__bCopyData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_AccessorBase, nullptr, "SetupSaveGame_RawData", nullptr, nullptr, sizeof(SaveData_AccessorBase_eventSetupSaveGame_RawData_Parms), Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveData_AccessorBase_NoRegister()
	{
		return USaveData_AccessorBase::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_AccessorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveData_AccessorDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SaveData_AccessorDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcSaveGameBaseShared_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcSaveGameBaseShared;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcSaveGame_RawData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcSaveGame_RawData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_AccessorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveData_AccessorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveData_AccessorBase_ConvertSaveDataTypeAndIndexFromFileKey, "ConvertSaveDataTypeAndIndexFromFileKey" }, // 2318718313
		{ &Z_Construct_UFunction_USaveData_AccessorBase_Dispose, "Dispose" }, // 3222488056
		{ &Z_Construct_UFunction_USaveData_AccessorBase_GetDataAccessRefCount, "GetDataAccessRefCount" }, // 881866617
		{ &Z_Construct_UFunction_USaveData_AccessorBase_GetDebugModeForBackGroundProcess, "GetDebugModeForBackGroundProcess" }, // 606733496
		{ &Z_Construct_UFunction_USaveData_AccessorBase_GetFileKey, "GetFileKey" }, // 1490182117
		{ &Z_Construct_UFunction_USaveData_AccessorBase_GetFileList, "GetFileList" }, // 3082292431
		{ &Z_Construct_UFunction_USaveData_AccessorBase_GetFileUserIndex, "GetFileUserIndex" }, // 1908261750
		{ &Z_Construct_UFunction_USaveData_AccessorBase_GetLastBackGroundProcResult, "GetLastBackGroundProcResult" }, // 3901748639
		{ &Z_Construct_UFunction_USaveData_AccessorBase_GetProcMode, "GetProcMode" }, // 2505147663
		{ &Z_Construct_UFunction_USaveData_AccessorBase_GetQuotaInfo, "GetQuotaInfo" }, // 2219622931
		{ &Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataFileKeyWithType, "GetSaveDataFileKeyWithType" }, // 303464932
		{ &Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataObject, "GetSaveDataObject" }, // 1111967271
		{ &Z_Construct_UFunction_USaveData_AccessorBase_GetSaveDataType, "GetSaveDataType" }, // 2069249095
		{ &Z_Construct_UFunction_USaveData_AccessorBase_GetSaveGame_RawData, "GetSaveGame_RawData" }, // 2940653523
		{ &Z_Construct_UFunction_USaveData_AccessorBase_GetSearchTags, "GetSearchTags" }, // 2104073195
		{ &Z_Construct_UFunction_USaveData_AccessorBase_ImmediateCopy, "ImmediateCopy" }, // 2493401191
		{ &Z_Construct_UFunction_USaveData_AccessorBase_ImmediateDelete, "ImmediateDelete" }, // 4020117836
		{ &Z_Construct_UFunction_USaveData_AccessorBase_ImmediateLoad, "ImmediateLoad" }, // 814387713
		{ &Z_Construct_UFunction_USaveData_AccessorBase_ImmediateSave, "ImmediateSave" }, // 2968117286
		{ &Z_Construct_UFunction_USaveData_AccessorBase_IsBusy, "IsBusy" }, // 65615712
		{ &Z_Construct_UFunction_USaveData_AccessorBase_IsCanceledTask, "IsCanceledTask" }, // 2550596296
		{ &Z_Construct_UFunction_USaveData_AccessorBase_IsSuccessBackGroundProcResult, "IsSuccessBackGroundProcResult" }, // 2259536301
		{ &Z_Construct_UFunction_USaveData_AccessorBase_IsUpdatedData, "IsUpdatedData" }, // 2712341996
		{ &Z_Construct_UFunction_USaveData_AccessorBase_RequestConvertPS5FromPS4, "RequestConvertPS5FromPS4" }, // 3314519365
		{ &Z_Construct_UFunction_USaveData_AccessorBase_RequestCopy, "RequestCopy" }, // 3884863590
		{ &Z_Construct_UFunction_USaveData_AccessorBase_RequestDelete, "RequestDelete" }, // 108297134
		{ &Z_Construct_UFunction_USaveData_AccessorBase_RequestDeleteOnServer, "RequestDeleteOnServer" }, // 2791632082
		{ &Z_Construct_UFunction_USaveData_AccessorBase_RequestDownload, "RequestDownload" }, // 3034501868
		{ &Z_Construct_UFunction_USaveData_AccessorBase_RequestGetLocalQuotaInfo, "RequestGetLocalQuotaInfo" }, // 1277674723
		{ &Z_Construct_UFunction_USaveData_AccessorBase_RequestLoad, "RequestLoad" }, // 3321801324
		{ &Z_Construct_UFunction_USaveData_AccessorBase_RequestSave, "RequestSave" }, // 3839392499
		{ &Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateLocalFileList, "RequestUpdateLocalFileList" }, // 4114308929
		{ &Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateOnlineFileList, "RequestUpdateOnlineFileList" }, // 3585137488
		{ &Z_Construct_UFunction_USaveData_AccessorBase_RequestUpdateTitleFileList, "RequestUpdateTitleFileList" }, // 1595096808
		{ &Z_Construct_UFunction_USaveData_AccessorBase_RequestUpload, "RequestUpload" }, // 2157573011
		{ &Z_Construct_UFunction_USaveData_AccessorBase_SetCachedFlag, "SetCachedFlag" }, // 274527883
		{ &Z_Construct_UFunction_USaveData_AccessorBase_SetDataType, "SetDataType" }, // 421379998
		{ &Z_Construct_UFunction_USaveData_AccessorBase_SetDebugModeForBackGroundProcess, "SetDebugModeForBackGroundProcess" }, // 3387030508
		{ &Z_Construct_UFunction_USaveData_AccessorBase_SetFileKey, "SetFileKey" }, // 3490592860
		{ &Z_Construct_UFunction_USaveData_AccessorBase_SetRequestCacheFlag, "SetRequestCacheFlag" }, // 340121801
		{ &Z_Construct_UFunction_USaveData_AccessorBase_Setup, "Setup" }, // 4048403910
		{ &Z_Construct_UFunction_USaveData_AccessorBase_SetUpdatedData, "SetUpdatedData" }, // 889826251
		{ &Z_Construct_UFunction_USaveData_AccessorBase_SetupSaveGame_RawData, "SetupSaveGame_RawData" }, // 1850732122
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_AccessorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_AccessorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_AccessorBase_Statics::NewProp_SaveData_AccessorDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_AccessorBase" },
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveData_AccessorBase_Statics::NewProp_SaveData_AccessorDispatcher = { "SaveData_AccessorDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_AccessorBase, SaveData_AccessorDispatcher), Z_Construct_UDelegateFunction_ABP_200508_SaveData_AccessorDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USaveData_AccessorBase_Statics::NewProp_SaveData_AccessorDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_AccessorBase_Statics::NewProp_SaveData_AccessorDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_AccessorBase_Statics::NewProp_m_pcSaveGameBaseShared_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_AccessorBase" },
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveData_AccessorBase_Statics::NewProp_m_pcSaveGameBaseShared = { "m_pcSaveGameBaseShared", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_AccessorBase, m_pcSaveGameBaseShared), Z_Construct_UClass_UELSaveGameBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USaveData_AccessorBase_Statics::NewProp_m_pcSaveGameBaseShared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_AccessorBase_Statics::NewProp_m_pcSaveGameBaseShared_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_AccessorBase_Statics::NewProp_m_pcSaveGame_RawData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_AccessorBase" },
		{ "ModuleRelativePath", "Public/SaveData_AccessorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveData_AccessorBase_Statics::NewProp_m_pcSaveGame_RawData = { "m_pcSaveGame_RawData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_AccessorBase, m_pcSaveGame_RawData), Z_Construct_UClass_USaveGame_RawData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USaveData_AccessorBase_Statics::NewProp_m_pcSaveGame_RawData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_AccessorBase_Statics::NewProp_m_pcSaveGame_RawData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveData_AccessorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_AccessorBase_Statics::NewProp_SaveData_AccessorDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_AccessorBase_Statics::NewProp_m_pcSaveGameBaseShared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_AccessorBase_Statics::NewProp_m_pcSaveGame_RawData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_AccessorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_AccessorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_AccessorBase_Statics::ClassParams = {
		&USaveData_AccessorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveData_AccessorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_AccessorBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_AccessorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_AccessorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_AccessorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_AccessorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_AccessorBase, 812406271);
	template<> ABP_200508_API UClass* StaticClass<USaveData_AccessorBase>()
	{
		return USaveData_AccessorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_AccessorBase(Z_Construct_UClass_USaveData_AccessorBase, &USaveData_AccessorBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_AccessorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_AccessorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
