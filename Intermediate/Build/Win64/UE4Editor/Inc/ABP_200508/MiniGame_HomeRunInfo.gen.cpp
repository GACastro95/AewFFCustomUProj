// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGame_HomeRunInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGame_HomeRunInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameDebugHitBallFlags();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameDebugAIBatterFlags();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameDebugPitcherFlags();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameDebugBatType();
// End Cross Module References
class UScriptStruct* FMiniGame_HomeRunInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGame_HomeRunInfo"), sizeof(FMiniGame_HomeRunInfo), Get_Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGame_HomeRunInfo>()
{
	return FMiniGame_HomeRunInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGame_HomeRunInfo(FMiniGame_HomeRunInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGame_HomeRunInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_HomeRunInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_HomeRunInfo()
	{
		UScriptStruct::DeferCppStructOps<FMiniGame_HomeRunInfo>(FName(TEXT("MiniGame_HomeRunInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGame_HomeRunInfo;
	struct Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsRouletteMaxFixed_MetaData[];
#endif
		static void NewProp_bIsRouletteMaxFixed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsRouletteMaxFixed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SplineIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThatBatterScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThatBatterScore;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AllBatterScoreList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllBatterScoreList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllBatterScoreList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllBatterScoreEnable_MetaData[];
#endif
		static void NewProp_bAllBatterScoreEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllBatterScoreEnable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitFlag_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HitFlag;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BatterAIFlag_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatterAIFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BatterAIFlag;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PitcherAIFlag_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitcherAIFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PitcherAIFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAINotSupport_MetaData[];
#endif
		static void NewProp_bAINotSupport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAINotSupport;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BatType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BatType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGame_HomeRunInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGame_HomeRunInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bIsRouletteMaxFixed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_HomeRunInfo" },
		{ "ModuleRelativePath", "Public/MiniGame_HomeRunInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bIsRouletteMaxFixed_SetBit(void* Obj)
	{
		((FMiniGame_HomeRunInfo*)Obj)->bIsRouletteMaxFixed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bIsRouletteMaxFixed = { "bIsRouletteMaxFixed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_HomeRunInfo), &Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bIsRouletteMaxFixed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bIsRouletteMaxFixed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bIsRouletteMaxFixed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_SplineIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_HomeRunInfo" },
		{ "ModuleRelativePath", "Public/MiniGame_HomeRunInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_SplineIndex = { "SplineIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGame_HomeRunInfo, SplineIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_SplineIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_SplineIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_ThatBatterScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_HomeRunInfo" },
		{ "ModuleRelativePath", "Public/MiniGame_HomeRunInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_ThatBatterScore = { "ThatBatterScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGame_HomeRunInfo, ThatBatterScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_ThatBatterScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_ThatBatterScore_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_AllBatterScoreList_Inner = { "AllBatterScoreList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_AllBatterScoreList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_HomeRunInfo" },
		{ "ModuleRelativePath", "Public/MiniGame_HomeRunInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_AllBatterScoreList = { "AllBatterScoreList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGame_HomeRunInfo, AllBatterScoreList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_AllBatterScoreList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_AllBatterScoreList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bAllBatterScoreEnable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_HomeRunInfo" },
		{ "ModuleRelativePath", "Public/MiniGame_HomeRunInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bAllBatterScoreEnable_SetBit(void* Obj)
	{
		((FMiniGame_HomeRunInfo*)Obj)->bAllBatterScoreEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bAllBatterScoreEnable = { "bAllBatterScoreEnable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_HomeRunInfo), &Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bAllBatterScoreEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bAllBatterScoreEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bAllBatterScoreEnable_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_HitFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_HitFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_HomeRunInfo" },
		{ "ModuleRelativePath", "Public/MiniGame_HomeRunInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_HitFlag = { "HitFlag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGame_HomeRunInfo, HitFlag), Z_Construct_UEnum_ABP_200508_EMiniGameDebugHitBallFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_HitFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_HitFlag_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_BatterAIFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_BatterAIFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_HomeRunInfo" },
		{ "ModuleRelativePath", "Public/MiniGame_HomeRunInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_BatterAIFlag = { "BatterAIFlag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGame_HomeRunInfo, BatterAIFlag), Z_Construct_UEnum_ABP_200508_EMiniGameDebugAIBatterFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_BatterAIFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_BatterAIFlag_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_PitcherAIFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_PitcherAIFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_HomeRunInfo" },
		{ "ModuleRelativePath", "Public/MiniGame_HomeRunInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_PitcherAIFlag = { "PitcherAIFlag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGame_HomeRunInfo, PitcherAIFlag), Z_Construct_UEnum_ABP_200508_EMiniGameDebugPitcherFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_PitcherAIFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_PitcherAIFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bAINotSupport_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_HomeRunInfo" },
		{ "ModuleRelativePath", "Public/MiniGame_HomeRunInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bAINotSupport_SetBit(void* Obj)
	{
		((FMiniGame_HomeRunInfo*)Obj)->bAINotSupport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bAINotSupport = { "bAINotSupport", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMiniGame_HomeRunInfo), &Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bAINotSupport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bAINotSupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bAINotSupport_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_BatType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_BatType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGame_HomeRunInfo" },
		{ "ModuleRelativePath", "Public/MiniGame_HomeRunInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_BatType = { "BatType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGame_HomeRunInfo, BatType), Z_Construct_UEnum_ABP_200508_EMiniGameDebugBatType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_BatType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_BatType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bIsRouletteMaxFixed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_SplineIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_ThatBatterScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_AllBatterScoreList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_AllBatterScoreList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bAllBatterScoreEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_HitFlag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_HitFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_BatterAIFlag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_BatterAIFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_PitcherAIFlag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_PitcherAIFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_bAINotSupport,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_BatType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::NewProp_BatType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MiniGame_HomeRunInfo",
		sizeof(FMiniGame_HomeRunInfo),
		alignof(FMiniGame_HomeRunInfo),
		Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGame_HomeRunInfo"), sizeof(FMiniGame_HomeRunInfo), Get_Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGame_HomeRunInfo_Hash() { return 2558099766U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
