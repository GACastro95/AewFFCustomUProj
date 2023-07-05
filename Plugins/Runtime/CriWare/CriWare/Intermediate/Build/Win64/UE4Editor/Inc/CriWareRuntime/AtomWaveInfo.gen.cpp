// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomWaveInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomWaveInfo() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomWaveInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomFormat();
// End Cross Module References
class UScriptStruct* FAtomWaveInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomWaveInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomWaveInfo, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomWaveInfo"), sizeof(FAtomWaveInfo), Get_Z_Construct_UScriptStruct_FAtomWaveInfo_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomWaveInfo>()
{
	return FAtomWaveInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomWaveInfo(FAtomWaveInfo::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomWaveInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomWaveInfo
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomWaveInfo()
	{
		UScriptStruct::DeferCppStructOps<FAtomWaveInfo>(FName(TEXT("AtomWaveInfo")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomWaveInfo;
	struct Z_Construct_UScriptStruct_FAtomWaveInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Format;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SamplingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSamples_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSamples;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStreamed_MetaData[];
#endif
		static void NewProp_bIsStreamed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStreamed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomWaveInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomWaveInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWaveInfo" },
		{ "ModuleRelativePath", "Public/AtomWaveInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomWaveInfo, Format), Z_Construct_UEnum_CriWareRuntime_EAtomFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SamplingRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWaveInfo" },
		{ "ModuleRelativePath", "Public/AtomWaveInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SamplingRate = { "SamplingRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomWaveInfo, SamplingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SamplingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SamplingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWaveInfo" },
		{ "ModuleRelativePath", "Public/AtomWaveInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomWaveInfo, NumChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumSamples_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWaveInfo" },
		{ "ModuleRelativePath", "Public/AtomWaveInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumSamples = { "NumSamples", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomWaveInfo, NumSamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumSamples_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomWaveInfo" },
		{ "ModuleRelativePath", "Public/AtomWaveInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_SetBit(void* Obj)
	{
		((FAtomWaveInfo*)Obj)->bIsStreamed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed = { "bIsStreamed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAtomWaveInfo), &Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_Format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_SamplingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_NumSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::NewProp_bIsStreamed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomWaveInfo",
		sizeof(FAtomWaveInfo),
		alignof(FAtomWaveInfo),
		Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomWaveInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomWaveInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomWaveInfo"), sizeof(FAtomWaveInfo), Get_Z_Construct_UScriptStruct_FAtomWaveInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomWaveInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomWaveInfo_Hash() { return 2551042027U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
