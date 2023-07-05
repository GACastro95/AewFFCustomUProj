// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELMatchRecordsWrestlerInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchRecordsWrestlerInfo() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FELMatchRecordsWrestlerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELMatchRecordsWrestlerInfo"), sizeof(FELMatchRecordsWrestlerInfo), Get_Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELMatchRecordsWrestlerInfo>()
{
	return FELMatchRecordsWrestlerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMatchRecordsWrestlerInfo(FELMatchRecordsWrestlerInfo::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELMatchRecordsWrestlerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsWrestlerInfo
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsWrestlerInfo()
	{
		UScriptStruct::DeferCppStructOps<FELMatchRecordsWrestlerInfo>(FName(TEXT("ELMatchRecordsWrestlerInfo")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsWrestlerInfo;
	struct Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsWrestlerInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMatchRecordsWrestlerInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsWrestlerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsWrestlerInfo, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_UID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsWrestlerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsWrestlerInfo, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_UID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_MatchResultInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsWrestlerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_MatchResultInfo = { "MatchResultInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsWrestlerInfo, MatchResultInfo), Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_MatchResultInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_MatchResultInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_LastEnterDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsWrestlerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_LastEnterDate = { "LastEnterDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsWrestlerInfo, LastEnterDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_LastEnterDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_LastEnterDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_WiningStreak_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsWrestlerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_WiningStreak = { "WiningStreak", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsWrestlerInfo, WiningStreak), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_WiningStreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_WiningStreak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_EnterCountOnlyHostPad_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsWrestlerInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsWrestlerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_EnterCountOnlyHostPad = { "EnterCountOnlyHostPad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsWrestlerInfo, EnterCountOnlyHostPad), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_EnterCountOnlyHostPad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_EnterCountOnlyHostPad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_MatchResultInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_LastEnterDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_WiningStreak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::NewProp_EnterCountOnlyHostPad,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELMatchRecordsWrestlerInfo",
		sizeof(FELMatchRecordsWrestlerInfo),
		alignof(FELMatchRecordsWrestlerInfo),
		Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMatchRecordsWrestlerInfo"), sizeof(FELMatchRecordsWrestlerInfo), Get_Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsWrestlerInfo_Hash() { return 2194022282U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
