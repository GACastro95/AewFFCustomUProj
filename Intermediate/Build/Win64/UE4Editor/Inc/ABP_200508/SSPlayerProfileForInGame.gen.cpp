// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSPlayerProfileForInGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSPlayerProfileForInGame() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerProfileForInGame();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSPlayerProfileForInGame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSPlayerProfileForInGame"), sizeof(FSSPlayerProfileForInGame), Get_Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSPlayerProfileForInGame>()
{
	return FSSPlayerProfileForInGame::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSPlayerProfileForInGame(FSSPlayerProfileForInGame::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSPlayerProfileForInGame"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSPlayerProfileForInGame
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSPlayerProfileForInGame()
	{
		UScriptStruct::DeferCppStructOps<FSSPlayerProfileForInGame>(FName(TEXT("SSPlayerProfileForInGame")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSPlayerProfileForInGame;
	struct Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NickName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NickName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShortName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShortName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnsAccount_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SnsAccount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpokenName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SpokenName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultilineRingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MultilineRingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSmatchVictoryNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SSmatchVictoryNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Synced_MetaData[];
#endif
		static void NewProp_Synced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Synced;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSPlayerProfileForInGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSPlayerProfileForInGame>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_NickName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerProfileForInGame" },
		{ "ModuleRelativePath", "Public/SSPlayerProfileForInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_NickName = { "NickName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerProfileForInGame, NickName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_NickName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_NickName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_RingName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerProfileForInGame" },
		{ "ModuleRelativePath", "Public/SSPlayerProfileForInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_RingName = { "RingName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerProfileForInGame, RingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_RingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_RingName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_ShortName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerProfileForInGame" },
		{ "ModuleRelativePath", "Public/SSPlayerProfileForInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_ShortName = { "ShortName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerProfileForInGame, ShortName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_ShortName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_ShortName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_SnsAccount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerProfileForInGame" },
		{ "ModuleRelativePath", "Public/SSPlayerProfileForInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_SnsAccount = { "SnsAccount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerProfileForInGame, SnsAccount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_SnsAccount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_SnsAccount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_SpokenName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerProfileForInGame" },
		{ "ModuleRelativePath", "Public/SSPlayerProfileForInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_SpokenName = { "SpokenName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerProfileForInGame, SpokenName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_SpokenName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_SpokenName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_MultilineRingName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerProfileForInGame" },
		{ "ModuleRelativePath", "Public/SSPlayerProfileForInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_MultilineRingName = { "MultilineRingName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerProfileForInGame, MultilineRingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_MultilineRingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_MultilineRingName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_SSmatchVictoryNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerProfileForInGame" },
		{ "ModuleRelativePath", "Public/SSPlayerProfileForInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_SSmatchVictoryNum = { "SSmatchVictoryNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSPlayerProfileForInGame, SSmatchVictoryNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_SSmatchVictoryNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_SSmatchVictoryNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_Synced_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSPlayerProfileForInGame" },
		{ "ModuleRelativePath", "Public/SSPlayerProfileForInGame.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_Synced_SetBit(void* Obj)
	{
		((FSSPlayerProfileForInGame*)Obj)->Synced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_Synced = { "Synced", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSPlayerProfileForInGame), &Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_Synced_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_Synced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_Synced_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_NickName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_RingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_ShortName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_SnsAccount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_SpokenName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_MultilineRingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_SSmatchVictoryNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::NewProp_Synced,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSPlayerProfileForInGame",
		sizeof(FSSPlayerProfileForInGame),
		alignof(FSSPlayerProfileForInGame),
		Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSPlayerProfileForInGame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSPlayerProfileForInGame"), sizeof(FSSPlayerProfileForInGame), Get_Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSPlayerProfileForInGame_Hash() { return 1257766886U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
