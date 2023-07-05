// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomBeatSyncInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomBeatSyncInfo() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomBeatSyncInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAtomBeatSyncInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomBeatSyncInfo, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomBeatSyncInfo"), sizeof(FAtomBeatSyncInfo), Get_Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomBeatSyncInfo>()
{
	return FAtomBeatSyncInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomBeatSyncInfo(FAtomBeatSyncInfo::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomBeatSyncInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomBeatSyncInfo
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomBeatSyncInfo()
	{
		UScriptStruct::DeferCppStructOps<FAtomBeatSyncInfo>(FName(TEXT("AtomBeatSyncInfo")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomBeatSyncInfo;
	struct Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomBeatSyncInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomBeatSyncInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomBeatSyncInfo",
		sizeof(FAtomBeatSyncInfo),
		alignof(FAtomBeatSyncInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomBeatSyncInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomBeatSyncInfo"), sizeof(FAtomBeatSyncInfo), Get_Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomBeatSyncInfo_Hash() { return 3607696711U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
