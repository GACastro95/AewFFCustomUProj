// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaAudioTrackInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaAudioTrackInfo() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaAudioTrackInfo();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaSoundType();
// End Cross Module References
class UScriptStruct* FManaAudioTrackInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FManaAudioTrackInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FManaAudioTrackInfo, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ManaAudioTrackInfo"), sizeof(FManaAudioTrackInfo), Get_Z_Construct_UScriptStruct_FManaAudioTrackInfo_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FManaAudioTrackInfo>()
{
	return FManaAudioTrackInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FManaAudioTrackInfo(FManaAudioTrackInfo::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("ManaAudioTrackInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaAudioTrackInfo
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaAudioTrackInfo()
	{
		UScriptStruct::DeferCppStructOps<FManaAudioTrackInfo>(FName(TEXT("ManaAudioTrackInfo")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFManaAudioTrackInfo;
	struct Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplingRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SamplingRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSamples_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalSamples;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAmbisonics_MetaData[];
#endif
		static void NewProp_bIsAmbisonics_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAmbisonics;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManaAudioTrackInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_NumChannels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaAudioTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_NumChannels = { "NumChannels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaAudioTrackInfo, NumChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_NumChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_NumChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_SamplingRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaAudioTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_SamplingRate = { "SamplingRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaAudioTrackInfo, SamplingRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_SamplingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_SamplingRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_TotalSamples_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaAudioTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_TotalSamples = { "TotalSamples", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaAudioTrackInfo, TotalSamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_TotalSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_TotalSamples_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_bIsAmbisonics_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaAudioTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_bIsAmbisonics_SetBit(void* Obj)
	{
		((FManaAudioTrackInfo*)Obj)->bIsAmbisonics = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_bIsAmbisonics = { "bIsAmbisonics", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FManaAudioTrackInfo), &Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_bIsAmbisonics_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_bIsAmbisonics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_bIsAmbisonics_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaAudioTrackInfo" },
		{ "ModuleRelativePath", "Public/ManaAudioTrackInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaAudioTrackInfo, Type), Z_Construct_UEnum_CriWareRuntime_EManaSoundType, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_NumChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_SamplingRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_TotalSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_bIsAmbisonics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::NewProp_Type,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"ManaAudioTrackInfo",
		sizeof(FManaAudioTrackInfo),
		alignof(FManaAudioTrackInfo),
		Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManaAudioTrackInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FManaAudioTrackInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ManaAudioTrackInfo"), sizeof(FManaAudioTrackInfo), Get_Z_Construct_UScriptStruct_FManaAudioTrackInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FManaAudioTrackInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FManaAudioTrackInfo_Hash() { return 880465932U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
