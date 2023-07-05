// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELWrestlerProfile_HideInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELWrestlerProfile_HideInfo() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELWrestlerProfile_HideInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELWrestlerProfile_HideInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELWrestlerProfile_HideInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELWrestlerProfile_HideInfo"), sizeof(FELWrestlerProfile_HideInfo), Get_Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELWrestlerProfile_HideInfo>()
{
	return FELWrestlerProfile_HideInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELWrestlerProfile_HideInfo(FELWrestlerProfile_HideInfo::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELWrestlerProfile_HideInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerProfile_HideInfo
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerProfile_HideInfo()
	{
		UScriptStruct::DeferCppStructOps<FELWrestlerProfile_HideInfo>(FName(TEXT("ELWrestlerProfile_HideInfo")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerProfile_HideInfo;
	struct Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideWeight_MetaData[];
#endif
		static void NewProp_HideWeight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HideWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideBirthDay_MetaData[];
#endif
		static void NewProp_HideBirthDay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HideBirthDay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UneditableStreetClothes_MetaData[];
#endif
		static void NewProp_UneditableStreetClothes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UneditableStreetClothes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile_HideInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELWrestlerProfile_HideInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_HideWeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile_HideInfo" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile_HideInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_HideWeight_SetBit(void* Obj)
	{
		((FELWrestlerProfile_HideInfo*)Obj)->HideWeight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_HideWeight = { "HideWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELWrestlerProfile_HideInfo), &Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_HideWeight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_HideWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_HideWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_HideBirthDay_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile_HideInfo" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile_HideInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_HideBirthDay_SetBit(void* Obj)
	{
		((FELWrestlerProfile_HideInfo*)Obj)->HideBirthDay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_HideBirthDay = { "HideBirthDay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELWrestlerProfile_HideInfo), &Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_HideBirthDay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_HideBirthDay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_HideBirthDay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_UneditableStreetClothes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerProfile_HideInfo" },
		{ "ModuleRelativePath", "Public/ELWrestlerProfile_HideInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_UneditableStreetClothes_SetBit(void* Obj)
	{
		((FELWrestlerProfile_HideInfo*)Obj)->UneditableStreetClothes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_UneditableStreetClothes = { "UneditableStreetClothes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELWrestlerProfile_HideInfo), &Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_UneditableStreetClothes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_UneditableStreetClothes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_UneditableStreetClothes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_HideWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_HideBirthDay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::NewProp_UneditableStreetClothes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELWrestlerProfile_HideInfo",
		sizeof(FELWrestlerProfile_HideInfo),
		alignof(FELWrestlerProfile_HideInfo),
		Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELWrestlerProfile_HideInfo"), sizeof(FELWrestlerProfile_HideInfo), Get_Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELWrestlerProfile_HideInfo_Hash() { return 1375396032U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
