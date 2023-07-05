// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSActivityMatchResultPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSActivityMatchResultPlayer() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSActivityMatchResultPlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSActivityMatchResultPlayer"), sizeof(FSSActivityMatchResultPlayer), Get_Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSActivityMatchResultPlayer>()
{
	return FSSActivityMatchResultPlayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSActivityMatchResultPlayer(FSSActivityMatchResultPlayer::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSActivityMatchResultPlayer"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSActivityMatchResultPlayer
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSActivityMatchResultPlayer()
	{
		UScriptStruct::DeferCppStructOps<FSSActivityMatchResultPlayer>(FName(TEXT("SSActivityMatchResultPlayer")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSActivityMatchResultPlayer;
	struct Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalAccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExternalAccountId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNpc_MetaData[];
#endif
		static void NewProp_IsNpc_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNpc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSActivityMatchResultPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSActivityMatchResultPlayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewProp_ExternalAccountId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSActivityMatchResultPlayer" },
		{ "ModuleRelativePath", "Public/SSActivityMatchResultPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewProp_ExternalAccountId = { "ExternalAccountId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSActivityMatchResultPlayer, ExternalAccountId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewProp_ExternalAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewProp_ExternalAccountId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewProp_IsNpc_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSActivityMatchResultPlayer" },
		{ "ModuleRelativePath", "Public/SSActivityMatchResultPlayer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewProp_IsNpc_SetBit(void* Obj)
	{
		((FSSActivityMatchResultPlayer*)Obj)->IsNpc = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewProp_IsNpc = { "IsNpc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSActivityMatchResultPlayer), &Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewProp_IsNpc_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewProp_IsNpc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewProp_IsNpc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewProp_Rank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSActivityMatchResultPlayer" },
		{ "ModuleRelativePath", "Public/SSActivityMatchResultPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSActivityMatchResultPlayer, Rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewProp_Rank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewProp_Rank_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewProp_ExternalAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewProp_IsNpc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::NewProp_Rank,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSActivityMatchResultPlayer",
		sizeof(FSSActivityMatchResultPlayer),
		alignof(FSSActivityMatchResultPlayer),
		Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSActivityMatchResultPlayer"), sizeof(FSSActivityMatchResultPlayer), Get_Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSActivityMatchResultPlayer_Hash() { return 912532109U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
