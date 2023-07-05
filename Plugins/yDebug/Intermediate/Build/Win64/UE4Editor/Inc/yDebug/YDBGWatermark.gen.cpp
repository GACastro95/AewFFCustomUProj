// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YDBGWatermark.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDBGWatermark() {}
// Cross Module References
	YDEBUG_API UClass* Z_Construct_UClass_UYDBGWatermark_NoRegister();
	YDEBUG_API UClass* Z_Construct_UClass_UYDBGWatermark();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EYDBGDeviceType();
// End Cross Module References
	DEFINE_FUNCTION(UYDBGWatermark::execCreateYDBGWatermark)
	{
		P_GET_OBJECT_REF(UYDBGWatermark,Z_Param_Out__pcInst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDBGWatermark::CreateYDBGWatermark(Z_Param_Out__pcInst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGWatermark::execGetChangeListNo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetChangeListNo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGWatermark::execGetCLClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCLClient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGWatermark::execGetCLDate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCLDate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGWatermark::execGetCLUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCLUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGWatermark::execGetComputerName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__rstrName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDBGWatermark::GetComputerName(Z_Param_Out__rstrName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGWatermark::execGetDeviceType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EYDBGDeviceType*)Z_Param__Result=P_THIS->GetDeviceType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGWatermark::execGetUserName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__rstrName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDBGWatermark::GetUserName(Z_Param_Out__rstrName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGWatermark::execGetVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGWatermark::execSetup)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strChangelistFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Setup(Z_Param__strChangelistFileName);
		P_NATIVE_END;
	}
	void UYDBGWatermark::StaticRegisterNativesUYDBGWatermark()
	{
		UClass* Class = UYDBGWatermark::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateYDBGWatermark", &UYDBGWatermark::execCreateYDBGWatermark },
			{ "GetChangeListNo", &UYDBGWatermark::execGetChangeListNo },
			{ "GetCLClient", &UYDBGWatermark::execGetCLClient },
			{ "GetCLDate", &UYDBGWatermark::execGetCLDate },
			{ "GetCLUser", &UYDBGWatermark::execGetCLUser },
			{ "GetComputerName", &UYDBGWatermark::execGetComputerName },
			{ "GetDeviceType", &UYDBGWatermark::execGetDeviceType },
			{ "GetUserName", &UYDBGWatermark::execGetUserName },
			{ "GetVersion", &UYDBGWatermark::execGetVersion },
			{ "Setup", &UYDBGWatermark::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYDBGWatermark_CreateYDBGWatermark_Statics
	{
		struct YDBGWatermark_eventCreateYDBGWatermark_Parms
		{
			UYDBGWatermark* _pcInst;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDBGWatermark_CreateYDBGWatermark_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGWatermark_eventCreateYDBGWatermark_Parms, _pcInst), Z_Construct_UClass_UYDBGWatermark_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYDBGWatermark_CreateYDBGWatermark_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGWatermark_eventCreateYDBGWatermark_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGWatermark_CreateYDBGWatermark_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGWatermark_eventCreateYDBGWatermark_Parms), &Z_Construct_UFunction_UYDBGWatermark_CreateYDBGWatermark_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGWatermark_CreateYDBGWatermark_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGWatermark_CreateYDBGWatermark_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGWatermark_CreateYDBGWatermark_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGWatermark_CreateYDBGWatermark_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGWatermark.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGWatermark_CreateYDBGWatermark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGWatermark, nullptr, "CreateYDBGWatermark", nullptr, nullptr, sizeof(YDBGWatermark_eventCreateYDBGWatermark_Parms), Z_Construct_UFunction_UYDBGWatermark_CreateYDBGWatermark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_CreateYDBGWatermark_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGWatermark_CreateYDBGWatermark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_CreateYDBGWatermark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGWatermark_CreateYDBGWatermark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGWatermark_CreateYDBGWatermark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGWatermark_GetChangeListNo_Statics
	{
		struct YDBGWatermark_eventGetChangeListNo_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYDBGWatermark_GetChangeListNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGWatermark_eventGetChangeListNo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGWatermark_GetChangeListNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGWatermark_GetChangeListNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGWatermark_GetChangeListNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGWatermark.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGWatermark_GetChangeListNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGWatermark, nullptr, "GetChangeListNo", nullptr, nullptr, sizeof(YDBGWatermark_eventGetChangeListNo_Parms), Z_Construct_UFunction_UYDBGWatermark_GetChangeListNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_GetChangeListNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGWatermark_GetChangeListNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_GetChangeListNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGWatermark_GetChangeListNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGWatermark_GetChangeListNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGWatermark_GetCLClient_Statics
	{
		struct YDBGWatermark_eventGetCLClient_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGWatermark_GetCLClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGWatermark_eventGetCLClient_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGWatermark_GetCLClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGWatermark_GetCLClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGWatermark_GetCLClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGWatermark.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGWatermark_GetCLClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGWatermark, nullptr, "GetCLClient", nullptr, nullptr, sizeof(YDBGWatermark_eventGetCLClient_Parms), Z_Construct_UFunction_UYDBGWatermark_GetCLClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_GetCLClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGWatermark_GetCLClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_GetCLClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGWatermark_GetCLClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGWatermark_GetCLClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGWatermark_GetCLDate_Statics
	{
		struct YDBGWatermark_eventGetCLDate_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGWatermark_GetCLDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGWatermark_eventGetCLDate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGWatermark_GetCLDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGWatermark_GetCLDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGWatermark_GetCLDate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGWatermark.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGWatermark_GetCLDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGWatermark, nullptr, "GetCLDate", nullptr, nullptr, sizeof(YDBGWatermark_eventGetCLDate_Parms), Z_Construct_UFunction_UYDBGWatermark_GetCLDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_GetCLDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGWatermark_GetCLDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_GetCLDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGWatermark_GetCLDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGWatermark_GetCLDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGWatermark_GetCLUser_Statics
	{
		struct YDBGWatermark_eventGetCLUser_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGWatermark_GetCLUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGWatermark_eventGetCLUser_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGWatermark_GetCLUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGWatermark_GetCLUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGWatermark_GetCLUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGWatermark.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGWatermark_GetCLUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGWatermark, nullptr, "GetCLUser", nullptr, nullptr, sizeof(YDBGWatermark_eventGetCLUser_Parms), Z_Construct_UFunction_UYDBGWatermark_GetCLUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_GetCLUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGWatermark_GetCLUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_GetCLUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGWatermark_GetCLUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGWatermark_GetCLUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGWatermark_GetComputerName_Statics
	{
		struct YDBGWatermark_eventGetComputerName_Parms
		{
			FString _rstrName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__rstrName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGWatermark_GetComputerName_Statics::NewProp__rstrName = { "_rstrName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGWatermark_eventGetComputerName_Parms, _rstrName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYDBGWatermark_GetComputerName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGWatermark_eventGetComputerName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGWatermark_GetComputerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGWatermark_eventGetComputerName_Parms), &Z_Construct_UFunction_UYDBGWatermark_GetComputerName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGWatermark_GetComputerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGWatermark_GetComputerName_Statics::NewProp__rstrName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGWatermark_GetComputerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGWatermark_GetComputerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGWatermark.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGWatermark_GetComputerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGWatermark, nullptr, "GetComputerName", nullptr, nullptr, sizeof(YDBGWatermark_eventGetComputerName_Parms), Z_Construct_UFunction_UYDBGWatermark_GetComputerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_GetComputerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGWatermark_GetComputerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_GetComputerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGWatermark_GetComputerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGWatermark_GetComputerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGWatermark_GetDeviceType_Statics
	{
		struct YDBGWatermark_eventGetDeviceType_Parms
		{
			EYDBGDeviceType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYDBGWatermark_GetDeviceType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYDBGWatermark_GetDeviceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGWatermark_eventGetDeviceType_Parms, ReturnValue), Z_Construct_UEnum_yDebug_EYDBGDeviceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGWatermark_GetDeviceType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGWatermark_GetDeviceType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGWatermark_GetDeviceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGWatermark_GetDeviceType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGWatermark.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGWatermark_GetDeviceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGWatermark, nullptr, "GetDeviceType", nullptr, nullptr, sizeof(YDBGWatermark_eventGetDeviceType_Parms), Z_Construct_UFunction_UYDBGWatermark_GetDeviceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_GetDeviceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGWatermark_GetDeviceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_GetDeviceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGWatermark_GetDeviceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGWatermark_GetDeviceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGWatermark_GetUserName_Statics
	{
		struct YDBGWatermark_eventGetUserName_Parms
		{
			FString _rstrName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__rstrName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGWatermark_GetUserName_Statics::NewProp__rstrName = { "_rstrName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGWatermark_eventGetUserName_Parms, _rstrName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYDBGWatermark_GetUserName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGWatermark_eventGetUserName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGWatermark_GetUserName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGWatermark_eventGetUserName_Parms), &Z_Construct_UFunction_UYDBGWatermark_GetUserName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGWatermark_GetUserName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGWatermark_GetUserName_Statics::NewProp__rstrName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGWatermark_GetUserName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGWatermark_GetUserName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGWatermark.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGWatermark_GetUserName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGWatermark, nullptr, "GetUserName", nullptr, nullptr, sizeof(YDBGWatermark_eventGetUserName_Parms), Z_Construct_UFunction_UYDBGWatermark_GetUserName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_GetUserName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGWatermark_GetUserName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_GetUserName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGWatermark_GetUserName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGWatermark_GetUserName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGWatermark_GetVersion_Statics
	{
		struct YDBGWatermark_eventGetVersion_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGWatermark_GetVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGWatermark_eventGetVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGWatermark_GetVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGWatermark_GetVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGWatermark_GetVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGWatermark.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGWatermark_GetVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGWatermark, nullptr, "GetVersion", nullptr, nullptr, sizeof(YDBGWatermark_eventGetVersion_Parms), Z_Construct_UFunction_UYDBGWatermark_GetVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_GetVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGWatermark_GetVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_GetVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGWatermark_GetVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGWatermark_GetVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGWatermark_Setup_Statics
	{
		struct YDBGWatermark_eventSetup_Parms
		{
			FString _strChangelistFileName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strChangelistFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strChangelistFileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGWatermark_Setup_Statics::NewProp__strChangelistFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGWatermark_Setup_Statics::NewProp__strChangelistFileName = { "_strChangelistFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGWatermark_eventSetup_Parms, _strChangelistFileName), METADATA_PARAMS(Z_Construct_UFunction_UYDBGWatermark_Setup_Statics::NewProp__strChangelistFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_Setup_Statics::NewProp__strChangelistFileName_MetaData)) };
	void Z_Construct_UFunction_UYDBGWatermark_Setup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGWatermark_eventSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGWatermark_Setup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGWatermark_eventSetup_Parms), &Z_Construct_UFunction_UYDBGWatermark_Setup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGWatermark_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGWatermark_Setup_Statics::NewProp__strChangelistFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGWatermark_Setup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGWatermark_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGWatermark.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGWatermark_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGWatermark, nullptr, "Setup", nullptr, nullptr, sizeof(YDBGWatermark_eventSetup_Parms), Z_Construct_UFunction_UYDBGWatermark_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGWatermark_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGWatermark_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGWatermark_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGWatermark_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYDBGWatermark_NoRegister()
	{
		return UYDBGWatermark::StaticClass();
	}
	struct Z_Construct_UClass_UYDBGWatermark_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYDBGWatermark_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYDBGWatermark_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYDBGWatermark_CreateYDBGWatermark, "CreateYDBGWatermark" }, // 466451775
		{ &Z_Construct_UFunction_UYDBGWatermark_GetChangeListNo, "GetChangeListNo" }, // 3388764968
		{ &Z_Construct_UFunction_UYDBGWatermark_GetCLClient, "GetCLClient" }, // 669447537
		{ &Z_Construct_UFunction_UYDBGWatermark_GetCLDate, "GetCLDate" }, // 220264396
		{ &Z_Construct_UFunction_UYDBGWatermark_GetCLUser, "GetCLUser" }, // 1237518079
		{ &Z_Construct_UFunction_UYDBGWatermark_GetComputerName, "GetComputerName" }, // 1152416452
		{ &Z_Construct_UFunction_UYDBGWatermark_GetDeviceType, "GetDeviceType" }, // 644511813
		{ &Z_Construct_UFunction_UYDBGWatermark_GetUserName, "GetUserName" }, // 1600468652
		{ &Z_Construct_UFunction_UYDBGWatermark_GetVersion, "GetVersion" }, // 15869328
		{ &Z_Construct_UFunction_UYDBGWatermark_Setup, "Setup" }, // 544568227
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDBGWatermark_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YDBGWatermark.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YDBGWatermark.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYDBGWatermark_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYDBGWatermark>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYDBGWatermark_Statics::ClassParams = {
		&UYDBGWatermark::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYDBGWatermark_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYDBGWatermark_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYDBGWatermark()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYDBGWatermark_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYDBGWatermark, 2570203303);
	template<> YDEBUG_API UClass* StaticClass<UYDBGWatermark>()
	{
		return UYDBGWatermark::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYDBGWatermark(Z_Construct_UClass_UYDBGWatermark, &UYDBGWatermark::StaticClass, TEXT("/Script/yDebug"), TEXT("UYDBGWatermark"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYDBGWatermark);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
