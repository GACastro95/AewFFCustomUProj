// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/DebugCareerParam_Snapshot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugCareerParam_Snapshot() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FDebugCareerParam_Snapshot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot, Z_Construct_UPackage__Script_ABP_200508(), TEXT("DebugCareerParam_Snapshot"), sizeof(FDebugCareerParam_Snapshot), Get_Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FDebugCareerParam_Snapshot>()
{
	return FDebugCareerParam_Snapshot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugCareerParam_Snapshot(FDebugCareerParam_Snapshot::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("DebugCareerParam_Snapshot"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_Snapshot
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_Snapshot()
	{
		UScriptStruct::DeferCppStructOps<FDebugCareerParam_Snapshot>(FName(TEXT("DebugCareerParam_Snapshot")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFDebugCareerParam_Snapshot;
	struct Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bSnapshotMaxScriptMode_MetaData[];
#endif
		static void NewProp_m_bSnapshotMaxScriptMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bSnapshotMaxScriptMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_Snapshot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugCareerParam_Snapshot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Statics::NewProp_m_bSnapshotMaxScriptMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DebugCareerParam_Snapshot" },
		{ "ModuleRelativePath", "Public/DebugCareerParam_Snapshot.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Statics::NewProp_m_bSnapshotMaxScriptMode_SetBit(void* Obj)
	{
		((FDebugCareerParam_Snapshot*)Obj)->m_bSnapshotMaxScriptMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Statics::NewProp_m_bSnapshotMaxScriptMode = { "m_bSnapshotMaxScriptMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDebugCareerParam_Snapshot), &Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Statics::NewProp_m_bSnapshotMaxScriptMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Statics::NewProp_m_bSnapshotMaxScriptMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Statics::NewProp_m_bSnapshotMaxScriptMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Statics::NewProp_m_bSnapshotMaxScriptMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"DebugCareerParam_Snapshot",
		sizeof(FDebugCareerParam_Snapshot),
		alignof(FDebugCareerParam_Snapshot),
		Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugCareerParam_Snapshot"), sizeof(FDebugCareerParam_Snapshot), Get_Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugCareerParam_Snapshot_Hash() { return 1334560109U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
