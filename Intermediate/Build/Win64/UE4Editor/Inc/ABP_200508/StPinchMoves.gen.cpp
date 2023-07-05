// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StPinchMoves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStPinchMoves() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPinchMoves();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPinchMovesReach();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPinchMovesSync();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPinchMovesParameter();
// End Cross Module References

static_assert(std::is_polymorphic<FStPinchMoves>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStPinchMoves cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStPinchMoves::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStPinchMoves_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStPinchMoves, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StPinchMoves"), sizeof(FStPinchMoves), Get_Z_Construct_UScriptStruct_FStPinchMoves_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStPinchMoves>()
{
	return FStPinchMoves::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStPinchMoves(FStPinchMoves::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StPinchMoves"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStPinchMoves
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStPinchMoves()
	{
		UScriptStruct::DeferCppStructOps<FStPinchMoves>(FName(TEXT("StPinchMoves")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStPinchMoves;
	struct Z_Construct_UScriptStruct_FStPinchMoves_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reach_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Reach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sync_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sync;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinchMoves_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StPinchMoves.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStPinchMoves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStPinchMoves>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinchMoves_Statics::NewProp_Reach_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPinchMoves" },
		{ "ModuleRelativePath", "Public/StPinchMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStPinchMoves_Statics::NewProp_Reach = { "Reach", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPinchMoves, Reach), Z_Construct_UScriptStruct_FStPinchMovesReach, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinchMoves_Statics::NewProp_Reach_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMoves_Statics::NewProp_Reach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinchMoves_Statics::NewProp_Sync_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPinchMoves" },
		{ "ModuleRelativePath", "Public/StPinchMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStPinchMoves_Statics::NewProp_Sync = { "Sync", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPinchMoves, Sync), Z_Construct_UScriptStruct_FStPinchMovesSync, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinchMoves_Statics::NewProp_Sync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMoves_Statics::NewProp_Sync_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinchMoves_Statics::NewProp_Parameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPinchMoves" },
		{ "ModuleRelativePath", "Public/StPinchMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStPinchMoves_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPinchMoves, Parameter), Z_Construct_UScriptStruct_FStPinchMovesParameter, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinchMoves_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMoves_Statics::NewProp_Parameter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStPinchMoves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPinchMoves_Statics::NewProp_Reach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPinchMoves_Statics::NewProp_Sync,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPinchMoves_Statics::NewProp_Parameter,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStPinchMoves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StPinchMoves",
		sizeof(FStPinchMoves),
		alignof(FStPinchMoves),
		Z_Construct_UScriptStruct_FStPinchMoves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMoves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinchMoves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMoves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStPinchMoves()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStPinchMoves_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StPinchMoves"), sizeof(FStPinchMoves), Get_Z_Construct_UScriptStruct_FStPinchMoves_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStPinchMoves_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStPinchMoves_Hash() { return 787208783U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
