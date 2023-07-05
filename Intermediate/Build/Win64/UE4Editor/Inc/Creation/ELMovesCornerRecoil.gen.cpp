// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesCornerRecoil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesCornerRecoil() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesCornerRecoil();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesCornerRecoil>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesCornerRecoil cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesCornerRecoil::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesCornerRecoil_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesCornerRecoil, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesCornerRecoil"), sizeof(FELMovesCornerRecoil), Get_Z_Construct_UScriptStruct_FELMovesCornerRecoil_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesCornerRecoil>()
{
	return FELMovesCornerRecoil::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesCornerRecoil(FELMovesCornerRecoil::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesCornerRecoil"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesCornerRecoil
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesCornerRecoil()
	{
		UScriptStruct::DeferCppStructOps<FELMovesCornerRecoil>(FName(TEXT("ELMovesCornerRecoil")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesCornerRecoil;
	struct Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PunchKick_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PunchKick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grapple_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Grapple;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesCornerRecoil.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesCornerRecoil>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::NewProp_PunchKick_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCornerRecoil" },
		{ "ModuleRelativePath", "Public/ELMovesCornerRecoil.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::NewProp_PunchKick = { "PunchKick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCornerRecoil, PunchKick), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::NewProp_PunchKick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::NewProp_PunchKick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::NewProp_Grapple_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesCornerRecoil" },
		{ "ModuleRelativePath", "Public/ELMovesCornerRecoil.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::NewProp_Grapple = { "Grapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesCornerRecoil, Grapple), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::NewProp_Grapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::NewProp_Grapple_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::NewProp_PunchKick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::NewProp_Grapple,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesCornerRecoil",
		sizeof(FELMovesCornerRecoil),
		alignof(FELMovesCornerRecoil),
		Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesCornerRecoil()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesCornerRecoil_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesCornerRecoil"), sizeof(FELMovesCornerRecoil), Get_Z_Construct_UScriptStruct_FELMovesCornerRecoil_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesCornerRecoil_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesCornerRecoil_Hash() { return 177116659U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
