// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomAudioVolumeParameters.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomAudioVolumeParameters() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAudioVolumeParameters();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshotSwitchSettings();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendInterpolationSettings();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAisacControlInterpolationSettings();
// End Cross Module References
class UScriptStruct* FAtomAudioVolumeParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomAudioVolumeParameters"), sizeof(FAtomAudioVolumeParameters), Get_Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomAudioVolumeParameters>()
{
	return FAtomAudioVolumeParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomAudioVolumeParameters(FAtomAudioVolumeParameters::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomAudioVolumeParameters"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAudioVolumeParameters
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAudioVolumeParameters()
	{
		UScriptStruct::DeferCppStructOps<FAtomAudioVolumeParameters>(FName(TEXT("AtomAudioVolumeParameters")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomAudioVolumeParameters;
	struct Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSnapshotSettings_MetaData[];
#endif
		static void NewProp_bUseSnapshotSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSnapshotSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBusSendSettings_MetaData[];
#endif
		static void NewProp_bUseBusSendSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBusSendSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAisacControlSettings_MetaData[];
#endif
		static void NewProp_bUseAisacControlSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAisacControlSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceForEntranceVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceForEntranceVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSwitchIntepolationInsideForBus_MetaData[];
#endif
		static void NewProp_bSwitchIntepolationInsideForBus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSwitchIntepolationInsideForBus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSwitchIntepolationInsideForAisac_MetaData[];
#endif
		static void NewProp_bSwitchIntepolationInsideForAisac_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSwitchIntepolationInsideForAisac;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SnapshotSwitchSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotSwitchSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SnapshotSwitchSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BusSendInterpolateSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusSendInterpolateSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BusSendInterpolateSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AisacControlInterpolateSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacControlInterpolateSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AisacControlInterpolateSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomAudioVolumeParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings_SetBit(void* Obj)
	{
		((FAtomAudioVolumeParameters*)Obj)->bUseSnapshotSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings = { "bUseSnapshotSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomAudioVolumeParameters), &Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings_SetBit(void* Obj)
	{
		((FAtomAudioVolumeParameters*)Obj)->bUseBusSendSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings = { "bUseBusSendSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomAudioVolumeParameters), &Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings_SetBit(void* Obj)
	{
		((FAtomAudioVolumeParameters*)Obj)->bUseAisacControlSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings = { "bUseAisacControlSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomAudioVolumeParameters), &Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_MaxDistanceForEntranceVolume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_MaxDistanceForEntranceVolume = { "MaxDistanceForEntranceVolume", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAudioVolumeParameters, MaxDistanceForEntranceVolume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_MaxDistanceForEntranceVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_MaxDistanceForEntranceVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus_SetBit(void* Obj)
	{
		((FAtomAudioVolumeParameters*)Obj)->bSwitchIntepolationInsideForBus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus = { "bSwitchIntepolationInsideForBus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomAudioVolumeParameters), &Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac_SetBit(void* Obj)
	{
		((FAtomAudioVolumeParameters*)Obj)->bSwitchIntepolationInsideForAisac = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac = { "bSwitchIntepolationInsideForAisac", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomAudioVolumeParameters), &Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings_Inner = { "SnapshotSwitchSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSnapshotSwitchSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings = { "SnapshotSwitchSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAudioVolumeParameters, SnapshotSwitchSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings_Inner = { "BusSendInterpolateSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBusSendInterpolationSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings = { "BusSendInterpolateSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAudioVolumeParameters, BusSendInterpolateSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings_Inner = { "AisacControlInterpolateSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAisacControlInterpolationSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomAudioVolumeParameters" },
		{ "ModuleRelativePath", "Public/AtomAudioVolumeParameters.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings = { "AisacControlInterpolateSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomAudioVolumeParameters, AisacControlInterpolateSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseSnapshotSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseBusSendSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bUseAisacControlSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_MaxDistanceForEntranceVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_bSwitchIntepolationInsideForAisac,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_SnapshotSwitchSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_BusSendInterpolateSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::NewProp_AisacControlInterpolateSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AtomAudioVolumeParameters",
		sizeof(FAtomAudioVolumeParameters),
		alignof(FAtomAudioVolumeParameters),
		Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomAudioVolumeParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomAudioVolumeParameters"), sizeof(FAtomAudioVolumeParameters), Get_Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomAudioVolumeParameters_Hash() { return 627222903U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
