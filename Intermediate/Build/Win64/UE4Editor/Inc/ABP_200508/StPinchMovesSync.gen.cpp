// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StPinchMovesSync.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStPinchMovesSync() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPinchMovesSync();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStSyncMontageObj();
// End Cross Module References

static_assert(std::is_polymorphic<FStPinchMovesSync>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStPinchMovesSync cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStPinchMovesSync::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStPinchMovesSync_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStPinchMovesSync, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StPinchMovesSync"), sizeof(FStPinchMovesSync), Get_Z_Construct_UScriptStruct_FStPinchMovesSync_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStPinchMovesSync>()
{
	return FStPinchMovesSync::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStPinchMovesSync(FStPinchMovesSync::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StPinchMovesSync"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStPinchMovesSync
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStPinchMovesSync()
	{
		UScriptStruct::DeferCppStructOps<FStPinchMovesSync>(FName(TEXT("StPinchMovesSync")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStPinchMovesSync;
	struct Z_Construct_UScriptStruct_FStPinchMovesSync_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncMontage_00_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SyncMontage_00;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncMontage_01_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SyncMontage_01;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SyncMontage_02_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SyncMontage_02;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StPinchMovesSync.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStPinchMovesSync>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::NewProp_SyncMontage_00_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPinchMovesSync" },
		{ "ModuleRelativePath", "Public/StPinchMovesSync.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::NewProp_SyncMontage_00 = { "SyncMontage_00", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPinchMovesSync, SyncMontage_00), Z_Construct_UScriptStruct_FStSyncMontageObj, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::NewProp_SyncMontage_00_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::NewProp_SyncMontage_00_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::NewProp_SyncMontage_01_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPinchMovesSync" },
		{ "ModuleRelativePath", "Public/StPinchMovesSync.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::NewProp_SyncMontage_01 = { "SyncMontage_01", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPinchMovesSync, SyncMontage_01), Z_Construct_UScriptStruct_FStSyncMontageObj, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::NewProp_SyncMontage_01_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::NewProp_SyncMontage_01_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::NewProp_SyncMontage_02_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPinchMovesSync" },
		{ "ModuleRelativePath", "Public/StPinchMovesSync.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::NewProp_SyncMontage_02 = { "SyncMontage_02", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPinchMovesSync, SyncMontage_02), Z_Construct_UScriptStruct_FStSyncMontageObj, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::NewProp_SyncMontage_02_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::NewProp_SyncMontage_02_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::NewProp_SyncMontage_00,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::NewProp_SyncMontage_01,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::NewProp_SyncMontage_02,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StPinchMovesSync",
		sizeof(FStPinchMovesSync),
		alignof(FStPinchMovesSync),
		Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStPinchMovesSync()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStPinchMovesSync_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StPinchMovesSync"), sizeof(FStPinchMovesSync), Get_Z_Construct_UScriptStruct_FStPinchMovesSync_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStPinchMovesSync_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStPinchMovesSync_Hash() { return 3365061110U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
