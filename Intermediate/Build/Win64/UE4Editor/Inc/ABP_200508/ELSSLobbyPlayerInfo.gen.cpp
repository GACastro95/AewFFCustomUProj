// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSLobbyPlayerInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSLobbyPlayerInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELSSLobbyPlayerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSLobbyPlayerInfo"), sizeof(FELSSLobbyPlayerInfo), Get_Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSLobbyPlayerInfo>()
{
	return FELSSLobbyPlayerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSLobbyPlayerInfo(FELSSLobbyPlayerInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSLobbyPlayerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSLobbyPlayerInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSLobbyPlayerInfo()
	{
		UScriptStruct::DeferCppStructOps<FELSSLobbyPlayerInfo>(FName(TEXT("ELSSLobbyPlayerInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSLobbyPlayerInfo;
	struct Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalAccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExternalAccountId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerStampedeRankPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerStampedeRankPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerPlayerRankPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerPlayerRankPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerIconSymbolId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerIconSymbolId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerIconBgId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerIconBgId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerIconColorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerIconColorId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerIconColorListId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerIconColorListId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerBadgeIdList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerBadgeIdList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_playerBadgeIdList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerBadgeIdRandom_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerBadgeIdRandom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerHottestPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerHottestPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerSelectWrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerSelectWrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerIsAI_MetaData[];
#endif
		static void NewProp_playerIsAI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playerIsAI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponDecalId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_weaponDecalId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponDecalSymbolId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_weaponDecalSymbolId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponColorUniqueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_weaponColorUniqueId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponColorListIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_weaponColorListIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSLobbyPlayerInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyPlayerInfo, playerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerDisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerDisplayName = { "playerDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyPlayerInfo, playerDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_ExternalAccountId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_ExternalAccountId = { "ExternalAccountId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyPlayerInfo, ExternalAccountId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_ExternalAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_ExternalAccountId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerStampedeRankPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerStampedeRankPoint = { "playerStampedeRankPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyPlayerInfo, playerStampedeRankPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerStampedeRankPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerStampedeRankPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerPlayerRankPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerPlayerRankPoint = { "playerPlayerRankPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyPlayerInfo, playerPlayerRankPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerPlayerRankPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerPlayerRankPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconSymbolId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconSymbolId = { "playerIconSymbolId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyPlayerInfo, playerIconSymbolId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconSymbolId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconSymbolId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconBgId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconBgId = { "playerIconBgId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyPlayerInfo, playerIconBgId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconBgId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconBgId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconColorId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconColorId = { "playerIconColorId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyPlayerInfo, playerIconColorId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconColorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconColorId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconColorListId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconColorListId = { "playerIconColorListId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyPlayerInfo, playerIconColorListId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconColorListId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconColorListId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerBadgeIdList_Inner = { "playerBadgeIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerBadgeIdList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerBadgeIdList = { "playerBadgeIdList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyPlayerInfo, playerBadgeIdList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerBadgeIdList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerBadgeIdList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerBadgeIdRandom_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerBadgeIdRandom = { "playerBadgeIdRandom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyPlayerInfo, playerBadgeIdRandom), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerBadgeIdRandom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerBadgeIdRandom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerHottestPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerHottestPoint = { "playerHottestPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyPlayerInfo, playerHottestPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerHottestPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerHottestPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerSelectWrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerSelectWrestlerID = { "playerSelectWrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyPlayerInfo, playerSelectWrestlerID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerSelectWrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerSelectWrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIsAI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIsAI_SetBit(void* Obj)
	{
		((FELSSLobbyPlayerInfo*)Obj)->playerIsAI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIsAI = { "playerIsAI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELSSLobbyPlayerInfo), &Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIsAI_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIsAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIsAI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponDecalId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponDecalId = { "weaponDecalId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyPlayerInfo, weaponDecalId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponDecalId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponDecalId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponDecalSymbolId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponDecalSymbolId = { "weaponDecalSymbolId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyPlayerInfo, weaponDecalSymbolId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponDecalSymbolId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponDecalSymbolId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponColorUniqueId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponColorUniqueId = { "weaponColorUniqueId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyPlayerInfo, weaponColorUniqueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponColorUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponColorUniqueId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponColorListIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSLobbyPlayerInfo" },
		{ "ModuleRelativePath", "Public/ELSSLobbyPlayerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponColorListIndex = { "weaponColorListIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSLobbyPlayerInfo, weaponColorListIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponColorListIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponColorListIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_ExternalAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerStampedeRankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerPlayerRankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconSymbolId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconBgId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconColorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIconColorListId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerBadgeIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerBadgeIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerBadgeIdRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerHottestPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerSelectWrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_playerIsAI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponDecalId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponDecalSymbolId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponColorUniqueId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::NewProp_weaponColorListIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSLobbyPlayerInfo",
		sizeof(FELSSLobbyPlayerInfo),
		alignof(FELSSLobbyPlayerInfo),
		Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSLobbyPlayerInfo"), sizeof(FELSSLobbyPlayerInfo), Get_Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSLobbyPlayerInfo_Hash() { return 1536732990U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
