// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELOnlineRankCalculator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELOnlineRankCalculator() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELOnlineRankCalculator_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELOnlineRankCalculator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineRank();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerRankParam();
// End Cross Module References
	DEFINE_FUNCTION(UELOnlineRankCalculator::execCalcAddPoint)
	{
		P_GET_UBOOL(Z_Param_Win);
		P_GET_UBOOL(Z_Param_Lose);
		P_GET_PROPERTY(FIntProperty,Z_Param_WinStreak);
		P_GET_PROPERTY(FIntProperty,Z_Param_LoseStreak);
		P_GET_PROPERTY(FIntProperty,Z_Param_RankDiff);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CalcAddPoint(Z_Param_Win,Z_Param_Lose,Z_Param_WinStreak,Z_Param_LoseStreak,Z_Param_RankDiff);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOnlineRankCalculator::execCalcRank)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Rank);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RankPoint);
		P_GET_PROPERTY(FIntProperty,Z_Param_AddRankPoint);
		P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardRank);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CalcRank(Z_Param_Out_Rank,Z_Param_Out_RankPoint,Z_Param_AddRankPoint,Z_Param_LeaderboardRank);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOnlineRankCalculator::execClampRankPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RankPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ClampRankPoint(Z_Param_RankPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOnlineRankCalculator::execGetRankFromRankPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RankPoint);
		P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardRank);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRankFromRankPoint(Z_Param_RankPoint,Z_Param_LeaderboardRank);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOnlineRankCalculator::execGetRankGroupName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Rank);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRankGroupName(Z_Param_Rank);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOnlineRankCalculator::execGetRankName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Rank);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRankName(Z_Param_Rank);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOnlineRankCalculator::execGetRankPointRatio)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Rank);
		P_GET_PROPERTY(FIntProperty,Z_Param_RankPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRankPointRatio(Z_Param_Rank,Z_Param_RankPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOnlineRankCalculator::execGetSSPlayerRankFromPlayerRankPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RankPoint);
		P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardRank);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSSPlayerRankFromPlayerRankPoint(Z_Param_RankPoint,Z_Param_LeaderboardRank);
		P_NATIVE_END;
	}
	void UELOnlineRankCalculator::StaticRegisterNativesUELOnlineRankCalculator()
	{
		UClass* Class = UELOnlineRankCalculator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalcAddPoint", &UELOnlineRankCalculator::execCalcAddPoint },
			{ "CalcRank", &UELOnlineRankCalculator::execCalcRank },
			{ "ClampRankPoint", &UELOnlineRankCalculator::execClampRankPoint },
			{ "GetRankFromRankPoint", &UELOnlineRankCalculator::execGetRankFromRankPoint },
			{ "GetRankGroupName", &UELOnlineRankCalculator::execGetRankGroupName },
			{ "GetRankName", &UELOnlineRankCalculator::execGetRankName },
			{ "GetRankPointRatio", &UELOnlineRankCalculator::execGetRankPointRatio },
			{ "GetSSPlayerRankFromPlayerRankPoint", &UELOnlineRankCalculator::execGetSSPlayerRankFromPlayerRankPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics
	{
		struct ELOnlineRankCalculator_eventCalcAddPoint_Parms
		{
			bool Win;
			bool Lose;
			int32 WinStreak;
			int32 LoseStreak;
			int32 RankDiff;
			int32 ReturnValue;
		};
		static void NewProp_Win_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Win;
		static void NewProp_Lose_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Lose;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinStreak;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoseStreak;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankDiff;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::NewProp_Win_SetBit(void* Obj)
	{
		((ELOnlineRankCalculator_eventCalcAddPoint_Parms*)Obj)->Win = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::NewProp_Win = { "Win", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOnlineRankCalculator_eventCalcAddPoint_Parms), &Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::NewProp_Win_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::NewProp_Lose_SetBit(void* Obj)
	{
		((ELOnlineRankCalculator_eventCalcAddPoint_Parms*)Obj)->Lose = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::NewProp_Lose = { "Lose", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOnlineRankCalculator_eventCalcAddPoint_Parms), &Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::NewProp_Lose_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::NewProp_WinStreak = { "WinStreak", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventCalcAddPoint_Parms, WinStreak), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::NewProp_LoseStreak = { "LoseStreak", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventCalcAddPoint_Parms, LoseStreak), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::NewProp_RankDiff = { "RankDiff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventCalcAddPoint_Parms, RankDiff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventCalcAddPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::NewProp_Win,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::NewProp_Lose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::NewProp_WinStreak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::NewProp_LoseStreak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::NewProp_RankDiff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineRankCalculator, nullptr, "CalcAddPoint", nullptr, nullptr, sizeof(ELOnlineRankCalculator_eventCalcAddPoint_Parms), Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics
	{
		struct ELOnlineRankCalculator_eventCalcRank_Parms
		{
			int32 Rank;
			int32 RankPoint;
			int32 AddRankPoint;
			int32 LeaderboardRank;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddRankPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LeaderboardRank;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventCalcRank_Parms, Rank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::NewProp_RankPoint = { "RankPoint", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventCalcRank_Parms, RankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::NewProp_AddRankPoint = { "AddRankPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventCalcRank_Parms, AddRankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::NewProp_LeaderboardRank = { "LeaderboardRank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventCalcRank_Parms, LeaderboardRank), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOnlineRankCalculator_eventCalcRank_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOnlineRankCalculator_eventCalcRank_Parms), &Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::NewProp_RankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::NewProp_AddRankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::NewProp_LeaderboardRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineRankCalculator, nullptr, "CalcRank", nullptr, nullptr, sizeof(ELOnlineRankCalculator_eventCalcRank_Parms), Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOnlineRankCalculator_ClampRankPoint_Statics
	{
		struct ELOnlineRankCalculator_eventClampRankPoint_Parms
		{
			int32 RankPoint;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_ClampRankPoint_Statics::NewProp_RankPoint = { "RankPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventClampRankPoint_Parms, RankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_ClampRankPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventClampRankPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineRankCalculator_ClampRankPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_ClampRankPoint_Statics::NewProp_RankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_ClampRankPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineRankCalculator_ClampRankPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineRankCalculator_ClampRankPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineRankCalculator, nullptr, "ClampRankPoint", nullptr, nullptr, sizeof(ELOnlineRankCalculator_eventClampRankPoint_Parms), Z_Construct_UFunction_UELOnlineRankCalculator_ClampRankPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineRankCalculator_ClampRankPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineRankCalculator_ClampRankPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineRankCalculator_ClampRankPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineRankCalculator_ClampRankPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineRankCalculator_ClampRankPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOnlineRankCalculator_GetRankFromRankPoint_Statics
	{
		struct ELOnlineRankCalculator_eventGetRankFromRankPoint_Parms
		{
			int32 RankPoint;
			int32 LeaderboardRank;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LeaderboardRank;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_GetRankFromRankPoint_Statics::NewProp_RankPoint = { "RankPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventGetRankFromRankPoint_Parms, RankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_GetRankFromRankPoint_Statics::NewProp_LeaderboardRank = { "LeaderboardRank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventGetRankFromRankPoint_Parms, LeaderboardRank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_GetRankFromRankPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventGetRankFromRankPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineRankCalculator_GetRankFromRankPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_GetRankFromRankPoint_Statics::NewProp_RankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_GetRankFromRankPoint_Statics::NewProp_LeaderboardRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_GetRankFromRankPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineRankCalculator_GetRankFromRankPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineRankCalculator_GetRankFromRankPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineRankCalculator, nullptr, "GetRankFromRankPoint", nullptr, nullptr, sizeof(ELOnlineRankCalculator_eventGetRankFromRankPoint_Parms), Z_Construct_UFunction_UELOnlineRankCalculator_GetRankFromRankPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineRankCalculator_GetRankFromRankPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineRankCalculator_GetRankFromRankPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineRankCalculator_GetRankFromRankPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineRankCalculator_GetRankFromRankPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineRankCalculator_GetRankFromRankPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOnlineRankCalculator_GetRankGroupName_Statics
	{
		struct ELOnlineRankCalculator_eventGetRankGroupName_Parms
		{
			int32 Rank;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_GetRankGroupName_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventGetRankGroupName_Parms, Rank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_GetRankGroupName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventGetRankGroupName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineRankCalculator_GetRankGroupName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_GetRankGroupName_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_GetRankGroupName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineRankCalculator_GetRankGroupName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineRankCalculator_GetRankGroupName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineRankCalculator, nullptr, "GetRankGroupName", nullptr, nullptr, sizeof(ELOnlineRankCalculator_eventGetRankGroupName_Parms), Z_Construct_UFunction_UELOnlineRankCalculator_GetRankGroupName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineRankCalculator_GetRankGroupName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineRankCalculator_GetRankGroupName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineRankCalculator_GetRankGroupName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineRankCalculator_GetRankGroupName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineRankCalculator_GetRankGroupName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOnlineRankCalculator_GetRankName_Statics
	{
		struct ELOnlineRankCalculator_eventGetRankName_Parms
		{
			int32 Rank;
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_GetRankName_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventGetRankName_Parms, Rank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_GetRankName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventGetRankName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineRankCalculator_GetRankName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_GetRankName_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_GetRankName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineRankCalculator_GetRankName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineRankCalculator_GetRankName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineRankCalculator, nullptr, "GetRankName", nullptr, nullptr, sizeof(ELOnlineRankCalculator_eventGetRankName_Parms), Z_Construct_UFunction_UELOnlineRankCalculator_GetRankName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineRankCalculator_GetRankName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineRankCalculator_GetRankName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineRankCalculator_GetRankName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineRankCalculator_GetRankName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineRankCalculator_GetRankName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOnlineRankCalculator_GetRankPointRatio_Statics
	{
		struct ELOnlineRankCalculator_eventGetRankPointRatio_Parms
		{
			int32 Rank;
			int32 RankPoint;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankPoint;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_GetRankPointRatio_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventGetRankPointRatio_Parms, Rank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_GetRankPointRatio_Statics::NewProp_RankPoint = { "RankPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventGetRankPointRatio_Parms, RankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_GetRankPointRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventGetRankPointRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineRankCalculator_GetRankPointRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_GetRankPointRatio_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_GetRankPointRatio_Statics::NewProp_RankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_GetRankPointRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineRankCalculator_GetRankPointRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineRankCalculator_GetRankPointRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineRankCalculator, nullptr, "GetRankPointRatio", nullptr, nullptr, sizeof(ELOnlineRankCalculator_eventGetRankPointRatio_Parms), Z_Construct_UFunction_UELOnlineRankCalculator_GetRankPointRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineRankCalculator_GetRankPointRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineRankCalculator_GetRankPointRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineRankCalculator_GetRankPointRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineRankCalculator_GetRankPointRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineRankCalculator_GetRankPointRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOnlineRankCalculator_GetSSPlayerRankFromPlayerRankPoint_Statics
	{
		struct ELOnlineRankCalculator_eventGetSSPlayerRankFromPlayerRankPoint_Parms
		{
			int32 RankPoint;
			int32 LeaderboardRank;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LeaderboardRank;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_GetSSPlayerRankFromPlayerRankPoint_Statics::NewProp_RankPoint = { "RankPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventGetSSPlayerRankFromPlayerRankPoint_Parms, RankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_GetSSPlayerRankFromPlayerRankPoint_Statics::NewProp_LeaderboardRank = { "LeaderboardRank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventGetSSPlayerRankFromPlayerRankPoint_Parms, LeaderboardRank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOnlineRankCalculator_GetSSPlayerRankFromPlayerRankPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOnlineRankCalculator_eventGetSSPlayerRankFromPlayerRankPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOnlineRankCalculator_GetSSPlayerRankFromPlayerRankPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_GetSSPlayerRankFromPlayerRankPoint_Statics::NewProp_RankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_GetSSPlayerRankFromPlayerRankPoint_Statics::NewProp_LeaderboardRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOnlineRankCalculator_GetSSPlayerRankFromPlayerRankPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOnlineRankCalculator_GetSSPlayerRankFromPlayerRankPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOnlineRankCalculator_GetSSPlayerRankFromPlayerRankPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOnlineRankCalculator, nullptr, "GetSSPlayerRankFromPlayerRankPoint", nullptr, nullptr, sizeof(ELOnlineRankCalculator_eventGetSSPlayerRankFromPlayerRankPoint_Parms), Z_Construct_UFunction_UELOnlineRankCalculator_GetSSPlayerRankFromPlayerRankPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineRankCalculator_GetSSPlayerRankFromPlayerRankPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOnlineRankCalculator_GetSSPlayerRankFromPlayerRankPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOnlineRankCalculator_GetSSPlayerRankFromPlayerRankPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOnlineRankCalculator_GetSSPlayerRankFromPlayerRankPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOnlineRankCalculator_GetSSPlayerRankFromPlayerRankPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELOnlineRankCalculator_NoRegister()
	{
		return UELOnlineRankCalculator::StaticClass();
	}
	struct Z_Construct_UClass_UELOnlineRankCalculator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRankTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultRankTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RankArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RankArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SSPlayerRankTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSPlayerRankTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SSPlayerRankTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LosePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LosePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinStreakCoeff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WinStreakCoeff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinStreakCoeff2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WinStreakCoeff2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoseStreakCoeff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoseStreakCoeff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoseStreakCoeff2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LoseStreakCoeff2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankDiffWinBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankDiffWinBonus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankDiffLosePenalty_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankDiffLosePenalty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardRankMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LeaderboardRankMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankPointMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankPointMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELOnlineRankCalculator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELOnlineRankCalculator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELOnlineRankCalculator_CalcAddPoint, "CalcAddPoint" }, // 2189538136
		{ &Z_Construct_UFunction_UELOnlineRankCalculator_CalcRank, "CalcRank" }, // 4226670084
		{ &Z_Construct_UFunction_UELOnlineRankCalculator_ClampRankPoint, "ClampRankPoint" }, // 2621119960
		{ &Z_Construct_UFunction_UELOnlineRankCalculator_GetRankFromRankPoint, "GetRankFromRankPoint" }, // 1896162439
		{ &Z_Construct_UFunction_UELOnlineRankCalculator_GetRankGroupName, "GetRankGroupName" }, // 1170242265
		{ &Z_Construct_UFunction_UELOnlineRankCalculator_GetRankName, "GetRankName" }, // 2478486524
		{ &Z_Construct_UFunction_UELOnlineRankCalculator_GetRankPointRatio, "GetRankPointRatio" }, // 313939246
		{ &Z_Construct_UFunction_UELOnlineRankCalculator_GetSSPlayerRankFromPlayerRankPoint, "GetSSPlayerRankFromPlayerRankPoint" }, // 3929991774
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineRankCalculator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELOnlineRankCalculator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_DefaultRankTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOnlineRankCalculator" },
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_DefaultRankTable = { "DefaultRankTable", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOnlineRankCalculator, DefaultRankTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_DefaultRankTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_DefaultRankTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankArray_Inner = { "RankArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOnlineRank, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOnlineRankCalculator" },
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankArray = { "RankArray", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOnlineRankCalculator, RankArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_SSPlayerRankTable_Inner = { "SSPlayerRankTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSPlayerRankParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_SSPlayerRankTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOnlineRankCalculator" },
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_SSPlayerRankTable = { "SSPlayerRankTable", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOnlineRankCalculator, SSPlayerRankTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_SSPlayerRankTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_SSPlayerRankTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_WinPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOnlineRankCalculator" },
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_WinPoint = { "WinPoint", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOnlineRankCalculator, WinPoint), METADATA_PARAMS(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_WinPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_WinPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LosePoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOnlineRankCalculator" },
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LosePoint = { "LosePoint", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOnlineRankCalculator, LosePoint), METADATA_PARAMS(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LosePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LosePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_WinStreakCoeff_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOnlineRankCalculator" },
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_WinStreakCoeff = { "WinStreakCoeff", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOnlineRankCalculator, WinStreakCoeff), METADATA_PARAMS(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_WinStreakCoeff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_WinStreakCoeff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_WinStreakCoeff2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOnlineRankCalculator" },
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_WinStreakCoeff2 = { "WinStreakCoeff2", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOnlineRankCalculator, WinStreakCoeff2), METADATA_PARAMS(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_WinStreakCoeff2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_WinStreakCoeff2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LoseStreakCoeff_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOnlineRankCalculator" },
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LoseStreakCoeff = { "LoseStreakCoeff", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOnlineRankCalculator, LoseStreakCoeff), METADATA_PARAMS(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LoseStreakCoeff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LoseStreakCoeff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LoseStreakCoeff2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOnlineRankCalculator" },
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LoseStreakCoeff2 = { "LoseStreakCoeff2", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOnlineRankCalculator, LoseStreakCoeff2), METADATA_PARAMS(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LoseStreakCoeff2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LoseStreakCoeff2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankDiffWinBonus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOnlineRankCalculator" },
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankDiffWinBonus = { "RankDiffWinBonus", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOnlineRankCalculator, RankDiffWinBonus), METADATA_PARAMS(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankDiffWinBonus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankDiffWinBonus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankDiffLosePenalty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOnlineRankCalculator" },
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankDiffLosePenalty = { "RankDiffLosePenalty", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOnlineRankCalculator, RankDiffLosePenalty), METADATA_PARAMS(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankDiffLosePenalty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankDiffLosePenalty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LeaderboardRankMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOnlineRankCalculator" },
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LeaderboardRankMax = { "LeaderboardRankMax", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOnlineRankCalculator, LeaderboardRankMax), METADATA_PARAMS(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LeaderboardRankMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LeaderboardRankMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankPointMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOnlineRankCalculator" },
		{ "ModuleRelativePath", "Public/ELOnlineRankCalculator.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankPointMax = { "RankPointMax", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOnlineRankCalculator, RankPointMax), METADATA_PARAMS(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankPointMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankPointMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELOnlineRankCalculator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_DefaultRankTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_SSPlayerRankTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_SSPlayerRankTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_WinPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LosePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_WinStreakCoeff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_WinStreakCoeff2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LoseStreakCoeff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LoseStreakCoeff2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankDiffWinBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankDiffLosePenalty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_LeaderboardRankMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOnlineRankCalculator_Statics::NewProp_RankPointMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELOnlineRankCalculator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELOnlineRankCalculator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELOnlineRankCalculator_Statics::ClassParams = {
		&UELOnlineRankCalculator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELOnlineRankCalculator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineRankCalculator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELOnlineRankCalculator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELOnlineRankCalculator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELOnlineRankCalculator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELOnlineRankCalculator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELOnlineRankCalculator, 4025834247);
	template<> ABP_200508_API UClass* StaticClass<UELOnlineRankCalculator>()
	{
		return UELOnlineRankCalculator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELOnlineRankCalculator(Z_Construct_UClass_UELOnlineRankCalculator, &UELOnlineRankCalculator::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELOnlineRankCalculator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELOnlineRankCalculator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
