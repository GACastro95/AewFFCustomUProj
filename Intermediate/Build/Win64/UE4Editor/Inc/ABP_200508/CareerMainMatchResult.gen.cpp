// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerMainMatchResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerMainMatchResult() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerMainMatchResult();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioPart();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerMatchCardCore();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References
class UScriptStruct* FCareerMainMatchResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerMainMatchResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerMainMatchResult, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerMainMatchResult"), sizeof(FCareerMainMatchResult), Get_Z_Construct_UScriptStruct_FCareerMainMatchResult_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerMainMatchResult>()
{
	return FCareerMainMatchResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerMainMatchResult(FCareerMainMatchResult::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerMainMatchResult"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMainMatchResult
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMainMatchResult()
	{
		UScriptStruct::DeferCppStructOps<FCareerMainMatchResult>(FName(TEXT("CareerMainMatchResult")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerMainMatchResult;
	struct Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScenarioPart_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScenarioPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScenarioPart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchCard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MatchCard;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Winner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Winner_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Winner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Loser_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loser_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Loser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Win_MetaData[];
#endif
		static void NewProp_Win_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Win;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerMainMatchResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerMainMatchResult>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_ScenarioPart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_ScenarioPart_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMainMatchResult" },
		{ "ModuleRelativePath", "Public/CareerMainMatchResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_ScenarioPart = { "ScenarioPart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMainMatchResult, ScenarioPart), Z_Construct_UEnum_ABP_200508_ECareerScenarioPart, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_ScenarioPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_ScenarioPart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_MatchCard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMainMatchResult" },
		{ "ModuleRelativePath", "Public/CareerMainMatchResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_MatchCard = { "MatchCard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMainMatchResult, MatchCard), Z_Construct_UScriptStruct_FCareerMatchCardCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_MatchCard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_MatchCard_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Winner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Winner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMainMatchResult" },
		{ "ModuleRelativePath", "Public/CareerMainMatchResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Winner = { "Winner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMainMatchResult, Winner), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Winner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Winner_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Loser_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Loser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMainMatchResult" },
		{ "ModuleRelativePath", "Public/CareerMainMatchResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Loser = { "Loser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMainMatchResult, Loser), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Loser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Loser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Win_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMainMatchResult" },
		{ "ModuleRelativePath", "Public/CareerMainMatchResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Win_SetBit(void* Obj)
	{
		((FCareerMainMatchResult*)Obj)->Win = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Win = { "Win", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMainMatchResult), &Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Win_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Win_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Win_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_ScenarioPart_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_ScenarioPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_MatchCard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Winner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Winner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Loser_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Loser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::NewProp_Win,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerMainMatchResult",
		sizeof(FCareerMainMatchResult),
		alignof(FCareerMainMatchResult),
		Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerMainMatchResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerMainMatchResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerMainMatchResult"), sizeof(FCareerMainMatchResult), Get_Z_Construct_UScriptStruct_FCareerMainMatchResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerMainMatchResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerMainMatchResult_Hash() { return 2651957133U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
