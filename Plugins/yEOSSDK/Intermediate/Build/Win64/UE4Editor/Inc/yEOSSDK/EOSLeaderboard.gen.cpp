// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSLeaderboard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLeaderboard() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLeaderboard_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLeaderboard();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSStats();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsRecordData();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSLeaderboardEventDispatcher__DelegateSignature();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLeaderboardOwnRequest_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSLeaderboard::execGetLeaderboardDefinitionDataFromCache)
	{
		P_GET_STRUCT_REF(FEOSLeaderboardsDefinitionData,Z_Param_Out__rstDefinitionData);
		P_GET_PROPERTY(FStrProperty,Z_Param__strLeaderboardId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLeaderboardDefinitionDataFromCache(Z_Param_Out__rstDefinitionData,Z_Param__strLeaderboardId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLeaderboard::execGetLeaderboardRecordDataFromCache)
	{
		P_GET_TARRAY_REF(FEOSLeaderboardsRecordData,Z_Param_Out__rstRecordData);
		P_GET_PROPERTY(FStrProperty,Z_Param__strLeaderboardId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLeaderboardRecordDataFromCache(Z_Param_Out__rstRecordData,Z_Param__strLeaderboardId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLeaderboard::execGetLeaderboardUserScoreDataFromCache)
	{
		P_GET_TARRAY_REF(FEOSLeaderboardsUserScoreData,Z_Param_Out__rstUserScoreData);
		P_GET_PROPERTY(FStrProperty,Z_Param__strLeaderboardId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLeaderboardUserScoreDataFromCache(Z_Param_Out__rstUserScoreData,Z_Param__strLeaderboardId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLeaderboard::execRequestQueryLeaderboardInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestQueryLeaderboardInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLeaderboard::execRequestQueryRanks)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strLeaderboardId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestQueryRanks(Z_Param__strLeaderboardId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLeaderboard::execRequestQueryUserScores)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out__cLeaderboardIds);
		P_GET_TARRAY_REF(FString,Z_Param_Out__cProductUserIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestQueryUserScores(Z_Param_Out__cLeaderboardIds,Z_Param_Out__cProductUserIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLeaderboard::execSetLeaderboardApiVersion)
	{
		P_GET_STRUCT(FEOSLeaderboardAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSLeaderboard::SetLeaderboardApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	void UEOSLeaderboard::StaticRegisterNativesUEOSLeaderboard()
	{
		UClass* Class = UEOSLeaderboard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLeaderboardDefinitionDataFromCache", &UEOSLeaderboard::execGetLeaderboardDefinitionDataFromCache },
			{ "GetLeaderboardRecordDataFromCache", &UEOSLeaderboard::execGetLeaderboardRecordDataFromCache },
			{ "GetLeaderboardUserScoreDataFromCache", &UEOSLeaderboard::execGetLeaderboardUserScoreDataFromCache },
			{ "RequestQueryLeaderboardInfo", &UEOSLeaderboard::execRequestQueryLeaderboardInfo },
			{ "RequestQueryRanks", &UEOSLeaderboard::execRequestQueryRanks },
			{ "RequestQueryUserScores", &UEOSLeaderboard::execRequestQueryUserScores },
			{ "SetLeaderboardApiVersion", &UEOSLeaderboard::execSetLeaderboardApiVersion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics
	{
		struct EOSLeaderboard_eventGetLeaderboardDefinitionDataFromCache_Parms
		{
			FEOSLeaderboardsDefinitionData _rstDefinitionData;
			FString _strLeaderboardId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstDefinitionData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strLeaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strLeaderboardId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::NewProp__rstDefinitionData = { "_rstDefinitionData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLeaderboard_eventGetLeaderboardDefinitionDataFromCache_Parms, _rstDefinitionData), Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::NewProp__strLeaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::NewProp__strLeaderboardId = { "_strLeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLeaderboard_eventGetLeaderboardDefinitionDataFromCache_Parms, _strLeaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::NewProp__strLeaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::NewProp__strLeaderboardId_MetaData)) };
	void Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLeaderboard_eventGetLeaderboardDefinitionDataFromCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLeaderboard_eventGetLeaderboardDefinitionDataFromCache_Parms), &Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::NewProp__rstDefinitionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::NewProp__strLeaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLeaderboard, nullptr, "GetLeaderboardDefinitionDataFromCache", nullptr, nullptr, sizeof(EOSLeaderboard_eventGetLeaderboardDefinitionDataFromCache_Parms), Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics
	{
		struct EOSLeaderboard_eventGetLeaderboardRecordDataFromCache_Parms
		{
			TArray<FEOSLeaderboardsRecordData> _rstRecordData;
			FString _strLeaderboardId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstRecordData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__rstRecordData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strLeaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strLeaderboardId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::NewProp__rstRecordData_Inner = { "_rstRecordData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSLeaderboardsRecordData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::NewProp__rstRecordData = { "_rstRecordData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLeaderboard_eventGetLeaderboardRecordDataFromCache_Parms, _rstRecordData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::NewProp__strLeaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::NewProp__strLeaderboardId = { "_strLeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLeaderboard_eventGetLeaderboardRecordDataFromCache_Parms, _strLeaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::NewProp__strLeaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::NewProp__strLeaderboardId_MetaData)) };
	void Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLeaderboard_eventGetLeaderboardRecordDataFromCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLeaderboard_eventGetLeaderboardRecordDataFromCache_Parms), &Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::NewProp__rstRecordData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::NewProp__rstRecordData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::NewProp__strLeaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLeaderboard, nullptr, "GetLeaderboardRecordDataFromCache", nullptr, nullptr, sizeof(EOSLeaderboard_eventGetLeaderboardRecordDataFromCache_Parms), Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics
	{
		struct EOSLeaderboard_eventGetLeaderboardUserScoreDataFromCache_Parms
		{
			TArray<FEOSLeaderboardsUserScoreData> _rstUserScoreData;
			FString _strLeaderboardId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstUserScoreData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__rstUserScoreData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strLeaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strLeaderboardId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::NewProp__rstUserScoreData_Inner = { "_rstUserScoreData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSLeaderboardsUserScoreData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::NewProp__rstUserScoreData = { "_rstUserScoreData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLeaderboard_eventGetLeaderboardUserScoreDataFromCache_Parms, _rstUserScoreData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::NewProp__strLeaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::NewProp__strLeaderboardId = { "_strLeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLeaderboard_eventGetLeaderboardUserScoreDataFromCache_Parms, _strLeaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::NewProp__strLeaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::NewProp__strLeaderboardId_MetaData)) };
	void Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLeaderboard_eventGetLeaderboardUserScoreDataFromCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLeaderboard_eventGetLeaderboardUserScoreDataFromCache_Parms), &Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::NewProp__rstUserScoreData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::NewProp__rstUserScoreData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::NewProp__strLeaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLeaderboard, nullptr, "GetLeaderboardUserScoreDataFromCache", nullptr, nullptr, sizeof(EOSLeaderboard_eventGetLeaderboardUserScoreDataFromCache_Parms), Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLeaderboard_RequestQueryLeaderboardInfo_Statics
	{
		struct EOSLeaderboard_eventRequestQueryLeaderboardInfo_Parms
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
	void Z_Construct_UFunction_UEOSLeaderboard_RequestQueryLeaderboardInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLeaderboard_eventRequestQueryLeaderboardInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLeaderboard_RequestQueryLeaderboardInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLeaderboard_eventRequestQueryLeaderboardInfo_Parms), &Z_Construct_UFunction_UEOSLeaderboard_RequestQueryLeaderboardInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLeaderboard_RequestQueryLeaderboardInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_RequestQueryLeaderboardInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLeaderboard_RequestQueryLeaderboardInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLeaderboard_RequestQueryLeaderboardInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLeaderboard, nullptr, "RequestQueryLeaderboardInfo", nullptr, nullptr, sizeof(EOSLeaderboard_eventRequestQueryLeaderboardInfo_Parms), Z_Construct_UFunction_UEOSLeaderboard_RequestQueryLeaderboardInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_RequestQueryLeaderboardInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLeaderboard_RequestQueryLeaderboardInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_RequestQueryLeaderboardInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLeaderboard_RequestQueryLeaderboardInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLeaderboard_RequestQueryLeaderboardInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics
	{
		struct EOSLeaderboard_eventRequestQueryRanks_Parms
		{
			FString _strLeaderboardId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strLeaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strLeaderboardId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics::NewProp__strLeaderboardId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics::NewProp__strLeaderboardId = { "_strLeaderboardId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLeaderboard_eventRequestQueryRanks_Parms, _strLeaderboardId), METADATA_PARAMS(Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics::NewProp__strLeaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics::NewProp__strLeaderboardId_MetaData)) };
	void Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLeaderboard_eventRequestQueryRanks_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLeaderboard_eventRequestQueryRanks_Parms), &Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics::NewProp__strLeaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLeaderboard, nullptr, "RequestQueryRanks", nullptr, nullptr, sizeof(EOSLeaderboard_eventRequestQueryRanks_Parms), Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics
	{
		struct EOSLeaderboard_eventRequestQueryUserScores_Parms
		{
			TArray<FString> _cLeaderboardIds;
			TArray<FString> _cProductUserIds;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cLeaderboardIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cLeaderboardIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cLeaderboardIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cProductUserIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cProductUserIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cProductUserIds;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp__cLeaderboardIds_Inner = { "_cLeaderboardIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp__cLeaderboardIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp__cLeaderboardIds = { "_cLeaderboardIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLeaderboard_eventRequestQueryUserScores_Parms, _cLeaderboardIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp__cLeaderboardIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp__cLeaderboardIds_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp__cProductUserIds_Inner = { "_cProductUserIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp__cProductUserIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp__cProductUserIds = { "_cProductUserIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLeaderboard_eventRequestQueryUserScores_Parms, _cProductUserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp__cProductUserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp__cProductUserIds_MetaData)) };
	void Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLeaderboard_eventRequestQueryUserScores_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLeaderboard_eventRequestQueryUserScores_Parms), &Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp__cLeaderboardIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp__cLeaderboardIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp__cProductUserIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp__cProductUserIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLeaderboard, nullptr, "RequestQueryUserScores", nullptr, nullptr, sizeof(EOSLeaderboard_eventRequestQueryUserScores_Parms), Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLeaderboard_SetLeaderboardApiVersion_Statics
	{
		struct EOSLeaderboard_eventSetLeaderboardApiVersion_Parms
		{
			FEOSLeaderboardAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSLeaderboard_SetLeaderboardApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLeaderboard_eventSetLeaderboardApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLeaderboard_SetLeaderboardApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLeaderboard_SetLeaderboardApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLeaderboard_SetLeaderboardApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLeaderboard_SetLeaderboardApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLeaderboard, nullptr, "SetLeaderboardApiVersion", nullptr, nullptr, sizeof(EOSLeaderboard_eventSetLeaderboardApiVersion_Parms), Z_Construct_UFunction_UEOSLeaderboard_SetLeaderboardApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_SetLeaderboardApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLeaderboard_SetLeaderboardApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLeaderboard_SetLeaderboardApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLeaderboard_SetLeaderboardApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLeaderboard_SetLeaderboardApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSLeaderboard_NoRegister()
	{
		return UEOSLeaderboard::StaticClass();
	}
	struct Z_Construct_UClass_UEOSLeaderboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LeaderboardEventDispatcher;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cOwnRequests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cOwnRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cOwnRequests;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSLeaderboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSStats,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSLeaderboard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardDefinitionDataFromCache, "GetLeaderboardDefinitionDataFromCache" }, // 1218651299
		{ &Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardRecordDataFromCache, "GetLeaderboardRecordDataFromCache" }, // 704909949
		{ &Z_Construct_UFunction_UEOSLeaderboard_GetLeaderboardUserScoreDataFromCache, "GetLeaderboardUserScoreDataFromCache" }, // 944968415
		{ &Z_Construct_UFunction_UEOSLeaderboard_RequestQueryLeaderboardInfo, "RequestQueryLeaderboardInfo" }, // 2439550881
		{ &Z_Construct_UFunction_UEOSLeaderboard_RequestQueryRanks, "RequestQueryRanks" }, // 771416759
		{ &Z_Construct_UFunction_UEOSLeaderboard_RequestQueryUserScores, "RequestQueryUserScores" }, // 2995680387
		{ &Z_Construct_UFunction_UEOSLeaderboard_SetLeaderboardApiVersion, "SetLeaderboardApiVersion" }, // 1929839777
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLeaderboard_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSLeaderboard.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSLeaderboard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLeaderboard_Statics::NewProp_LeaderboardEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboard" },
		{ "ModuleRelativePath", "Public/EOSLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSLeaderboard_Statics::NewProp_LeaderboardEventDispatcher = { "LeaderboardEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSLeaderboard, LeaderboardEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSLeaderboardEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSLeaderboard_Statics::NewProp_LeaderboardEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLeaderboard_Statics::NewProp_LeaderboardEventDispatcher_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSLeaderboard_Statics::NewProp_m_cOwnRequests_Inner = { "m_cOwnRequests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSLeaderboardOwnRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLeaderboard_Statics::NewProp_m_cOwnRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboard" },
		{ "ModuleRelativePath", "Public/EOSLeaderboard.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEOSLeaderboard_Statics::NewProp_m_cOwnRequests = { "m_cOwnRequests", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSLeaderboard, m_cOwnRequests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSLeaderboard_Statics::NewProp_m_cOwnRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLeaderboard_Statics::NewProp_m_cOwnRequests_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSLeaderboard_Statics::NewProp_LeaderboardEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSLeaderboard_Statics::NewProp_m_cOwnRequests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSLeaderboard_Statics::NewProp_m_cOwnRequests,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSLeaderboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSLeaderboard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSLeaderboard_Statics::ClassParams = {
		&UEOSLeaderboard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSLeaderboard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLeaderboard_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSLeaderboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLeaderboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSLeaderboard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSLeaderboard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSLeaderboard, 273836041);
	template<> YEOSSDK_API UClass* StaticClass<UEOSLeaderboard>()
	{
		return UEOSLeaderboard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSLeaderboard(Z_Construct_UClass_UEOSLeaderboard, &UEOSLeaderboard::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSLeaderboard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSLeaderboard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
