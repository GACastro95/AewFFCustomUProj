// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELMatchRecordsTeamInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchRecordsTeamInfo() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FELMatchRecordsTeamInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELMatchRecordsTeamInfo"), sizeof(FELMatchRecordsTeamInfo), Get_Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELMatchRecordsTeamInfo>()
{
	return FELMatchRecordsTeamInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMatchRecordsTeamInfo(FELMatchRecordsTeamInfo::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELMatchRecordsTeamInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsTeamInfo
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsTeamInfo()
	{
		UScriptStruct::DeferCppStructOps<FELMatchRecordsTeamInfo>(FName(TEXT("ELMatchRecordsTeamInfo")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsTeamInfo;
	struct Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WresterID_0_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WresterID_0_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WresterID_0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID_0;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WresterID_1_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WresterID_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WresterID_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID_1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchResultInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MatchResultInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastEnterDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastEnterDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WiningStreak_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WiningStreak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterCountOnlyHostPad_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EnterCountOnlyHostPad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsTeamInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMatchRecordsTeamInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WresterID_0_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WresterID_0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsTeamInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsTeamInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WresterID_0 = { "WresterID_0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsTeamInfo, WresterID_0), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WresterID_0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WresterID_0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_UID_0_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsTeamInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsTeamInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_UID_0 = { "UID_0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsTeamInfo, UID_0), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_UID_0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_UID_0_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WresterID_1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WresterID_1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsTeamInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsTeamInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WresterID_1 = { "WresterID_1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsTeamInfo, WresterID_1), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WresterID_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WresterID_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_UID_1_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsTeamInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsTeamInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_UID_1 = { "UID_1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsTeamInfo, UID_1), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_UID_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_UID_1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_MatchResultInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsTeamInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsTeamInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_MatchResultInfo = { "MatchResultInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsTeamInfo, MatchResultInfo), Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_MatchResultInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_MatchResultInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_LastEnterDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsTeamInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsTeamInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_LastEnterDate = { "LastEnterDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsTeamInfo, LastEnterDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_LastEnterDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_LastEnterDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WiningStreak_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsTeamInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsTeamInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WiningStreak = { "WiningStreak", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsTeamInfo, WiningStreak), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WiningStreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WiningStreak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_EnterCountOnlyHostPad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsTeamInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsTeamInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_EnterCountOnlyHostPad = { "EnterCountOnlyHostPad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsTeamInfo, EnterCountOnlyHostPad), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_EnterCountOnlyHostPad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_EnterCountOnlyHostPad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WresterID_0_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WresterID_0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_UID_0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WresterID_1_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WresterID_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_UID_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_MatchResultInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_LastEnterDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_WiningStreak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::NewProp_EnterCountOnlyHostPad,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELMatchRecordsTeamInfo",
		sizeof(FELMatchRecordsTeamInfo),
		alignof(FELMatchRecordsTeamInfo),
		Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMatchRecordsTeamInfo"), sizeof(FELMatchRecordsTeamInfo), Get_Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsTeamInfo_Hash() { return 3097482149U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
