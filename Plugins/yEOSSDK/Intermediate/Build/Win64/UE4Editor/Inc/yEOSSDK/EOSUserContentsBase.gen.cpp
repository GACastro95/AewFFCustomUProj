// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSUserContentsBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSUserContentsBase() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentsBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentsBase();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserContentProgress();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserContentMetaData();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSUserContentsBase::execClearDownloadProgress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearDownloadProgress(Z_Param__strFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContentsBase::execGetDownloadProgress)
	{
		P_GET_STRUCT_REF(FEOSUserContentProgress,Z_Param_Out__rstProgress);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDownloadProgress(Z_Param_Out__rstProgress,Z_Param__strFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContentsBase::execGetFileCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFileCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContentsBase::execGetFileMetaData)
	{
		P_GET_STRUCT_REF(FEOSUserContentMetaData,Z_Param_Out__rstMetaData);
		P_GET_PROPERTY(FStrProperty,Z_Param_strFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFileMetaData(Z_Param_Out__rstMetaData,Z_Param_strFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContentsBase::execGetFileMetaDataByIndex)
	{
		P_GET_STRUCT_REF(FEOSUserContentMetaData,Z_Param_Out__rstMetaData);
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFileMetaDataByIndex(Z_Param_Out__rstMetaData,Z_Param__sIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContentsBase::execGetMetadata)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FEOSUserContentMetaData>*)Z_Param__Result=P_THIS->GetMetadata();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContentsBase::execRequestCancelDownload)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestCancelDownload(Z_Param__strFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContentsBase::execRequestDownloadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_GET_UBOOL(Z_Param__bAutoRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDownloadFile(Z_Param__strFileName,Z_Param__bAutoRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContentsBase::execRequestFileList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestFileList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContentsBase::execSetApiVersion)
	{
		P_GET_STRUCT(FEOSUserContentsAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSUserContentsBase::SetApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContentsBase::execSetRequestReadBytes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sRequestReadBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRequestReadBytes(Z_Param__sRequestReadBytes);
		P_NATIVE_END;
	}
	void UEOSUserContentsBase::StaticRegisterNativesUEOSUserContentsBase()
	{
		UClass* Class = UEOSUserContentsBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearDownloadProgress", &UEOSUserContentsBase::execClearDownloadProgress },
			{ "GetDownloadProgress", &UEOSUserContentsBase::execGetDownloadProgress },
			{ "GetFileCount", &UEOSUserContentsBase::execGetFileCount },
			{ "GetFileMetaData", &UEOSUserContentsBase::execGetFileMetaData },
			{ "GetFileMetaDataByIndex", &UEOSUserContentsBase::execGetFileMetaDataByIndex },
			{ "GetMetadata", &UEOSUserContentsBase::execGetMetadata },
			{ "RequestCancelDownload", &UEOSUserContentsBase::execRequestCancelDownload },
			{ "RequestDownloadFile", &UEOSUserContentsBase::execRequestDownloadFile },
			{ "RequestFileList", &UEOSUserContentsBase::execRequestFileList },
			{ "SetApiVersion", &UEOSUserContentsBase::execSetApiVersion },
			{ "SetRequestReadBytes", &UEOSUserContentsBase::execSetRequestReadBytes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics
	{
		struct EOSUserContentsBase_eventClearDownloadProgress_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContentsBase_eventClearDownloadProgress_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics::NewProp__strFileName_MetaData)) };
	void Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserContentsBase_eventClearDownloadProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserContentsBase_eventClearDownloadProgress_Parms), &Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContentsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContentsBase, nullptr, "ClearDownloadProgress", nullptr, nullptr, sizeof(EOSUserContentsBase_eventClearDownloadProgress_Parms), Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics
	{
		struct EOSUserContentsBase_eventGetDownloadProgress_Parms
		{
			FEOSUserContentProgress _rstProgress;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::NewProp__rstProgress = { "_rstProgress", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContentsBase_eventGetDownloadProgress_Parms, _rstProgress), Z_Construct_UScriptStruct_FEOSUserContentProgress, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContentsBase_eventGetDownloadProgress_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::NewProp__strFileName_MetaData)) };
	void Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserContentsBase_eventGetDownloadProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserContentsBase_eventGetDownloadProgress_Parms), &Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::NewProp__rstProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContentsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContentsBase, nullptr, "GetDownloadProgress", nullptr, nullptr, sizeof(EOSUserContentsBase_eventGetDownloadProgress_Parms), Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContentsBase_GetFileCount_Statics
	{
		struct EOSUserContentsBase_eventGetFileCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_GetFileCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContentsBase_eventGetFileCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContentsBase_GetFileCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_GetFileCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentsBase_GetFileCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContentsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContentsBase_GetFileCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContentsBase, nullptr, "GetFileCount", nullptr, nullptr, sizeof(EOSUserContentsBase_eventGetFileCount_Parms), Z_Construct_UFunction_UEOSUserContentsBase_GetFileCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_GetFileCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentsBase_GetFileCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_GetFileCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContentsBase_GetFileCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContentsBase_GetFileCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics
	{
		struct EOSUserContentsBase_eventGetFileMetaData_Parms
		{
			FEOSUserContentMetaData _rstMetaData;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::NewProp__rstMetaData = { "_rstMetaData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContentsBase_eventGetFileMetaData_Parms, _rstMetaData), Z_Construct_UScriptStruct_FEOSUserContentMetaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::NewProp_strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::NewProp_strFileName = { "strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContentsBase_eventGetFileMetaData_Parms, strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::NewProp_strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::NewProp_strFileName_MetaData)) };
	void Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserContentsBase_eventGetFileMetaData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserContentsBase_eventGetFileMetaData_Parms), &Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::NewProp__rstMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::NewProp_strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContentsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContentsBase, nullptr, "GetFileMetaData", nullptr, nullptr, sizeof(EOSUserContentsBase_eventGetFileMetaData_Parms), Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex_Statics
	{
		struct EOSUserContentsBase_eventGetFileMetaDataByIndex_Parms
		{
			FEOSUserContentMetaData _rstMetaData;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex_Statics::NewProp__rstMetaData = { "_rstMetaData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContentsBase_eventGetFileMetaDataByIndex_Parms, _rstMetaData), Z_Construct_UScriptStruct_FEOSUserContentMetaData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContentsBase_eventGetFileMetaDataByIndex_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserContentsBase_eventGetFileMetaDataByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserContentsBase_eventGetFileMetaDataByIndex_Parms), &Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex_Statics::NewProp__rstMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContentsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContentsBase, nullptr, "GetFileMetaDataByIndex", nullptr, nullptr, sizeof(EOSUserContentsBase_eventGetFileMetaDataByIndex_Parms), Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContentsBase_GetMetadata_Statics
	{
		struct EOSUserContentsBase_eventGetMetadata_Parms
		{
			TArray<FEOSUserContentMetaData> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_GetMetadata_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSUserContentMetaData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_GetMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContentsBase_eventGetMetadata_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContentsBase_GetMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_GetMetadata_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_GetMetadata_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentsBase_GetMetadata_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContentsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContentsBase_GetMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContentsBase, nullptr, "GetMetadata", nullptr, nullptr, sizeof(EOSUserContentsBase_eventGetMetadata_Parms), Z_Construct_UFunction_UEOSUserContentsBase_GetMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_GetMetadata_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentsBase_GetMetadata_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_GetMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContentsBase_GetMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContentsBase_GetMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics
	{
		struct EOSUserContentsBase_eventRequestCancelDownload_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContentsBase_eventRequestCancelDownload_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics::NewProp__strFileName_MetaData)) };
	void Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserContentsBase_eventRequestCancelDownload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserContentsBase_eventRequestCancelDownload_Parms), &Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContentsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContentsBase, nullptr, "RequestCancelDownload", nullptr, nullptr, sizeof(EOSUserContentsBase_eventRequestCancelDownload_Parms), Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics
	{
		struct EOSUserContentsBase_eventRequestDownloadFile_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContentsBase_eventRequestDownloadFile_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::NewProp__strFileName_MetaData)) };
	void Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::NewProp__bAutoRemove_SetBit(void* Obj)
	{
		((EOSUserContentsBase_eventRequestDownloadFile_Parms*)Obj)->_bAutoRemove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::NewProp__bAutoRemove = { "_bAutoRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserContentsBase_eventRequestDownloadFile_Parms), &Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::NewProp__bAutoRemove_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserContentsBase_eventRequestDownloadFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserContentsBase_eventRequestDownloadFile_Parms), &Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::NewProp__bAutoRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContentsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContentsBase, nullptr, "RequestDownloadFile", nullptr, nullptr, sizeof(EOSUserContentsBase_eventRequestDownloadFile_Parms), Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContentsBase_RequestFileList_Statics
	{
		struct EOSUserContentsBase_eventRequestFileList_Parms
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
	void Z_Construct_UFunction_UEOSUserContentsBase_RequestFileList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserContentsBase_eventRequestFileList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_RequestFileList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserContentsBase_eventRequestFileList_Parms), &Z_Construct_UFunction_UEOSUserContentsBase_RequestFileList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContentsBase_RequestFileList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_RequestFileList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentsBase_RequestFileList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContentsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContentsBase_RequestFileList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContentsBase, nullptr, "RequestFileList", nullptr, nullptr, sizeof(EOSUserContentsBase_eventRequestFileList_Parms), Z_Construct_UFunction_UEOSUserContentsBase_RequestFileList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_RequestFileList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentsBase_RequestFileList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_RequestFileList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContentsBase_RequestFileList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContentsBase_RequestFileList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContentsBase_SetApiVersion_Statics
	{
		struct EOSUserContentsBase_eventSetApiVersion_Parms
		{
			FEOSUserContentsAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_SetApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContentsBase_eventSetApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSUserContentsAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContentsBase_SetApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_SetApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentsBase_SetApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContentsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContentsBase_SetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContentsBase, nullptr, "SetApiVersion", nullptr, nullptr, sizeof(EOSUserContentsBase_eventSetApiVersion_Parms), Z_Construct_UFunction_UEOSUserContentsBase_SetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_SetApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentsBase_SetApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_SetApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContentsBase_SetApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContentsBase_SetApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContentsBase_SetRequestReadBytes_Statics
	{
		struct EOSUserContentsBase_eventSetRequestReadBytes_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSUserContentsBase_SetRequestReadBytes_Statics::NewProp__sRequestReadBytes = { "_sRequestReadBytes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContentsBase_eventSetRequestReadBytes_Parms, _sRequestReadBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContentsBase_SetRequestReadBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContentsBase_SetRequestReadBytes_Statics::NewProp__sRequestReadBytes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContentsBase_SetRequestReadBytes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContentsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContentsBase_SetRequestReadBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContentsBase, nullptr, "SetRequestReadBytes", nullptr, nullptr, sizeof(EOSUserContentsBase_eventSetRequestReadBytes_Parms), Z_Construct_UFunction_UEOSUserContentsBase_SetRequestReadBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_SetRequestReadBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContentsBase_SetRequestReadBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContentsBase_SetRequestReadBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContentsBase_SetRequestReadBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContentsBase_SetRequestReadBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSUserContentsBase_NoRegister()
	{
		return UEOSUserContentsBase::StaticClass();
	}
	struct Z_Construct_UClass_UEOSUserContentsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserContentsEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_UserContentsEventDispatcher;
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
	UObject* (*const Z_Construct_UClass_UEOSUserContentsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSIDs,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSUserContentsBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSUserContentsBase_ClearDownloadProgress, "ClearDownloadProgress" }, // 2662064675
		{ &Z_Construct_UFunction_UEOSUserContentsBase_GetDownloadProgress, "GetDownloadProgress" }, // 1658783237
		{ &Z_Construct_UFunction_UEOSUserContentsBase_GetFileCount, "GetFileCount" }, // 814548587
		{ &Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaData, "GetFileMetaData" }, // 2956542712
		{ &Z_Construct_UFunction_UEOSUserContentsBase_GetFileMetaDataByIndex, "GetFileMetaDataByIndex" }, // 3988003764
		{ &Z_Construct_UFunction_UEOSUserContentsBase_GetMetadata, "GetMetadata" }, // 1380999557
		{ &Z_Construct_UFunction_UEOSUserContentsBase_RequestCancelDownload, "RequestCancelDownload" }, // 2082196344
		{ &Z_Construct_UFunction_UEOSUserContentsBase_RequestDownloadFile, "RequestDownloadFile" }, // 541041519
		{ &Z_Construct_UFunction_UEOSUserContentsBase_RequestFileList, "RequestFileList" }, // 1420223896
		{ &Z_Construct_UFunction_UEOSUserContentsBase_SetApiVersion, "SetApiVersion" }, // 2678964054
		{ &Z_Construct_UFunction_UEOSUserContentsBase_SetRequestReadBytes, "SetRequestReadBytes" }, // 2900511978
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserContentsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSUserContentsBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSUserContentsBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_UserContentsEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserContentsBase" },
		{ "ModuleRelativePath", "Public/EOSUserContentsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_UserContentsEventDispatcher = { "UserContentsEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserContentsBase, UserContentsEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSUserContentsEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_UserContentsEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_UserContentsEventDispatcher_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_m_cMetaData_Inner = { "m_cMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSUserContentMetaData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_m_cMetaData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserContentsBase" },
		{ "ModuleRelativePath", "Public/EOSUserContentsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_m_cMetaData = { "m_cMetaData", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserContentsBase, m_cMetaData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_m_cMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_m_cMetaData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_m_cReadInfo_ValueProp = { "m_cReadInfo", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEOSUserContentProgress, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_m_cReadInfo_Key_KeyProp = { "m_cReadInfo_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_m_cReadInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserContentsBase" },
		{ "ModuleRelativePath", "Public/EOSUserContentsBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_m_cReadInfo = { "m_cReadInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserContentsBase, m_cReadInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_m_cReadInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_m_cReadInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSUserContentsBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_UserContentsEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_m_cMetaData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_m_cMetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_m_cReadInfo_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_m_cReadInfo_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserContentsBase_Statics::NewProp_m_cReadInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSUserContentsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSUserContentsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSUserContentsBase_Statics::ClassParams = {
		&UEOSUserContentsBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSUserContentsBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserContentsBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSUserContentsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserContentsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSUserContentsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSUserContentsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSUserContentsBase, 2005791559);
	template<> YEOSSDK_API UClass* StaticClass<UEOSUserContentsBase>()
	{
		return UEOSUserContentsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSUserContentsBase(Z_Construct_UClass_UEOSUserContentsBase, &UEOSUserContentsBase::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSUserContentsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSUserContentsBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
