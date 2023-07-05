// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditColorGroupRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditColorGroupRow() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditColorGroupRow();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FPickableItemIDTableRow();
// End Cross Module References

static_assert(std::is_polymorphic<FEditColorGroupRow>() == std::is_polymorphic<FPickableItemIDTableRow>(), "USTRUCT FEditColorGroupRow cannot be polymorphic unless super FPickableItemIDTableRow is polymorphic");

class UScriptStruct* FEditColorGroupRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditColorGroupRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditColorGroupRow, Z_Construct_UPackage__Script_Creation(), TEXT("EditColorGroupRow"), sizeof(FEditColorGroupRow), Get_Z_Construct_UScriptStruct_FEditColorGroupRow_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditColorGroupRow>()
{
	return FEditColorGroupRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditColorGroupRow(FEditColorGroupRow::StaticStruct, TEXT("/Script/Creation"), TEXT("EditColorGroupRow"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditColorGroupRow
{
	FScriptStruct_Creation_StaticRegisterNativesFEditColorGroupRow()
	{
		UScriptStruct::DeferCppStructOps<FEditColorGroupRow>(FName(TEXT("EditColorGroupRow")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditColorGroupRow;
	struct Z_Construct_UScriptStruct_FEditColorGroupRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditColorGroupRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditColorGroupRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditColorGroupRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditColorGroupRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditColorGroupRow_Statics::NewProp_DisplayName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditColorGroupRow" },
		{ "ModuleRelativePath", "Public/EditColorGroupRow.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEditColorGroupRow_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditColorGroupRow, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditColorGroupRow_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorGroupRow_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditColorGroupRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditColorGroupRow_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditColorGroupRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FPickableItemIDTableRow,
		&NewStructOps,
		"EditColorGroupRow",
		sizeof(FEditColorGroupRow),
		alignof(FEditColorGroupRow),
		Z_Construct_UScriptStruct_FEditColorGroupRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorGroupRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditColorGroupRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditColorGroupRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditColorGroupRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditColorGroupRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditColorGroupRow"), sizeof(FEditColorGroupRow), Get_Z_Construct_UScriptStruct_FEditColorGroupRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditColorGroupRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditColorGroupRow_Hash() { return 2718701947U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
