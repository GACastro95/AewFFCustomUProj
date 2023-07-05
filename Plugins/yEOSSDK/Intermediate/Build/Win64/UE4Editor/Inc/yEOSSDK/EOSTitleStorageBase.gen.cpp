// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSTitleStorageBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSTitleStorageBase() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSTitleStorageBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSTitleStorageBase();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageProgress();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSTitleStorageEventDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSTitleStorageBase::execClearDownloadProgress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearDownloadProgress(Z_Param__strFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSTitleStorageBase::execGetDownloadProgress)
	{
		P_GET_STRUCT_REF(FEOSTitleStorageProgress,Z_Param_Out__rstProgress);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDownloadProgress(Z_Param_Out__rstProgress,Z_Param__strFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSTitleStorageBase::execGetFileCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFileCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSTitleStorageBase::execGetFileMetaData)
	{
		P_GET_STRUCT_REF(FEOSTitleStorageFileMetaData,Z_Param_Out__rstMetaData);
		P_GET_PROPERTY(FStrProperty,Z_Param_strFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFileMetaData(Z_Param_Out__rstMetaData,Z_Param_strFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSTitleStorageBase::execGetFileMetaDataByIndex)
	{
		P_GET_STRUCT_REF(FEOSTitleStorageFileMetaData,Z_Param_Out__rstMetaData);
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFileMetaDataByIndex(Z_Param_Out__rstMetaData,Z_Param__sIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSTitleStorageBase::execGetMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FEOSTitleStorageFileMetaData>*)Z_Param__Result=P_THIS->GetMetadata();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSTitleStorageBase::execRequestCancelDownload)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestCancelDownload(Z_Param__strFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSTitleStorageBase::execRequestDownloadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_GET_UBOOL(Z_Param__bAutoRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDownloadFile(Z_Param__strFileName,Z_Param__bAutoRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSTitleStorageBase::execRequestFileList)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out__strFileTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestFileList(Z_Param_Out__strFileTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSTitleStorageBase::execSetApiVersion)
	{
		P_GET_STRUCT(FEOSTitleStorageAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSTitleStorageBase::SetApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSTitleStorageBase::execSetRequestReadBytes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sRequestReadBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRequestReadBytes(Z_Param__sRequestReadBytes);
		P_NATIVE_END;
	}
	void UEOSTitleStorageBase::StaticRegisterNativesUEOSTitleStorageBase()
	{
		UClass* Class = UEOSTitleStorageBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearDownloadProgress", &UEOSTitleStorageBase::execClearDownloadProgress },
			{ "GetDownloadProgress", &UEOSTitleStorageBase::execGetDownloadProgress },
			{ "GetFileCount", &UEOSTitleStorageBase::execGetFileCount },
			{ "GetFileMetaData", &UEOSTitleStorageBase::execGetFileMetaData },
			{ "GetFileMetaDataByIndex", &UEOSTitleStorageBase::execGetFileMetaDataByIndex },
			{ "GetMetadata", &UEOSTitleStorageBase::execGetMetadata },
			{ "RequestCancelDownload", &UEOSTitleStorageBase::execRequestCancelDownload },
			{ "RequestDownloadFile", &UEOSTitleStorageBase::execRequestDownloadFile },
			{ "RequestFileList", &UEOSTitleStorageBase::execRequestFileList },
			{ "SetApiVersion", &UEOSTitleStorageBase::execSetApiVersion },
			{ "SetRequestReadBytes", &UEOSTitleStorageBase::execSetRequestReadBytes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics
	{
		struct EOSTitleStorageBase_eventClearDownloadProgress_Parms
		{
			FString _strFileName;
			bool ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBase_eventClearDownloadProgress_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics::NewProp__strFileName_MetaData)) };
	void Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSTitleStorageBase_eventClearDownloadProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSTitleStorageBase_eventClearDownloadProgress_Parms), &Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBase, nullptr, "ClearDownloadProgress", nullptr, nullptr, sizeof(EOSTitleStorageBase_eventClearDownloadProgress_Parms), Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics
	{
		struct EOSTitleStorageBase_eventGetDownloadProgress_Parms
		{
			FEOSTitleStorageProgress _rstProgress;
			FString _strFileName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstProgress;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::NewProp__rstProgress = { "_rstProgress", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBase_eventGetDownloadProgress_Parms, _rstProgress), Z_Construct_UScriptStruct_FEOSTitleStorageProgress, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBase_eventGetDownloadProgress_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::NewProp__strFileName_MetaData)) };
	void Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSTitleStorageBase_eventGetDownloadProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSTitleStorageBase_eventGetDownloadProgress_Parms), &Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::NewProp__rstProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBase, nullptr, "GetDownloadProgress", nullptr, nullptr, sizeof(EOSTitleStorageBase_eventGetDownloadProgress_Parms), Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBase_GetFileCount_Statics
	{
		struct EOSTitleStorageBase_eventGetFileCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_GetFileCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBase_eventGetFileCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBase_GetFileCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_GetFileCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBase_GetFileCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBase_GetFileCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBase, nullptr, "GetFileCount", nullptr, nullptr, sizeof(EOSTitleStorageBase_eventGetFileCount_Parms), Z_Construct_UFunction_UEOSTitleStorageBase_GetFileCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_GetFileCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBase_GetFileCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_GetFileCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBase_GetFileCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBase_GetFileCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics
	{
		struct EOSTitleStorageBase_eventGetFileMetaData_Parms
		{
			FEOSTitleStorageFileMetaData _rstMetaData;
			FString strFileName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstMetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_strFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_strFileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::NewProp__rstMetaData = { "_rstMetaData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBase_eventGetFileMetaData_Parms, _rstMetaData), Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::NewProp_strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::NewProp_strFileName = { "strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBase_eventGetFileMetaData_Parms, strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::NewProp_strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::NewProp_strFileName_MetaData)) };
	void Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSTitleStorageBase_eventGetFileMetaData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSTitleStorageBase_eventGetFileMetaData_Parms), &Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::NewProp__rstMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::NewProp_strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBase, nullptr, "GetFileMetaData", nullptr, nullptr, sizeof(EOSTitleStorageBase_eventGetFileMetaData_Parms), Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex_Statics
	{
		struct EOSTitleStorageBase_eventGetFileMetaDataByIndex_Parms
		{
			FEOSTitleStorageFileMetaData _rstMetaData;
			int32 _sIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstMetaData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex_Statics::NewProp__rstMetaData = { "_rstMetaData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBase_eventGetFileMetaDataByIndex_Parms, _rstMetaData), Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBase_eventGetFileMetaDataByIndex_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSTitleStorageBase_eventGetFileMetaDataByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSTitleStorageBase_eventGetFileMetaDataByIndex_Parms), &Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex_Statics::NewProp__rstMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBase, nullptr, "GetFileMetaDataByIndex", nullptr, nullptr, sizeof(EOSTitleStorageBase_eventGetFileMetaDataByIndex_Parms), Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBase_GetMetadata_Statics
	{
		struct EOSTitleStorageBase_eventGetMetadata_Parms
		{
			TArray<FEOSTitleStorageFileMetaData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_GetMetadata_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_GetMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBase_eventGetMetadata_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBase_GetMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_GetMetadata_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_GetMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBase_GetMetadata_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBase_GetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBase, nullptr, "GetMetadata", nullptr, nullptr, sizeof(EOSTitleStorageBase_eventGetMetadata_Parms), Z_Construct_UFunction_UEOSTitleStorageBase_GetMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_GetMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBase_GetMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_GetMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBase_GetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBase_GetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics
	{
		struct EOSTitleStorageBase_eventRequestCancelDownload_Parms
		{
			FString _strFileName;
			bool ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBase_eventRequestCancelDownload_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics::NewProp__strFileName_MetaData)) };
	void Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSTitleStorageBase_eventRequestCancelDownload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSTitleStorageBase_eventRequestCancelDownload_Parms), &Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBase, nullptr, "RequestCancelDownload", nullptr, nullptr, sizeof(EOSTitleStorageBase_eventRequestCancelDownload_Parms), Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics
	{
		struct EOSTitleStorageBase_eventRequestDownloadFile_Parms
		{
			FString _strFileName;
			bool _bAutoRemove;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileName;
		static void NewProp__bAutoRemove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bAutoRemove;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBase_eventRequestDownloadFile_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::NewProp__strFileName_MetaData)) };
	void Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::NewProp__bAutoRemove_SetBit(void* Obj)
	{
		((EOSTitleStorageBase_eventRequestDownloadFile_Parms*)Obj)->_bAutoRemove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::NewProp__bAutoRemove = { "_bAutoRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSTitleStorageBase_eventRequestDownloadFile_Parms), &Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::NewProp__bAutoRemove_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSTitleStorageBase_eventRequestDownloadFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSTitleStorageBase_eventRequestDownloadFile_Parms), &Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::NewProp__bAutoRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBase, nullptr, "RequestDownloadFile", nullptr, nullptr, sizeof(EOSTitleStorageBase_eventRequestDownloadFile_Parms), Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics
	{
		struct EOSTitleStorageBase_eventRequestFileList_Parms
		{
			TArray<FString> _strFileTags;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__strFileTags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::NewProp__strFileTags_Inner = { "_strFileTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::NewProp__strFileTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::NewProp__strFileTags = { "_strFileTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBase_eventRequestFileList_Parms, _strFileTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::NewProp__strFileTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::NewProp__strFileTags_MetaData)) };
	void Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSTitleStorageBase_eventRequestFileList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSTitleStorageBase_eventRequestFileList_Parms), &Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::NewProp__strFileTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::NewProp__strFileTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBase, nullptr, "RequestFileList", nullptr, nullptr, sizeof(EOSTitleStorageBase_eventRequestFileList_Parms), Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBase_SetApiVersion_Statics
	{
		struct EOSTitleStorageBase_eventSetApiVersion_Parms
		{
			FEOSTitleStorageAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_SetApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBase_eventSetApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSTitleStorageAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBase_SetApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_SetApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBase_SetApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBase_SetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBase, nullptr, "SetApiVersion", nullptr, nullptr, sizeof(EOSTitleStorageBase_eventSetApiVersion_Parms), Z_Construct_UFunction_UEOSTitleStorageBase_SetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_SetApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBase_SetApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_SetApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBase_SetApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBase_SetApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBase_SetRequestReadBytes_Statics
	{
		struct EOSTitleStorageBase_eventSetRequestReadBytes_Parms
		{
			int32 _sRequestReadBytes;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sRequestReadBytes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSTitleStorageBase_SetRequestReadBytes_Statics::NewProp__sRequestReadBytes = { "_sRequestReadBytes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBase_eventSetRequestReadBytes_Parms, _sRequestReadBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBase_SetRequestReadBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBase_SetRequestReadBytes_Statics::NewProp__sRequestReadBytes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBase_SetRequestReadBytes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBase_SetRequestReadBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBase, nullptr, "SetRequestReadBytes", nullptr, nullptr, sizeof(EOSTitleStorageBase_eventSetRequestReadBytes_Parms), Z_Construct_UFunction_UEOSTitleStorageBase_SetRequestReadBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_SetRequestReadBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBase_SetRequestReadBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBase_SetRequestReadBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBase_SetRequestReadBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBase_SetRequestReadBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSTitleStorageBase_NoRegister()
	{
		return UEOSTitleStorageBase::StaticClass();
	}
	struct Z_Construct_UClass_UEOSTitleStorageBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleStorageEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_TitleStorageEventDispatcher;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_cMetaData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cMetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cMetaData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_cReadInfo_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cReadInfo_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cReadInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cReadInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSTitleStorageBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSIDs,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSTitleStorageBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSTitleStorageBase_ClearDownloadProgress, "ClearDownloadProgress" }, // 2670314754
		{ &Z_Construct_UFunction_UEOSTitleStorageBase_GetDownloadProgress, "GetDownloadProgress" }, // 4030026931
		{ &Z_Construct_UFunction_UEOSTitleStorageBase_GetFileCount, "GetFileCount" }, // 179469114
		{ &Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaData, "GetFileMetaData" }, // 3373767290
		{ &Z_Construct_UFunction_UEOSTitleStorageBase_GetFileMetaDataByIndex, "GetFileMetaDataByIndex" }, // 2605318367
		{ &Z_Construct_UFunction_UEOSTitleStorageBase_GetMetadata, "GetMetadata" }, // 886448044
		{ &Z_Construct_UFunction_UEOSTitleStorageBase_RequestCancelDownload, "RequestCancelDownload" }, // 2523551302
		{ &Z_Construct_UFunction_UEOSTitleStorageBase_RequestDownloadFile, "RequestDownloadFile" }, // 2625417406
		{ &Z_Construct_UFunction_UEOSTitleStorageBase_RequestFileList, "RequestFileList" }, // 1784565327
		{ &Z_Construct_UFunction_UEOSTitleStorageBase_SetApiVersion, "SetApiVersion" }, // 1736628852
		{ &Z_Construct_UFunction_UEOSTitleStorageBase_SetRequestReadBytes, "SetRequestReadBytes" }, // 1987778981
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSTitleStorageBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSTitleStorageBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_TitleStorageEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageBase" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_TitleStorageEventDispatcher = { "TitleStorageEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSTitleStorageBase, TitleStorageEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSTitleStorageEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_TitleStorageEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_TitleStorageEventDispatcher_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_m_cMetaData_Inner = { "m_cMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSTitleStorageFileMetaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_m_cMetaData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageBase" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_m_cMetaData = { "m_cMetaData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSTitleStorageBase, m_cMetaData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_m_cMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_m_cMetaData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_m_cReadInfo_ValueProp = { "m_cReadInfo", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEOSTitleStorageProgress, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_m_cReadInfo_Key_KeyProp = { "m_cReadInfo_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_m_cReadInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSTitleStorageBase" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_m_cReadInfo = { "m_cReadInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSTitleStorageBase, m_cReadInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_m_cReadInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_m_cReadInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSTitleStorageBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_TitleStorageEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_m_cMetaData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_m_cMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_m_cReadInfo_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_m_cReadInfo_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSTitleStorageBase_Statics::NewProp_m_cReadInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSTitleStorageBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSTitleStorageBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSTitleStorageBase_Statics::ClassParams = {
		&UEOSTitleStorageBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSTitleStorageBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSTitleStorageBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSTitleStorageBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSTitleStorageBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSTitleStorageBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSTitleStorageBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSTitleStorageBase, 1355795794);
	template<> YEOSSDK_API UClass* StaticClass<UEOSTitleStorageBase>()
	{
		return UEOSTitleStorageBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSTitleStorageBase(Z_Construct_UClass_UEOSTitleStorageBase, &UEOSTitleStorageBase::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSTitleStorageBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSTitleStorageBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
