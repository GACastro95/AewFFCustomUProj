// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELAriticleTextInGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAriticleTextInGame() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELAriticleTextInGame();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELAriticleTextSubject();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELMatchScoreObjective();
// End Cross Module References

static_assert(std::is_polymorphic<FELAriticleTextInGame>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELAriticleTextInGame cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELAriticleTextInGame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELAriticleTextInGame_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELAriticleTextInGame, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELAriticleTextInGame"), sizeof(FELAriticleTextInGame), Get_Z_Construct_UScriptStruct_FELAriticleTextInGame_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELAriticleTextInGame>()
{
	return FELAriticleTextInGame::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELAriticleTextInGame(FELAriticleTextInGame::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELAriticleTextInGame"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELAriticleTextInGame
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELAriticleTextInGame()
	{
		UScriptStruct::DeferCppStructOps<FELAriticleTextInGame>(FName(TEXT("ELAriticleTextInGame")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELAriticleTextInGame;
	struct Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Japanese_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Japanese;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AriticleText_Male_st_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AriticleText_Male_st;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AriticleText_Female_st_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AriticleText_Female_st;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Subject_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Subject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Winner_MetaData[];
#endif
		static void NewProp_Winner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Winner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loser_MetaData[];
#endif
		static void NewProp_Loser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Loser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Draw_MetaData[];
#endif
		static void NewProp_Draw_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Draw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MatchScoreObjctive_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchScoreObjctive_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MatchScoreObjctive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELAriticleTextInGame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELAriticleTextInGame>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Japanese_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextInGame" },
		{ "ModuleRelativePath", "Public/ELAriticleTextInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Japanese = { "Japanese", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAriticleTextInGame, Japanese), METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Japanese_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Japanese_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_AriticleText_Male_st_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextInGame" },
		{ "ModuleRelativePath", "Public/ELAriticleTextInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_AriticleText_Male_st = { "AriticleText_Male_st", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAriticleTextInGame, AriticleText_Male_st), METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_AriticleText_Male_st_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_AriticleText_Male_st_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_AriticleText_Female_st_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextInGame" },
		{ "ModuleRelativePath", "Public/ELAriticleTextInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_AriticleText_Female_st = { "AriticleText_Female_st", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAriticleTextInGame, AriticleText_Female_st), METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_AriticleText_Female_st_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_AriticleText_Female_st_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Subject_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Subject_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextInGame" },
		{ "ModuleRelativePath", "Public/ELAriticleTextInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAriticleTextInGame, Subject), Z_Construct_UEnum_ABP_200508_EELAriticleTextSubject, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Subject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Subject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Winner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextInGame" },
		{ "ModuleRelativePath", "Public/ELAriticleTextInGame.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Winner_SetBit(void* Obj)
	{
		((FELAriticleTextInGame*)Obj)->Winner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Winner = { "Winner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELAriticleTextInGame), &Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Winner_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Winner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Winner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Loser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextInGame" },
		{ "ModuleRelativePath", "Public/ELAriticleTextInGame.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Loser_SetBit(void* Obj)
	{
		((FELAriticleTextInGame*)Obj)->Loser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Loser = { "Loser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELAriticleTextInGame), &Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Loser_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Loser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Loser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Draw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextInGame" },
		{ "ModuleRelativePath", "Public/ELAriticleTextInGame.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Draw_SetBit(void* Obj)
	{
		((FELAriticleTextInGame*)Obj)->Draw = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Draw = { "Draw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELAriticleTextInGame), &Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Draw_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Draw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Draw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_MatchScoreObjctive_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_MatchScoreObjctive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAriticleTextInGame" },
		{ "ModuleRelativePath", "Public/ELAriticleTextInGame.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_MatchScoreObjctive = { "MatchScoreObjctive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAriticleTextInGame, MatchScoreObjctive), Z_Construct_UEnum_ELITE_Game_EELMatchScoreObjective, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_MatchScoreObjctive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_MatchScoreObjctive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Japanese,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_AriticleText_Male_st,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_AriticleText_Female_st,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Subject_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Subject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Winner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Loser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_Draw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_MatchScoreObjctive_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::NewProp_MatchScoreObjctive,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELAriticleTextInGame",
		sizeof(FELAriticleTextInGame),
		alignof(FELAriticleTextInGame),
		Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELAriticleTextInGame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELAriticleTextInGame_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELAriticleTextInGame"), sizeof(FELAriticleTextInGame), Get_Z_Construct_UScriptStruct_FELAriticleTextInGame_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELAriticleTextInGame_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELAriticleTextInGame_Hash() { return 1624533394U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
