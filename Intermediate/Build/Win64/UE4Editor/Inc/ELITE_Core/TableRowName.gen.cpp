// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/TableRowName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTableRowName() {}
// Cross Module References
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowName();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
class UScriptStruct* FTableRowName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_CORE_API uint32 Get_Z_Construct_UScriptStruct_FTableRowName_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTableRowName, Z_Construct_UPackage__Script_ELITE_Core(), TEXT("TableRowName"), sizeof(FTableRowName), Get_Z_Construct_UScriptStruct_FTableRowName_Hash());
	}
	return Singleton;
}
template<> ELITE_CORE_API UScriptStruct* StaticStruct<FTableRowName>()
{
	return FTableRowName::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTableRowName(FTableRowName::StaticStruct, TEXT("/Script/ELITE_Core"), TEXT("TableRowName"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Core_StaticRegisterNativesFTableRowName
{
	FScriptStruct_ELITE_Core_StaticRegisterNativesFTableRowName()
	{
		UScriptStruct::DeferCppStructOps<FTableRowName>(FName(TEXT("TableRowName")));
	}
} ScriptStruct_ELITE_Core_StaticRegisterNativesFTableRowName;
	struct Z_Construct_UScriptStruct_FTableRowName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TableRowName.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTableRowName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTableRowName>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTableRowName_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TableRowName" },
		{ "ModuleRelativePath", "Public/TableRowName.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTableRowName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010020000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTableRowName, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTableRowName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTableRowName_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTableRowName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
		nullptr,
		&NewStructOps,
		"TableRowName",
		sizeof(FTableRowName),
		alignof(FTableRowName),
		Z_Construct_UScriptStruct_FTableRowName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTableRowName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTableRowName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTableRowName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTableRowName_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TableRowName"), sizeof(FTableRowName), Get_Z_Construct_UScriptStruct_FTableRowName_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTableRowName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTableRowName_Hash() { return 4166829869U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
