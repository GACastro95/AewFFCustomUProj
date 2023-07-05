// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSStats() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSStats_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSStats();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatData();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSIngestStatParam();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSQueryStatOption();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSStatsOwnRequest_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSStats::execGetStat)
	{
		P_GET_STRUCT_REF(FEOSStatData,Z_Param_Out__stStatData);
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStat(Z_Param_Out__stStatData,Z_Param__sIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSStats::execGetStatByName)
	{
		P_GET_STRUCT_REF(FEOSStatData,Z_Param_Out__stStatData);
		P_GET_PROPERTY(FStrProperty,Z_Param__strStatName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStatByName(Z_Param_Out__stStatData,Z_Param__strStatName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSStats::execGetStatsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStatsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSStats::execGetTargetStat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductID);
		P_GET_STRUCT_REF(FEOSStatData,Z_Param_Out__stStatData);
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTargetStat(Z_Param__strProductID,Z_Param_Out__stStatData,Z_Param__sIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSStats::execGetTargetStatByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductID);
		P_GET_STRUCT_REF(FEOSStatData,Z_Param_Out__stStatData);
		P_GET_PROPERTY(FStrProperty,Z_Param__strStatName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTargetStatByName(Z_Param__strProductID,Z_Param_Out__stStatData,Z_Param__strStatName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSStats::execGetTargetStatsCount)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTargetStatsCount(Z_Param__strProductID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSStats::execRequestIngestStat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strStatName);
		P_GET_PROPERTY(FIntProperty,Z_Param__sAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestIngestStat(Z_Param__strStatName,Z_Param__sAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSStats::execRequestIngestStats)
	{
		P_GET_TARRAY_REF(FEOSIngestStatParam,Z_Param_Out__cIngestStatParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestIngestStats(Z_Param_Out__cIngestStatParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSStats::execRequestQueryStats)
	{
		P_GET_STRUCT_REF(FEOSQueryStatOption,Z_Param_Out__stQueryStatOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestQueryStats(Z_Param_Out__stQueryStatOption);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSStats::execRequestQueryTargetStats)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductID);
		P_GET_STRUCT_REF(FEOSQueryStatOption,Z_Param_Out__stQueryStatOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestQueryTargetStats(Z_Param__strProductID,Z_Param_Out__stQueryStatOption);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSStats::execSetApiVersion)
	{
		P_GET_STRUCT(FEOSStatsAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSStats::SetApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	void UEOSStats::StaticRegisterNativesUEOSStats()
	{
		UClass* Class = UEOSStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStat", &UEOSStats::execGetStat },
			{ "GetStatByName", &UEOSStats::execGetStatByName },
			{ "GetStatsCount", &UEOSStats::execGetStatsCount },
			{ "GetTargetStat", &UEOSStats::execGetTargetStat },
			{ "GetTargetStatByName", &UEOSStats::execGetTargetStatByName },
			{ "GetTargetStatsCount", &UEOSStats::execGetTargetStatsCount },
			{ "RequestIngestStat", &UEOSStats::execRequestIngestStat },
			{ "RequestIngestStats", &UEOSStats::execRequestIngestStats },
			{ "RequestQueryStats", &UEOSStats::execRequestQueryStats },
			{ "RequestQueryTargetStats", &UEOSStats::execRequestQueryTargetStats },
			{ "SetApiVersion", &UEOSStats::execSetApiVersion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSStats_GetStat_Statics
	{
		struct EOSStats_eventGetStat_Parms
		{
			FEOSStatData _stStatData;
			int32 _sIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stStatData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSStats_GetStat_Statics::NewProp__stStatData = { "_stStatData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventGetStat_Parms, _stStatData), Z_Construct_UScriptStruct_FEOSStatData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSStats_GetStat_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventGetStat_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSStats_GetStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSStats_eventGetStat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSStats_GetStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSStats_eventGetStat_Parms), &Z_Construct_UFunction_UEOSStats_GetStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSStats_GetStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_GetStat_Statics::NewProp__stStatData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_GetStat_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_GetStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_GetStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSStats_GetStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSStats, nullptr, "GetStat", nullptr, nullptr, sizeof(EOSStats_eventGetStat_Parms), Z_Construct_UFunction_UEOSStats_GetStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_GetStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_GetStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_GetStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSStats_GetStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSStats_GetStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSStats_GetStatByName_Statics
	{
		struct EOSStats_eventGetStatByName_Parms
		{
			FEOSStatData _stStatData;
			FString _strStatName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stStatData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strStatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strStatName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::NewProp__stStatData = { "_stStatData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventGetStatByName_Parms, _stStatData), Z_Construct_UScriptStruct_FEOSStatData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::NewProp__strStatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::NewProp__strStatName = { "_strStatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventGetStatByName_Parms, _strStatName), METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::NewProp__strStatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::NewProp__strStatName_MetaData)) };
	void Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSStats_eventGetStatByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSStats_eventGetStatByName_Parms), &Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::NewProp__stStatData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::NewProp__strStatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSStats, nullptr, "GetStatByName", nullptr, nullptr, sizeof(EOSStats_eventGetStatByName_Parms), Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSStats_GetStatByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSStats_GetStatByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSStats_GetStatsCount_Statics
	{
		struct EOSStats_eventGetStatsCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSStats_GetStatsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventGetStatsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSStats_GetStatsCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_GetStatsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_GetStatsCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSStats_GetStatsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSStats, nullptr, "GetStatsCount", nullptr, nullptr, sizeof(EOSStats_eventGetStatsCount_Parms), Z_Construct_UFunction_UEOSStats_GetStatsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_GetStatsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_GetStatsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_GetStatsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSStats_GetStatsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSStats_GetStatsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics
	{
		struct EOSStats_eventGetTargetStat_Parms
		{
			FString _strProductID;
			FEOSStatData _stStatData;
			int32 _sIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stStatData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::NewProp__strProductID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::NewProp__strProductID = { "_strProductID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventGetTargetStat_Parms, _strProductID), METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::NewProp__strProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::NewProp__strProductID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::NewProp__stStatData = { "_stStatData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventGetTargetStat_Parms, _stStatData), Z_Construct_UScriptStruct_FEOSStatData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventGetTargetStat_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSStats_eventGetTargetStat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSStats_eventGetTargetStat_Parms), &Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::NewProp__strProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::NewProp__stStatData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSStats, nullptr, "GetTargetStat", nullptr, nullptr, sizeof(EOSStats_eventGetTargetStat_Parms), Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSStats_GetTargetStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSStats_GetTargetStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics
	{
		struct EOSStats_eventGetTargetStatByName_Parms
		{
			FString _strProductID;
			FEOSStatData _stStatData;
			FString _strStatName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stStatData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strStatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strStatName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::NewProp__strProductID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::NewProp__strProductID = { "_strProductID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventGetTargetStatByName_Parms, _strProductID), METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::NewProp__strProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::NewProp__strProductID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::NewProp__stStatData = { "_stStatData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventGetTargetStatByName_Parms, _stStatData), Z_Construct_UScriptStruct_FEOSStatData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::NewProp__strStatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::NewProp__strStatName = { "_strStatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventGetTargetStatByName_Parms, _strStatName), METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::NewProp__strStatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::NewProp__strStatName_MetaData)) };
	void Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSStats_eventGetTargetStatByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSStats_eventGetTargetStatByName_Parms), &Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::NewProp__strProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::NewProp__stStatData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::NewProp__strStatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSStats, nullptr, "GetTargetStatByName", nullptr, nullptr, sizeof(EOSStats_eventGetTargetStatByName_Parms), Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSStats_GetTargetStatByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSStats_GetTargetStatByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSStats_GetTargetStatsCount_Statics
	{
		struct EOSStats_eventGetTargetStatsCount_Parms
		{
			FString _strProductID;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_GetTargetStatsCount_Statics::NewProp__strProductID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSStats_GetTargetStatsCount_Statics::NewProp__strProductID = { "_strProductID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventGetTargetStatsCount_Parms, _strProductID), METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_GetTargetStatsCount_Statics::NewProp__strProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_GetTargetStatsCount_Statics::NewProp__strProductID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSStats_GetTargetStatsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventGetTargetStatsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSStats_GetTargetStatsCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_GetTargetStatsCount_Statics::NewProp__strProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_GetTargetStatsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_GetTargetStatsCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSStats_GetTargetStatsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSStats, nullptr, "GetTargetStatsCount", nullptr, nullptr, sizeof(EOSStats_eventGetTargetStatsCount_Parms), Z_Construct_UFunction_UEOSStats_GetTargetStatsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_GetTargetStatsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_GetTargetStatsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_GetTargetStatsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSStats_GetTargetStatsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSStats_GetTargetStatsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics
	{
		struct EOSStats_eventRequestIngestStat_Parms
		{
			FString _strStatName;
			int32 _sAmount;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strStatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strStatName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sAmount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::NewProp__strStatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::NewProp__strStatName = { "_strStatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventRequestIngestStat_Parms, _strStatName), METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::NewProp__strStatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::NewProp__strStatName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::NewProp__sAmount = { "_sAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventRequestIngestStat_Parms, _sAmount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSStats_eventRequestIngestStat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSStats_eventRequestIngestStat_Parms), &Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::NewProp__strStatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::NewProp__sAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSStats, nullptr, "RequestIngestStat", nullptr, nullptr, sizeof(EOSStats_eventRequestIngestStat_Parms), Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSStats_RequestIngestStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSStats_RequestIngestStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics
	{
		struct EOSStats_eventRequestIngestStats_Parms
		{
			TArray<FEOSIngestStatParam> _cIngestStatParams;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cIngestStatParams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cIngestStatParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cIngestStatParams;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::NewProp__cIngestStatParams_Inner = { "_cIngestStatParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSIngestStatParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::NewProp__cIngestStatParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::NewProp__cIngestStatParams = { "_cIngestStatParams", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventRequestIngestStats_Parms, _cIngestStatParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::NewProp__cIngestStatParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::NewProp__cIngestStatParams_MetaData)) };
	void Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSStats_eventRequestIngestStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSStats_eventRequestIngestStats_Parms), &Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::NewProp__cIngestStatParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::NewProp__cIngestStatParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSStats, nullptr, "RequestIngestStats", nullptr, nullptr, sizeof(EOSStats_eventRequestIngestStats_Parms), Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSStats_RequestIngestStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSStats_RequestIngestStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics
	{
		struct EOSStats_eventRequestQueryStats_Parms
		{
			FEOSQueryStatOption _stQueryStatOption;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stQueryStatOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stQueryStatOption;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics::NewProp__stQueryStatOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics::NewProp__stQueryStatOption = { "_stQueryStatOption", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventRequestQueryStats_Parms, _stQueryStatOption), Z_Construct_UScriptStruct_FEOSQueryStatOption, METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics::NewProp__stQueryStatOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics::NewProp__stQueryStatOption_MetaData)) };
	void Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSStats_eventRequestQueryStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSStats_eventRequestQueryStats_Parms), &Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics::NewProp__stQueryStatOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSStats, nullptr, "RequestQueryStats", nullptr, nullptr, sizeof(EOSStats_eventRequestQueryStats_Parms), Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSStats_RequestQueryStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSStats_RequestQueryStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics
	{
		struct EOSStats_eventRequestQueryTargetStats_Parms
		{
			FString _strProductID;
			FEOSQueryStatOption _stQueryStatOption;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stQueryStatOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stQueryStatOption;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::NewProp__strProductID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::NewProp__strProductID = { "_strProductID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventRequestQueryTargetStats_Parms, _strProductID), METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::NewProp__strProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::NewProp__strProductID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::NewProp__stQueryStatOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::NewProp__stQueryStatOption = { "_stQueryStatOption", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventRequestQueryTargetStats_Parms, _stQueryStatOption), Z_Construct_UScriptStruct_FEOSQueryStatOption, METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::NewProp__stQueryStatOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::NewProp__stQueryStatOption_MetaData)) };
	void Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSStats_eventRequestQueryTargetStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSStats_eventRequestQueryTargetStats_Parms), &Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::NewProp__strProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::NewProp__stQueryStatOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSStats, nullptr, "RequestQueryTargetStats", nullptr, nullptr, sizeof(EOSStats_eventRequestQueryTargetStats_Parms), Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSStats_SetApiVersion_Statics
	{
		struct EOSStats_eventSetApiVersion_Parms
		{
			FEOSStatsAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSStats_SetApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSStats_eventSetApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSStats_SetApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSStats_SetApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSStats_SetApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSStats_SetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSStats, nullptr, "SetApiVersion", nullptr, nullptr, sizeof(EOSStats_eventSetApiVersion_Parms), Z_Construct_UFunction_UEOSStats_SetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_SetApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSStats_SetApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSStats_SetApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSStats_SetApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSStats_SetApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSStats_NoRegister()
	{
		return UEOSStats::StaticClass();
	}
	struct Z_Construct_UClass_UEOSStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatsEventDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StatsEventDispatcher;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cOwnStatRequests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cOwnStatRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cOwnStatRequests;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSIDs,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSStats_GetStat, "GetStat" }, // 2049984309
		{ &Z_Construct_UFunction_UEOSStats_GetStatByName, "GetStatByName" }, // 3431275133
		{ &Z_Construct_UFunction_UEOSStats_GetStatsCount, "GetStatsCount" }, // 911554961
		{ &Z_Construct_UFunction_UEOSStats_GetTargetStat, "GetTargetStat" }, // 2016709841
		{ &Z_Construct_UFunction_UEOSStats_GetTargetStatByName, "GetTargetStatByName" }, // 255293389
		{ &Z_Construct_UFunction_UEOSStats_GetTargetStatsCount, "GetTargetStatsCount" }, // 496879723
		{ &Z_Construct_UFunction_UEOSStats_RequestIngestStat, "RequestIngestStat" }, // 3076808819
		{ &Z_Construct_UFunction_UEOSStats_RequestIngestStats, "RequestIngestStats" }, // 1842316127
		{ &Z_Construct_UFunction_UEOSStats_RequestQueryStats, "RequestQueryStats" }, // 639328601
		{ &Z_Construct_UFunction_UEOSStats_RequestQueryTargetStats, "RequestQueryTargetStats" }, // 2572264070
		{ &Z_Construct_UFunction_UEOSStats_SetApiVersion, "SetApiVersion" }, // 108621088
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSStats.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSStats_Statics::NewProp_StatsEventDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSStats" },
		{ "ModuleRelativePath", "Public/EOSStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSStats_Statics::NewProp_StatsEventDispatcher = { "StatsEventDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSStats, StatsEventDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSStatsEventDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSStats_Statics::NewProp_StatsEventDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSStats_Statics::NewProp_StatsEventDispatcher_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSStats_Statics::NewProp_m_cOwnStatRequests_Inner = { "m_cOwnStatRequests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSStatsOwnRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSStats_Statics::NewProp_m_cOwnStatRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSStats" },
		{ "ModuleRelativePath", "Public/EOSStats.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEOSStats_Statics::NewProp_m_cOwnStatRequests = { "m_cOwnStatRequests", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSStats, m_cOwnStatRequests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSStats_Statics::NewProp_m_cOwnStatRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSStats_Statics::NewProp_m_cOwnStatRequests_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSStats_Statics::NewProp_StatsEventDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSStats_Statics::NewProp_m_cOwnStatRequests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSStats_Statics::NewProp_m_cOwnStatRequests,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSStats_Statics::ClassParams = {
		&UEOSStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSStats_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSStats, 4063355922);
	template<> YEOSSDK_API UClass* StaticClass<UEOSStats>()
	{
		return UEOSStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSStats(Z_Construct_UClass_UEOSStats, &UEOSStats::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
