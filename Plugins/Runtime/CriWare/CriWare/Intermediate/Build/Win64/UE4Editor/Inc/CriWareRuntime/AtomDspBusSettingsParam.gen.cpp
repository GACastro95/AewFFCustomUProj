// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomDspBusSettingsParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomDspBusSettingsParam() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomDspBusSettingsParam();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomStringWithComment();
// End Cross Module References
class UScriptStruct* FAtomDspBusSettingsParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomDspBusSettingsParam"), sizeof(FAtomDspBusSettingsParam), Get_Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomDspBusSettingsParam>()
{
	return FAtomDspBusSettingsParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomDspBusSettingsParam(FAtomDspBusSettingsParam::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomDspBusSettingsParam"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomDspBusSettingsParam
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomDspBusSettingsParam()
	{
		UScriptStruct::DeferCppStructOps<FAtomDspBusSettingsParam>(FName(TEXT("AtomDspBusSettingsParam")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomDspBusSettingsParam;
	struct Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusSettingsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BusSettingsName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Snapshot_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Snapshot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bus_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bus_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomDspBusSettingsParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomDspBusSettingsParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_BusSettingsName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomDspBusSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomDspBusSettingsParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_BusSettingsName = { "BusSettingsName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomDspBusSettingsParam, BusSettingsName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_BusSettingsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_BusSettingsName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot_Inner = { "Snapshot", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomStringWithComment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomDspBusSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomDspBusSettingsParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomDspBusSettingsParam, Snapshot), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus_Inner = { "Bus", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomStringWithComment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomDspBusSettingsParam" },
		{ "ModuleRelativePath", "Public/AtomDspBusSettingsParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus = { "Bus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomDspBusSettingsParam, Bus), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_BusSettingsName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Snapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::NewProp_Bus,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomDspBusSettingsParam",
		sizeof(FAtomDspBusSettingsParam),
		alignof(FAtomDspBusSettingsParam),
		Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomDspBusSettingsParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomDspBusSettingsParam"), sizeof(FAtomDspBusSettingsParam), Get_Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomDspBusSettingsParam_Hash() { return 3368472213U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
