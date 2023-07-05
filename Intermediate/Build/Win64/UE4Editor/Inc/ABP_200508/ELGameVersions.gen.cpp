// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGameVersions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGameVersions() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELGameVersions_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGameVersions();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELGameVersions::execDebug_SetOverrideOnlineVersionName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELGameVersions::Debug_SetOverrideOnlineVersionName(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameVersions::execDebug_SetOverrideTitleVersionName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELGameVersions::Debug_SetOverrideTitleVersionName(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameVersions::execGetBuildVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELGameVersions::GetBuildVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameVersions::execGetBuildVersionName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELGameVersions::GetBuildVersionName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameVersions::execGetOnlineVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELGameVersions::GetOnlineVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameVersions::execGetOnlineVersionName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELGameVersions::GetOnlineVersionName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameVersions::execGetSSModeVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELGameVersions::GetSSModeVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameVersions::execGetSSModeVersionName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELGameVersions::GetSSModeVersionName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameVersions::execGetTitleVersionName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELGameVersions::GetTitleVersionName();
		P_NATIVE_END;
	}
	void UELGameVersions::StaticRegisterNativesUELGameVersions()
	{
		UClass* Class = UELGameVersions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Debug_SetOverrideOnlineVersionName", &UELGameVersions::execDebug_SetOverrideOnlineVersionName },
			{ "Debug_SetOverrideTitleVersionName", &UELGameVersions::execDebug_SetOverrideTitleVersionName },
			{ "GetBuildVersion", &UELGameVersions::execGetBuildVersion },
			{ "GetBuildVersionName", &UELGameVersions::execGetBuildVersionName },
			{ "GetOnlineVersion", &UELGameVersions::execGetOnlineVersion },
			{ "GetOnlineVersionName", &UELGameVersions::execGetOnlineVersionName },
			{ "GetSSModeVersion", &UELGameVersions::execGetSSModeVersion },
			{ "GetSSModeVersionName", &UELGameVersions::execGetSSModeVersionName },
			{ "GetTitleVersionName", &UELGameVersions::execGetTitleVersionName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideOnlineVersionName_Statics
	{
		struct ELGameVersions_eventDebug_SetOverrideOnlineVersionName_Parms
		{
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideOnlineVersionName_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideOnlineVersionName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameVersions_eventDebug_SetOverrideOnlineVersionName_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideOnlineVersionName_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideOnlineVersionName_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideOnlineVersionName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideOnlineVersionName_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideOnlineVersionName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameVersions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideOnlineVersionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameVersions, nullptr, "Debug_SetOverrideOnlineVersionName", nullptr, nullptr, sizeof(ELGameVersions_eventDebug_SetOverrideOnlineVersionName_Parms), Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideOnlineVersionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideOnlineVersionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideOnlineVersionName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideOnlineVersionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideOnlineVersionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideOnlineVersionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideTitleVersionName_Statics
	{
		struct ELGameVersions_eventDebug_SetOverrideTitleVersionName_Parms
		{
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideTitleVersionName_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideTitleVersionName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameVersions_eventDebug_SetOverrideTitleVersionName_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideTitleVersionName_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideTitleVersionName_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideTitleVersionName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideTitleVersionName_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideTitleVersionName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameVersions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideTitleVersionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameVersions, nullptr, "Debug_SetOverrideTitleVersionName", nullptr, nullptr, sizeof(ELGameVersions_eventDebug_SetOverrideTitleVersionName_Parms), Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideTitleVersionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideTitleVersionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideTitleVersionName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideTitleVersionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideTitleVersionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideTitleVersionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameVersions_GetBuildVersion_Statics
	{
		struct ELGameVersions_eventGetBuildVersion_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELGameVersions_GetBuildVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameVersions_eventGetBuildVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameVersions_GetBuildVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameVersions_GetBuildVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameVersions_GetBuildVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameVersions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameVersions_GetBuildVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameVersions, nullptr, "GetBuildVersion", nullptr, nullptr, sizeof(ELGameVersions_eventGetBuildVersion_Parms), Z_Construct_UFunction_UELGameVersions_GetBuildVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_GetBuildVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameVersions_GetBuildVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_GetBuildVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameVersions_GetBuildVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameVersions_GetBuildVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameVersions_GetBuildVersionName_Statics
	{
		struct ELGameVersions_eventGetBuildVersionName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameVersions_GetBuildVersionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameVersions_eventGetBuildVersionName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameVersions_GetBuildVersionName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameVersions_GetBuildVersionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameVersions_GetBuildVersionName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameVersions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameVersions_GetBuildVersionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameVersions, nullptr, "GetBuildVersionName", nullptr, nullptr, sizeof(ELGameVersions_eventGetBuildVersionName_Parms), Z_Construct_UFunction_UELGameVersions_GetBuildVersionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_GetBuildVersionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameVersions_GetBuildVersionName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_GetBuildVersionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameVersions_GetBuildVersionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameVersions_GetBuildVersionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameVersions_GetOnlineVersion_Statics
	{
		struct ELGameVersions_eventGetOnlineVersion_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELGameVersions_GetOnlineVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameVersions_eventGetOnlineVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameVersions_GetOnlineVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameVersions_GetOnlineVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameVersions_GetOnlineVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameVersions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameVersions_GetOnlineVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameVersions, nullptr, "GetOnlineVersion", nullptr, nullptr, sizeof(ELGameVersions_eventGetOnlineVersion_Parms), Z_Construct_UFunction_UELGameVersions_GetOnlineVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_GetOnlineVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameVersions_GetOnlineVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_GetOnlineVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameVersions_GetOnlineVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameVersions_GetOnlineVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameVersions_GetOnlineVersionName_Statics
	{
		struct ELGameVersions_eventGetOnlineVersionName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameVersions_GetOnlineVersionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameVersions_eventGetOnlineVersionName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameVersions_GetOnlineVersionName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameVersions_GetOnlineVersionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameVersions_GetOnlineVersionName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameVersions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameVersions_GetOnlineVersionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameVersions, nullptr, "GetOnlineVersionName", nullptr, nullptr, sizeof(ELGameVersions_eventGetOnlineVersionName_Parms), Z_Construct_UFunction_UELGameVersions_GetOnlineVersionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_GetOnlineVersionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameVersions_GetOnlineVersionName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_GetOnlineVersionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameVersions_GetOnlineVersionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameVersions_GetOnlineVersionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameVersions_GetSSModeVersion_Statics
	{
		struct ELGameVersions_eventGetSSModeVersion_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELGameVersions_GetSSModeVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameVersions_eventGetSSModeVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameVersions_GetSSModeVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameVersions_GetSSModeVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameVersions_GetSSModeVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameVersions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameVersions_GetSSModeVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameVersions, nullptr, "GetSSModeVersion", nullptr, nullptr, sizeof(ELGameVersions_eventGetSSModeVersion_Parms), Z_Construct_UFunction_UELGameVersions_GetSSModeVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_GetSSModeVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameVersions_GetSSModeVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_GetSSModeVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameVersions_GetSSModeVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameVersions_GetSSModeVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameVersions_GetSSModeVersionName_Statics
	{
		struct ELGameVersions_eventGetSSModeVersionName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameVersions_GetSSModeVersionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameVersions_eventGetSSModeVersionName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameVersions_GetSSModeVersionName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameVersions_GetSSModeVersionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameVersions_GetSSModeVersionName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameVersions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameVersions_GetSSModeVersionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameVersions, nullptr, "GetSSModeVersionName", nullptr, nullptr, sizeof(ELGameVersions_eventGetSSModeVersionName_Parms), Z_Construct_UFunction_UELGameVersions_GetSSModeVersionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_GetSSModeVersionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameVersions_GetSSModeVersionName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_GetSSModeVersionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameVersions_GetSSModeVersionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameVersions_GetSSModeVersionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameVersions_GetTitleVersionName_Statics
	{
		struct ELGameVersions_eventGetTitleVersionName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameVersions_GetTitleVersionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameVersions_eventGetTitleVersionName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameVersions_GetTitleVersionName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameVersions_GetTitleVersionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameVersions_GetTitleVersionName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameVersions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameVersions_GetTitleVersionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameVersions, nullptr, "GetTitleVersionName", nullptr, nullptr, sizeof(ELGameVersions_eventGetTitleVersionName_Parms), Z_Construct_UFunction_UELGameVersions_GetTitleVersionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_GetTitleVersionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameVersions_GetTitleVersionName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameVersions_GetTitleVersionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameVersions_GetTitleVersionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameVersions_GetTitleVersionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELGameVersions_NoRegister()
	{
		return UELGameVersions::StaticClass();
	}
	struct Z_Construct_UClass_UELGameVersions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OnlineVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSModeVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SSModeVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugTitleVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DebugTitleVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugOnlineVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DebugOnlineVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELGameVersions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELGameVersions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideOnlineVersionName, "Debug_SetOverrideOnlineVersionName" }, // 760217591
		{ &Z_Construct_UFunction_UELGameVersions_Debug_SetOverrideTitleVersionName, "Debug_SetOverrideTitleVersionName" }, // 4216473441
		{ &Z_Construct_UFunction_UELGameVersions_GetBuildVersion, "GetBuildVersion" }, // 2624817219
		{ &Z_Construct_UFunction_UELGameVersions_GetBuildVersionName, "GetBuildVersionName" }, // 3036817649
		{ &Z_Construct_UFunction_UELGameVersions_GetOnlineVersion, "GetOnlineVersion" }, // 1432374317
		{ &Z_Construct_UFunction_UELGameVersions_GetOnlineVersionName, "GetOnlineVersionName" }, // 3923011520
		{ &Z_Construct_UFunction_UELGameVersions_GetSSModeVersion, "GetSSModeVersion" }, // 4195219849
		{ &Z_Construct_UFunction_UELGameVersions_GetSSModeVersionName, "GetSSModeVersionName" }, // 1124410089
		{ &Z_Construct_UFunction_UELGameVersions_GetTitleVersionName, "GetTitleVersionName" }, // 2794936341
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameVersions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGameVersions.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGameVersions.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameVersions_Statics::NewProp_TitleVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameVersions" },
		{ "ModuleRelativePath", "Public/ELGameVersions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameVersions_Statics::NewProp_TitleVersion = { "TitleVersion", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameVersions, TitleVersion), METADATA_PARAMS(Z_Construct_UClass_UELGameVersions_Statics::NewProp_TitleVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameVersions_Statics::NewProp_TitleVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameVersions_Statics::NewProp_BuildVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameVersions" },
		{ "ModuleRelativePath", "Public/ELGameVersions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameVersions_Statics::NewProp_BuildVersion = { "BuildVersion", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameVersions, BuildVersion), METADATA_PARAMS(Z_Construct_UClass_UELGameVersions_Statics::NewProp_BuildVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameVersions_Statics::NewProp_BuildVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameVersions_Statics::NewProp_OnlineVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameVersions" },
		{ "ModuleRelativePath", "Public/ELGameVersions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameVersions_Statics::NewProp_OnlineVersion = { "OnlineVersion", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameVersions, OnlineVersion), METADATA_PARAMS(Z_Construct_UClass_UELGameVersions_Statics::NewProp_OnlineVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameVersions_Statics::NewProp_OnlineVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameVersions_Statics::NewProp_SSModeVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameVersions" },
		{ "ModuleRelativePath", "Public/ELGameVersions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameVersions_Statics::NewProp_SSModeVersion = { "SSModeVersion", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameVersions, SSModeVersion), METADATA_PARAMS(Z_Construct_UClass_UELGameVersions_Statics::NewProp_SSModeVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameVersions_Statics::NewProp_SSModeVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameVersions_Statics::NewProp_DebugTitleVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameVersions" },
		{ "ModuleRelativePath", "Public/ELGameVersions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameVersions_Statics::NewProp_DebugTitleVersion = { "DebugTitleVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameVersions, DebugTitleVersion), METADATA_PARAMS(Z_Construct_UClass_UELGameVersions_Statics::NewProp_DebugTitleVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameVersions_Statics::NewProp_DebugTitleVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameVersions_Statics::NewProp_DebugOnlineVersion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameVersions" },
		{ "ModuleRelativePath", "Public/ELGameVersions.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELGameVersions_Statics::NewProp_DebugOnlineVersion = { "DebugOnlineVersion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameVersions, DebugOnlineVersion), METADATA_PARAMS(Z_Construct_UClass_UELGameVersions_Statics::NewProp_DebugOnlineVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameVersions_Statics::NewProp_DebugOnlineVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELGameVersions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameVersions_Statics::NewProp_TitleVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameVersions_Statics::NewProp_BuildVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameVersions_Statics::NewProp_OnlineVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameVersions_Statics::NewProp_SSModeVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameVersions_Statics::NewProp_DebugTitleVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameVersions_Statics::NewProp_DebugOnlineVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELGameVersions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELGameVersions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELGameVersions_Statics::ClassParams = {
		&UELGameVersions::StaticClass,
		"GameVersion",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELGameVersions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELGameVersions_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UELGameVersions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameVersions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELGameVersions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELGameVersions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELGameVersions, 2754852979);
	template<> ABP_200508_API UClass* StaticClass<UELGameVersions>()
	{
		return UELGameVersions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELGameVersions(Z_Construct_UClass_UELGameVersions, &UELGameVersions::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELGameVersions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELGameVersions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
