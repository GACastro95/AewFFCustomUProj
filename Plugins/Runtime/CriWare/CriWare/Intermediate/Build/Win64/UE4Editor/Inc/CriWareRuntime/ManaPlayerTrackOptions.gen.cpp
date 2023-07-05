// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaPlayerTrackOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaPlayerTrackOptions() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerTrackOptions();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FManaPlayerTrackOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FManaPlayerTrackOptions, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ManaPlayerTrackOptions"), sizeof(FManaPlayerTrackOptions), Get_Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FManaPlayerTrackOptions>()
{
	return FManaPlayerTrackOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FManaPlayerTrackOptions(FManaPlayerTrackOptions::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("ManaPlayerTrackOptions"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaPlayerTrackOptions
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaPlayerTrackOptions()
	{
		UScriptStruct::DeferCppStructOps<FManaPlayerTrackOptions>(FName(TEXT("ManaPlayerTrackOptions")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFManaPlayerTrackOptions;
	struct Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Audio_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Audio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtraAudio_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExtraAudio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Subtitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Video_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Video;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManaPlayerTrackOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Audio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Audio = { "Audio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaPlayerTrackOptions, Audio), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Audio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Audio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_SubAudio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_SubAudio = { "SubAudio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaPlayerTrackOptions, SubAudio), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_SubAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_SubAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_ExtraAudio_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_ExtraAudio = { "ExtraAudio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaPlayerTrackOptions, ExtraAudio), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_ExtraAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_ExtraAudio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Subtitle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Subtitle = { "Subtitle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaPlayerTrackOptions, Subtitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Subtitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Subtitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Video_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Video = { "Video", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaPlayerTrackOptions, Video), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Video_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Video_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Alpha_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerTrackOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerTrackOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaPlayerTrackOptions, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Alpha_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Audio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_SubAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_ExtraAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Subtitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Video,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::NewProp_Alpha,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"ManaPlayerTrackOptions",
		sizeof(FManaPlayerTrackOptions),
		alignof(FManaPlayerTrackOptions),
		Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerTrackOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ManaPlayerTrackOptions"), sizeof(FManaPlayerTrackOptions), Get_Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FManaPlayerTrackOptions_Hash() { return 956197237U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
