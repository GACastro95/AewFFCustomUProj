// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSUserData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSUserData() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSUserData_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSUserData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSGameRankData();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2SSPlayerData();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSUserDataParam();
// End Cross Module References
	DEFINE_FUNCTION(UELSSUserData::execDebugPrintDiff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugPrintDiff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUserData::execGetPlayerRankExp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerRankExp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUserData::execGetSSRankData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELSSGameRankData*)Z_Param__Result=P_THIS->GetSSRankData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUserData::execGetSSUserData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FYGS2SSPlayerData*)Z_Param__Result=P_THIS->GetSSUserData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUserData::execGetStampedeRankExp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStampedeRankExp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUserData::execGetUserDataNow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELSSUserDataParam*)Z_Param__Result=P_THIS->GetUserDataNow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUserData::execGetUserDataPrev)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELSSUserDataParam*)Z_Param__Result=P_THIS->GetUserDataPrev();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUserData::execGetUserExp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetUserExp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSUserData::execSetSSUserData)
	{
		P_GET_STRUCT_REF(FYGS2SSPlayerData,Z_Param_Out_dat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSSUserData(Z_Param_Out_dat);
		P_NATIVE_END;
	}
	void UELSSUserData::StaticRegisterNativesUELSSUserData()
	{
		UClass* Class = UELSSUserData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugPrintDiff", &UELSSUserData::execDebugPrintDiff },
			{ "GetPlayerRankExp", &UELSSUserData::execGetPlayerRankExp },
			{ "GetSSRankData", &UELSSUserData::execGetSSRankData },
			{ "GetSSUserData", &UELSSUserData::execGetSSUserData },
			{ "GetStampedeRankExp", &UELSSUserData::execGetStampedeRankExp },
			{ "GetUserDataNow", &UELSSUserData::execGetUserDataNow },
			{ "GetUserDataPrev", &UELSSUserData::execGetUserDataPrev },
			{ "GetUserExp", &UELSSUserData::execGetUserExp },
			{ "SetSSUserData", &UELSSUserData::execSetSSUserData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSUserData_DebugPrintDiff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUserData_DebugPrintDiff_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUserData_DebugPrintDiff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUserData, nullptr, "DebugPrintDiff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUserData_DebugPrintDiff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_DebugPrintDiff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUserData_DebugPrintDiff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUserData_DebugPrintDiff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUserData_GetPlayerRankExp_Statics
	{
		struct ELSSUserData_eventGetPlayerRankExp_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUserData_GetPlayerRankExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUserData_eventGetPlayerRankExp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUserData_GetPlayerRankExp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUserData_GetPlayerRankExp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUserData_GetPlayerRankExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUserData_GetPlayerRankExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUserData, nullptr, "GetPlayerRankExp", nullptr, nullptr, sizeof(ELSSUserData_eventGetPlayerRankExp_Parms), Z_Construct_UFunction_UELSSUserData_GetPlayerRankExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_GetPlayerRankExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUserData_GetPlayerRankExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_GetPlayerRankExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUserData_GetPlayerRankExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUserData_GetPlayerRankExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUserData_GetSSRankData_Statics
	{
		struct ELSSUserData_eventGetSSRankData_Parms
		{
			FELSSGameRankData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUserData_GetSSRankData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUserData_eventGetSSRankData_Parms, ReturnValue), Z_Construct_UScriptStruct_FELSSGameRankData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUserData_GetSSRankData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUserData_GetSSRankData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUserData_GetSSRankData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUserData_GetSSRankData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUserData, nullptr, "GetSSRankData", nullptr, nullptr, sizeof(ELSSUserData_eventGetSSRankData_Parms), Z_Construct_UFunction_UELSSUserData_GetSSRankData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_GetSSRankData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUserData_GetSSRankData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_GetSSRankData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUserData_GetSSRankData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUserData_GetSSRankData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUserData_GetSSUserData_Statics
	{
		struct ELSSUserData_eventGetSSUserData_Parms
		{
			FYGS2SSPlayerData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUserData_GetSSUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUserData_eventGetSSUserData_Parms, ReturnValue), Z_Construct_UScriptStruct_FYGS2SSPlayerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUserData_GetSSUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUserData_GetSSUserData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUserData_GetSSUserData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUserData_GetSSUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUserData, nullptr, "GetSSUserData", nullptr, nullptr, sizeof(ELSSUserData_eventGetSSUserData_Parms), Z_Construct_UFunction_UELSSUserData_GetSSUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_GetSSUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUserData_GetSSUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_GetSSUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUserData_GetSSUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUserData_GetSSUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUserData_GetStampedeRankExp_Statics
	{
		struct ELSSUserData_eventGetStampedeRankExp_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUserData_GetStampedeRankExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUserData_eventGetStampedeRankExp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUserData_GetStampedeRankExp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUserData_GetStampedeRankExp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUserData_GetStampedeRankExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUserData_GetStampedeRankExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUserData, nullptr, "GetStampedeRankExp", nullptr, nullptr, sizeof(ELSSUserData_eventGetStampedeRankExp_Parms), Z_Construct_UFunction_UELSSUserData_GetStampedeRankExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_GetStampedeRankExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUserData_GetStampedeRankExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_GetStampedeRankExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUserData_GetStampedeRankExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUserData_GetStampedeRankExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUserData_GetUserDataNow_Statics
	{
		struct ELSSUserData_eventGetUserDataNow_Parms
		{
			FELSSUserDataParam ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUserData_GetUserDataNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUserData_eventGetUserDataNow_Parms, ReturnValue), Z_Construct_UScriptStruct_FELSSUserDataParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUserData_GetUserDataNow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUserData_GetUserDataNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUserData_GetUserDataNow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUserData_GetUserDataNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUserData, nullptr, "GetUserDataNow", nullptr, nullptr, sizeof(ELSSUserData_eventGetUserDataNow_Parms), Z_Construct_UFunction_UELSSUserData_GetUserDataNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_GetUserDataNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUserData_GetUserDataNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_GetUserDataNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUserData_GetUserDataNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUserData_GetUserDataNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUserData_GetUserDataPrev_Statics
	{
		struct ELSSUserData_eventGetUserDataPrev_Parms
		{
			FELSSUserDataParam ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUserData_GetUserDataPrev_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUserData_eventGetUserDataPrev_Parms, ReturnValue), Z_Construct_UScriptStruct_FELSSUserDataParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUserData_GetUserDataPrev_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUserData_GetUserDataPrev_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUserData_GetUserDataPrev_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUserData_GetUserDataPrev_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUserData, nullptr, "GetUserDataPrev", nullptr, nullptr, sizeof(ELSSUserData_eventGetUserDataPrev_Parms), Z_Construct_UFunction_UELSSUserData_GetUserDataPrev_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_GetUserDataPrev_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUserData_GetUserDataPrev_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_GetUserDataPrev_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUserData_GetUserDataPrev()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUserData_GetUserDataPrev_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUserData_GetUserExp_Statics
	{
		struct ELSSUserData_eventGetUserExp_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSUserData_GetUserExp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUserData_eventGetUserExp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUserData_GetUserExp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUserData_GetUserExp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUserData_GetUserExp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUserData_GetUserExp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUserData, nullptr, "GetUserExp", nullptr, nullptr, sizeof(ELSSUserData_eventGetUserExp_Parms), Z_Construct_UFunction_UELSSUserData_GetUserExp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_GetUserExp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUserData_GetUserExp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_GetUserExp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUserData_GetUserExp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUserData_GetUserExp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSUserData_SetSSUserData_Statics
	{
		struct ELSSUserData_eventSetSSUserData_Parms
		{
			FYGS2SSPlayerData dat;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUserData_SetSSUserData_Statics::NewProp_dat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSUserData_SetSSUserData_Statics::NewProp_dat = { "dat", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSUserData_eventSetSSUserData_Parms, dat), Z_Construct_UScriptStruct_FYGS2SSPlayerData, METADATA_PARAMS(Z_Construct_UFunction_UELSSUserData_SetSSUserData_Statics::NewProp_dat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_SetSSUserData_Statics::NewProp_dat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSUserData_SetSSUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSUserData_SetSSUserData_Statics::NewProp_dat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSUserData_SetSSUserData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSUserData_SetSSUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSUserData, nullptr, "SetSSUserData", nullptr, nullptr, sizeof(ELSSUserData_eventSetSSUserData_Parms), Z_Construct_UFunction_UELSSUserData_SetSSUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_SetSSUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSUserData_SetSSUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSUserData_SetSSUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSUserData_SetSSUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSUserData_SetSSUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSUserData_NoRegister()
	{
		return UELSSUserData::StaticClass();
	}
	struct Z_Construct_UClass_UELSSUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSUserData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSUserData_DebugPrintDiff, "DebugPrintDiff" }, // 2182294438
		{ &Z_Construct_UFunction_UELSSUserData_GetPlayerRankExp, "GetPlayerRankExp" }, // 3471447805
		{ &Z_Construct_UFunction_UELSSUserData_GetSSRankData, "GetSSRankData" }, // 3136145234
		{ &Z_Construct_UFunction_UELSSUserData_GetSSUserData, "GetSSUserData" }, // 527603037
		{ &Z_Construct_UFunction_UELSSUserData_GetStampedeRankExp, "GetStampedeRankExp" }, // 1772941679
		{ &Z_Construct_UFunction_UELSSUserData_GetUserDataNow, "GetUserDataNow" }, // 2990532636
		{ &Z_Construct_UFunction_UELSSUserData_GetUserDataPrev, "GetUserDataPrev" }, // 1243329940
		{ &Z_Construct_UFunction_UELSSUserData_GetUserExp, "GetUserExp" }, // 511231453
		{ &Z_Construct_UFunction_UELSSUserData_SetSSUserData, "SetSSUserData" }, // 3371440447
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSUserData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSUserData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSUserData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSUserData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSUserData_Statics::ClassParams = {
		&UELSSUserData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSUserData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSUserData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSUserData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSUserData, 2756816844);
	template<> ABP_200508_API UClass* StaticClass<UELSSUserData>()
	{
		return UELSSUserData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSUserData(Z_Construct_UClass_UELSSUserData, &UELSSUserData::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSUserData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSUserData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
