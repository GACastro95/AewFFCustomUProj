// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/RosterPresetRaw.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRosterPresetRaw() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FRosterPresetRaw();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FCostumeParam();
// End Cross Module References
class UScriptStruct* FRosterPresetRaw::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FRosterPresetRaw_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRosterPresetRaw, Z_Construct_UPackage__Script_Creation(), TEXT("RosterPresetRaw"), sizeof(FRosterPresetRaw), Get_Z_Construct_UScriptStruct_FRosterPresetRaw_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FRosterPresetRaw>()
{
	return FRosterPresetRaw::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRosterPresetRaw(FRosterPresetRaw::StaticStruct, TEXT("/Script/Creation"), TEXT("RosterPresetRaw"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFRosterPresetRaw
{
	FScriptStruct_Creation_StaticRegisterNativesFRosterPresetRaw()
	{
		UScriptStruct::DeferCppStructOps<FRosterPresetRaw>(FName(TEXT("RosterPresetRaw")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFRosterPresetRaw;
	struct Z_Construct_UScriptStruct_FRosterPresetRaw_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CostumeParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CostumeParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RosterPresetRaw.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRosterPresetRaw>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RosterPresetRaw" },
		{ "ModuleRelativePath", "Public/RosterPresetRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRosterPresetRaw, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::NewProp_CostumeParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RosterPresetRaw" },
		{ "ModuleRelativePath", "Public/RosterPresetRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::NewProp_CostumeParam = { "CostumeParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRosterPresetRaw, CostumeParam), Z_Construct_UScriptStruct_FCostumeParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::NewProp_CostumeParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::NewProp_CostumeParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::NewProp_CostumeParam,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"RosterPresetRaw",
		sizeof(FRosterPresetRaw),
		alignof(FRosterPresetRaw),
		Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRosterPresetRaw()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRosterPresetRaw_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RosterPresetRaw"), sizeof(FRosterPresetRaw), Get_Z_Construct_UScriptStruct_FRosterPresetRaw_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRosterPresetRaw_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRosterPresetRaw_Hash() { return 1729879416U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
