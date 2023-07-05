// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSUserContents.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSUserContents() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContents_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContents();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentsBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserContentProgress();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentBinary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSUserContents::execClearUploadProgress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearUploadProgress(Z_Param__strFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContents::execGetUploadProgress)
	{
		P_GET_STRUCT_REF(FEOSUserContentProgress,Z_Param_Out__rstProgress);
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUploadProgress(Z_Param_Out__rstProgress,Z_Param__strFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContents::execRequestCancelUpload)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestCancelUpload(Z_Param__strFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContents::execRequestDeleteFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDeleteFile(Z_Param__strFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContents::execRequestDuplicateFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strSrcFileName);
		P_GET_PROPERTY(FStrProperty,Z_Param__strDestFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDuplicateFile(Z_Param__strSrcFileName,Z_Param__strDestFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContents::execRequestUploadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_GET_OBJECT(UEOSUserContentBinary,Z_Param__cBinary);
		P_GET_UBOOL(Z_Param__bAutoRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestUploadFile(Z_Param__strFileName,Z_Param__cBinary,Z_Param__bAutoRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSUserContents::execSetRequestWriteBytes)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sRequestWriteBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRequestWriteBytes(Z_Param__sRequestWriteBytes);
		P_NATIVE_END;
	}
	void UEOSUserContents::StaticRegisterNativesUEOSUserContents()
	{
		UClass* Class = UEOSUserContents::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearUploadProgress", &UEOSUserContents::execClearUploadProgress },
			{ "GetUploadProgress", &UEOSUserContents::execGetUploadProgress },
			{ "RequestCancelUpload", &UEOSUserContents::execRequestCancelUpload },
			{ "RequestDeleteFile", &UEOSUserContents::execRequestDeleteFile },
			{ "RequestDuplicateFile", &UEOSUserContents::execRequestDuplicateFile },
			{ "RequestUploadFile", &UEOSUserContents::execRequestUploadFile },
			{ "SetRequestWriteBytes", &UEOSUserContents::execSetRequestWriteBytes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics
	{
		struct EOSUserContents_eventClearUploadProgress_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContents_eventClearUploadProgress_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics::NewProp__strFileName_MetaData)) };
	void Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserContents_eventClearUploadProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserContents_eventClearUploadProgress_Parms), &Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContents.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContents, nullptr, "ClearUploadProgress", nullptr, nullptr, sizeof(EOSUserContents_eventClearUploadProgress_Parms), Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics
	{
		struct EOSUserContents_eventGetUploadProgress_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::NewProp__rstProgress = { "_rstProgress", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContents_eventGetUploadProgress_Parms, _rstProgress), Z_Construct_UScriptStruct_FEOSUserContentProgress, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContents_eventGetUploadProgress_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::NewProp__strFileName_MetaData)) };
	void Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserContents_eventGetUploadProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserContents_eventGetUploadProgress_Parms), &Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::NewProp__rstProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContents.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContents, nullptr, "GetUploadProgress", nullptr, nullptr, sizeof(EOSUserContents_eventGetUploadProgress_Parms), Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContents_GetUploadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContents_GetUploadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics
	{
		struct EOSUserContents_eventRequestCancelUpload_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContents_eventRequestCancelUpload_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics::NewProp__strFileName_MetaData)) };
	void Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserContents_eventRequestCancelUpload_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserContents_eventRequestCancelUpload_Parms), &Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContents.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContents, nullptr, "RequestCancelUpload", nullptr, nullptr, sizeof(EOSUserContents_eventRequestCancelUpload_Parms), Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics
	{
		struct EOSUserContents_eventRequestDeleteFile_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContents_eventRequestDeleteFile_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics::NewProp__strFileName_MetaData)) };
	void Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserContents_eventRequestDeleteFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserContents_eventRequestDeleteFile_Parms), &Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContents.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContents, nullptr, "RequestDeleteFile", nullptr, nullptr, sizeof(EOSUserContents_eventRequestDeleteFile_Parms), Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics
	{
		struct EOSUserContents_eventRequestDuplicateFile_Parms
		{
			FString _strSrcFileName;
			FString _strDestFileName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSrcFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSrcFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strDestFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strDestFileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::NewProp__strSrcFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::NewProp__strSrcFileName = { "_strSrcFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContents_eventRequestDuplicateFile_Parms, _strSrcFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::NewProp__strSrcFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::NewProp__strSrcFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::NewProp__strDestFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::NewProp__strDestFileName = { "_strDestFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContents_eventRequestDuplicateFile_Parms, _strDestFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::NewProp__strDestFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::NewProp__strDestFileName_MetaData)) };
	void Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserContents_eventRequestDuplicateFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserContents_eventRequestDuplicateFile_Parms), &Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::NewProp__strSrcFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::NewProp__strDestFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContents.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContents, nullptr, "RequestDuplicateFile", nullptr, nullptr, sizeof(EOSUserContents_eventRequestDuplicateFile_Parms), Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics
	{
		struct EOSUserContents_eventRequestUploadFile_Parms
		{
			FString _strFileName;
			UEOSUserContentBinary* _cBinary;
			bool _bAutoRemove;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cBinary;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContents_eventRequestUploadFile_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::NewProp__strFileName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::NewProp__cBinary = { "_cBinary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContents_eventRequestUploadFile_Parms, _cBinary), Z_Construct_UClass_UEOSUserContentBinary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::NewProp__bAutoRemove_SetBit(void* Obj)
	{
		((EOSUserContents_eventRequestUploadFile_Parms*)Obj)->_bAutoRemove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::NewProp__bAutoRemove = { "_bAutoRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserContents_eventRequestUploadFile_Parms), &Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::NewProp__bAutoRemove_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSUserContents_eventRequestUploadFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSUserContents_eventRequestUploadFile_Parms), &Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::NewProp__cBinary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::NewProp__bAutoRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContents.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContents, nullptr, "RequestUploadFile", nullptr, nullptr, sizeof(EOSUserContents_eventRequestUploadFile_Parms), Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContents_RequestUploadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContents_RequestUploadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSUserContents_SetRequestWriteBytes_Statics
	{
		struct EOSUserContents_eventSetRequestWriteBytes_Parms
		{
			int32 _sRequestWriteBytes;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sRequestWriteBytes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSUserContents_SetRequestWriteBytes_Statics::NewProp__sRequestWriteBytes = { "_sRequestWriteBytes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSUserContents_eventSetRequestWriteBytes_Parms, _sRequestWriteBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSUserContents_SetRequestWriteBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSUserContents_SetRequestWriteBytes_Statics::NewProp__sRequestWriteBytes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSUserContents_SetRequestWriteBytes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSUserContents.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSUserContents_SetRequestWriteBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSUserContents, nullptr, "SetRequestWriteBytes", nullptr, nullptr, sizeof(EOSUserContents_eventSetRequestWriteBytes_Parms), Z_Construct_UFunction_UEOSUserContents_SetRequestWriteBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_SetRequestWriteBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSUserContents_SetRequestWriteBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSUserContents_SetRequestWriteBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSUserContents_SetRequestWriteBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSUserContents_SetRequestWriteBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSUserContents_NoRegister()
	{
		return UEOSUserContents::StaticClass();
	}
	struct Z_Construct_UClass_UEOSUserContents_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_cWriteInfo_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cWriteInfo_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cWriteInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cWriteInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSUserContents_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSUserContentsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSUserContents_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSUserContents_ClearUploadProgress, "ClearUploadProgress" }, // 381356877
		{ &Z_Construct_UFunction_UEOSUserContents_GetUploadProgress, "GetUploadProgress" }, // 3681056244
		{ &Z_Construct_UFunction_UEOSUserContents_RequestCancelUpload, "RequestCancelUpload" }, // 1381457998
		{ &Z_Construct_UFunction_UEOSUserContents_RequestDeleteFile, "RequestDeleteFile" }, // 2754218404
		{ &Z_Construct_UFunction_UEOSUserContents_RequestDuplicateFile, "RequestDuplicateFile" }, // 1028614348
		{ &Z_Construct_UFunction_UEOSUserContents_RequestUploadFile, "RequestUploadFile" }, // 1499152932
		{ &Z_Construct_UFunction_UEOSUserContents_SetRequestWriteBytes, "SetRequestWriteBytes" }, // 3113497696
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserContents_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSUserContents.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSUserContents.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEOSUserContents_Statics::NewProp_m_cWriteInfo_ValueProp = { "m_cWriteInfo", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEOSUserContentProgress, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSUserContents_Statics::NewProp_m_cWriteInfo_Key_KeyProp = { "m_cWriteInfo_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSUserContents_Statics::NewProp_m_cWriteInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSUserContents" },
		{ "ModuleRelativePath", "Public/EOSUserContents.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSUserContents_Statics::NewProp_m_cWriteInfo = { "m_cWriteInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSUserContents, m_cWriteInfo), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSUserContents_Statics::NewProp_m_cWriteInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserContents_Statics::NewProp_m_cWriteInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSUserContents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserContents_Statics::NewProp_m_cWriteInfo_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserContents_Statics::NewProp_m_cWriteInfo_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSUserContents_Statics::NewProp_m_cWriteInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSUserContents_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSUserContents>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSUserContents_Statics::ClassParams = {
		&UEOSUserContents::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSUserContents_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserContents_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSUserContents_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSUserContents_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSUserContents()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSUserContents_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSUserContents, 1759180936);
	template<> YEOSSDK_API UClass* StaticClass<UEOSUserContents>()
	{
		return UEOSUserContents::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSUserContents(Z_Construct_UClass_UEOSUserContents, &UEOSUserContents::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSUserContents"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSUserContents);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
