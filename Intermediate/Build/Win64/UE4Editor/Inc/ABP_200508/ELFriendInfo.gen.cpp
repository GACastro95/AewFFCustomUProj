// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELFriendInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELFriendInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELFriendInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELFriendInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELFriendInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELFriendInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELFriendInfo"), sizeof(FELFriendInfo), Get_Z_Construct_UScriptStruct_FELFriendInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELFriendInfo>()
{
	return FELFriendInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELFriendInfo(FELFriendInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELFriendInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELFriendInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELFriendInfo()
	{
		UScriptStruct::DeferCppStructOps<FELFriendInfo>(FName(TEXT("ELFriendInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELFriendInfo;
	struct Z_Construct_UScriptStruct_FELFriendInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlatformName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PresenceStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOnline_MetaData[];
#endif
		static void NewProp_bIsOnline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOnline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying_MetaData[];
#endif
		static void NewProp_bIsPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPlayingThisGame_MetaData[];
#endif
		static void NewProp_bIsPlayingThisGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPlayingThisGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsJoinable_MetaData[];
#endif
		static void NewProp_bIsJoinable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsJoinable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasVoiceSupport_MetaData[];
#endif
		static void NewProp_bHasVoiceSupport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasVoiceSupport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELFriendInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELFriendInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELFriendInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFriendInfo" },
		{ "ModuleRelativePath", "Public/ELFriendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELFriendInfo, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_UserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFriendInfo" },
		{ "ModuleRelativePath", "Public/ELFriendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELFriendInfo, ProductUserID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_ProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFriendInfo" },
		{ "ModuleRelativePath", "Public/ELFriendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELFriendInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_PlatformName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFriendInfo" },
		{ "ModuleRelativePath", "Public/ELFriendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_PlatformName = { "PlatformName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELFriendInfo, PlatformName), METADATA_PARAMS(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_PlatformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_PlatformName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_PresenceStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFriendInfo" },
		{ "ModuleRelativePath", "Public/ELFriendInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_PresenceStatus = { "PresenceStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELFriendInfo, PresenceStatus), METADATA_PARAMS(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_PresenceStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_PresenceStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsOnline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFriendInfo" },
		{ "ModuleRelativePath", "Public/ELFriendInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsOnline_SetBit(void* Obj)
	{
		((FELFriendInfo*)Obj)->bIsOnline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsOnline = { "bIsOnline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FELFriendInfo), &Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsOnline_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsOnline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsOnline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsPlaying_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFriendInfo" },
		{ "ModuleRelativePath", "Public/ELFriendInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
	{
		((FELFriendInfo*)Obj)->bIsPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FELFriendInfo), &Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsPlaying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsPlayingThisGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFriendInfo" },
		{ "ModuleRelativePath", "Public/ELFriendInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsPlayingThisGame_SetBit(void* Obj)
	{
		((FELFriendInfo*)Obj)->bIsPlayingThisGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsPlayingThisGame = { "bIsPlayingThisGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FELFriendInfo), &Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsPlayingThisGame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsPlayingThisGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsPlayingThisGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsJoinable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFriendInfo" },
		{ "ModuleRelativePath", "Public/ELFriendInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsJoinable_SetBit(void* Obj)
	{
		((FELFriendInfo*)Obj)->bIsJoinable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsJoinable = { "bIsJoinable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FELFriendInfo), &Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsJoinable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsJoinable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsJoinable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bHasVoiceSupport_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELFriendInfo" },
		{ "ModuleRelativePath", "Public/ELFriendInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bHasVoiceSupport_SetBit(void* Obj)
	{
		((FELFriendInfo*)Obj)->bHasVoiceSupport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bHasVoiceSupport = { "bHasVoiceSupport", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FELFriendInfo), &Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bHasVoiceSupport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bHasVoiceSupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bHasVoiceSupport_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELFriendInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_UserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_PlatformName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_PresenceStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsOnline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsPlaying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsPlayingThisGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bIsJoinable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELFriendInfo_Statics::NewProp_bHasVoiceSupport,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELFriendInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELFriendInfo",
		sizeof(FELFriendInfo),
		alignof(FELFriendInfo),
		Z_Construct_UScriptStruct_FELFriendInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELFriendInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELFriendInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELFriendInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELFriendInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELFriendInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELFriendInfo"), sizeof(FELFriendInfo), Get_Z_Construct_UScriptStruct_FELFriendInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELFriendInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELFriendInfo_Hash() { return 3791648150U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
