// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSMatchMakeInfoForAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSMatchMakeInfoForAnalytics() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FSSMatchMakeInfoForAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSMatchMakeInfoForAnalytics"), sizeof(FSSMatchMakeInfoForAnalytics), Get_Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSMatchMakeInfoForAnalytics>()
{
	return FSSMatchMakeInfoForAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSMatchMakeInfoForAnalytics(FSSMatchMakeInfoForAnalytics::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSMatchMakeInfoForAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSMatchMakeInfoForAnalytics
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSMatchMakeInfoForAnalytics()
	{
		UScriptStruct::DeferCppStructOps<FSSMatchMakeInfoForAnalytics>(FName(TEXT("SSMatchMakeInfoForAnalytics")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSMatchMakeInfoForAnalytics;
	struct Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TicketId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchMakeStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MatchMakeStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchMakeElapsedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MatchMakeElapsedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Synced_MetaData[];
#endif
		static void NewProp_Synced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Synced;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSMatchMakeInfoForAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSMatchMakeInfoForAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_playerId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMatchMakeInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSMatchMakeInfoForAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMatchMakeInfoForAnalytics, playerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_PlayerName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMatchMakeInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSMatchMakeInfoForAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMatchMakeInfoForAnalytics, PlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_TicketId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMatchMakeInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSMatchMakeInfoForAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_TicketId = { "TicketId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMatchMakeInfoForAnalytics, TicketId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_TicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_TicketId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_MatchMakeStartTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMatchMakeInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSMatchMakeInfoForAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_MatchMakeStartTime = { "MatchMakeStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMatchMakeInfoForAnalytics, MatchMakeStartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_MatchMakeStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_MatchMakeStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_MatchMakeElapsedTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMatchMakeInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSMatchMakeInfoForAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_MatchMakeElapsedTime = { "MatchMakeElapsedTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMatchMakeInfoForAnalytics, MatchMakeElapsedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_MatchMakeElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_MatchMakeElapsedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_Synced_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMatchMakeInfoForAnalytics" },
		{ "ModuleRelativePath", "Public/SSMatchMakeInfoForAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_Synced_SetBit(void* Obj)
	{
		((FSSMatchMakeInfoForAnalytics*)Obj)->Synced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_Synced = { "Synced", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSMatchMakeInfoForAnalytics), &Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_Synced_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_Synced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_Synced_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_PlayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_TicketId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_MatchMakeStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_MatchMakeElapsedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::NewProp_Synced,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSMatchMakeInfoForAnalytics",
		sizeof(FSSMatchMakeInfoForAnalytics),
		alignof(FSSMatchMakeInfoForAnalytics),
		Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSMatchMakeInfoForAnalytics"), sizeof(FSSMatchMakeInfoForAnalytics), Get_Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSMatchMakeInfoForAnalytics_Hash() { return 661277557U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
