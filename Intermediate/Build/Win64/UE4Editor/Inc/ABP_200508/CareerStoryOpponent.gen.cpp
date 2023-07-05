// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerStoryOpponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerStoryOpponent() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerStoryOpponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerStoryOpponent>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerStoryOpponent cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerStoryOpponent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerStoryOpponent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerStoryOpponent, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerStoryOpponent"), sizeof(FCareerStoryOpponent), Get_Z_Construct_UScriptStruct_FCareerStoryOpponent_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerStoryOpponent>()
{
	return FCareerStoryOpponent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerStoryOpponent(FCareerStoryOpponent::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerStoryOpponent"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerStoryOpponent
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerStoryOpponent()
	{
		UScriptStruct::DeferCppStructOps<FCareerStoryOpponent>(FName(TEXT("CareerStoryOpponent")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerStoryOpponent;
	struct Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_All_MetaData[];
#endif
		static void NewProp_All_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_All;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HERO_MetaData[];
#endif
		static void NewProp_HERO_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HERO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SHY_MetaData[];
#endif
		static void NewProp_SHY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SHY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CONFIOENT_MetaData[];
#endif
		static void NewProp_CONFIOENT_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CONFIOENT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ENIGMA_MetaData[];
#endif
		static void NewProp_ENIGMA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ENIGMA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MONSTER_MetaData[];
#endif
		static void NewProp_MONSTER_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MONSTER;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JERK_MetaData[];
#endif
		static void NewProp_JERK_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_JERK;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerStoryOpponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerStoryOpponent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryOpponent" },
		{ "ModuleRelativePath", "Public/CareerStoryOpponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryOpponent, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_ID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryOpponent" },
		{ "ModuleRelativePath", "Public/CareerStoryOpponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerStoryOpponent, ID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_All_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryOpponent" },
		{ "ModuleRelativePath", "Public/CareerStoryOpponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_All_SetBit(void* Obj)
	{
		((FCareerStoryOpponent*)Obj)->All = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_All = { "All", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerStoryOpponent), &Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_All_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_All_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_All_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_HERO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryOpponent" },
		{ "ModuleRelativePath", "Public/CareerStoryOpponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_HERO_SetBit(void* Obj)
	{
		((FCareerStoryOpponent*)Obj)->HERO = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_HERO = { "HERO", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerStoryOpponent), &Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_HERO_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_HERO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_HERO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_SHY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryOpponent" },
		{ "ModuleRelativePath", "Public/CareerStoryOpponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_SHY_SetBit(void* Obj)
	{
		((FCareerStoryOpponent*)Obj)->SHY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_SHY = { "SHY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerStoryOpponent), &Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_SHY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_SHY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_SHY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_CONFIOENT_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryOpponent" },
		{ "ModuleRelativePath", "Public/CareerStoryOpponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_CONFIOENT_SetBit(void* Obj)
	{
		((FCareerStoryOpponent*)Obj)->CONFIOENT = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_CONFIOENT = { "CONFIOENT", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerStoryOpponent), &Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_CONFIOENT_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_CONFIOENT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_CONFIOENT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_ENIGMA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryOpponent" },
		{ "ModuleRelativePath", "Public/CareerStoryOpponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_ENIGMA_SetBit(void* Obj)
	{
		((FCareerStoryOpponent*)Obj)->ENIGMA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_ENIGMA = { "ENIGMA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerStoryOpponent), &Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_ENIGMA_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_ENIGMA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_ENIGMA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_MONSTER_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryOpponent" },
		{ "ModuleRelativePath", "Public/CareerStoryOpponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_MONSTER_SetBit(void* Obj)
	{
		((FCareerStoryOpponent*)Obj)->MONSTER = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_MONSTER = { "MONSTER", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerStoryOpponent), &Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_MONSTER_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_MONSTER_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_MONSTER_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_JERK_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerStoryOpponent" },
		{ "ModuleRelativePath", "Public/CareerStoryOpponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_JERK_SetBit(void* Obj)
	{
		((FCareerStoryOpponent*)Obj)->JERK = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_JERK = { "JERK", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerStoryOpponent), &Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_JERK_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_JERK_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_JERK_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_ID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_All,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_HERO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_SHY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_CONFIOENT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_ENIGMA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_MONSTER,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::NewProp_JERK,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerStoryOpponent",
		sizeof(FCareerStoryOpponent),
		alignof(FCareerStoryOpponent),
		Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerStoryOpponent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerStoryOpponent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerStoryOpponent"), sizeof(FCareerStoryOpponent), Get_Z_Construct_UScriptStruct_FCareerStoryOpponent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerStoryOpponent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerStoryOpponent_Hash() { return 699676017U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
