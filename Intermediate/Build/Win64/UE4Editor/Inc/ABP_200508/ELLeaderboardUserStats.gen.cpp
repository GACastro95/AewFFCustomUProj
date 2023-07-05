// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELLeaderboardUserStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELLeaderboardUserStats() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboardUserStats_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboardUserStats();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileColorParam();
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboardUserSeasonStats_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELLeaderboardUserStats::execFindLatestStat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindLatestStat(Z_Param_StatName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserStats::execFindStat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindStat(Z_Param_StatName,Z_Param_Season,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserStats::execGetLeaderboardBattlePassPoint)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BattlePassPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardBattlePassPoint(Z_Param_Out_BattlePassPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserStats::execGetLeaderboardPlayerBadges)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Badges);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardPlayerBadges(Z_Param_Out_Badges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserStats::execGetLeaderboardPlayerExternalAccountId)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AccountId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardPlayerExternalAccountId(Z_Param_Out_AccountId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserStats::execGetLeaderboardPlayerIcon)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayerIcon);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BGIcon);
		P_GET_STRUCT_REF(FUserProfileColorParam,Z_Param_Out_ColorParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardPlayerIcon(Z_Param_Out_PlayerIcon,Z_Param_Out_BGIcon,Z_Param_Out_ColorParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserStats::execGetLeaderboardPlayerRank)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayerRank);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayerRankPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardPlayerRank(Z_Param_Out_PlayerRank,Z_Param_Out_PlayerRankPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserStats::execGetLeaderboardPlayerRankPoint)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayerRankPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardPlayerRankPoint(Z_Param_Out_PlayerRankPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserStats::execGetLeaderboardSSRankPoint)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SSRankPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardSSRankPoint(Z_Param_Out_SSRankPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserStats::execGetStat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_GET_PROPERTY(FIntProperty,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStat(Z_Param_StatName,Z_Param_Season,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserStats::execGetUserSeasonStats)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Season);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELLeaderboardUserSeasonStats**)Z_Param__Result=P_THIS->GetUserSeasonStats(Z_Param_Season);
		P_NATIVE_END;
	}
	void UELLeaderboardUserStats::StaticRegisterNativesUELLeaderboardUserStats()
	{
		UClass* Class = UELLeaderboardUserStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindLatestStat", &UELLeaderboardUserStats::execFindLatestStat },
			{ "FindStat", &UELLeaderboardUserStats::execFindStat },
			{ "GetLeaderboardBattlePassPoint", &UELLeaderboardUserStats::execGetLeaderboardBattlePassPoint },
			{ "GetLeaderboardPlayerBadges", &UELLeaderboardUserStats::execGetLeaderboardPlayerBadges },
			{ "GetLeaderboardPlayerExternalAccountId", &UELLeaderboardUserStats::execGetLeaderboardPlayerExternalAccountId },
			{ "GetLeaderboardPlayerIcon", &UELLeaderboardUserStats::execGetLeaderboardPlayerIcon },
			{ "GetLeaderboardPlayerRank", &UELLeaderboardUserStats::execGetLeaderboardPlayerRank },
			{ "GetLeaderboardPlayerRankPoint", &UELLeaderboardUserStats::execGetLeaderboardPlayerRankPoint },
			{ "GetLeaderboardSSRankPoint", &UELLeaderboardUserStats::execGetLeaderboardSSRankPoint },
			{ "GetStat", &UELLeaderboardUserStats::execGetStat },
			{ "GetUserSeasonStats", &UELLeaderboardUserStats::execGetUserSeasonStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics
	{
		struct ELLeaderboardUserStats_eventFindLatestStat_Parms
		{
			FString StatName;
			int32 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventFindLatestStat_Parms, StatName), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::NewProp_StatName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventFindLatestStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELLeaderboardUserStats_eventFindLatestStat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboardUserStats_eventFindLatestStat_Parms), &Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserStats, nullptr, "FindLatestStat", nullptr, nullptr, sizeof(ELLeaderboardUserStats_eventFindLatestStat_Parms), Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics
	{
		struct ELLeaderboardUserStats_eventFindStat_Parms
		{
			FString StatName;
			int32 Season;
			int32 Value;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventFindStat_Parms, StatName), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::NewProp_StatName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventFindStat_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventFindStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELLeaderboardUserStats_eventFindStat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboardUserStats_eventFindStat_Parms), &Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserStats, nullptr, "FindStat", nullptr, nullptr, sizeof(ELLeaderboardUserStats_eventFindStat_Parms), Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserStats_FindStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserStats_FindStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardBattlePassPoint_Statics
	{
		struct ELLeaderboardUserStats_eventGetLeaderboardBattlePassPoint_Parms
		{
			int32 BattlePassPoint;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BattlePassPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardBattlePassPoint_Statics::NewProp_BattlePassPoint = { "BattlePassPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventGetLeaderboardBattlePassPoint_Parms, BattlePassPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardBattlePassPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardBattlePassPoint_Statics::NewProp_BattlePassPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardBattlePassPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardBattlePassPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserStats, nullptr, "GetLeaderboardBattlePassPoint", nullptr, nullptr, sizeof(ELLeaderboardUserStats_eventGetLeaderboardBattlePassPoint_Parms), Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardBattlePassPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardBattlePassPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardBattlePassPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardBattlePassPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardBattlePassPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardBattlePassPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerBadges_Statics
	{
		struct ELLeaderboardUserStats_eventGetLeaderboardPlayerBadges_Parms
		{
			TArray<int32> Badges;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Badges_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Badges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerBadges_Statics::NewProp_Badges_Inner = { "Badges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerBadges_Statics::NewProp_Badges = { "Badges", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventGetLeaderboardPlayerBadges_Parms, Badges), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerBadges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerBadges_Statics::NewProp_Badges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerBadges_Statics::NewProp_Badges,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerBadges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerBadges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserStats, nullptr, "GetLeaderboardPlayerBadges", nullptr, nullptr, sizeof(ELLeaderboardUserStats_eventGetLeaderboardPlayerBadges_Parms), Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerBadges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerBadges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerBadges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerBadges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerBadges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerBadges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerExternalAccountId_Statics
	{
		struct ELLeaderboardUserStats_eventGetLeaderboardPlayerExternalAccountId_Parms
		{
			FString AccountId;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccountId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerExternalAccountId_Statics::NewProp_AccountId = { "AccountId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventGetLeaderboardPlayerExternalAccountId_Parms, AccountId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerExternalAccountId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerExternalAccountId_Statics::NewProp_AccountId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerExternalAccountId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerExternalAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserStats, nullptr, "GetLeaderboardPlayerExternalAccountId", nullptr, nullptr, sizeof(ELLeaderboardUserStats_eventGetLeaderboardPlayerExternalAccountId_Parms), Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerExternalAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerExternalAccountId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerExternalAccountId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerExternalAccountId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerExternalAccountId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerExternalAccountId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerIcon_Statics
	{
		struct ELLeaderboardUserStats_eventGetLeaderboardPlayerIcon_Parms
		{
			int32 PlayerIcon;
			int32 BGIcon;
			FUserProfileColorParam ColorParam;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIcon;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BGIcon;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerIcon_Statics::NewProp_PlayerIcon = { "PlayerIcon", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventGetLeaderboardPlayerIcon_Parms, PlayerIcon), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerIcon_Statics::NewProp_BGIcon = { "BGIcon", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventGetLeaderboardPlayerIcon_Parms, BGIcon), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerIcon_Statics::NewProp_ColorParam = { "ColorParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventGetLeaderboardPlayerIcon_Parms, ColorParam), Z_Construct_UScriptStruct_FUserProfileColorParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerIcon_Statics::NewProp_PlayerIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerIcon_Statics::NewProp_BGIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerIcon_Statics::NewProp_ColorParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserStats, nullptr, "GetLeaderboardPlayerIcon", nullptr, nullptr, sizeof(ELLeaderboardUserStats_eventGetLeaderboardPlayerIcon_Parms), Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRank_Statics
	{
		struct ELLeaderboardUserStats_eventGetLeaderboardPlayerRank_Parms
		{
			int32 PlayerRank;
			int32 PlayerRankPoint;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerRank;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerRankPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRank_Statics::NewProp_PlayerRank = { "PlayerRank", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventGetLeaderboardPlayerRank_Parms, PlayerRank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRank_Statics::NewProp_PlayerRankPoint = { "PlayerRankPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventGetLeaderboardPlayerRank_Parms, PlayerRankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRank_Statics::NewProp_PlayerRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRank_Statics::NewProp_PlayerRankPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserStats, nullptr, "GetLeaderboardPlayerRank", nullptr, nullptr, sizeof(ELLeaderboardUserStats_eventGetLeaderboardPlayerRank_Parms), Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRankPoint_Statics
	{
		struct ELLeaderboardUserStats_eventGetLeaderboardPlayerRankPoint_Parms
		{
			int32 PlayerRankPoint;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerRankPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRankPoint_Statics::NewProp_PlayerRankPoint = { "PlayerRankPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventGetLeaderboardPlayerRankPoint_Parms, PlayerRankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRankPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRankPoint_Statics::NewProp_PlayerRankPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRankPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRankPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserStats, nullptr, "GetLeaderboardPlayerRankPoint", nullptr, nullptr, sizeof(ELLeaderboardUserStats_eventGetLeaderboardPlayerRankPoint_Parms), Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRankPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRankPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRankPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRankPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRankPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRankPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardSSRankPoint_Statics
	{
		struct ELLeaderboardUserStats_eventGetLeaderboardSSRankPoint_Parms
		{
			int32 SSRankPoint;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SSRankPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardSSRankPoint_Statics::NewProp_SSRankPoint = { "SSRankPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventGetLeaderboardSSRankPoint_Parms, SSRankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardSSRankPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardSSRankPoint_Statics::NewProp_SSRankPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardSSRankPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardSSRankPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserStats, nullptr, "GetLeaderboardSSRankPoint", nullptr, nullptr, sizeof(ELLeaderboardUserStats_eventGetLeaderboardSSRankPoint_Parms), Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardSSRankPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardSSRankPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardSSRankPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardSSRankPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardSSRankPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardSSRankPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics
	{
		struct ELLeaderboardUserStats_eventGetStat_Parms
		{
			FString StatName;
			int32 Season;
			int32 DefaultValue;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventGetStat_Parms, StatName), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::NewProp_StatName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventGetStat_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventGetStat_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventGetStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserStats, nullptr, "GetStat", nullptr, nullptr, sizeof(ELLeaderboardUserStats_eventGetStat_Parms), Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserStats_GetStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserStats_GetStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserStats_GetUserSeasonStats_Statics
	{
		struct ELLeaderboardUserStats_eventGetUserSeasonStats_Parms
		{
			int32 Season;
			UELLeaderboardUserSeasonStats* ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Season;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_GetUserSeasonStats_Statics::NewProp_Season = { "Season", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventGetUserSeasonStats_Parms, Season), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELLeaderboardUserStats_GetUserSeasonStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserStats_eventGetUserSeasonStats_Parms, ReturnValue), Z_Construct_UClass_UELLeaderboardUserSeasonStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserStats_GetUserSeasonStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_GetUserSeasonStats_Statics::NewProp_Season,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserStats_GetUserSeasonStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserStats_GetUserSeasonStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserStats_GetUserSeasonStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserStats, nullptr, "GetUserSeasonStats", nullptr, nullptr, sizeof(ELLeaderboardUserStats_eventGetUserSeasonStats_Parms), Z_Construct_UFunction_UELLeaderboardUserStats_GetUserSeasonStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetUserSeasonStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserStats_GetUserSeasonStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserStats_GetUserSeasonStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserStats_GetUserSeasonStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserStats_GetUserSeasonStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELLeaderboardUserStats_NoRegister()
	{
		return UELLeaderboardUserStats::StaticClass();
	}
	struct Z_Construct_UClass_UELLeaderboardUserStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeasonStatsMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeasonStatsMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeasonStatsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SeasonStatsMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELLeaderboardUserStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELLeaderboardUserStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELLeaderboardUserStats_FindLatestStat, "FindLatestStat" }, // 2346686190
		{ &Z_Construct_UFunction_UELLeaderboardUserStats_FindStat, "FindStat" }, // 3897945464
		{ &Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardBattlePassPoint, "GetLeaderboardBattlePassPoint" }, // 3592196765
		{ &Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerBadges, "GetLeaderboardPlayerBadges" }, // 1039417796
		{ &Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerExternalAccountId, "GetLeaderboardPlayerExternalAccountId" }, // 2172868218
		{ &Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerIcon, "GetLeaderboardPlayerIcon" }, // 2849925449
		{ &Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRank, "GetLeaderboardPlayerRank" }, // 3181220924
		{ &Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardPlayerRankPoint, "GetLeaderboardPlayerRankPoint" }, // 4279830269
		{ &Z_Construct_UFunction_UELLeaderboardUserStats_GetLeaderboardSSRankPoint, "GetLeaderboardSSRankPoint" }, // 344284325
		{ &Z_Construct_UFunction_UELLeaderboardUserStats_GetStat, "GetStat" }, // 2766969793
		{ &Z_Construct_UFunction_UELLeaderboardUserStats_GetUserSeasonStats, "GetUserSeasonStats" }, // 77008198
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardUserStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELLeaderboardUserStats.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELLeaderboardUserStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardUserStats" },
		{ "ModuleRelativePath", "Public/ELLeaderboardUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboardUserStats, ProductUserID), METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_ProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardUserStats" },
		{ "ModuleRelativePath", "Public/ELLeaderboardUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboardUserStats, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_SeasonStatsMap_ValueProp = { "SeasonStatsMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UELLeaderboardUserSeasonStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_SeasonStatsMap_Key_KeyProp = { "SeasonStatsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_SeasonStatsMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardUserStats" },
		{ "ModuleRelativePath", "Public/ELLeaderboardUserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_SeasonStatsMap = { "SeasonStatsMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboardUserStats, SeasonStatsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_SeasonStatsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_SeasonStatsMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELLeaderboardUserStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_SeasonStatsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_SeasonStatsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardUserStats_Statics::NewProp_SeasonStatsMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELLeaderboardUserStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELLeaderboardUserStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELLeaderboardUserStats_Statics::ClassParams = {
		&UELLeaderboardUserStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELLeaderboardUserStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardUserStats_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardUserStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardUserStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELLeaderboardUserStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELLeaderboardUserStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELLeaderboardUserStats, 873780448);
	template<> ABP_200508_API UClass* StaticClass<UELLeaderboardUserStats>()
	{
		return UELLeaderboardUserStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELLeaderboardUserStats(Z_Construct_UClass_UELLeaderboardUserStats, &UELLeaderboardUserStats::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELLeaderboardUserStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELLeaderboardUserStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
