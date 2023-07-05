// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/MovesOutputData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovesOutputData() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FMovesOutputData();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
class UScriptStruct* FMovesOutputData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FMovesOutputData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovesOutputData, Z_Construct_UPackage__Script_Creation(), TEXT("MovesOutputData"), sizeof(FMovesOutputData), Get_Z_Construct_UScriptStruct_FMovesOutputData_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FMovesOutputData>()
{
	return FMovesOutputData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovesOutputData(FMovesOutputData::StaticStruct, TEXT("/Script/Creation"), TEXT("MovesOutputData"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFMovesOutputData
{
	FScriptStruct_Creation_StaticRegisterNativesFMovesOutputData()
	{
		UScriptStruct::DeferCppStructOps<FMovesOutputData>(FName(TEXT("MovesOutputData")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFMovesOutputData;
	struct Z_Construct_UScriptStruct_FMovesOutputData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RosterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RosterName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Property_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Property;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesOutputData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovesOutputData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovesOutputData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovesOutputData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesOutputData_Statics::NewProp_RosterName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesOutputData" },
		{ "ModuleRelativePath", "Public/MovesOutputData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovesOutputData_Statics::NewProp_RosterName = { "RosterName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesOutputData, RosterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesOutputData_Statics::NewProp_RosterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesOutputData_Statics::NewProp_RosterName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovesOutputData_Statics::NewProp_Property_Inner = { "Property", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesOutputData_Statics::NewProp_Property_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesOutputData" },
		{ "ModuleRelativePath", "Public/MovesOutputData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovesOutputData_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesOutputData, Property), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesOutputData_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesOutputData_Statics::NewProp_Property_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovesOutputData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesOutputData_Statics::NewProp_RosterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesOutputData_Statics::NewProp_Property_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesOutputData_Statics::NewProp_Property,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovesOutputData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"MovesOutputData",
		sizeof(FMovesOutputData),
		alignof(FMovesOutputData),
		Z_Construct_UScriptStruct_FMovesOutputData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesOutputData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesOutputData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesOutputData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovesOutputData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovesOutputData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovesOutputData"), sizeof(FMovesOutputData), Get_Z_Construct_UScriptStruct_FMovesOutputData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovesOutputData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovesOutputData_Hash() { return 718786691U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
