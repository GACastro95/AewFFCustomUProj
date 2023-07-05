// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_LowerEngineBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_LowerEngineBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_LowerEngineBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_LowerEngineBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FSaveData_FileInfo();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FSaveData_QuotaInfo();
	ABP_200508_API UClass* Z_Construct_UClass_USaveGame_RawData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USaveData_LowerEngineBase::execCheckValidAllocationOnLocal)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckValidAllocationOnLocal(Z_Param__sFileSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_LowerEngineBase::execDeleteRawData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->DeleteRawData(Z_Param__strFileKey,Z_Param__sFileUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_LowerEngineBase::execGetLocalFileList)
	{
		P_GET_TARRAY_REF(FSaveData_FileInfo,Z_Param_Out__refFileList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLocalFileList(Z_Param_Out__refFileList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_LowerEngineBase::execGetLocalFileListByType)
	{
		P_GET_TARRAY_REF(FSaveData_FileInfo,Z_Param_Out__refFileList);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFilterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLocalFileListByType(Z_Param_Out__refFileList,Z_Param__strFilterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_LowerEngineBase::execGetLocalQuotaInfo)
	{
		P_GET_STRUCT_REF(FSaveData_QuotaInfo,Z_Param_Out__stQuataInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLocalQuotaInfo(Z_Param_Out__stQuataInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_LowerEngineBase::execIsExistsRawData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExistsRawData(Z_Param__strFileKey,Z_Param__sFileUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_LowerEngineBase::execLoadRawData)
	{
		P_GET_OBJECT_REF(USaveGame_RawData,Z_Param_Out__pcRawData);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->LoadRawData(Z_Param_Out__pcRawData,Z_Param__strFileKey,Z_Param__sFileUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_LowerEngineBase::execLoadRawData_PS4)
	{
		P_GET_OBJECT_REF(USaveGame_RawData,Z_Param_Out__pcRawData);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileUserIndex);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_OutSaveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->LoadRawData_PS4(Z_Param_Out__pcRawData,Z_Param__strFileKey,Z_Param__sFileUserIndex,Z_Param_Out_OutSaveData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_LowerEngineBase::execSaveRawData)
	{
		P_GET_OBJECT(USaveGame_RawData,Z_Param__pcRawData);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sFileUserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESaveDataProcResult*)Z_Param__Result=P_THIS->SaveRawData(Z_Param__pcRawData,Z_Param__strFileKey,Z_Param__sFileUserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_LowerEngineBase::execUpdateLocalFileList)
	{
		P_GET_UBOOL(Z_Param__bProjectSavedDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateLocalFileList(Z_Param__bProjectSavedDir);
		P_NATIVE_END;
	}
	void USaveData_LowerEngineBase::StaticRegisterNativesUSaveData_LowerEngineBase()
	{
		UClass* Class = USaveData_LowerEngineBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckValidAllocationOnLocal", &USaveData_LowerEngineBase::execCheckValidAllocationOnLocal },
			{ "DeleteRawData", &USaveData_LowerEngineBase::execDeleteRawData },
			{ "GetLocalFileList", &USaveData_LowerEngineBase::execGetLocalFileList },
			{ "GetLocalFileListByType", &USaveData_LowerEngineBase::execGetLocalFileListByType },
			{ "GetLocalQuotaInfo", &USaveData_LowerEngineBase::execGetLocalQuotaInfo },
			{ "IsExistsRawData", &USaveData_LowerEngineBase::execIsExistsRawData },
			{ "LoadRawData", &USaveData_LowerEngineBase::execLoadRawData },
			{ "LoadRawData_PS4", &USaveData_LowerEngineBase::execLoadRawData_PS4 },
			{ "SaveRawData", &USaveData_LowerEngineBase::execSaveRawData },
			{ "UpdateLocalFileList", &USaveData_LowerEngineBase::execUpdateLocalFileList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveData_LowerEngineBase_CheckValidAllocationOnLocal_Statics
	{
		struct SaveData_LowerEngineBase_eventCheckValidAllocationOnLocal_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_CheckValidAllocationOnLocal_Statics::NewProp__sFileSize = { "_sFileSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventCheckValidAllocationOnLocal_Parms, _sFileSize), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_LowerEngineBase_CheckValidAllocationOnLocal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_LowerEngineBase_eventCheckValidAllocationOnLocal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_CheckValidAllocationOnLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_LowerEngineBase_eventCheckValidAllocationOnLocal_Parms), &Z_Construct_UFunction_USaveData_LowerEngineBase_CheckValidAllocationOnLocal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_LowerEngineBase_CheckValidAllocationOnLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_CheckValidAllocationOnLocal_Statics::NewProp__sFileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_CheckValidAllocationOnLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_LowerEngineBase_CheckValidAllocationOnLocal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_LowerEngineBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_LowerEngineBase_CheckValidAllocationOnLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_LowerEngineBase, nullptr, "CheckValidAllocationOnLocal", nullptr, nullptr, sizeof(SaveData_LowerEngineBase_eventCheckValidAllocationOnLocal_Parms), Z_Construct_UFunction_USaveData_LowerEngineBase_CheckValidAllocationOnLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_CheckValidAllocationOnLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_LowerEngineBase_CheckValidAllocationOnLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_CheckValidAllocationOnLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_LowerEngineBase_CheckValidAllocationOnLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_LowerEngineBase_CheckValidAllocationOnLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics
	{
		struct SaveData_LowerEngineBase_eventDeleteRawData_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::NewProp__strFileKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::NewProp__strFileKey = { "_strFileKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventDeleteRawData_Parms, _strFileKey), METADATA_PARAMS(Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::NewProp__strFileKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::NewProp__strFileKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::NewProp__sFileUserIndex = { "_sFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventDeleteRawData_Parms, _sFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventDeleteRawData_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::NewProp__strFileKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::NewProp__sFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_LowerEngineBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_LowerEngineBase, nullptr, "DeleteRawData", nullptr, nullptr, sizeof(SaveData_LowerEngineBase_eventDeleteRawData_Parms), Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileList_Statics
	{
		struct SaveData_LowerEngineBase_eventGetLocalFileList_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileList_Statics::NewProp__refFileList_Inner = { "_refFileList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveData_FileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileList_Statics::NewProp__refFileList = { "_refFileList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventGetLocalFileList_Parms, _refFileList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventGetLocalFileList_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileList_Statics::NewProp__refFileList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileList_Statics::NewProp__refFileList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_LowerEngineBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_LowerEngineBase, nullptr, "GetLocalFileList", nullptr, nullptr, sizeof(SaveData_LowerEngineBase_eventGetLocalFileList_Parms), Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics
	{
		struct SaveData_LowerEngineBase_eventGetLocalFileListByType_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::NewProp__refFileList_Inner = { "_refFileList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveData_FileInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::NewProp__refFileList = { "_refFileList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventGetLocalFileListByType_Parms, _refFileList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::NewProp__strFilterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::NewProp__strFilterName = { "_strFilterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventGetLocalFileListByType_Parms, _strFilterName), METADATA_PARAMS(Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::NewProp__strFilterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::NewProp__strFilterName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventGetLocalFileListByType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::NewProp__refFileList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::NewProp__refFileList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::NewProp__strFilterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_LowerEngineBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_LowerEngineBase, nullptr, "GetLocalFileListByType", nullptr, nullptr, sizeof(SaveData_LowerEngineBase_eventGetLocalFileListByType_Parms), Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalQuotaInfo_Statics
	{
		struct SaveData_LowerEngineBase_eventGetLocalQuotaInfo_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalQuotaInfo_Statics::NewProp__stQuataInfo = { "_stQuataInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventGetLocalQuotaInfo_Parms, _stQuataInfo), Z_Construct_UScriptStruct_FSaveData_QuotaInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalQuotaInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_LowerEngineBase_eventGetLocalQuotaInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalQuotaInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_LowerEngineBase_eventGetLocalQuotaInfo_Parms), &Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalQuotaInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalQuotaInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalQuotaInfo_Statics::NewProp__stQuataInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalQuotaInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalQuotaInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_LowerEngineBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalQuotaInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_LowerEngineBase, nullptr, "GetLocalQuotaInfo", nullptr, nullptr, sizeof(SaveData_LowerEngineBase_eventGetLocalQuotaInfo_Parms), Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalQuotaInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalQuotaInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalQuotaInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalQuotaInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalQuotaInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalQuotaInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics
	{
		struct SaveData_LowerEngineBase_eventIsExistsRawData_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::NewProp__strFileKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::NewProp__strFileKey = { "_strFileKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventIsExistsRawData_Parms, _strFileKey), METADATA_PARAMS(Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::NewProp__strFileKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::NewProp__strFileKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::NewProp__sFileUserIndex = { "_sFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventIsExistsRawData_Parms, _sFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_LowerEngineBase_eventIsExistsRawData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_LowerEngineBase_eventIsExistsRawData_Parms), &Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::NewProp__strFileKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::NewProp__sFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_LowerEngineBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_LowerEngineBase, nullptr, "IsExistsRawData", nullptr, nullptr, sizeof(SaveData_LowerEngineBase_eventIsExistsRawData_Parms), Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics
	{
		struct SaveData_LowerEngineBase_eventLoadRawData_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::NewProp__pcRawData = { "_pcRawData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventLoadRawData_Parms, _pcRawData), Z_Construct_UClass_USaveGame_RawData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::NewProp__strFileKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::NewProp__strFileKey = { "_strFileKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventLoadRawData_Parms, _strFileKey), METADATA_PARAMS(Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::NewProp__strFileKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::NewProp__strFileKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::NewProp__sFileUserIndex = { "_sFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventLoadRawData_Parms, _sFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventLoadRawData_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::NewProp__pcRawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::NewProp__strFileKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::NewProp__sFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_LowerEngineBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_LowerEngineBase, nullptr, "LoadRawData", nullptr, nullptr, sizeof(SaveData_LowerEngineBase_eventLoadRawData_Parms), Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics
	{
		struct SaveData_LowerEngineBase_eventLoadRawData_PS4_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::NewProp__pcRawData = { "_pcRawData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventLoadRawData_PS4_Parms, _pcRawData), Z_Construct_UClass_USaveGame_RawData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::NewProp__strFileKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::NewProp__strFileKey = { "_strFileKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventLoadRawData_PS4_Parms, _strFileKey), METADATA_PARAMS(Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::NewProp__strFileKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::NewProp__strFileKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::NewProp__sFileUserIndex = { "_sFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventLoadRawData_PS4_Parms, _sFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::NewProp_OutSaveData_Inner = { "OutSaveData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::NewProp_OutSaveData = { "OutSaveData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventLoadRawData_PS4_Parms, OutSaveData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventLoadRawData_PS4_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::NewProp__pcRawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::NewProp__strFileKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::NewProp__sFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::NewProp_OutSaveData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::NewProp_OutSaveData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_LowerEngineBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_LowerEngineBase, nullptr, "LoadRawData_PS4", nullptr, nullptr, sizeof(SaveData_LowerEngineBase_eventLoadRawData_PS4_Parms), Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics
	{
		struct SaveData_LowerEngineBase_eventSaveRawData_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::NewProp__pcRawData = { "_pcRawData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventSaveRawData_Parms, _pcRawData), Z_Construct_UClass_USaveGame_RawData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::NewProp__strFileKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::NewProp__strFileKey = { "_strFileKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventSaveRawData_Parms, _strFileKey), METADATA_PARAMS(Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::NewProp__strFileKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::NewProp__strFileKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::NewProp__sFileUserIndex = { "_sFileUserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventSaveRawData_Parms, _sFileUserIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_LowerEngineBase_eventSaveRawData_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_ESaveDataProcResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::NewProp__pcRawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::NewProp__strFileKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::NewProp__sFileUserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_LowerEngineBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_LowerEngineBase, nullptr, "SaveRawData", nullptr, nullptr, sizeof(SaveData_LowerEngineBase_eventSaveRawData_Parms), Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList_Statics
	{
		struct SaveData_LowerEngineBase_eventUpdateLocalFileList_Parms
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
	void Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList_Statics::NewProp__bProjectSavedDir_SetBit(void* Obj)
	{
		((SaveData_LowerEngineBase_eventUpdateLocalFileList_Parms*)Obj)->_bProjectSavedDir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList_Statics::NewProp__bProjectSavedDir = { "_bProjectSavedDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_LowerEngineBase_eventUpdateLocalFileList_Parms), &Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList_Statics::NewProp__bProjectSavedDir_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_LowerEngineBase_eventUpdateLocalFileList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_LowerEngineBase_eventUpdateLocalFileList_Parms), &Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList_Statics::NewProp__bProjectSavedDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_LowerEngineBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_LowerEngineBase, nullptr, "UpdateLocalFileList", nullptr, nullptr, sizeof(SaveData_LowerEngineBase_eventUpdateLocalFileList_Parms), Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveData_LowerEngineBase_NoRegister()
	{
		return USaveData_LowerEngineBase::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_LowerEngineBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_LowerEngineBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveData_LowerEngineBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveData_LowerEngineBase_CheckValidAllocationOnLocal, "CheckValidAllocationOnLocal" }, // 3663296477
		{ &Z_Construct_UFunction_USaveData_LowerEngineBase_DeleteRawData, "DeleteRawData" }, // 3609872744
		{ &Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileList, "GetLocalFileList" }, // 3703111744
		{ &Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalFileListByType, "GetLocalFileListByType" }, // 2918840351
		{ &Z_Construct_UFunction_USaveData_LowerEngineBase_GetLocalQuotaInfo, "GetLocalQuotaInfo" }, // 2283309054
		{ &Z_Construct_UFunction_USaveData_LowerEngineBase_IsExistsRawData, "IsExistsRawData" }, // 3224106595
		{ &Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData, "LoadRawData" }, // 951322230
		{ &Z_Construct_UFunction_USaveData_LowerEngineBase_LoadRawData_PS4, "LoadRawData_PS4" }, // 1668520777
		{ &Z_Construct_UFunction_USaveData_LowerEngineBase_SaveRawData, "SaveRawData" }, // 539971085
		{ &Z_Construct_UFunction_USaveData_LowerEngineBase_UpdateLocalFileList, "UpdateLocalFileList" }, // 2601551392
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_LowerEngineBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_LowerEngineBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_LowerEngineBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_LowerEngineBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_LowerEngineBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_LowerEngineBase_Statics::ClassParams = {
		&USaveData_LowerEngineBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_LowerEngineBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_LowerEngineBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_LowerEngineBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_LowerEngineBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_LowerEngineBase, 2975349608);
	template<> ABP_200508_API UClass* StaticClass<USaveData_LowerEngineBase>()
	{
		return USaveData_LowerEngineBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_LowerEngineBase(Z_Construct_UClass_USaveData_LowerEngineBase, &USaveData_LowerEngineBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_LowerEngineBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_LowerEngineBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
