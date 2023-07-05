// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StDQReactionAndPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStDQReactionAndPlayer() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStDQReactionAndPlayer();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ERefereeDQReactionKind_N();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStDQReactionAndPlayer>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStDQReactionAndPlayer cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStDQReactionAndPlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStDQReactionAndPlayer, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StDQReactionAndPlayer"), sizeof(FStDQReactionAndPlayer), Get_Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStDQReactionAndPlayer>()
{
	return FStDQReactionAndPlayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStDQReactionAndPlayer(FStDQReactionAndPlayer::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StDQReactionAndPlayer"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStDQReactionAndPlayer
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStDQReactionAndPlayer()
	{
		UScriptStruct::DeferCppStructOps<FStDQReactionAndPlayer>(FName(TEXT("StDQReactionAndPlayer")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStDQReactionAndPlayer;
	struct Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reaction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StDQReactionAndPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStDQReactionAndPlayer>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::NewProp_Reaction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::NewProp_Reaction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StDQReactionAndPlayer" },
		{ "ModuleRelativePath", "Public/StDQReactionAndPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::NewProp_Reaction = { "Reaction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStDQReactionAndPlayer, Reaction), Z_Construct_UEnum_ABP_200508_ERefereeDQReactionKind_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::NewProp_Reaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::NewProp_Reaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::NewProp_Player_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StDQReactionAndPlayer" },
		{ "ModuleRelativePath", "Public/StDQReactionAndPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStDQReactionAndPlayer, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::NewProp_Reaction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::NewProp_Reaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::NewProp_Player,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StDQReactionAndPlayer",
		sizeof(FStDQReactionAndPlayer),
		alignof(FStDQReactionAndPlayer),
		Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStDQReactionAndPlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StDQReactionAndPlayer"), sizeof(FStDQReactionAndPlayer), Get_Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStDQReactionAndPlayer_Hash() { return 3419418024U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
