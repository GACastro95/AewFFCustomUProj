// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELMatchResultParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchResultParam() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchResultParam();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References
class UScriptStruct* FELMatchResultParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELMatchResultParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMatchResultParam, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELMatchResultParam"), sizeof(FELMatchResultParam), Get_Z_Construct_UScriptStruct_FELMatchResultParam_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELMatchResultParam>()
{
	return FELMatchResultParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMatchResultParam(FELMatchResultParam::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELMatchResultParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchResultParam
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchResultParam()
	{
		UScriptStruct::DeferCppStructOps<FELMatchResultParam>(FName(TEXT("ELMatchResultParam")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchResultParam;
	struct Z_Construct_UScriptStruct_FELMatchResultParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinTeamNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinTeamNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchResultParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMatchResultParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMatchResultParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_Winner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_Winner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchResultParam" },
		{ "ModuleRelativePath", "Public/ELMatchResultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_Winner = { "Winner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchResultParam, Winner), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_Winner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_Winner_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_Loser_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_Loser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchResultParam" },
		{ "ModuleRelativePath", "Public/ELMatchResultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_Loser = { "Loser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchResultParam, Loser), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_Loser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_Loser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_WinTeamNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchResultParam" },
		{ "ModuleRelativePath", "Public/ELMatchResultParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_WinTeamNo = { "WinTeamNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchResultParam, WinTeamNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_WinTeamNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_WinTeamNo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMatchResultParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_Winner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_Winner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_Loser_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_Loser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchResultParam_Statics::NewProp_WinTeamNo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMatchResultParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELMatchResultParam",
		sizeof(FELMatchResultParam),
		alignof(FELMatchResultParam),
		Z_Construct_UScriptStruct_FELMatchResultParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchResultParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchResultParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchResultParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMatchResultParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMatchResultParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMatchResultParam"), sizeof(FELMatchResultParam), Get_Z_Construct_UScriptStruct_FELMatchResultParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMatchResultParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMatchResultParam_Hash() { return 4022502481U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
