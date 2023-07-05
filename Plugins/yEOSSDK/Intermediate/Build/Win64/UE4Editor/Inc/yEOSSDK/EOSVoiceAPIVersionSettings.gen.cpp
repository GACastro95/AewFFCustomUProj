// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSVoiceAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSVoiceAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSVoiceAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSVoiceAPIVersionSettings"), sizeof(FEOSVoiceAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSVoiceAPIVersionSettings>()
{
	return FEOSVoiceAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSVoiceAPIVersionSettings(FEOSVoiceAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSVoiceAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSVoiceAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSVoiceAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSVoiceAPIVersionSettings>(FName(TEXT("EOSVoiceAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSVoiceAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetAudioInputSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetAudioInputSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetAudioOutputSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetAudioOutputSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNotifyAudioDevicesChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddNotifyAudioDevicesChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetAudioInputDevicesCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetAudioInputDevicesCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetAudioInputDeviceByIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetAudioInputDeviceByIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetAudioOutputDevicesCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetAudioOutputDevicesCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetAudioOutputDeviceByIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetAudioOutputDeviceByIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSVoiceAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSVoiceAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_SetAudioInputSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSVoiceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSVoiceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_SetAudioInputSettings = { "SetAudioInputSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSVoiceAPIVersionSettings, SetAudioInputSettings), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_SetAudioInputSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_SetAudioInputSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_SetAudioOutputSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSVoiceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSVoiceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_SetAudioOutputSettings = { "SetAudioOutputSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSVoiceAPIVersionSettings, SetAudioOutputSettings), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_SetAudioOutputSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_SetAudioOutputSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_AddNotifyAudioDevicesChanged_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSVoiceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSVoiceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_AddNotifyAudioDevicesChanged = { "AddNotifyAudioDevicesChanged", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSVoiceAPIVersionSettings, AddNotifyAudioDevicesChanged), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_AddNotifyAudioDevicesChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_AddNotifyAudioDevicesChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioInputDevicesCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSVoiceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSVoiceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioInputDevicesCount = { "GetAudioInputDevicesCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSVoiceAPIVersionSettings, GetAudioInputDevicesCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioInputDevicesCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioInputDevicesCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioInputDeviceByIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSVoiceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSVoiceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioInputDeviceByIndex = { "GetAudioInputDeviceByIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSVoiceAPIVersionSettings, GetAudioInputDeviceByIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioInputDeviceByIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioInputDeviceByIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioOutputDevicesCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSVoiceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSVoiceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioOutputDevicesCount = { "GetAudioOutputDevicesCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSVoiceAPIVersionSettings, GetAudioOutputDevicesCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioOutputDevicesCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioOutputDevicesCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioOutputDeviceByIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSVoiceAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSVoiceAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioOutputDeviceByIndex = { "GetAudioOutputDeviceByIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSVoiceAPIVersionSettings, GetAudioOutputDeviceByIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioOutputDeviceByIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioOutputDeviceByIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_SetAudioInputSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_SetAudioOutputSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_AddNotifyAudioDevicesChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioInputDevicesCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioInputDeviceByIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioOutputDevicesCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::NewProp_GetAudioOutputDeviceByIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSVoiceAPIVersionSettings",
		sizeof(FEOSVoiceAPIVersionSettings),
		alignof(FEOSVoiceAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSVoiceAPIVersionSettings"), sizeof(FEOSVoiceAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSVoiceAPIVersionSettings_Hash() { return 3657548733U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
