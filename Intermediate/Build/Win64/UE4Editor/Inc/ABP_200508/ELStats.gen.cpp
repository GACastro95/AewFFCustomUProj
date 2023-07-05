// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELStats() {}
// Cross Module References
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_UELStats_OnQueryStats__DelegateSignature();
	ABP_200508_API UClass* Z_Construct_UClass_UELStats();
	ABP_200508_API UClass* Z_Construct_UClass_UELStats_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELStatDataCache();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSStatsEvent();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatData();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2ErrorType();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSStats_NoRegister();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EPlatformType();
	ABP_200508_API UClass* Z_Construct_UClass_UELYGS2Manager_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELYGSStatsGroup();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UELStats_OnQueryStats__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UELStats_OnQueryStats__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UELStats_OnQueryStats__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "OnQueryStats__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UELStats_OnQueryStats__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UELStats_OnQueryStats__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UELStats_OnQueryStats__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UELStats_OnQueryStats__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UELStats::execAddAndSetStats)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddAndSetStats(Z_Param_Name,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execAddRankMatchSeasonCountStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRankMatchSeasonCountStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execAddStats)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddStats(Z_Param_Name,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execClearCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execClearDisconnectionCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearDisconnectionCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execClearStats)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearStats(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execGetStatDataCache)
	{
		P_GET_TARRAY_REF(FELStatDataCache,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetStatDataCache(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execGetStats)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStats(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execIngestDirtyEOSStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IngestDirtyEOSStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execIngestDirtyStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IngestDirtyStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execIngestDirtyYGS2Stats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IngestDirtyYGS2Stats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execIngestDisconnectionStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IngestDisconnectionStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execIngestEOSStats)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_bNow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IngestEOSStats(Z_Param_Name,Z_Param_bNow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execIngestYGS2StatsGroup)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IngestYGS2StatsGroup(Z_Param_GroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execIsFirstQueryCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFirstQueryCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execMaxStats)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MaxStats(Z_Param_Name,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execMinStats)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MinStats(Z_Param_Name,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execOnQueryFirstStatsCompleted)
	{
		P_GET_ENUM(EEOSStatsEvent,Z_Param_EOSStatsEvent);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_TARRAY_REF(FEOSStatData,Z_Param_Out_Stats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQueryFirstStatsCompleted(EEOSStatsEvent(Z_Param_EOSStatsEvent),Z_Param_UserId,Z_Param_Out_Stats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execOnQueryStatsCompleted)
	{
		P_GET_ENUM(EEOSStatsEvent,Z_Param_EOSStatsEvent);
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_TARRAY_REF(FEOSStatData,Z_Param_Out_Stats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQueryStatsCompleted(EEOSStatsEvent(Z_Param_EOSStatsEvent),Z_Param_UserId,Z_Param_Out_Stats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execOnYGS2ResponseIngest)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param_ErrorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnYGS2ResponseIngest(EYGS2ErrorType(Z_Param_ErrorType),Z_Param_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execOnYGS2ResponseQuery)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param_ErrorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnYGS2ResponseQuery(EYGS2ErrorType(Z_Param_ErrorType),Z_Param_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execRequestQueryStats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestQueryStats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execRequestQueryStatsFromSaveData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestQueryStatsFromSaveData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execRequestQueryYGS2StatsGroup)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_GroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestQueryYGS2StatsGroup(Z_Param_GroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execSetDisconnectionFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisconnectionFlag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execSetEOSStats)
	{
		P_GET_OBJECT(UEOSStats,Z_Param_InEOSStats);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEOSStats(Z_Param_InEOSStats);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execSetSeason)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSeason(Z_Param_Season);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execSetStats)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetStats(Z_Param_Name,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execSetUserId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UserId);
		P_GET_ENUM(EPlatformType,Z_Param_Platform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUserId(Z_Param_UserId,EPlatformType(Z_Param_Platform));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStats::execSetYGS2Manager)
	{
		P_GET_OBJECT(UELYGS2Manager,Z_Param_InManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetYGS2Manager(Z_Param_InManager);
		P_NATIVE_END;
	}
	void UELStats::StaticRegisterNativesUELStats()
	{
		UClass* Class = UELStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAndSetStats", &UELStats::execAddAndSetStats },
			{ "AddRankMatchSeasonCountStats", &UELStats::execAddRankMatchSeasonCountStats },
			{ "AddStats", &UELStats::execAddStats },
			{ "ClearCache", &UELStats::execClearCache },
			{ "ClearDisconnectionCount", &UELStats::execClearDisconnectionCount },
			{ "ClearStats", &UELStats::execClearStats },
			{ "GetStatDataCache", &UELStats::execGetStatDataCache },
			{ "GetStats", &UELStats::execGetStats },
			{ "IngestDirtyEOSStats", &UELStats::execIngestDirtyEOSStats },
			{ "IngestDirtyStats", &UELStats::execIngestDirtyStats },
			{ "IngestDirtyYGS2Stats", &UELStats::execIngestDirtyYGS2Stats },
			{ "IngestDisconnectionStats", &UELStats::execIngestDisconnectionStats },
			{ "IngestEOSStats", &UELStats::execIngestEOSStats },
			{ "IngestYGS2StatsGroup", &UELStats::execIngestYGS2StatsGroup },
			{ "IsFirstQueryCompleted", &UELStats::execIsFirstQueryCompleted },
			{ "MaxStats", &UELStats::execMaxStats },
			{ "MinStats", &UELStats::execMinStats },
			{ "OnQueryFirstStatsCompleted", &UELStats::execOnQueryFirstStatsCompleted },
			{ "OnQueryStatsCompleted", &UELStats::execOnQueryStatsCompleted },
			{ "OnYGS2ResponseIngest", &UELStats::execOnYGS2ResponseIngest },
			{ "OnYGS2ResponseQuery", &UELStats::execOnYGS2ResponseQuery },
			{ "RequestQueryStats", &UELStats::execRequestQueryStats },
			{ "RequestQueryStatsFromSaveData", &UELStats::execRequestQueryStatsFromSaveData },
			{ "RequestQueryYGS2StatsGroup", &UELStats::execRequestQueryYGS2StatsGroup },
			{ "SetDisconnectionFlag", &UELStats::execSetDisconnectionFlag },
			{ "SetEOSStats", &UELStats::execSetEOSStats },
			{ "SetSeason", &UELStats::execSetSeason },
			{ "SetStats", &UELStats::execSetStats },
			{ "SetUserId", &UELStats::execSetUserId },
			{ "SetYGS2Manager", &UELStats::execSetYGS2Manager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELStats_AddAndSetStats_Statics
	{
		struct ELStats_eventAddAndSetStats_Parms
		{
			FString Name;
			int32 Value;
			bool bIngestEOS;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventAddAndSetStats_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventAddAndSetStats_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStats_eventAddAndSetStats_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventAddAndSetStats_Parms), &Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStats_eventAddAndSetStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventAddAndSetStats_Parms), &Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "AddAndSetStats", nullptr, nullptr, sizeof(ELStats_eventAddAndSetStats_Parms), Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_AddAndSetStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_AddAndSetStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_AddRankMatchSeasonCountStats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_AddRankMatchSeasonCountStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_AddRankMatchSeasonCountStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "AddRankMatchSeasonCountStats", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_AddRankMatchSeasonCountStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_AddRankMatchSeasonCountStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_AddRankMatchSeasonCountStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_AddRankMatchSeasonCountStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_AddStats_Statics
	{
		struct ELStats_eventAddStats_Parms
		{
			FString Name;
			int32 Value;
			bool bIngestEOS;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_AddStats_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStats_AddStats_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventAddStats_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UELStats_AddStats_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_AddStats_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStats_AddStats_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventAddStats_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStats_AddStats_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStats_eventAddStats_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_AddStats_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventAddStats_Parms), &Z_Construct_UFunction_UELStats_AddStats_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStats_AddStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStats_eventAddStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_AddStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventAddStats_Parms), &Z_Construct_UFunction_UELStats_AddStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_AddStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_AddStats_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_AddStats_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_AddStats_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_AddStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_AddStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_AddStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "AddStats", nullptr, nullptr, sizeof(ELStats_eventAddStats_Parms), Z_Construct_UFunction_UELStats_AddStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_AddStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_AddStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_AddStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_AddStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_AddStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_ClearCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_ClearCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_ClearCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "ClearCache", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_ClearCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_ClearCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_ClearCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_ClearCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_ClearDisconnectionCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_ClearDisconnectionCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_ClearDisconnectionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "ClearDisconnectionCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_ClearDisconnectionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_ClearDisconnectionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_ClearDisconnectionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_ClearDisconnectionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_ClearStats_Statics
	{
		struct ELStats_eventClearStats_Parms
		{
			FString Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_ClearStats_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStats_ClearStats_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventClearStats_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UELStats_ClearStats_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_ClearStats_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UELStats_ClearStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStats_eventClearStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_ClearStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventClearStats_Parms), &Z_Construct_UFunction_UELStats_ClearStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_ClearStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_ClearStats_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_ClearStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_ClearStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_ClearStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "ClearStats", nullptr, nullptr, sizeof(ELStats_eventClearStats_Parms), Z_Construct_UFunction_UELStats_ClearStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_ClearStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_ClearStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_ClearStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_ClearStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_ClearStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_GetStatDataCache_Statics
	{
		struct ELStats_eventGetStatDataCache_Parms
		{
			TArray<FELStatDataCache> Data;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELStats_GetStatDataCache_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELStatDataCache, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELStats_GetStatDataCache_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventGetStatDataCache_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_GetStatDataCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_GetStatDataCache_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_GetStatDataCache_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_GetStatDataCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_GetStatDataCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "GetStatDataCache", nullptr, nullptr, sizeof(ELStats_eventGetStatDataCache_Parms), Z_Construct_UFunction_UELStats_GetStatDataCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_GetStatDataCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_GetStatDataCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_GetStatDataCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_GetStatDataCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_GetStatDataCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_GetStats_Statics
	{
		struct ELStats_eventGetStats_Parms
		{
			FString Name;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_GetStats_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStats_GetStats_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventGetStats_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UELStats_GetStats_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_GetStats_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStats_GetStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventGetStats_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_GetStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_GetStats_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_GetStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_GetStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_GetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "GetStats", nullptr, nullptr, sizeof(ELStats_eventGetStats_Parms), Z_Construct_UFunction_UELStats_GetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_GetStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_GetStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_GetStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_GetStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_GetStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_IngestDirtyEOSStats_Statics
	{
		struct ELStats_eventIngestDirtyEOSStats_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStats_IngestDirtyEOSStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventIngestDirtyEOSStats_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_IngestDirtyEOSStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_IngestDirtyEOSStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_IngestDirtyEOSStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_IngestDirtyEOSStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "IngestDirtyEOSStats", nullptr, nullptr, sizeof(ELStats_eventIngestDirtyEOSStats_Parms), Z_Construct_UFunction_UELStats_IngestDirtyEOSStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_IngestDirtyEOSStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_IngestDirtyEOSStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_IngestDirtyEOSStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_IngestDirtyEOSStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_IngestDirtyEOSStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_IngestDirtyStats_Statics
	{
		struct ELStats_eventIngestDirtyStats_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStats_IngestDirtyStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventIngestDirtyStats_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_IngestDirtyStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_IngestDirtyStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_IngestDirtyStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_IngestDirtyStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "IngestDirtyStats", nullptr, nullptr, sizeof(ELStats_eventIngestDirtyStats_Parms), Z_Construct_UFunction_UELStats_IngestDirtyStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_IngestDirtyStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_IngestDirtyStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_IngestDirtyStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_IngestDirtyStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_IngestDirtyStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_IngestDirtyYGS2Stats_Statics
	{
		struct ELStats_eventIngestDirtyYGS2Stats_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStats_IngestDirtyYGS2Stats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventIngestDirtyYGS2Stats_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_IngestDirtyYGS2Stats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_IngestDirtyYGS2Stats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_IngestDirtyYGS2Stats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_IngestDirtyYGS2Stats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "IngestDirtyYGS2Stats", nullptr, nullptr, sizeof(ELStats_eventIngestDirtyYGS2Stats_Parms), Z_Construct_UFunction_UELStats_IngestDirtyYGS2Stats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_IngestDirtyYGS2Stats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_IngestDirtyYGS2Stats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_IngestDirtyYGS2Stats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_IngestDirtyYGS2Stats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_IngestDirtyYGS2Stats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_IngestDisconnectionStats_Statics
	{
		struct ELStats_eventIngestDisconnectionStats_Parms
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
	void Z_Construct_UFunction_UELStats_IngestDisconnectionStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStats_eventIngestDisconnectionStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_IngestDisconnectionStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventIngestDisconnectionStats_Parms), &Z_Construct_UFunction_UELStats_IngestDisconnectionStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_IngestDisconnectionStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_IngestDisconnectionStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_IngestDisconnectionStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_IngestDisconnectionStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "IngestDisconnectionStats", nullptr, nullptr, sizeof(ELStats_eventIngestDisconnectionStats_Parms), Z_Construct_UFunction_UELStats_IngestDisconnectionStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_IngestDisconnectionStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_IngestDisconnectionStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_IngestDisconnectionStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_IngestDisconnectionStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_IngestDisconnectionStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_IngestEOSStats_Statics
	{
		struct ELStats_eventIngestEOSStats_Parms
		{
			FString Name;
			bool bNow;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static void NewProp_bNow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventIngestEOSStats_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::NewProp_bNow_SetBit(void* Obj)
	{
		((ELStats_eventIngestEOSStats_Parms*)Obj)->bNow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::NewProp_bNow = { "bNow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventIngestEOSStats_Parms), &Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::NewProp_bNow_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStats_eventIngestEOSStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventIngestEOSStats_Parms), &Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::NewProp_bNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "IngestEOSStats", nullptr, nullptr, sizeof(ELStats_eventIngestEOSStats_Parms), Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_IngestEOSStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_IngestEOSStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup_Statics
	{
		struct ELStats_eventIngestYGS2StatsGroup_Parms
		{
			FString GroupName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventIngestYGS2StatsGroup_Parms, GroupName), METADATA_PARAMS(Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup_Statics::NewProp_GroupName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventIngestYGS2StatsGroup_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "IngestYGS2StatsGroup", nullptr, nullptr, sizeof(ELStats_eventIngestYGS2StatsGroup_Parms), Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_IsFirstQueryCompleted_Statics
	{
		struct ELStats_eventIsFirstQueryCompleted_Parms
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
	void Z_Construct_UFunction_UELStats_IsFirstQueryCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStats_eventIsFirstQueryCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_IsFirstQueryCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventIsFirstQueryCompleted_Parms), &Z_Construct_UFunction_UELStats_IsFirstQueryCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_IsFirstQueryCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_IsFirstQueryCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_IsFirstQueryCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_IsFirstQueryCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "IsFirstQueryCompleted", nullptr, nullptr, sizeof(ELStats_eventIsFirstQueryCompleted_Parms), Z_Construct_UFunction_UELStats_IsFirstQueryCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_IsFirstQueryCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_IsFirstQueryCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_IsFirstQueryCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_IsFirstQueryCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_IsFirstQueryCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_MaxStats_Statics
	{
		struct ELStats_eventMaxStats_Parms
		{
			FString Name;
			int32 Value;
			bool bIngestEOS;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_MaxStats_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStats_MaxStats_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventMaxStats_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UELStats_MaxStats_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_MaxStats_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStats_MaxStats_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventMaxStats_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStats_MaxStats_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStats_eventMaxStats_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_MaxStats_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventMaxStats_Parms), &Z_Construct_UFunction_UELStats_MaxStats_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStats_MaxStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStats_eventMaxStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_MaxStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventMaxStats_Parms), &Z_Construct_UFunction_UELStats_MaxStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_MaxStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_MaxStats_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_MaxStats_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_MaxStats_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_MaxStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_MaxStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_MaxStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "MaxStats", nullptr, nullptr, sizeof(ELStats_eventMaxStats_Parms), Z_Construct_UFunction_UELStats_MaxStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_MaxStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_MaxStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_MaxStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_MaxStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_MaxStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_MinStats_Statics
	{
		struct ELStats_eventMinStats_Parms
		{
			FString Name;
			int32 Value;
			bool bIngestEOS;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_MinStats_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStats_MinStats_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventMinStats_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UELStats_MinStats_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_MinStats_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStats_MinStats_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventMinStats_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStats_MinStats_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStats_eventMinStats_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_MinStats_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventMinStats_Parms), &Z_Construct_UFunction_UELStats_MinStats_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStats_MinStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStats_eventMinStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_MinStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventMinStats_Parms), &Z_Construct_UFunction_UELStats_MinStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_MinStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_MinStats_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_MinStats_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_MinStats_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_MinStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_MinStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_MinStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "MinStats", nullptr, nullptr, sizeof(ELStats_eventMinStats_Parms), Z_Construct_UFunction_UELStats_MinStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_MinStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_MinStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_MinStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_MinStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_MinStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics
	{
		struct ELStats_eventOnQueryFirstStatsCompleted_Parms
		{
			EEOSStatsEvent EOSStatsEvent;
			FString UserId;
			TArray<FEOSStatData> Stats;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EOSStatsEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EOSStatsEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Stats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::NewProp_EOSStatsEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::NewProp_EOSStatsEvent = { "EOSStatsEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventOnQueryFirstStatsCompleted_Parms, EOSStatsEvent), Z_Construct_UEnum_yEOSSDK_EEOSStatsEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventOnQueryFirstStatsCompleted_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::NewProp_Stats_Inner = { "Stats", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSStatData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::NewProp_Stats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventOnQueryFirstStatsCompleted_Parms, Stats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::NewProp_Stats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::NewProp_Stats_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::NewProp_EOSStatsEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::NewProp_EOSStatsEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::NewProp_Stats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::NewProp_Stats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "OnQueryFirstStatsCompleted", nullptr, nullptr, sizeof(ELStats_eventOnQueryFirstStatsCompleted_Parms), Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics
	{
		struct ELStats_eventOnQueryStatsCompleted_Parms
		{
			EEOSStatsEvent EOSStatsEvent;
			FString UserId;
			TArray<FEOSStatData> Stats;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EOSStatsEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EOSStatsEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stats_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Stats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::NewProp_EOSStatsEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::NewProp_EOSStatsEvent = { "EOSStatsEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventOnQueryStatsCompleted_Parms, EOSStatsEvent), Z_Construct_UEnum_yEOSSDK_EEOSStatsEvent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventOnQueryStatsCompleted_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::NewProp_Stats_Inner = { "Stats", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSStatData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::NewProp_Stats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventOnQueryStatsCompleted_Parms, Stats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::NewProp_Stats_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::NewProp_Stats_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::NewProp_EOSStatsEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::NewProp_EOSStatsEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::NewProp_Stats_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::NewProp_Stats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "OnQueryStatsCompleted", nullptr, nullptr, sizeof(ELStats_eventOnQueryStatsCompleted_Parms), Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_OnQueryStatsCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_OnQueryStatsCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_OnYGS2ResponseIngest_Statics
	{
		struct ELStats_eventOnYGS2ResponseIngest_Parms
		{
			EYGS2ErrorType ErrorType;
			UYGS2RequestBase* Request;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ErrorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStats_OnYGS2ResponseIngest_Statics::NewProp_ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStats_OnYGS2ResponseIngest_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventOnYGS2ResponseIngest_Parms, ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStats_OnYGS2ResponseIngest_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventOnYGS2ResponseIngest_Parms, Request), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_OnYGS2ResponseIngest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_OnYGS2ResponseIngest_Statics::NewProp_ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_OnYGS2ResponseIngest_Statics::NewProp_ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_OnYGS2ResponseIngest_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_OnYGS2ResponseIngest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_OnYGS2ResponseIngest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "OnYGS2ResponseIngest", nullptr, nullptr, sizeof(ELStats_eventOnYGS2ResponseIngest_Parms), Z_Construct_UFunction_UELStats_OnYGS2ResponseIngest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_OnYGS2ResponseIngest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_OnYGS2ResponseIngest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_OnYGS2ResponseIngest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_OnYGS2ResponseIngest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_OnYGS2ResponseIngest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_OnYGS2ResponseQuery_Statics
	{
		struct ELStats_eventOnYGS2ResponseQuery_Parms
		{
			EYGS2ErrorType ErrorType;
			UYGS2RequestBase* Request;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ErrorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStats_OnYGS2ResponseQuery_Statics::NewProp_ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStats_OnYGS2ResponseQuery_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventOnYGS2ResponseQuery_Parms, ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStats_OnYGS2ResponseQuery_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventOnYGS2ResponseQuery_Parms, Request), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_OnYGS2ResponseQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_OnYGS2ResponseQuery_Statics::NewProp_ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_OnYGS2ResponseQuery_Statics::NewProp_ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_OnYGS2ResponseQuery_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_OnYGS2ResponseQuery_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_OnYGS2ResponseQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "OnYGS2ResponseQuery", nullptr, nullptr, sizeof(ELStats_eventOnYGS2ResponseQuery_Parms), Z_Construct_UFunction_UELStats_OnYGS2ResponseQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_OnYGS2ResponseQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_OnYGS2ResponseQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_OnYGS2ResponseQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_OnYGS2ResponseQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_OnYGS2ResponseQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_RequestQueryStats_Statics
	{
		struct ELStats_eventRequestQueryStats_Parms
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
	void Z_Construct_UFunction_UELStats_RequestQueryStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStats_eventRequestQueryStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_RequestQueryStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventRequestQueryStats_Parms), &Z_Construct_UFunction_UELStats_RequestQueryStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_RequestQueryStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_RequestQueryStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_RequestQueryStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_RequestQueryStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "RequestQueryStats", nullptr, nullptr, sizeof(ELStats_eventRequestQueryStats_Parms), Z_Construct_UFunction_UELStats_RequestQueryStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_RequestQueryStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_RequestQueryStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_RequestQueryStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_RequestQueryStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_RequestQueryStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_RequestQueryStatsFromSaveData_Statics
	{
		struct ELStats_eventRequestQueryStatsFromSaveData_Parms
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
	void Z_Construct_UFunction_UELStats_RequestQueryStatsFromSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStats_eventRequestQueryStatsFromSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_RequestQueryStatsFromSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventRequestQueryStatsFromSaveData_Parms), &Z_Construct_UFunction_UELStats_RequestQueryStatsFromSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_RequestQueryStatsFromSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_RequestQueryStatsFromSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_RequestQueryStatsFromSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_RequestQueryStatsFromSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "RequestQueryStatsFromSaveData", nullptr, nullptr, sizeof(ELStats_eventRequestQueryStatsFromSaveData_Parms), Z_Construct_UFunction_UELStats_RequestQueryStatsFromSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_RequestQueryStatsFromSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_RequestQueryStatsFromSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_RequestQueryStatsFromSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_RequestQueryStatsFromSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_RequestQueryStatsFromSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics
	{
		struct ELStats_eventRequestQueryYGS2StatsGroup_Parms
		{
			FString GroupName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventRequestQueryYGS2StatsGroup_Parms, GroupName), METADATA_PARAMS(Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics::NewProp_GroupName_MetaData)) };
	void Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStats_eventRequestQueryYGS2StatsGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventRequestQueryYGS2StatsGroup_Parms), &Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics::NewProp_GroupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "RequestQueryYGS2StatsGroup", nullptr, nullptr, sizeof(ELStats_eventRequestQueryYGS2StatsGroup_Parms), Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_SetDisconnectionFlag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_SetDisconnectionFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_SetDisconnectionFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "SetDisconnectionFlag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_SetDisconnectionFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_SetDisconnectionFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_SetDisconnectionFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_SetDisconnectionFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_SetEOSStats_Statics
	{
		struct ELStats_eventSetEOSStats_Parms
		{
			UEOSStats* InEOSStats;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InEOSStats;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStats_SetEOSStats_Statics::NewProp_InEOSStats = { "InEOSStats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventSetEOSStats_Parms, InEOSStats), Z_Construct_UClass_UEOSStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_SetEOSStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_SetEOSStats_Statics::NewProp_InEOSStats,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_SetEOSStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_SetEOSStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "SetEOSStats", nullptr, nullptr, sizeof(ELStats_eventSetEOSStats_Parms), Z_Construct_UFunction_UELStats_SetEOSStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_SetEOSStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_SetEOSStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_SetEOSStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_SetEOSStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_SetEOSStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_SetSeason_Statics
	{
		struct ELStats_eventSetSeason_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStats_SetSeason_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventSetSeason_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_SetSeason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_SetSeason_Statics::NewProp_Season,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_SetSeason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_SetSeason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "SetSeason", nullptr, nullptr, sizeof(ELStats_eventSetSeason_Parms), Z_Construct_UFunction_UELStats_SetSeason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_SetSeason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_SetSeason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_SetSeason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_SetSeason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_SetSeason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_SetStats_Statics
	{
		struct ELStats_eventSetStats_Parms
		{
			FString Name;
			int32 Value;
			bool bIngestEOS;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_SetStats_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStats_SetStats_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventSetStats_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UELStats_SetStats_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_SetStats_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStats_SetStats_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventSetStats_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStats_SetStats_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStats_eventSetStats_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_SetStats_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventSetStats_Parms), &Z_Construct_UFunction_UELStats_SetStats_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStats_SetStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStats_eventSetStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_SetStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventSetStats_Parms), &Z_Construct_UFunction_UELStats_SetStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_SetStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_SetStats_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_SetStats_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_SetStats_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_SetStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_SetStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_SetStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "SetStats", nullptr, nullptr, sizeof(ELStats_eventSetStats_Parms), Z_Construct_UFunction_UELStats_SetStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_SetStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_SetStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_SetStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_SetStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_SetStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_SetUserId_Statics
	{
		struct ELStats_eventSetUserId_Parms
		{
			FString UserId;
			EPlatformType Platform;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Platform_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Platform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_SetUserId_Statics::NewProp_UserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStats_SetUserId_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventSetUserId_Parms, UserId), METADATA_PARAMS(Z_Construct_UFunction_UELStats_SetUserId_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_SetUserId_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStats_SetUserId_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStats_SetUserId_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventSetUserId_Parms, Platform), Z_Construct_UEnum_ELITE_Core_EPlatformType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStats_SetUserId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStats_eventSetUserId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStats_SetUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStats_eventSetUserId_Parms), &Z_Construct_UFunction_UELStats_SetUserId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_SetUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_SetUserId_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_SetUserId_Statics::NewProp_Platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_SetUserId_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_SetUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_SetUserId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_SetUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "SetUserId", nullptr, nullptr, sizeof(ELStats_eventSetUserId_Parms), Z_Construct_UFunction_UELStats_SetUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_SetUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_SetUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_SetUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_SetUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_SetUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStats_SetYGS2Manager_Statics
	{
		struct ELStats_eventSetYGS2Manager_Parms
		{
			UELYGS2Manager* InManager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStats_SetYGS2Manager_Statics::NewProp_InManager = { "InManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStats_eventSetYGS2Manager_Parms, InManager), Z_Construct_UClass_UELYGS2Manager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStats_SetYGS2Manager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStats_SetYGS2Manager_Statics::NewProp_InManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStats_SetYGS2Manager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStats_SetYGS2Manager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStats, nullptr, "SetYGS2Manager", nullptr, nullptr, sizeof(ELStats_eventSetYGS2Manager_Parms), Z_Construct_UFunction_UELStats_SetYGS2Manager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_SetYGS2Manager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStats_SetYGS2Manager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStats_SetYGS2Manager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStats_SetYGS2Manager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStats_SetYGS2Manager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELStats_NoRegister()
	{
		return UELStats::StaticClass();
	}
	struct Z_Construct_UClass_UELStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQueryStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YGS2Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_YGS2Manager;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatsMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatsMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StatsMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDirtySave_MetaData[];
#endif
		static void NewProp_bDirtySave_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDirtySave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDirtyEOS_MetaData[];
#endif
		static void NewProp_bDirtyEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDirtyEOS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFirstQueryCompleted_MetaData[];
#endif
		static void NewProp_bFirstQueryCompleted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFirstQueryCompleted;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RequiredStatNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredStatNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RequiredStatNames;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YGSStatsGroups_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YGSStatsGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_YGSStatsGroups;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankMatchSeason_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankMatchSeason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELStats_AddAndSetStats, "AddAndSetStats" }, // 1957749218
		{ &Z_Construct_UFunction_UELStats_AddRankMatchSeasonCountStats, "AddRankMatchSeasonCountStats" }, // 3011167650
		{ &Z_Construct_UFunction_UELStats_AddStats, "AddStats" }, // 1283085275
		{ &Z_Construct_UFunction_UELStats_ClearCache, "ClearCache" }, // 3104724640
		{ &Z_Construct_UFunction_UELStats_ClearDisconnectionCount, "ClearDisconnectionCount" }, // 2899776045
		{ &Z_Construct_UFunction_UELStats_ClearStats, "ClearStats" }, // 4140325202
		{ &Z_Construct_UFunction_UELStats_GetStatDataCache, "GetStatDataCache" }, // 3691861476
		{ &Z_Construct_UFunction_UELStats_GetStats, "GetStats" }, // 53601736
		{ &Z_Construct_UFunction_UELStats_IngestDirtyEOSStats, "IngestDirtyEOSStats" }, // 193228539
		{ &Z_Construct_UFunction_UELStats_IngestDirtyStats, "IngestDirtyStats" }, // 2903707212
		{ &Z_Construct_UFunction_UELStats_IngestDirtyYGS2Stats, "IngestDirtyYGS2Stats" }, // 3370425302
		{ &Z_Construct_UFunction_UELStats_IngestDisconnectionStats, "IngestDisconnectionStats" }, // 2237548131
		{ &Z_Construct_UFunction_UELStats_IngestEOSStats, "IngestEOSStats" }, // 1988355277
		{ &Z_Construct_UFunction_UELStats_IngestYGS2StatsGroup, "IngestYGS2StatsGroup" }, // 786769694
		{ &Z_Construct_UFunction_UELStats_IsFirstQueryCompleted, "IsFirstQueryCompleted" }, // 3012053883
		{ &Z_Construct_UFunction_UELStats_MaxStats, "MaxStats" }, // 1155390189
		{ &Z_Construct_UFunction_UELStats_MinStats, "MinStats" }, // 3046671888
		{ &Z_Construct_UFunction_UELStats_OnQueryFirstStatsCompleted, "OnQueryFirstStatsCompleted" }, // 2534471010
		{ &Z_Construct_UDelegateFunction_UELStats_OnQueryStats__DelegateSignature, "OnQueryStats__DelegateSignature" }, // 1074535990
		{ &Z_Construct_UFunction_UELStats_OnQueryStatsCompleted, "OnQueryStatsCompleted" }, // 4239795589
		{ &Z_Construct_UFunction_UELStats_OnYGS2ResponseIngest, "OnYGS2ResponseIngest" }, // 4060657544
		{ &Z_Construct_UFunction_UELStats_OnYGS2ResponseQuery, "OnYGS2ResponseQuery" }, // 3018460801
		{ &Z_Construct_UFunction_UELStats_RequestQueryStats, "RequestQueryStats" }, // 1720154192
		{ &Z_Construct_UFunction_UELStats_RequestQueryStatsFromSaveData, "RequestQueryStatsFromSaveData" }, // 714022210
		{ &Z_Construct_UFunction_UELStats_RequestQueryYGS2StatsGroup, "RequestQueryYGS2StatsGroup" }, // 1271101575
		{ &Z_Construct_UFunction_UELStats_SetDisconnectionFlag, "SetDisconnectionFlag" }, // 3919007342
		{ &Z_Construct_UFunction_UELStats_SetEOSStats, "SetEOSStats" }, // 529226531
		{ &Z_Construct_UFunction_UELStats_SetSeason, "SetSeason" }, // 1675381639
		{ &Z_Construct_UFunction_UELStats_SetStats, "SetStats" }, // 1192089362
		{ &Z_Construct_UFunction_UELStats_SetUserId, "SetUserId" }, // 4247061855
		{ &Z_Construct_UFunction_UELStats_SetYGS2Manager, "SetYGS2Manager" }, // 2015434072
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELStats.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELStats_Statics::NewProp_OnQueryStats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELStats" },
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELStats_Statics::NewProp_OnQueryStats = { "OnQueryStats", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELStats, OnQueryStats), Z_Construct_UDelegateFunction_UELStats_OnQueryStats__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELStats_Statics::NewProp_OnQueryStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELStats_Statics::NewProp_OnQueryStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELStats_Statics::NewProp_EOSStats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELStats" },
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELStats_Statics::NewProp_EOSStats = { "EOSStats", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELStats, EOSStats), Z_Construct_UClass_UEOSStats_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELStats_Statics::NewProp_EOSStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELStats_Statics::NewProp_EOSStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELStats_Statics::NewProp_YGS2Manager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELStats" },
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELStats_Statics::NewProp_YGS2Manager = { "YGS2Manager", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELStats, YGS2Manager), Z_Construct_UClass_UELYGS2Manager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELStats_Statics::NewProp_YGS2Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELStats_Statics::NewProp_YGS2Manager_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELStats_Statics::NewProp_StatsMap_ValueProp = { "StatsMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FELStatDataCache, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELStats_Statics::NewProp_StatsMap_Key_KeyProp = { "StatsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELStats_Statics::NewProp_StatsMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELStats" },
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELStats_Statics::NewProp_StatsMap = { "StatsMap", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELStats, StatsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELStats_Statics::NewProp_StatsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELStats_Statics::NewProp_StatsMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELStats_Statics::NewProp_bDirtySave_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELStats" },
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	void Z_Construct_UClass_UELStats_Statics::NewProp_bDirtySave_SetBit(void* Obj)
	{
		((UELStats*)Obj)->bDirtySave = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELStats_Statics::NewProp_bDirtySave = { "bDirtySave", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELStats), &Z_Construct_UClass_UELStats_Statics::NewProp_bDirtySave_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELStats_Statics::NewProp_bDirtySave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELStats_Statics::NewProp_bDirtySave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELStats_Statics::NewProp_bDirtyEOS_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELStats" },
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	void Z_Construct_UClass_UELStats_Statics::NewProp_bDirtyEOS_SetBit(void* Obj)
	{
		((UELStats*)Obj)->bDirtyEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELStats_Statics::NewProp_bDirtyEOS = { "bDirtyEOS", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELStats), &Z_Construct_UClass_UELStats_Statics::NewProp_bDirtyEOS_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELStats_Statics::NewProp_bDirtyEOS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELStats_Statics::NewProp_bDirtyEOS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELStats_Statics::NewProp_bFirstQueryCompleted_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELStats" },
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	void Z_Construct_UClass_UELStats_Statics::NewProp_bFirstQueryCompleted_SetBit(void* Obj)
	{
		((UELStats*)Obj)->bFirstQueryCompleted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELStats_Statics::NewProp_bFirstQueryCompleted = { "bFirstQueryCompleted", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELStats), &Z_Construct_UClass_UELStats_Statics::NewProp_bFirstQueryCompleted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELStats_Statics::NewProp_bFirstQueryCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELStats_Statics::NewProp_bFirstQueryCompleted_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELStats_Statics::NewProp_RequiredStatNames_Inner = { "RequiredStatNames", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELStats_Statics::NewProp_RequiredStatNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELStats" },
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELStats_Statics::NewProp_RequiredStatNames = { "RequiredStatNames", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELStats, RequiredStatNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELStats_Statics::NewProp_RequiredStatNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELStats_Statics::NewProp_RequiredStatNames_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELStats_Statics::NewProp_YGSStatsGroups_Inner = { "YGSStatsGroups", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELYGSStatsGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELStats_Statics::NewProp_YGSStatsGroups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELStats" },
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELStats_Statics::NewProp_YGSStatsGroups = { "YGSStatsGroups", nullptr, (EPropertyFlags)0x0020080000004005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELStats, YGSStatsGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELStats_Statics::NewProp_YGSStatsGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELStats_Statics::NewProp_YGSStatsGroups_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELStats_Statics::NewProp_RankMatchSeason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELStats" },
		{ "ModuleRelativePath", "Public/ELStats.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELStats_Statics::NewProp_RankMatchSeason = { "RankMatchSeason", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELStats, RankMatchSeason), METADATA_PARAMS(Z_Construct_UClass_UELStats_Statics::NewProp_RankMatchSeason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELStats_Statics::NewProp_RankMatchSeason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELStats_Statics::NewProp_OnQueryStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELStats_Statics::NewProp_EOSStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELStats_Statics::NewProp_YGS2Manager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELStats_Statics::NewProp_StatsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELStats_Statics::NewProp_StatsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELStats_Statics::NewProp_StatsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELStats_Statics::NewProp_bDirtySave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELStats_Statics::NewProp_bDirtyEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELStats_Statics::NewProp_bFirstQueryCompleted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELStats_Statics::NewProp_RequiredStatNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELStats_Statics::NewProp_RequiredStatNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELStats_Statics::NewProp_YGSStatsGroups_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELStats_Statics::NewProp_YGSStatsGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELStats_Statics::NewProp_RankMatchSeason,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELStats_Statics::ClassParams = {
		&UELStats::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELStats_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELStats, 3634650659);
	template<> ABP_200508_API UClass* StaticClass<UELStats>()
	{
		return UELStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELStats(Z_Construct_UClass_UELStats, &UELStats::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
