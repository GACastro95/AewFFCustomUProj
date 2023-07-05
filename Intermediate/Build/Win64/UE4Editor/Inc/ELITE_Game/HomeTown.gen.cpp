// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/HomeTown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHomeTown() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FHomeTown();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FPickableItemIDTableRow();
// End Cross Module References

static_assert(std::is_polymorphic<FHomeTown>() == std::is_polymorphic<FPickableItemIDTableRow>(), "USTRUCT FHomeTown cannot be polymorphic unless super FPickableItemIDTableRow is polymorphic");

class UScriptStruct* FHomeTown::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FHomeTown_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHomeTown, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("HomeTown"), sizeof(FHomeTown), Get_Z_Construct_UScriptStruct_FHomeTown_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FHomeTown>()
{
	return FHomeTown::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHomeTown(FHomeTown::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("HomeTown"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFHomeTown
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFHomeTown()
	{
		UScriptStruct::DeferCppStructOps<FHomeTown>(FName(TEXT("HomeTown")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFHomeTown;
	struct Z_Construct_UScriptStruct_FHomeTown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountryText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CountryText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_StateText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CityText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CityText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHomeTown_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HomeTown.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHomeTown_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHomeTown>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHomeTown_Statics::NewProp_CountryText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HomeTown" },
		{ "ModuleRelativePath", "Public/HomeTown.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FHomeTown_Statics::NewProp_CountryText = { "CountryText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHomeTown, CountryText), METADATA_PARAMS(Z_Construct_UScriptStruct_FHomeTown_Statics::NewProp_CountryText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHomeTown_Statics::NewProp_CountryText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHomeTown_Statics::NewProp_StateText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HomeTown" },
		{ "ModuleRelativePath", "Public/HomeTown.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FHomeTown_Statics::NewProp_StateText = { "StateText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHomeTown, StateText), METADATA_PARAMS(Z_Construct_UScriptStruct_FHomeTown_Statics::NewProp_StateText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHomeTown_Statics::NewProp_StateText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHomeTown_Statics::NewProp_CityText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HomeTown" },
		{ "ModuleRelativePath", "Public/HomeTown.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FHomeTown_Statics::NewProp_CityText = { "CityText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHomeTown, CityText), METADATA_PARAMS(Z_Construct_UScriptStruct_FHomeTown_Statics::NewProp_CityText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHomeTown_Statics::NewProp_CityText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHomeTown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHomeTown_Statics::NewProp_CountryText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHomeTown_Statics::NewProp_StateText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHomeTown_Statics::NewProp_CityText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHomeTown_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FPickableItemIDTableRow,
		&NewStructOps,
		"HomeTown",
		sizeof(FHomeTown),
		alignof(FHomeTown),
		Z_Construct_UScriptStruct_FHomeTown_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHomeTown_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHomeTown_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHomeTown_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHomeTown()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHomeTown_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HomeTown"), sizeof(FHomeTown), Get_Z_Construct_UScriptStruct_FHomeTown_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHomeTown_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHomeTown_Hash() { return 2080306915U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
