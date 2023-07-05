// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/AtomCueMusic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueMusic() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueMusic();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References
class UScriptStruct* FAtomCueMusic::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueMusic_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueMusic, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("AtomCueMusic"), sizeof(FAtomCueMusic), Get_Z_Construct_UScriptStruct_FAtomCueMusic_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FAtomCueMusic>()
{
	return FAtomCueMusic::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueMusic(FAtomCueMusic::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("AtomCueMusic"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFAtomCueMusic
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFAtomCueMusic()
	{
		UScriptStruct::DeferCppStructOps<FAtomCueMusic>(FName(TEXT("AtomCueMusic")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFAtomCueMusic;
	struct Z_Construct_UScriptStruct_FAtomCueMusic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__find_MetaData[];
#endif
		static void NewProp__find_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__find;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__juke_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__juke;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__ent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__vic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__vic;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueMusic_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCueMusic.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueMusic>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__find_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueMusic" },
		{ "ModuleRelativePath", "Public/AtomCueMusic.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__find_SetBit(void* Obj)
	{
		((FAtomCueMusic*)Obj)->_find = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__find = { "_find", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomCueMusic), &Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__find_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__find_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__find_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__juke_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueMusic" },
		{ "ModuleRelativePath", "Public/AtomCueMusic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__juke = { "_juke", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueMusic, _juke), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__juke_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__juke_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__ent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueMusic" },
		{ "ModuleRelativePath", "Public/AtomCueMusic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__ent = { "_ent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueMusic, _ent), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__ent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__ent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__vic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueMusic" },
		{ "ModuleRelativePath", "Public/AtomCueMusic.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__vic = { "_vic", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueMusic, _vic), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__vic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__vic_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueMusic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__find,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__juke,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__ent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueMusic_Statics::NewProp__vic,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueMusic_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"AtomCueMusic",
		sizeof(FAtomCueMusic),
		alignof(FAtomCueMusic),
		Z_Construct_UScriptStruct_FAtomCueMusic_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueMusic_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueMusic_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueMusic_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueMusic()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueMusic_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueMusic"), sizeof(FAtomCueMusic), Get_Z_Construct_UScriptStruct_FAtomCueMusic_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomCueMusic_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueMusic_Hash() { return 3168037517U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
