// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELLeaderboardUserSeasonStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELLeaderboardUserSeasonStats() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboardUserSeasonStats_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELLeaderboardUserSeasonStats();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileColorParam();
// End Cross Module References
	DEFINE_FUNCTION(UELLeaderboardUserSeasonStats::execFindStat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindStat(Z_Param_StatName,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserSeasonStats::execGetLastQueryDateTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetLastQueryDateTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserSeasonStats::execGetLastRequestDateTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetLastRequestDateTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserSeasonStats::execGetLeaderboardBattlePassPoint)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BattlePassPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardBattlePassPoint(Z_Param_Out_BattlePassPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserSeasonStats::execGetLeaderboardPlayerBadges)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Badges);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardPlayerBadges(Z_Param_Out_Badges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserSeasonStats::execGetLeaderboardPlayerExternalAccountId)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AccountId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardPlayerExternalAccountId(Z_Param_Out_AccountId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserSeasonStats::execGetLeaderboardPlayerIcon)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayerIcon);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BGIcon);
		P_GET_STRUCT_REF(FUserProfileColorParam,Z_Param_Out_ColorParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardPlayerIcon(Z_Param_Out_PlayerIcon,Z_Param_Out_BGIcon,Z_Param_Out_ColorParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserSeasonStats::execGetLeaderboardPlayerRank)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayerRank);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayerRankPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardPlayerRank(Z_Param_Out_PlayerRank,Z_Param_Out_PlayerRankPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserSeasonStats::execGetLeaderboardPlayerRankPoint)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayerRankPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardPlayerRankPoint(Z_Param_Out_PlayerRankPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserSeasonStats::execGetLeaderboardSSRankPoint)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SSRankPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLeaderboardSSRankPoint(Z_Param_Out_SSRankPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserSeasonStats::execGetStat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
		P_GET_PROPERTY(FIntProperty,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetStat(Z_Param_StatName,Z_Param_DefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserSeasonStats::execUpdateQueryDateTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateQueryDateTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELLeaderboardUserSeasonStats::execUpdateRequestDateTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRequestDateTime();
		P_NATIVE_END;
	}
	void UELLeaderboardUserSeasonStats::StaticRegisterNativesUELLeaderboardUserSeasonStats()
	{
		UClass* Class = UELLeaderboardUserSeasonStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindStat", &UELLeaderboardUserSeasonStats::execFindStat },
			{ "GetLastQueryDateTime", &UELLeaderboardUserSeasonStats::execGetLastQueryDateTime },
			{ "GetLastRequestDateTime", &UELLeaderboardUserSeasonStats::execGetLastRequestDateTime },
			{ "GetLeaderboardBattlePassPoint", &UELLeaderboardUserSeasonStats::execGetLeaderboardBattlePassPoint },
			{ "GetLeaderboardPlayerBadges", &UELLeaderboardUserSeasonStats::execGetLeaderboardPlayerBadges },
			{ "GetLeaderboardPlayerExternalAccountId", &UELLeaderboardUserSeasonStats::execGetLeaderboardPlayerExternalAccountId },
			{ "GetLeaderboardPlayerIcon", &UELLeaderboardUserSeasonStats::execGetLeaderboardPlayerIcon },
			{ "GetLeaderboardPlayerRank", &UELLeaderboardUserSeasonStats::execGetLeaderboardPlayerRank },
			{ "GetLeaderboardPlayerRankPoint", &UELLeaderboardUserSeasonStats::execGetLeaderboardPlayerRankPoint },
			{ "GetLeaderboardSSRankPoint", &UELLeaderboardUserSeasonStats::execGetLeaderboardSSRankPoint },
			{ "GetStat", &UELLeaderboardUserSeasonStats::execGetStat },
			{ "UpdateQueryDateTime", &UELLeaderboardUserSeasonStats::execUpdateQueryDateTime },
			{ "UpdateRequestDateTime", &UELLeaderboardUserSeasonStats::execUpdateRequestDateTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics
	{
		struct ELLeaderboardUserSeasonStats_eventFindStat_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserSeasonStats_eventFindStat_Parms, StatName), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::NewProp_StatName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserSeasonStats_eventFindStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELLeaderboardUserSeasonStats_eventFindStat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELLeaderboardUserSeasonStats_eventFindStat_Parms), &Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserSeasonStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserSeasonStats, nullptr, "FindStat", nullptr, nullptr, sizeof(ELLeaderboardUserSeasonStats_eventFindStat_Parms), Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastQueryDateTime_Statics
	{
		struct ELLeaderboardUserSeasonStats_eventGetLastQueryDateTime_Parms
		{
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastQueryDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserSeasonStats_eventGetLastQueryDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastQueryDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastQueryDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastQueryDateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserSeasonStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastQueryDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserSeasonStats, nullptr, "GetLastQueryDateTime", nullptr, nullptr, sizeof(ELLeaderboardUserSeasonStats_eventGetLastQueryDateTime_Parms), Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastQueryDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastQueryDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastQueryDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastQueryDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastQueryDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastQueryDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastRequestDateTime_Statics
	{
		struct ELLeaderboardUserSeasonStats_eventGetLastRequestDateTime_Parms
		{
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastRequestDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserSeasonStats_eventGetLastRequestDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastRequestDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastRequestDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastRequestDateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserSeasonStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastRequestDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserSeasonStats, nullptr, "GetLastRequestDateTime", nullptr, nullptr, sizeof(ELLeaderboardUserSeasonStats_eventGetLastRequestDateTime_Parms), Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastRequestDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastRequestDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastRequestDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastRequestDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastRequestDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastRequestDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardBattlePassPoint_Statics
	{
		struct ELLeaderboardUserSeasonStats_eventGetLeaderboardBattlePassPoint_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardBattlePassPoint_Statics::NewProp_BattlePassPoint = { "BattlePassPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserSeasonStats_eventGetLeaderboardBattlePassPoint_Parms, BattlePassPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardBattlePassPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardBattlePassPoint_Statics::NewProp_BattlePassPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardBattlePassPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserSeasonStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardBattlePassPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserSeasonStats, nullptr, "GetLeaderboardBattlePassPoint", nullptr, nullptr, sizeof(ELLeaderboardUserSeasonStats_eventGetLeaderboardBattlePassPoint_Parms), Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardBattlePassPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardBattlePassPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardBattlePassPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardBattlePassPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardBattlePassPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardBattlePassPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerBadges_Statics
	{
		struct ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerBadges_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerBadges_Statics::NewProp_Badges_Inner = { "Badges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerBadges_Statics::NewProp_Badges = { "Badges", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerBadges_Parms, Badges), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerBadges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerBadges_Statics::NewProp_Badges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerBadges_Statics::NewProp_Badges,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerBadges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserSeasonStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerBadges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserSeasonStats, nullptr, "GetLeaderboardPlayerBadges", nullptr, nullptr, sizeof(ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerBadges_Parms), Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerBadges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerBadges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerBadges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerBadges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerBadges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerBadges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerExternalAccountId_Statics
	{
		struct ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerExternalAccountId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerExternalAccountId_Statics::NewProp_AccountId = { "AccountId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerExternalAccountId_Parms, AccountId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerExternalAccountId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerExternalAccountId_Statics::NewProp_AccountId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerExternalAccountId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserSeasonStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerExternalAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserSeasonStats, nullptr, "GetLeaderboardPlayerExternalAccountId", nullptr, nullptr, sizeof(ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerExternalAccountId_Parms), Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerExternalAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerExternalAccountId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerExternalAccountId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerExternalAccountId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerExternalAccountId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerExternalAccountId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerIcon_Statics
	{
		struct ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerIcon_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerIcon_Statics::NewProp_PlayerIcon = { "PlayerIcon", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerIcon_Parms, PlayerIcon), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerIcon_Statics::NewProp_BGIcon = { "BGIcon", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerIcon_Parms, BGIcon), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerIcon_Statics::NewProp_ColorParam = { "ColorParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerIcon_Parms, ColorParam), Z_Construct_UScriptStruct_FUserProfileColorParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerIcon_Statics::NewProp_PlayerIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerIcon_Statics::NewProp_BGIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerIcon_Statics::NewProp_ColorParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserSeasonStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserSeasonStats, nullptr, "GetLeaderboardPlayerIcon", nullptr, nullptr, sizeof(ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerIcon_Parms), Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRank_Statics
	{
		struct ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerRank_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRank_Statics::NewProp_PlayerRank = { "PlayerRank", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerRank_Parms, PlayerRank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRank_Statics::NewProp_PlayerRankPoint = { "PlayerRankPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerRank_Parms, PlayerRankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRank_Statics::NewProp_PlayerRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRank_Statics::NewProp_PlayerRankPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserSeasonStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserSeasonStats, nullptr, "GetLeaderboardPlayerRank", nullptr, nullptr, sizeof(ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerRank_Parms), Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRankPoint_Statics
	{
		struct ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerRankPoint_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRankPoint_Statics::NewProp_PlayerRankPoint = { "PlayerRankPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerRankPoint_Parms, PlayerRankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRankPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRankPoint_Statics::NewProp_PlayerRankPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRankPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserSeasonStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRankPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserSeasonStats, nullptr, "GetLeaderboardPlayerRankPoint", nullptr, nullptr, sizeof(ELLeaderboardUserSeasonStats_eventGetLeaderboardPlayerRankPoint_Parms), Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRankPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRankPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRankPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRankPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRankPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRankPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardSSRankPoint_Statics
	{
		struct ELLeaderboardUserSeasonStats_eventGetLeaderboardSSRankPoint_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardSSRankPoint_Statics::NewProp_SSRankPoint = { "SSRankPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserSeasonStats_eventGetLeaderboardSSRankPoint_Parms, SSRankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardSSRankPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardSSRankPoint_Statics::NewProp_SSRankPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardSSRankPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserSeasonStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardSSRankPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserSeasonStats, nullptr, "GetLeaderboardSSRankPoint", nullptr, nullptr, sizeof(ELLeaderboardUserSeasonStats_eventGetLeaderboardSSRankPoint_Parms), Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardSSRankPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardSSRankPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardSSRankPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardSSRankPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardSSRankPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardSSRankPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics
	{
		struct ELLeaderboardUserSeasonStats_eventGetStat_Parms
		{
			FString StatName;
			int32 DefaultValue;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics::NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserSeasonStats_eventGetStat_Parms, StatName), METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics::NewProp_StatName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserSeasonStats_eventGetStat_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELLeaderboardUserSeasonStats_eventGetStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserSeasonStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserSeasonStats, nullptr, "GetStat", nullptr, nullptr, sizeof(ELLeaderboardUserSeasonStats_eventGetStat_Parms), Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserSeasonStats_UpdateQueryDateTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserSeasonStats_UpdateQueryDateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserSeasonStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_UpdateQueryDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserSeasonStats, nullptr, "UpdateQueryDateTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_UpdateQueryDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_UpdateQueryDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserSeasonStats_UpdateQueryDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserSeasonStats_UpdateQueryDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELLeaderboardUserSeasonStats_UpdateRequestDateTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELLeaderboardUserSeasonStats_UpdateRequestDateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELLeaderboardUserSeasonStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELLeaderboardUserSeasonStats_UpdateRequestDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELLeaderboardUserSeasonStats, nullptr, "UpdateRequestDateTime", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_UpdateRequestDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELLeaderboardUserSeasonStats_UpdateRequestDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELLeaderboardUserSeasonStats_UpdateRequestDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELLeaderboardUserSeasonStats_UpdateRequestDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELLeaderboardUserSeasonStats_NoRegister()
	{
		return UELLeaderboardUserSeasonStats::StaticClass();
	}
	struct Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRequestDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastRequestDateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastQueryDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastQueryDateTime;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatsMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatsMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StatsMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELLeaderboardUserSeasonStats_FindStat, "FindStat" }, // 1915913133
		{ &Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastQueryDateTime, "GetLastQueryDateTime" }, // 1094442191
		{ &Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLastRequestDateTime, "GetLastRequestDateTime" }, // 2195550081
		{ &Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardBattlePassPoint, "GetLeaderboardBattlePassPoint" }, // 1934095794
		{ &Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerBadges, "GetLeaderboardPlayerBadges" }, // 851380171
		{ &Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerExternalAccountId, "GetLeaderboardPlayerExternalAccountId" }, // 3961558280
		{ &Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerIcon, "GetLeaderboardPlayerIcon" }, // 4056968955
		{ &Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRank, "GetLeaderboardPlayerRank" }, // 88688998
		{ &Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardPlayerRankPoint, "GetLeaderboardPlayerRankPoint" }, // 1951303016
		{ &Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetLeaderboardSSRankPoint, "GetLeaderboardSSRankPoint" }, // 1152350841
		{ &Z_Construct_UFunction_UELLeaderboardUserSeasonStats_GetStat, "GetStat" }, // 3869731736
		{ &Z_Construct_UFunction_UELLeaderboardUserSeasonStats_UpdateQueryDateTime, "UpdateQueryDateTime" }, // 2326042435
		{ &Z_Construct_UFunction_UELLeaderboardUserSeasonStats_UpdateRequestDateTime, "UpdateRequestDateTime" }, // 125897588
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELLeaderboardUserSeasonStats.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELLeaderboardUserSeasonStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_LastRequestDateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardUserSeasonStats" },
		{ "ModuleRelativePath", "Public/ELLeaderboardUserSeasonStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_LastRequestDateTime = { "LastRequestDateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboardUserSeasonStats, LastRequestDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_LastRequestDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_LastRequestDateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_LastQueryDateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardUserSeasonStats" },
		{ "ModuleRelativePath", "Public/ELLeaderboardUserSeasonStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_LastQueryDateTime = { "LastQueryDateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboardUserSeasonStats, LastQueryDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_LastQueryDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_LastQueryDateTime_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_StatsMap_ValueProp = { "StatsMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_StatsMap_Key_KeyProp = { "StatsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_StatsMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELLeaderboardUserSeasonStats" },
		{ "ModuleRelativePath", "Public/ELLeaderboardUserSeasonStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_StatsMap = { "StatsMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELLeaderboardUserSeasonStats, StatsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_StatsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_StatsMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_LastRequestDateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_LastQueryDateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_StatsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_StatsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::NewProp_StatsMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELLeaderboardUserSeasonStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::ClassParams = {
		&UELLeaderboardUserSeasonStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELLeaderboardUserSeasonStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELLeaderboardUserSeasonStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELLeaderboardUserSeasonStats, 2537582700);
	template<> ABP_200508_API UClass* StaticClass<UELLeaderboardUserSeasonStats>()
	{
		return UELLeaderboardUserSeasonStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELLeaderboardUserSeasonStats(Z_Construct_UClass_UELLeaderboardUserSeasonStats, &UELLeaderboardUserSeasonStats::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELLeaderboardUserSeasonStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELLeaderboardUserSeasonStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
