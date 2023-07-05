// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/MovesTempData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovesTempData() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FMovesTempData();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher();
// End Cross Module References
class UScriptStruct* FMovesTempData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FMovesTempData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovesTempData, Z_Construct_UPackage__Script_Creation(), TEXT("MovesTempData"), sizeof(FMovesTempData), Get_Z_Construct_UScriptStruct_FMovesTempData_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FMovesTempData>()
{
	return FMovesTempData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovesTempData(FMovesTempData::StaticStruct, TEXT("/Script/Creation"), TEXT("MovesTempData"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFMovesTempData
{
	FScriptStruct_Creation_StaticRegisterNativesFMovesTempData()
	{
		UScriptStruct::DeferCppStructOps<FMovesTempData>(FName(TEXT("MovesTempData")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFMovesTempData;
	struct Z_Construct_UScriptStruct_FMovesTempData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MOVES_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MOVES;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finisher_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Finisher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Signature_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Signature;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finisher02_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Finisher02;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTempData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovesTempData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovesTempData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovesTempData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTempData" },
		{ "ModuleRelativePath", "Public/MovesTempData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesTempData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_MOVES_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTempData" },
		{ "ModuleRelativePath", "Public/MovesTempData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_MOVES = { "MOVES", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesTempData, MOVES), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_MOVES_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_MOVES_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Finisher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTempData" },
		{ "ModuleRelativePath", "Public/MovesTempData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Finisher = { "Finisher", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesTempData, Finisher), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Finisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Finisher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Signature_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTempData" },
		{ "ModuleRelativePath", "Public/MovesTempData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Signature = { "Signature", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesTempData, Signature), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Signature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Signature_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Finisher02_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MovesTempData" },
		{ "ModuleRelativePath", "Public/MovesTempData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Finisher02 = { "Finisher02", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovesTempData, Finisher02), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Finisher02_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Finisher02_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovesTempData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_MOVES,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Finisher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Signature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovesTempData_Statics::NewProp_Finisher02,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovesTempData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"MovesTempData",
		sizeof(FMovesTempData),
		alignof(FMovesTempData),
		Z_Construct_UScriptStruct_FMovesTempData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTempData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovesTempData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovesTempData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovesTempData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovesTempData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovesTempData"), sizeof(FMovesTempData), Get_Z_Construct_UScriptStruct_FMovesTempData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovesTempData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovesTempData_Hash() { return 512878724U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
