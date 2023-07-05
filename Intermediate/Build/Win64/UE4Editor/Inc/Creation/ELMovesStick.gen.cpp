// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesStick.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesStick() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesStick();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesStick>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesStick cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesStick::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesStick_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesStick, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesStick"), sizeof(FELMovesStick), Get_Z_Construct_UScriptStruct_FELMovesStick_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesStick>()
{
	return FELMovesStick::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesStick(FELMovesStick::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesStick"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesStick
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesStick()
	{
		UScriptStruct::DeferCppStructOps<FELMovesStick>(FName(TEXT("ELMovesStick")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesStick;
	struct Z_Construct_UScriptStruct_FELMovesStick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lever_Neutral_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Lever_Neutral;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lever_Holder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Lever_Holder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStick_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesStick.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesStick_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesStick>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStick_Statics::NewProp_Lever_Neutral_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesStick" },
		{ "ModuleRelativePath", "Public/ELMovesStick.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesStick_Statics::NewProp_Lever_Neutral = { "Lever_Neutral", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesStick, Lever_Neutral), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStick_Statics::NewProp_Lever_Neutral_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStick_Statics::NewProp_Lever_Neutral_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesStick_Statics::NewProp_Lever_Holder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesStick" },
		{ "ModuleRelativePath", "Public/ELMovesStick.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesStick_Statics::NewProp_Lever_Holder = { "Lever_Holder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesStick, Lever_Holder), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStick_Statics::NewProp_Lever_Holder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStick_Statics::NewProp_Lever_Holder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesStick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesStick_Statics::NewProp_Lever_Neutral,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesStick_Statics::NewProp_Lever_Holder,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesStick_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesStick",
		sizeof(FELMovesStick),
		alignof(FELMovesStick),
		Z_Construct_UScriptStruct_FELMovesStick_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStick_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesStick_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesStick_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesStick()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesStick_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesStick"), sizeof(FELMovesStick), Get_Z_Construct_UScriptStruct_FELMovesStick_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesStick_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesStick_Hash() { return 3137105606U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
