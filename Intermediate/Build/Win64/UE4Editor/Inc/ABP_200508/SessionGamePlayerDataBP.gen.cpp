// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SessionGamePlayerDataBP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSessionGamePlayerDataBP() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSessionGamePlayerDataBP();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EPlatformType();
// End Cross Module References
class UScriptStruct* FSessionGamePlayerDataBP::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SessionGamePlayerDataBP"), sizeof(FSessionGamePlayerDataBP), Get_Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSessionGamePlayerDataBP>()
{
	return FSessionGamePlayerDataBP::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSessionGamePlayerDataBP(FSessionGamePlayerDataBP::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SessionGamePlayerDataBP"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSessionGamePlayerDataBP
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSessionGamePlayerDataBP()
	{
		UScriptStruct::DeferCppStructOps<FSessionGamePlayerDataBP>(FName(TEXT("SessionGamePlayerDataBP")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSessionGamePlayerDataBP;
	struct Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_League_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_League;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinLoseCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WinLoseCount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Platform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceChat_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VoiceChat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalGamePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalGamePoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomNumbers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomNumbers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RandomNumbers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccountDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccountDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EpicAccountDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EpicAccountDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WrestlerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FirstName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIcons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerIcons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerIcons;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponDecals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponDecals;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinLoseCounts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinLoseCounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WinLoseCounts;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TeamMemberPUIDs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamMemberPUIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TeamMemberPUIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSessionGamePlayerDataBP>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_Rank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionGamePlayerDataBP" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionGamePlayerDataBP, Rank), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_Rank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_League_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionGamePlayerDataBP" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_League = { "League", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionGamePlayerDataBP, League), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_League_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_League_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WinLoseCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionGamePlayerDataBP" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WinLoseCount = { "WinLoseCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionGamePlayerDataBP, WinLoseCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WinLoseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WinLoseCount_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionGamePlayerDataBP" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionGamePlayerDataBP, Platform), Z_Construct_UEnum_ELITE_Core_EPlatformType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_VoiceChat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionGamePlayerDataBP" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_VoiceChat = { "VoiceChat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionGamePlayerDataBP, VoiceChat), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_VoiceChat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_VoiceChat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_TotalGamePoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionGamePlayerDataBP" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_TotalGamePoint = { "TotalGamePoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionGamePlayerDataBP, TotalGamePoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_TotalGamePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_TotalGamePoint_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_RandomNumbers_Inner = { "RandomNumbers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_RandomNumbers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionGamePlayerDataBP" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_RandomNumbers = { "RandomNumbers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionGamePlayerDataBP, RandomNumbers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_RandomNumbers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_RandomNumbers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionGamePlayerDataBP" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionGamePlayerDataBP, ProductUserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_ProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_AccountDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionGamePlayerDataBP" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_AccountDisplayName = { "AccountDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionGamePlayerDataBP, AccountDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_AccountDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_AccountDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_EpicAccountDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionGamePlayerDataBP" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_EpicAccountDisplayName = { "EpicAccountDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionGamePlayerDataBP, EpicAccountDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_EpicAccountDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_EpicAccountDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WrestlerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionGamePlayerDataBP" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WrestlerName = { "WrestlerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionGamePlayerDataBP, WrestlerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WrestlerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WrestlerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_FirstName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionGamePlayerDataBP" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_FirstName = { "FirstName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionGamePlayerDataBP, FirstName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_FirstName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_FirstName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_LastName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionGamePlayerDataBP" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_LastName = { "LastName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionGamePlayerDataBP, LastName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_LastName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_LastName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_PlayerIcons_Inner = { "PlayerIcons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_PlayerIcons_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionGamePlayerDataBP" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_PlayerIcons = { "PlayerIcons", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionGamePlayerDataBP, PlayerIcons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_PlayerIcons_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_PlayerIcons_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WeaponDecals_Inner = { "WeaponDecals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WeaponDecals_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionGamePlayerDataBP" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WeaponDecals = { "WeaponDecals", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionGamePlayerDataBP, WeaponDecals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WeaponDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WeaponDecals_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WinLoseCounts_Inner = { "WinLoseCounts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WinLoseCounts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionGamePlayerDataBP" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WinLoseCounts = { "WinLoseCounts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionGamePlayerDataBP, WinLoseCounts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WinLoseCounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WinLoseCounts_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_TeamMemberPUIDs_Inner = { "TeamMemberPUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_TeamMemberPUIDs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SessionGamePlayerDataBP" },
		{ "ModuleRelativePath", "Public/SessionGamePlayerDataBP.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_TeamMemberPUIDs = { "TeamMemberPUIDs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSessionGamePlayerDataBP, TeamMemberPUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_TeamMemberPUIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_TeamMemberPUIDs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_League,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WinLoseCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_Platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_VoiceChat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_TotalGamePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_RandomNumbers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_RandomNumbers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_AccountDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_EpicAccountDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WrestlerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_FirstName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_LastName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_PlayerIcons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_PlayerIcons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WeaponDecals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WeaponDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WinLoseCounts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_WinLoseCounts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_TeamMemberPUIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::NewProp_TeamMemberPUIDs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SessionGamePlayerDataBP",
		sizeof(FSessionGamePlayerDataBP),
		alignof(FSessionGamePlayerDataBP),
		Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSessionGamePlayerDataBP()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SessionGamePlayerDataBP"), sizeof(FSessionGamePlayerDataBP), Get_Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSessionGamePlayerDataBP_Hash() { return 1500893921U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
