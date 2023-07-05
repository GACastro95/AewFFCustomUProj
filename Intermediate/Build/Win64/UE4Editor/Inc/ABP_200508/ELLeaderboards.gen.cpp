// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELLeaderboards.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELLeaderboards() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboards_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboards();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSLeaderboardEvent();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLeaderboard_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELStats_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriend_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUser_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserManager_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELLeaderboardStatDataCache();
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboardUserStats_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELLeaderboards::execClearCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboards::execClearLeaderboardsCache)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_ExcludeLeaderboardNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearLeaderboardsCache(Z_Param_Out_ExcludeLeaderboardNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboards::execClearLeaderboardStatsCache)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_ExcludeUserIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearLeaderboardStatsCache(Z_Param_Out_ExcludeUserIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboards::execClearUserDataMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearUserDataMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboards::execClearUserScoreCache)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_ExcludeLeaderboardNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearUserScoreCache(Z_Param_Out_ExcludeLeaderboardNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboards::execFindCurrentSeason)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Season);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindCurrentSeason(Z_Param_Out_Season);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboards::execGetCurrentMonthlySeason)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Season);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCurrentMonthlySeason(Z_Param_Out_Season);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboards::execGetCurrentSeason)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Season);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCurrentSeason(Z_Param_Out_Season);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboards::execGetLeaderboardId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_GET_UBOOL(Z_Param_bPlatformOnly);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_LeaderboardId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLeaderboardId(Z_Param_LeaderboardName,Z_Param_Season,Z_Param_bPlatformOnly,Z_Param_Out_LeaderboardId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboards::execGetMonthlySeasonFromCurrent)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Season);
		P_GET_PROPERTY(FIntProperty,Z_Param_OffsetMonth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMonthlySeasonFromCurrent(Z_Param_Out_Season,Z_Param_OffsetMonth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboards::execGetSeasonNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSeasonNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboards::execGetSeasonTime)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_StartTime);
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_EndTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSeasonTime(Z_Param_Season,Z_Param_Out_StartTime,Z_Param_Out_EndTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboards::execHasLeaderboard)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LeaderboardName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_GET_UBOOL(Z_Param_bPlatformOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasLeaderboard(Z_Param_LeaderboardName,Z_Param_Season,Z_Param_bPlatformOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboards::execOnQueryLeaderboardsInfo)
	{
		P_GET_ENUM(EEOSLeaderboardEvent,Z_Param_EOSLeaderboardEvent);
		P_GET_TMAP_REF(FString,FEOSLeaderboardsDefinitionData,Z_Param_Out_LeaderboardDefinitionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQueryLeaderboardsInfo(EEOSLeaderboardEvent(Z_Param_EOSLeaderboardEvent),Z_Param_Out_LeaderboardDefinitionData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboards::execSetCurrentSeason)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentSeason(Z_Param_Season);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboards::execSetEOSLeaderboards)
	{
		P_GET_OBJECT(UEOSLeaderboard,Z_Param_InEOSLeaderboards);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEOSLeaderboards(Z_Param_InEOSLeaderboards);
		P_NATIVE_END;
	}
	void UELLeaderboards::StaticRegisterNativesUELLeaderboards()
	{
		UClass* Class = UELLeaderboards::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearCache", &UELLeaderboards::execClearCache },
			{ "ClearLeaderboardsCache", &UELLeaderboards::execClearLeaderboardsCache },
			{ "ClearLeaderboardStatsCache", &UELLeaderboards::execClearLeaderboardStatsCache },
			{ "ClearUserDataMap", &UELLeaderboards::execClearUserDataMap },
			{ "ClearUserScoreCache", &UELLeaderboards::execClearUserScoreCache },
			{ "FindCurrentSeason", &UELLeaderboards::execFindCurrentSeason },
			{ "GetCurrentMonthlySeason", &UELLeaderboards::execGetCurrentMonthlySeason },
			{ "GetCurrentSeason", &UELLeaderboards::execGetCurrentSeason },
			{ "GetLeaderboardId", &UELLeaderboards::execGetLeaderboardId },
			{ "GetMonthlySeasonFromCurrent", &UELLeaderboards::execGetMonthlySeasonFromCurrent },
			{ "GetSeasonNum", &UELLeaderboards::execGetSeasonNum },
			{ "GetSeasonTime", &UELLeaderboards::execGetSeasonTime },
			{ "HasLeaderboard", &UELLeaderboards::execHasLeaderboard },
			{ "OnQueryLeaderboardsInfo", &UELLeaderboards::execOnQueryLeaderboardsInfo },
			{ "SetCurrentSeason", &UELLeaderboards::execSetCurrentSeason },
			{ "SetEOSLeaderboards", &UELLeaderboards::execSetEOSLeaderboards },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELLeaderboards_ClearCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_ClearCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboards_ClearCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboards, nullptr, "ClearCache", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_ClearCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_ClearCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboards_ClearCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboards_ClearCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache_Statics
	{
		struct ELLeaderboards_eventClearLeaderboardsCache_Parms
		{
			TArray<FString> ExcludeLeaderboardNames;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExcludeLeaderboardNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeLeaderboardNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludeLeaderboardNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache_Statics::NewProp_ExcludeLeaderboardNames_Inner = { "ExcludeLeaderboardNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache_Statics::NewProp_ExcludeLeaderboardNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache_Statics::NewProp_ExcludeLeaderboardNames = { "ExcludeLeaderboardNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventClearLeaderboardsCache_Parms, ExcludeLeaderboardNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache_Statics::NewProp_ExcludeLeaderboardNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache_Statics::NewProp_ExcludeLeaderboardNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache_Statics::NewProp_ExcludeLeaderboardNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache_Statics::NewProp_ExcludeLeaderboardNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboards, nullptr, "ClearLeaderboardsCache", nullptr, nullptr, sizeof(ELLeaderboards_eventClearLeaderboardsCache_Parms), Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache_Statics
	{
		struct ELLeaderboards_eventClearLeaderboardStatsCache_Parms
		{
			TArray<FString> ExcludeUserIds;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExcludeUserIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeUserIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludeUserIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache_Statics::NewProp_ExcludeUserIds_Inner = { "ExcludeUserIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache_Statics::NewProp_ExcludeUserIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache_Statics::NewProp_ExcludeUserIds = { "ExcludeUserIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventClearLeaderboardStatsCache_Parms, ExcludeUserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache_Statics::NewProp_ExcludeUserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache_Statics::NewProp_ExcludeUserIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache_Statics::NewProp_ExcludeUserIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache_Statics::NewProp_ExcludeUserIds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboards, nullptr, "ClearLeaderboardStatsCache", nullptr, nullptr, sizeof(ELLeaderboards_eventClearLeaderboardStatsCache_Parms), Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboards_ClearUserDataMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_ClearUserDataMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboards_ClearUserDataMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboards, nullptr, "ClearUserDataMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_ClearUserDataMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_ClearUserDataMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboards_ClearUserDataMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboards_ClearUserDataMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache_Statics
	{
		struct ELLeaderboards_eventClearUserScoreCache_Parms
		{
			TArray<FString> ExcludeLeaderboardNames;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExcludeLeaderboardNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeLeaderboardNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludeLeaderboardNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache_Statics::NewProp_ExcludeLeaderboardNames_Inner = { "ExcludeLeaderboardNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache_Statics::NewProp_ExcludeLeaderboardNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache_Statics::NewProp_ExcludeLeaderboardNames = { "ExcludeLeaderboardNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventClearUserScoreCache_Parms, ExcludeLeaderboardNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache_Statics::NewProp_ExcludeLeaderboardNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache_Statics::NewProp_ExcludeLeaderboardNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache_Statics::NewProp_ExcludeLeaderboardNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache_Statics::NewProp_ExcludeLeaderboardNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboards, nullptr, "ClearUserScoreCache", nullptr, nullptr, sizeof(ELLeaderboards_eventClearUserScoreCache_Parms), Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboards_FindCurrentSeason_Statics
	{
		struct ELLeaderboards_eventFindCurrentSeason_Parms
		{
			int32 Season;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboards_FindCurrentSeason_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventFindCurrentSeason_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboards_FindCurrentSeason_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELLeaderboards_eventFindCurrentSeason_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboards_FindCurrentSeason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboards_eventFindCurrentSeason_Parms), &Z_Construct_UFunction_UELLeaderboards_FindCurrentSeason_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboards_FindCurrentSeason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_FindCurrentSeason_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_FindCurrentSeason_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_FindCurrentSeason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboards_FindCurrentSeason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboards, nullptr, "FindCurrentSeason", nullptr, nullptr, sizeof(ELLeaderboards_eventFindCurrentSeason_Parms), Z_Construct_UFunction_UELLeaderboards_FindCurrentSeason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_FindCurrentSeason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_FindCurrentSeason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_FindCurrentSeason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboards_FindCurrentSeason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboards_FindCurrentSeason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboards_GetCurrentMonthlySeason_Statics
	{
		struct ELLeaderboards_eventGetCurrentMonthlySeason_Parms
		{
			int32 Season;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboards_GetCurrentMonthlySeason_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventGetCurrentMonthlySeason_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboards_GetCurrentMonthlySeason_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELLeaderboards_eventGetCurrentMonthlySeason_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboards_GetCurrentMonthlySeason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboards_eventGetCurrentMonthlySeason_Parms), &Z_Construct_UFunction_UELLeaderboards_GetCurrentMonthlySeason_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboards_GetCurrentMonthlySeason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_GetCurrentMonthlySeason_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_GetCurrentMonthlySeason_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_GetCurrentMonthlySeason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboards_GetCurrentMonthlySeason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboards, nullptr, "GetCurrentMonthlySeason", nullptr, nullptr, sizeof(ELLeaderboards_eventGetCurrentMonthlySeason_Parms), Z_Construct_UFunction_UELLeaderboards_GetCurrentMonthlySeason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_GetCurrentMonthlySeason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_GetCurrentMonthlySeason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_GetCurrentMonthlySeason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboards_GetCurrentMonthlySeason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboards_GetCurrentMonthlySeason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboards_GetCurrentSeason_Statics
	{
		struct ELLeaderboards_eventGetCurrentSeason_Parms
		{
			int32 Season;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboards_GetCurrentSeason_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventGetCurrentSeason_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboards_GetCurrentSeason_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELLeaderboards_eventGetCurrentSeason_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboards_GetCurrentSeason_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboards_eventGetCurrentSeason_Parms), &Z_Construct_UFunction_UELLeaderboards_GetCurrentSeason_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboards_GetCurrentSeason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_GetCurrentSeason_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_GetCurrentSeason_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_GetCurrentSeason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboards_GetCurrentSeason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboards, nullptr, "GetCurrentSeason", nullptr, nullptr, sizeof(ELLeaderboards_eventGetCurrentSeason_Parms), Z_Construct_UFunction_UELLeaderboards_GetCurrentSeason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_GetCurrentSeason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_GetCurrentSeason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_GetCurrentSeason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboards_GetCurrentSeason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboards_GetCurrentSeason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics
	{
		struct ELLeaderboards_eventGetLeaderboardId_Parms
		{
			FString LeaderboardName;
			int32 Season;
			bool bPlatformOnly;
			FString LeaderboardId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static void NewProp_bPlatformOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlatformOnly;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventGetLeaderboardId_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::NewProp_LeaderboardName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventGetLeaderboardId_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::NewProp_bPlatformOnly_SetBit(void* Obj)
	{
		((ELLeaderboards_eventGetLeaderboardId_Parms*)Obj)->bPlatformOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::NewProp_bPlatformOnly = { "bPlatformOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboards_eventGetLeaderboardId_Parms), &Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::NewProp_bPlatformOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::NewProp_LeaderboardId = { "LeaderboardId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventGetLeaderboardId_Parms, LeaderboardId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELLeaderboards_eventGetLeaderboardId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboards_eventGetLeaderboardId_Parms), &Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::NewProp_LeaderboardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::NewProp_bPlatformOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::NewProp_LeaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboards, nullptr, "GetLeaderboardId", nullptr, nullptr, sizeof(ELLeaderboards_eventGetLeaderboardId_Parms), Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent_Statics
	{
		struct ELLeaderboards_eventGetMonthlySeasonFromCurrent_Parms
		{
			int32 Season;
			int32 OffsetMonth;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OffsetMonth;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventGetMonthlySeasonFromCurrent_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent_Statics::NewProp_OffsetMonth = { "OffsetMonth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventGetMonthlySeasonFromCurrent_Parms, OffsetMonth), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELLeaderboards_eventGetMonthlySeasonFromCurrent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboards_eventGetMonthlySeasonFromCurrent_Parms), &Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent_Statics::NewProp_OffsetMonth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboards, nullptr, "GetMonthlySeasonFromCurrent", nullptr, nullptr, sizeof(ELLeaderboards_eventGetMonthlySeasonFromCurrent_Parms), Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboards_GetSeasonNum_Statics
	{
		struct ELLeaderboards_eventGetSeasonNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboards_GetSeasonNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventGetSeasonNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboards_GetSeasonNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_GetSeasonNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_GetSeasonNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboards_GetSeasonNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboards, nullptr, "GetSeasonNum", nullptr, nullptr, sizeof(ELLeaderboards_eventGetSeasonNum_Parms), Z_Construct_UFunction_UELLeaderboards_GetSeasonNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_GetSeasonNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_GetSeasonNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_GetSeasonNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboards_GetSeasonNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboards_GetSeasonNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics
	{
		struct ELLeaderboards_eventGetSeasonTime_Parms
		{
			int32 Season;
			FDateTime StartTime;
			FDateTime EndTime;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventGetSeasonTime_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventGetSeasonTime_Parms, StartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventGetSeasonTime_Parms, EndTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELLeaderboards_eventGetSeasonTime_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboards_eventGetSeasonTime_Parms), &Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboards, nullptr, "GetSeasonTime", nullptr, nullptr, sizeof(ELLeaderboards_eventGetSeasonTime_Parms), Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboards_GetSeasonTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboards_GetSeasonTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics
	{
		struct ELLeaderboards_eventHasLeaderboard_Parms
		{
			FString LeaderboardName;
			int32 Season;
			bool bPlatformOnly;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static void NewProp_bPlatformOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlatformOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::NewProp_LeaderboardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::NewProp_LeaderboardName = { "LeaderboardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventHasLeaderboard_Parms, LeaderboardName), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::NewProp_LeaderboardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::NewProp_LeaderboardName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventHasLeaderboard_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::NewProp_bPlatformOnly_SetBit(void* Obj)
	{
		((ELLeaderboards_eventHasLeaderboard_Parms*)Obj)->bPlatformOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::NewProp_bPlatformOnly = { "bPlatformOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboards_eventHasLeaderboard_Parms), &Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::NewProp_bPlatformOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELLeaderboards_eventHasLeaderboard_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboards_eventHasLeaderboard_Parms), &Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::NewProp_LeaderboardName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::NewProp_bPlatformOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboards, nullptr, "HasLeaderboard", nullptr, nullptr, sizeof(ELLeaderboards_eventHasLeaderboard_Parms), Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboards_HasLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboards_HasLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics
	{
		struct ELLeaderboards_eventOnQueryLeaderboardsInfo_Parms
		{
			EEOSLeaderboardEvent EOSLeaderboardEvent;
			TMap<FString,FEOSLeaderboardsDefinitionData> LeaderboardDefinitionData;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EOSLeaderboardEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EOSLeaderboardEvent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeaderboardDefinitionData_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardDefinitionData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardDefinitionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LeaderboardDefinitionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::NewProp_EOSLeaderboardEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::NewProp_EOSLeaderboardEvent = { "EOSLeaderboardEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventOnQueryLeaderboardsInfo_Parms, EOSLeaderboardEvent), Z_Construct_UEnum_yEOSSDK_EEOSLeaderboardEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::NewProp_LeaderboardDefinitionData_ValueProp = { "LeaderboardDefinitionData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEOSLeaderboardsDefinitionData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::NewProp_LeaderboardDefinitionData_Key_KeyProp = { "LeaderboardDefinitionData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::NewProp_LeaderboardDefinitionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::NewProp_LeaderboardDefinitionData = { "LeaderboardDefinitionData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventOnQueryLeaderboardsInfo_Parms, LeaderboardDefinitionData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::NewProp_LeaderboardDefinitionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::NewProp_LeaderboardDefinitionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::NewProp_EOSLeaderboardEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::NewProp_EOSLeaderboardEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::NewProp_LeaderboardDefinitionData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::NewProp_LeaderboardDefinitionData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::NewProp_LeaderboardDefinitionData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboards, nullptr, "OnQueryLeaderboardsInfo", nullptr, nullptr, sizeof(ELLeaderboards_eventOnQueryLeaderboardsInfo_Parms), Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboards_SetCurrentSeason_Statics
	{
		struct ELLeaderboards_eventSetCurrentSeason_Parms
		{
			int32 Season;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboards_SetCurrentSeason_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventSetCurrentSeason_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboards_SetCurrentSeason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_SetCurrentSeason_Statics::NewProp_Season,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_SetCurrentSeason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboards_SetCurrentSeason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboards, nullptr, "SetCurrentSeason", nullptr, nullptr, sizeof(ELLeaderboards_eventSetCurrentSeason_Parms), Z_Construct_UFunction_UELLeaderboards_SetCurrentSeason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_SetCurrentSeason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_SetCurrentSeason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_SetCurrentSeason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboards_SetCurrentSeason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboards_SetCurrentSeason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboards_SetEOSLeaderboards_Statics
	{
		struct ELLeaderboards_eventSetEOSLeaderboards_Parms
		{
			UEOSLeaderboard* InEOSLeaderboards;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InEOSLeaderboards;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboards_SetEOSLeaderboards_Statics::NewProp_InEOSLeaderboards = { "InEOSLeaderboards", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboards_eventSetEOSLeaderboards_Parms, InEOSLeaderboards), Z_Construct_UClass_UEOSLeaderboard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboards_SetEOSLeaderboards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboards_SetEOSLeaderboards_Statics::NewProp_InEOSLeaderboards,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboards_SetEOSLeaderboards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboards_SetEOSLeaderboards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboards, nullptr, "SetEOSLeaderboards", nullptr, nullptr, sizeof(ELLeaderboards_eventSetEOSLeaderboards_Parms), Z_Construct_UFunction_UELLeaderboards_SetEOSLeaderboards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_SetEOSLeaderboards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboards_SetEOSLeaderboards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboards_SetEOSLeaderboards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboards_SetEOSLeaderboards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboards_SetEOSLeaderboards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELLeaderboards_NoRegister()
	{
		return UELLeaderboards::StaticClass();
	}
	struct Z_Construct_UClass_UELLeaderboards_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ELStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ELStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSLeaderboards_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSLeaderboards;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSFriend_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSFriend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSUserManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSUserManager;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeaderboardMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LeaderboardMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FriendLeaderboardMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendLeaderboardMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendLeaderboardMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FriendLeaderboardMap;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserStatsMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserStatsMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserStatsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_UserStatsMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardStatNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardStatNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LeaderboardStatNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardStatDetailNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardStatDetailNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LeaderboardStatDetailNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeasonNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeasonNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSeason_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentSeason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELLeaderboards_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELLeaderboards_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELLeaderboards_ClearCache, "ClearCache" }, // 2361469371
		{ &Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardsCache, "ClearLeaderboardsCache" }, // 2121989204
		{ &Z_Construct_UFunction_UELLeaderboards_ClearLeaderboardStatsCache, "ClearLeaderboardStatsCache" }, // 355237027
		{ &Z_Construct_UFunction_UELLeaderboards_ClearUserDataMap, "ClearUserDataMap" }, // 59964444
		{ &Z_Construct_UFunction_UELLeaderboards_ClearUserScoreCache, "ClearUserScoreCache" }, // 663494016
		{ &Z_Construct_UFunction_UELLeaderboards_FindCurrentSeason, "FindCurrentSeason" }, // 584209343
		{ &Z_Construct_UFunction_UELLeaderboards_GetCurrentMonthlySeason, "GetCurrentMonthlySeason" }, // 554319260
		{ &Z_Construct_UFunction_UELLeaderboards_GetCurrentSeason, "GetCurrentSeason" }, // 999139585
		{ &Z_Construct_UFunction_UELLeaderboards_GetLeaderboardId, "GetLeaderboardId" }, // 1289169702
		{ &Z_Construct_UFunction_UELLeaderboards_GetMonthlySeasonFromCurrent, "GetMonthlySeasonFromCurrent" }, // 1279888957
		{ &Z_Construct_UFunction_UELLeaderboards_GetSeasonNum, "GetSeasonNum" }, // 1600103550
		{ &Z_Construct_UFunction_UELLeaderboards_GetSeasonTime, "GetSeasonTime" }, // 997242591
		{ &Z_Construct_UFunction_UELLeaderboards_HasLeaderboard, "HasLeaderboard" }, // 56712336
		{ &Z_Construct_UFunction_UELLeaderboards_OnQueryLeaderboardsInfo, "OnQueryLeaderboardsInfo" }, // 1589009518
		{ &Z_Construct_UFunction_UELLeaderboards_SetCurrentSeason, "SetCurrentSeason" }, // 3098580029
		{ &Z_Construct_UFunction_UELLeaderboards_SetEOSLeaderboards, "SetEOSLeaderboards" }, // 2336546016
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboards_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELLeaderboards.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboards_Statics::NewProp_ELStats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboards" },
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_ELStats = { "ELStats", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboards, ELStats), Z_Construct_UClass_UELStats_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_ELStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_ELStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSLeaderboards_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboards" },
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSLeaderboards = { "EOSLeaderboards", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboards, EOSLeaderboards), Z_Construct_UClass_UEOSLeaderboard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSLeaderboards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSLeaderboards_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSFriend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboards" },
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSFriend = { "EOSFriend", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboards, EOSFriend), Z_Construct_UClass_UEOSFriend_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSFriend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSFriend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboards" },
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSUser = { "EOSUser", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboards, EOSUser), Z_Construct_UClass_UEOSUser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSUserManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboards" },
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSUserManager = { "EOSUserManager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboards, EOSUserManager), Z_Construct_UClass_UEOSUserManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSUserManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSUserManager_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardMap_ValueProp = { "LeaderboardMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FELLeaderboardStatDataCache, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardMap_Key_KeyProp = { "LeaderboardMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboards" },
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardMap = { "LeaderboardMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboards, LeaderboardMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_FriendLeaderboardMap_ValueProp = { "FriendLeaderboardMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FELLeaderboardStatDataCache, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_FriendLeaderboardMap_Key_KeyProp = { "FriendLeaderboardMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboards_Statics::NewProp_FriendLeaderboardMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboards" },
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_FriendLeaderboardMap = { "FriendLeaderboardMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboards, FriendLeaderboardMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_FriendLeaderboardMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_FriendLeaderboardMap_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_UserStatsMap_ValueProp = { "UserStatsMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UELLeaderboardUserStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_UserStatsMap_Key_KeyProp = { "UserStatsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboards_Statics::NewProp_UserStatsMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboards" },
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_UserStatsMap = { "UserStatsMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboards, UserStatsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_UserStatsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_UserStatsMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardStatNames_Inner = { "LeaderboardStatNames", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardStatNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboards" },
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardStatNames = { "LeaderboardStatNames", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboards, LeaderboardStatNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardStatNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardStatNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardStatDetailNames_Inner = { "LeaderboardStatDetailNames", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardStatDetailNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboards" },
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardStatDetailNames = { "LeaderboardStatDetailNames", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboards, LeaderboardStatDetailNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardStatDetailNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardStatDetailNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboards_Statics::NewProp_SeasonNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboards" },
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_SeasonNum = { "SeasonNum", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboards, SeasonNum), METADATA_PARAMS(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_SeasonNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_SeasonNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboards_Statics::NewProp_CurrentSeason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboards" },
		{ "ModuleRelativePath", "Public/ELLeaderboards.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELLeaderboards_Statics::NewProp_CurrentSeason = { "CurrentSeason", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboards, CurrentSeason), METADATA_PARAMS(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_CurrentSeason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboards_Statics::NewProp_CurrentSeason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELLeaderboards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_ELStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSLeaderboards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_EOSUserManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_FriendLeaderboardMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_FriendLeaderboardMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_FriendLeaderboardMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_UserStatsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_UserStatsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_UserStatsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardStatNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardStatNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardStatDetailNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_LeaderboardStatDetailNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_SeasonNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboards_Statics::NewProp_CurrentSeason,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELLeaderboards_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELLeaderboards>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELLeaderboards_Statics::ClassParams = {
		&UELLeaderboards::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELLeaderboards_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboards_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELLeaderboards_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboards_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELLeaderboards()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELLeaderboards_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELLeaderboards, 1325926462);
	template<> ABP_200508_API UClass* StaticClass<UELLeaderboards>()
	{
		return UELLeaderboards::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELLeaderboards(Z_Construct_UClass_UELLeaderboards, &UELLeaderboards::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELLeaderboards"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELLeaderboards);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
