// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSTitleStorageBinary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSTitleStorageBinary() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSTitleStorageBinary_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSTitleStorageBinary();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSFileOnMemory();
// End Cross Module References
	DEFINE_FUNCTION(UEOSTitleStorageBinary::execConvertFileOnMemoryToString)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__rText);
		P_GET_STRUCT_REF(FEOSFileOnMemory,Z_Param_Out__cFileOnMemory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertFileOnMemoryToString(Z_Param_Out__rText,Z_Param_Out__cFileOnMemory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSTitleStorageBinary::execGetAsText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAsText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSTitleStorageBinary::execGetOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSTitleStorageBinary::execGetTotalSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSTitleStorageBinary::execIsDeleteInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDeleteInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSTitleStorageBinary::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSTitleStorageBinary::execUnzip)
	{
		P_GET_TARRAY_REF(FEOSFileOnMemory,Z_Param_Out__cFiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Unzip(Z_Param_Out__cFiles);
		P_NATIVE_END;
	}
	void UEOSTitleStorageBinary::StaticRegisterNativesUEOSTitleStorageBinary()
	{
		UClass* Class = UEOSTitleStorageBinary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertFileOnMemoryToString", &UEOSTitleStorageBinary::execConvertFileOnMemoryToString },
			{ "GetAsText", &UEOSTitleStorageBinary::execGetAsText },
			{ "GetOffset", &UEOSTitleStorageBinary::execGetOffset },
			{ "GetTotalSize", &UEOSTitleStorageBinary::execGetTotalSize },
			{ "IsDeleteInstance", &UEOSTitleStorageBinary::execIsDeleteInstance },
			{ "IsValid", &UEOSTitleStorageBinary::execIsValid },
			{ "Unzip", &UEOSTitleStorageBinary::execUnzip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics
	{
		struct EOSTitleStorageBinary_eventConvertFileOnMemoryToString_Parms
		{
			FString _rText;
			FEOSFileOnMemory _cFileOnMemory;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__rText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cFileOnMemory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cFileOnMemory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::NewProp__rText = { "_rText", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBinary_eventConvertFileOnMemoryToString_Parms, _rText), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::NewProp__cFileOnMemory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::NewProp__cFileOnMemory = { "_cFileOnMemory", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBinary_eventConvertFileOnMemoryToString_Parms, _cFileOnMemory), Z_Construct_UScriptStruct_FEOSFileOnMemory, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::NewProp__cFileOnMemory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::NewProp__cFileOnMemory_MetaData)) };
	void Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSTitleStorageBinary_eventConvertFileOnMemoryToString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSTitleStorageBinary_eventConvertFileOnMemoryToString_Parms), &Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::NewProp__rText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::NewProp__cFileOnMemory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBinary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBinary, nullptr, "ConvertFileOnMemoryToString", nullptr, nullptr, sizeof(EOSTitleStorageBinary_eventConvertFileOnMemoryToString_Parms), Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBinary_GetAsText_Statics
	{
		struct EOSTitleStorageBinary_eventGetAsText_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSTitleStorageBinary_GetAsText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBinary_eventGetAsText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBinary_GetAsText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBinary_GetAsText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBinary_GetAsText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBinary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBinary_GetAsText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBinary, nullptr, "GetAsText", nullptr, nullptr, sizeof(EOSTitleStorageBinary_eventGetAsText_Parms), Z_Construct_UFunction_UEOSTitleStorageBinary_GetAsText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBinary_GetAsText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBinary_GetAsText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBinary_GetAsText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBinary_GetAsText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBinary_GetAsText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBinary_GetOffset_Statics
	{
		struct EOSTitleStorageBinary_eventGetOffset_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSTitleStorageBinary_GetOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBinary_eventGetOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBinary_GetOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBinary_GetOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBinary_GetOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBinary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBinary_GetOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBinary, nullptr, "GetOffset", nullptr, nullptr, sizeof(EOSTitleStorageBinary_eventGetOffset_Parms), Z_Construct_UFunction_UEOSTitleStorageBinary_GetOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBinary_GetOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBinary_GetOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBinary_GetOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBinary_GetOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBinary_GetOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBinary_GetTotalSize_Statics
	{
		struct EOSTitleStorageBinary_eventGetTotalSize_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSTitleStorageBinary_GetTotalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBinary_eventGetTotalSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBinary_GetTotalSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBinary_GetTotalSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBinary_GetTotalSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBinary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBinary_GetTotalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBinary, nullptr, "GetTotalSize", nullptr, nullptr, sizeof(EOSTitleStorageBinary_eventGetTotalSize_Parms), Z_Construct_UFunction_UEOSTitleStorageBinary_GetTotalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBinary_GetTotalSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBinary_GetTotalSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBinary_GetTotalSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBinary_GetTotalSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBinary_GetTotalSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBinary_IsDeleteInstance_Statics
	{
		struct EOSTitleStorageBinary_eventIsDeleteInstance_Parms
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
	void Z_Construct_UFunction_UEOSTitleStorageBinary_IsDeleteInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSTitleStorageBinary_eventIsDeleteInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSTitleStorageBinary_IsDeleteInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSTitleStorageBinary_eventIsDeleteInstance_Parms), &Z_Construct_UFunction_UEOSTitleStorageBinary_IsDeleteInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBinary_IsDeleteInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBinary_IsDeleteInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBinary_IsDeleteInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBinary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBinary_IsDeleteInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBinary, nullptr, "IsDeleteInstance", nullptr, nullptr, sizeof(EOSTitleStorageBinary_eventIsDeleteInstance_Parms), Z_Construct_UFunction_UEOSTitleStorageBinary_IsDeleteInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBinary_IsDeleteInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBinary_IsDeleteInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBinary_IsDeleteInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBinary_IsDeleteInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBinary_IsDeleteInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBinary_IsValid_Statics
	{
		struct EOSTitleStorageBinary_eventIsValid_Parms
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
	void Z_Construct_UFunction_UEOSTitleStorageBinary_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSTitleStorageBinary_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSTitleStorageBinary_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSTitleStorageBinary_eventIsValid_Parms), &Z_Construct_UFunction_UEOSTitleStorageBinary_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBinary_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBinary_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBinary_IsValid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBinary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBinary_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBinary, nullptr, "IsValid", nullptr, nullptr, sizeof(EOSTitleStorageBinary_eventIsValid_Parms), Z_Construct_UFunction_UEOSTitleStorageBinary_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBinary_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBinary_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBinary_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBinary_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBinary_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip_Statics
	{
		struct EOSTitleStorageBinary_eventUnzip_Parms
		{
			TArray<FEOSFileOnMemory> _cFiles;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cFiles_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cFiles;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip_Statics::NewProp__cFiles_Inner = { "_cFiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSFileOnMemory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip_Statics::NewProp__cFiles = { "_cFiles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSTitleStorageBinary_eventUnzip_Parms, _cFiles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSTitleStorageBinary_eventUnzip_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSTitleStorageBinary_eventUnzip_Parms), &Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip_Statics::NewProp__cFiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip_Statics::NewProp__cFiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSTitleStorageBinary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSTitleStorageBinary, nullptr, "Unzip", nullptr, nullptr, sizeof(EOSTitleStorageBinary_eventUnzip_Parms), Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSTitleStorageBinary_NoRegister()
	{
		return UEOSTitleStorageBinary::StaticClass();
	}
	struct Z_Construct_UClass_UEOSTitleStorageBinary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSTitleStorageBinary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSTitleStorageBinary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSTitleStorageBinary_ConvertFileOnMemoryToString, "ConvertFileOnMemoryToString" }, // 2920111374
		{ &Z_Construct_UFunction_UEOSTitleStorageBinary_GetAsText, "GetAsText" }, // 197064798
		{ &Z_Construct_UFunction_UEOSTitleStorageBinary_GetOffset, "GetOffset" }, // 3139148967
		{ &Z_Construct_UFunction_UEOSTitleStorageBinary_GetTotalSize, "GetTotalSize" }, // 4185112029
		{ &Z_Construct_UFunction_UEOSTitleStorageBinary_IsDeleteInstance, "IsDeleteInstance" }, // 4038398807
		{ &Z_Construct_UFunction_UEOSTitleStorageBinary_IsValid, "IsValid" }, // 3728705783
		{ &Z_Construct_UFunction_UEOSTitleStorageBinary_Unzip, "Unzip" }, // 1957426320
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSTitleStorageBinary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSTitleStorageBinary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSTitleStorageBinary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSTitleStorageBinary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSTitleStorageBinary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSTitleStorageBinary_Statics::ClassParams = {
		&UEOSTitleStorageBinary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSTitleStorageBinary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSTitleStorageBinary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSTitleStorageBinary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSTitleStorageBinary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSTitleStorageBinary, 402053578);
	template<> YEOSSDK_API UClass* StaticClass<UEOSTitleStorageBinary>()
	{
		return UEOSTitleStorageBinary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSTitleStorageBinary(Z_Construct_UClass_UEOSTitleStorageBinary, &UEOSTitleStorageBinary::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSTitleStorageBinary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSTitleStorageBinary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
