// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YDebugMenuParamForIngame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDebugMenuParamForIngame() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FYDebugMenuParamForIngame();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EYDebugMenuUITypeForIngame();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELBugReportSettings();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataSystem_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UAudioOption_MenuSettings_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UGraphicsOptions_MenuSettings_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UGameMoney_MenuSettings_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FAutoMatchSettings();
	ABP_200508_API UClass* Z_Construct_UClass_UYMiniGameOptions_MenuSettings_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYCAW_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYCAA_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYCAM_DebugMenu_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FDebugCameraSettings();
// End Cross Module References
class UScriptStruct* FYDebugMenuParamForIngame::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame, Z_Construct_UPackage__Script_ABP_200508(), TEXT("YDebugMenuParamForIngame"), sizeof(FYDebugMenuParamForIngame), Get_Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FYDebugMenuParamForIngame>()
{
	return FYDebugMenuParamForIngame::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYDebugMenuParamForIngame(FYDebugMenuParamForIngame::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("YDebugMenuParamForIngame"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFYDebugMenuParamForIngame
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFYDebugMenuParamForIngame()
	{
		UScriptStruct::DeferCppStructOps<FYDebugMenuParamForIngame>(FName(TEXT("YDebugMenuParamForIngame")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFYDebugMenuParamForIngame;
	struct Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UITypes_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UITypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UITypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UITypes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BugReportSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BugReportSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioOption_MenuSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioOption_MenuSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphicsOptionsMenuSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphicsOptionsMenuSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameMoney_MenuSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameMoney_MenuSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoMatchSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoMatchSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniGameOptions_MenuSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MiniGameOptions_MenuSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CAW_DebugMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CAW_DebugMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CAA_DebugMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CAA_DebugMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CAM_DebugMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CAM_DebugMenu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugCameraSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugCameraSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YDebugMenuParamForIngame.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYDebugMenuParamForIngame>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_UITypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_UITypes_Inner = { "UITypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_EYDebugMenuUITypeForIngame, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_UITypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuParamForIngame" },
		{ "ModuleRelativePath", "Public/YDebugMenuParamForIngame.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_UITypes = { "UITypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDebugMenuParamForIngame, UITypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_UITypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_UITypes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_BugReportSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuParamForIngame" },
		{ "ModuleRelativePath", "Public/YDebugMenuParamForIngame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_BugReportSettings = { "BugReportSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDebugMenuParamForIngame, BugReportSettings), Z_Construct_UScriptStruct_FELBugReportSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_BugReportSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_BugReportSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_SaveDataSystem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuParamForIngame" },
		{ "ModuleRelativePath", "Public/YDebugMenuParamForIngame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_SaveDataSystem = { "SaveDataSystem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDebugMenuParamForIngame, SaveDataSystem), Z_Construct_UClass_USaveDataSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_SaveDataSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_SaveDataSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_AudioOption_MenuSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuParamForIngame" },
		{ "ModuleRelativePath", "Public/YDebugMenuParamForIngame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_AudioOption_MenuSettings = { "AudioOption_MenuSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDebugMenuParamForIngame, AudioOption_MenuSettings), Z_Construct_UClass_UAudioOption_MenuSettings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_AudioOption_MenuSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_AudioOption_MenuSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_GraphicsOptionsMenuSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuParamForIngame" },
		{ "ModuleRelativePath", "Public/YDebugMenuParamForIngame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_GraphicsOptionsMenuSettings = { "GraphicsOptionsMenuSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDebugMenuParamForIngame, GraphicsOptionsMenuSettings), Z_Construct_UClass_UGraphicsOptions_MenuSettings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_GraphicsOptionsMenuSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_GraphicsOptionsMenuSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_GameMoney_MenuSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuParamForIngame" },
		{ "ModuleRelativePath", "Public/YDebugMenuParamForIngame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_GameMoney_MenuSettings = { "GameMoney_MenuSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDebugMenuParamForIngame, GameMoney_MenuSettings), Z_Construct_UClass_UGameMoney_MenuSettings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_GameMoney_MenuSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_GameMoney_MenuSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_AutoMatchSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuParamForIngame" },
		{ "ModuleRelativePath", "Public/YDebugMenuParamForIngame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_AutoMatchSettings = { "AutoMatchSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDebugMenuParamForIngame, AutoMatchSettings), Z_Construct_UScriptStruct_FAutoMatchSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_AutoMatchSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_AutoMatchSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_MiniGameOptions_MenuSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuParamForIngame" },
		{ "ModuleRelativePath", "Public/YDebugMenuParamForIngame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_MiniGameOptions_MenuSettings = { "MiniGameOptions_MenuSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDebugMenuParamForIngame, MiniGameOptions_MenuSettings), Z_Construct_UClass_UYMiniGameOptions_MenuSettings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_MiniGameOptions_MenuSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_MiniGameOptions_MenuSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_CAW_DebugMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuParamForIngame" },
		{ "ModuleRelativePath", "Public/YDebugMenuParamForIngame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_CAW_DebugMenu = { "CAW_DebugMenu", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDebugMenuParamForIngame, CAW_DebugMenu), Z_Construct_UClass_UYCAW_DebugMenu_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_CAW_DebugMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_CAW_DebugMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_CAA_DebugMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuParamForIngame" },
		{ "ModuleRelativePath", "Public/YDebugMenuParamForIngame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_CAA_DebugMenu = { "CAA_DebugMenu", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDebugMenuParamForIngame, CAA_DebugMenu), Z_Construct_UClass_UYCAA_DebugMenu_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_CAA_DebugMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_CAA_DebugMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_CAM_DebugMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuParamForIngame" },
		{ "ModuleRelativePath", "Public/YDebugMenuParamForIngame.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_CAM_DebugMenu = { "CAM_DebugMenu", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDebugMenuParamForIngame, CAM_DebugMenu), Z_Construct_UClass_UYCAM_DebugMenu_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_CAM_DebugMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_CAM_DebugMenu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_DebugCameraSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDebugMenuParamForIngame" },
		{ "ModuleRelativePath", "Public/YDebugMenuParamForIngame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_DebugCameraSettings = { "DebugCameraSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYDebugMenuParamForIngame, DebugCameraSettings), Z_Construct_UScriptStruct_FDebugCameraSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_DebugCameraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_DebugCameraSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_UITypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_UITypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_UITypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_BugReportSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_SaveDataSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_AudioOption_MenuSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_GraphicsOptionsMenuSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_GameMoney_MenuSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_AutoMatchSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_MiniGameOptions_MenuSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_CAW_DebugMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_CAA_DebugMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_CAM_DebugMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::NewProp_DebugCameraSettings,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"YDebugMenuParamForIngame",
		sizeof(FYDebugMenuParamForIngame),
		alignof(FYDebugMenuParamForIngame),
		Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYDebugMenuParamForIngame()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YDebugMenuParamForIngame"), sizeof(FYDebugMenuParamForIngame), Get_Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYDebugMenuParamForIngame_Hash() { return 173973065U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
