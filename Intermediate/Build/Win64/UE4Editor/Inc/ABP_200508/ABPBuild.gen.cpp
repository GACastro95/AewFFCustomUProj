// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ABPBuild.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABPBuild() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UABPBuild_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UABPBuild();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UABPBuild::execCreateABPBuild)
	{
		P_GET_OBJECT_REF(UABPBuild,Z_Param_Out__pcInst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UABPBuild::CreateABPBuild(Z_Param_Out__pcInst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABPBuild::execGetBuildDate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBuildDate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABPBuild::execGetBuildDate_Numeric)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBuildDate_Numeric();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABPBuild::execGetBuildTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetBuildTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABPBuild::execGetMajorVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMajorVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABPBuild::execGetMinorVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMinorVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABPBuild::execGetSubMinorVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSubMinorVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UABPBuild::execGetVersion)
	{
		P_GET_UBOOL(Z_Param__bGetSubminorVersion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetVersion(Z_Param__bGetSubminorVersion);
		P_NATIVE_END;
	}
	void UABPBuild::StaticRegisterNativesUABPBuild()
	{
		UClass* Class = UABPBuild::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateABPBuild", &UABPBuild::execCreateABPBuild },
			{ "GetBuildDate", &UABPBuild::execGetBuildDate },
			{ "GetBuildDate_Numeric", &UABPBuild::execGetBuildDate_Numeric },
			{ "GetBuildTime", &UABPBuild::execGetBuildTime },
			{ "GetMajorVersion", &UABPBuild::execGetMajorVersion },
			{ "GetMinorVersion", &UABPBuild::execGetMinorVersion },
			{ "GetSubMinorVersion", &UABPBuild::execGetSubMinorVersion },
			{ "GetVersion", &UABPBuild::execGetVersion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UABPBuild_CreateABPBuild_Statics
	{
		struct ABPBuild_eventCreateABPBuild_Parms
		{
			UABPBuild* _pcInst;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UABPBuild_CreateABPBuild_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPBuild_eventCreateABPBuild_Parms, _pcInst), Z_Construct_UClass_UABPBuild_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UABPBuild_CreateABPBuild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ABPBuild_eventCreateABPBuild_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABPBuild_CreateABPBuild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABPBuild_eventCreateABPBuild_Parms), &Z_Construct_UFunction_UABPBuild_CreateABPBuild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABPBuild_CreateABPBuild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPBuild_CreateABPBuild_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPBuild_CreateABPBuild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABPBuild_CreateABPBuild_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABPBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABPBuild_CreateABPBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABPBuild, nullptr, "CreateABPBuild", nullptr, nullptr, sizeof(ABPBuild_eventCreateABPBuild_Parms), Z_Construct_UFunction_UABPBuild_CreateABPBuild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPBuild_CreateABPBuild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABPBuild_CreateABPBuild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPBuild_CreateABPBuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABPBuild_CreateABPBuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABPBuild_CreateABPBuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABPBuild_GetBuildDate_Statics
	{
		struct ABPBuild_eventGetBuildDate_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABPBuild_GetBuildDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPBuild_eventGetBuildDate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABPBuild_GetBuildDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPBuild_GetBuildDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABPBuild_GetBuildDate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABPBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABPBuild_GetBuildDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABPBuild, nullptr, "GetBuildDate", nullptr, nullptr, sizeof(ABPBuild_eventGetBuildDate_Parms), Z_Construct_UFunction_UABPBuild_GetBuildDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPBuild_GetBuildDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABPBuild_GetBuildDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPBuild_GetBuildDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABPBuild_GetBuildDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABPBuild_GetBuildDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABPBuild_GetBuildDate_Numeric_Statics
	{
		struct ABPBuild_eventGetBuildDate_Numeric_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABPBuild_GetBuildDate_Numeric_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPBuild_eventGetBuildDate_Numeric_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABPBuild_GetBuildDate_Numeric_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPBuild_GetBuildDate_Numeric_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABPBuild_GetBuildDate_Numeric_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABPBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABPBuild_GetBuildDate_Numeric_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABPBuild, nullptr, "GetBuildDate_Numeric", nullptr, nullptr, sizeof(ABPBuild_eventGetBuildDate_Numeric_Parms), Z_Construct_UFunction_UABPBuild_GetBuildDate_Numeric_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPBuild_GetBuildDate_Numeric_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABPBuild_GetBuildDate_Numeric_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPBuild_GetBuildDate_Numeric_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABPBuild_GetBuildDate_Numeric()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABPBuild_GetBuildDate_Numeric_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABPBuild_GetBuildTime_Statics
	{
		struct ABPBuild_eventGetBuildTime_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABPBuild_GetBuildTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPBuild_eventGetBuildTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABPBuild_GetBuildTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPBuild_GetBuildTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABPBuild_GetBuildTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABPBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABPBuild_GetBuildTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABPBuild, nullptr, "GetBuildTime", nullptr, nullptr, sizeof(ABPBuild_eventGetBuildTime_Parms), Z_Construct_UFunction_UABPBuild_GetBuildTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPBuild_GetBuildTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABPBuild_GetBuildTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPBuild_GetBuildTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABPBuild_GetBuildTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABPBuild_GetBuildTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABPBuild_GetMajorVersion_Statics
	{
		struct ABPBuild_eventGetMajorVersion_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABPBuild_GetMajorVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPBuild_eventGetMajorVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABPBuild_GetMajorVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPBuild_GetMajorVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABPBuild_GetMajorVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABPBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABPBuild_GetMajorVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABPBuild, nullptr, "GetMajorVersion", nullptr, nullptr, sizeof(ABPBuild_eventGetMajorVersion_Parms), Z_Construct_UFunction_UABPBuild_GetMajorVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPBuild_GetMajorVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABPBuild_GetMajorVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPBuild_GetMajorVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABPBuild_GetMajorVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABPBuild_GetMajorVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABPBuild_GetMinorVersion_Statics
	{
		struct ABPBuild_eventGetMinorVersion_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABPBuild_GetMinorVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPBuild_eventGetMinorVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABPBuild_GetMinorVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPBuild_GetMinorVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABPBuild_GetMinorVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABPBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABPBuild_GetMinorVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABPBuild, nullptr, "GetMinorVersion", nullptr, nullptr, sizeof(ABPBuild_eventGetMinorVersion_Parms), Z_Construct_UFunction_UABPBuild_GetMinorVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPBuild_GetMinorVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABPBuild_GetMinorVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPBuild_GetMinorVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABPBuild_GetMinorVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABPBuild_GetMinorVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABPBuild_GetSubMinorVersion_Statics
	{
		struct ABPBuild_eventGetSubMinorVersion_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UABPBuild_GetSubMinorVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPBuild_eventGetSubMinorVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABPBuild_GetSubMinorVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPBuild_GetSubMinorVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABPBuild_GetSubMinorVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABPBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABPBuild_GetSubMinorVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABPBuild, nullptr, "GetSubMinorVersion", nullptr, nullptr, sizeof(ABPBuild_eventGetSubMinorVersion_Parms), Z_Construct_UFunction_UABPBuild_GetSubMinorVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPBuild_GetSubMinorVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABPBuild_GetSubMinorVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPBuild_GetSubMinorVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABPBuild_GetSubMinorVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABPBuild_GetSubMinorVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UABPBuild_GetVersion_Statics
	{
		struct ABPBuild_eventGetVersion_Parms
		{
			bool _bGetSubminorVersion;
			FString ReturnValue;
		};
		static void NewProp__bGetSubminorVersion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bGetSubminorVersion;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UABPBuild_GetVersion_Statics::NewProp__bGetSubminorVersion_SetBit(void* Obj)
	{
		((ABPBuild_eventGetVersion_Parms*)Obj)->_bGetSubminorVersion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UABPBuild_GetVersion_Statics::NewProp__bGetSubminorVersion = { "_bGetSubminorVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABPBuild_eventGetVersion_Parms), &Z_Construct_UFunction_UABPBuild_GetVersion_Statics::NewProp__bGetSubminorVersion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UABPBuild_GetVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPBuild_eventGetVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UABPBuild_GetVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPBuild_GetVersion_Statics::NewProp__bGetSubminorVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UABPBuild_GetVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UABPBuild_GetVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ABPBuild.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UABPBuild_GetVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UABPBuild, nullptr, "GetVersion", nullptr, nullptr, sizeof(ABPBuild_eventGetVersion_Parms), Z_Construct_UFunction_UABPBuild_GetVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPBuild_GetVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UABPBuild_GetVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UABPBuild_GetVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UABPBuild_GetVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UABPBuild_GetVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UABPBuild_NoRegister()
	{
		return UABPBuild::StaticClass();
	}
	struct Z_Construct_UClass_UABPBuild_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UABPBuild_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UABPBuild_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UABPBuild_CreateABPBuild, "CreateABPBuild" }, // 1614991028
		{ &Z_Construct_UFunction_UABPBuild_GetBuildDate, "GetBuildDate" }, // 506515508
		{ &Z_Construct_UFunction_UABPBuild_GetBuildDate_Numeric, "GetBuildDate_Numeric" }, // 2866925972
		{ &Z_Construct_UFunction_UABPBuild_GetBuildTime, "GetBuildTime" }, // 1988452935
		{ &Z_Construct_UFunction_UABPBuild_GetMajorVersion, "GetMajorVersion" }, // 2746448002
		{ &Z_Construct_UFunction_UABPBuild_GetMinorVersion, "GetMinorVersion" }, // 2664094656
		{ &Z_Construct_UFunction_UABPBuild_GetSubMinorVersion, "GetSubMinorVersion" }, // 742967559
		{ &Z_Construct_UFunction_UABPBuild_GetVersion, "GetVersion" }, // 4056417495
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UABPBuild_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABPBuild.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABPBuild.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UABPBuild_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABPBuild>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UABPBuild_Statics::ClassParams = {
		&UABPBuild::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UABPBuild_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UABPBuild_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UABPBuild()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UABPBuild_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UABPBuild, 844058436);
	template<> ABP_200508_API UClass* StaticClass<UABPBuild>()
	{
		return UABPBuild::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UABPBuild(Z_Construct_UClass_UABPBuild, &UABPBuild::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UABPBuild"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UABPBuild);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
