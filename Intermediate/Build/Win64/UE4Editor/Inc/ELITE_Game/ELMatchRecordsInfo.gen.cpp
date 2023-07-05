// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELMatchRecordsInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchRecordsInfo() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo();
// End Cross Module References
class UScriptStruct* FELMatchRecordsInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMatchRecordsInfo, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELMatchRecordsInfo"), sizeof(FELMatchRecordsInfo), Get_Z_Construct_UScriptStruct_FELMatchRecordsInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELMatchRecordsInfo>()
{
	return FELMatchRecordsInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMatchRecordsInfo(FELMatchRecordsInfo::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELMatchRecordsInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsInfo
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsInfo()
	{
		UScriptStruct::DeferCppStructOps<FELMatchRecordsInfo>(FName(TEXT("ELMatchRecordsInfo")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsInfo;
	struct Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WrestlerInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TeamInfos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMatchRecordsInfo>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_WrestlerInfos_Inner = { "WrestlerInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_WrestlerInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_WrestlerInfos = { "WrestlerInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsInfo, WrestlerInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_WrestlerInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_WrestlerInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_TeamInfos_Inner = { "TeamInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_TeamInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_TeamInfos = { "TeamInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsInfo, TeamInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_TeamInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_TeamInfos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_ProfileInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_ProfileInfo = { "ProfileInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsInfo, ProfileInfo), Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_ProfileInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_ProfileInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_WrestlerInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_WrestlerInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_TeamInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_TeamInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::NewProp_ProfileInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELMatchRecordsInfo",
		sizeof(FELMatchRecordsInfo),
		alignof(FELMatchRecordsInfo),
		Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMatchRecordsInfo"), sizeof(FELMatchRecordsInfo), Get_Z_Construct_UScriptStruct_FELMatchRecordsInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMatchRecordsInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsInfo_Hash() { return 1422528212U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
