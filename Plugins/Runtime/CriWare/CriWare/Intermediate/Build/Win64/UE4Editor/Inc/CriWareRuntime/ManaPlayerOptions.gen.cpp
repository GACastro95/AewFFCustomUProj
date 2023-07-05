// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ManaPlayerOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManaPlayerOptions() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerOptions();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerTrackOptions();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop();
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaFrameAction();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FManaPlayerOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FManaPlayerOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FManaPlayerOptions, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ManaPlayerOptions"), sizeof(FManaPlayerOptions), Get_Z_Construct_UScriptStruct_FManaPlayerOptions_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FManaPlayerOptions>()
{
	return FManaPlayerOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FManaPlayerOptions(FManaPlayerOptions::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("ManaPlayerOptions"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaPlayerOptions
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFManaPlayerOptions()
	{
		UScriptStruct::DeferCppStructOps<FManaPlayerOptions>(FName(TEXT("ManaPlayerOptions")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFManaPlayerOptions;
	struct Z_Construct_UScriptStruct_FManaPlayerOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tracks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeekTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SeekTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayOnOpen_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayOnOpen_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayOnOpen;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Loop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Loop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaybackTimer_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlaybackTimer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxFrameDrop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFrameDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaxFrameDrop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndFrameAction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndFrameAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EndFrameAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSyncedSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TimeSyncedSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManaPlayerOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Tracks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaPlayerOptions, Tracks), Z_Construct_UScriptStruct_FManaPlayerTrackOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Tracks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_SeekTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_SeekTime = { "SeekTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaPlayerOptions, SeekTime), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_SeekTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_SeekTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen = { "PlayOnOpen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaPlayerOptions, PlayOnOpen), Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaPlayerOptions, Loop), Z_Construct_UEnum_CriWareRuntime_EManaPlayerOptionBooleanOverride, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer = { "PlaybackTimer", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaPlayerOptions, PlaybackTimer), Z_Construct_UEnum_CriWareRuntime_EManaPlaybackTimer, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop = { "MaxFrameDrop", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaPlayerOptions, MaxFrameDrop), Z_Construct_UEnum_CriWareRuntime_EManaMaxFrameDrop, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction = { "EndFrameAction", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaPlayerOptions, EndFrameAction), Z_Construct_UEnum_CriWareRuntime_EManaFrameAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_TimeSyncedSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ManaPlayerOptions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ManaPlayerOptions.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_TimeSyncedSource = { "TimeSyncedSource", nullptr, (EPropertyFlags)0x001204000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FManaPlayerOptions, TimeSyncedSource), Z_Construct_UClass_UAtomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_TimeSyncedSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_TimeSyncedSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Tracks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_SeekTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlayOnOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_Loop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_PlaybackTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_MaxFrameDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_EndFrameAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::NewProp_TimeSyncedSource,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"ManaPlayerOptions",
		sizeof(FManaPlayerOptions),
		alignof(FManaPlayerOptions),
		Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManaPlayerOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FManaPlayerOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ManaPlayerOptions"), sizeof(FManaPlayerOptions), Get_Z_Construct_UScriptStruct_FManaPlayerOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FManaPlayerOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FManaPlayerOptions_Hash() { return 3453905472U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
