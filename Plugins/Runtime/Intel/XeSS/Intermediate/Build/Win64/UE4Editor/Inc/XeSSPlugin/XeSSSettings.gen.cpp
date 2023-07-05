// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XeSSPlugin/Public/XeSSSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXeSSSettings() {}
// Cross Module References
	XESSPLUGIN_API UClass* Z_Construct_UClass_UXeSSSettings_NoRegister();
	XESSPLUGIN_API UClass* Z_Construct_UClass_UXeSSSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_XeSSPlugin();
// End Cross Module References
	void UXeSSSettings::StaticRegisterNativesUXeSSSettings()
	{
	}
	UClass* Z_Construct_UClass_UXeSSSettings_NoRegister()
	{
		return UXeSSSettings::StaticClass();
	}
	struct Z_Construct_UClass_UXeSSSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableXeSSInEditorViewports_MetaData[];
#endif
		static void NewProp_bEnableXeSSInEditorViewports_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableXeSSInEditorViewports;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDataDumpPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DebugDataDumpPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXeSSSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_XeSSPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXeSSSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "XeSSSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/XeSSSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXeSSSettings_Statics::NewProp_bEnableXeSSInEditorViewports_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "XeSSSettings" },
		{ "ModuleRelativePath", "Public/XeSSSettings.h" },
	};
#endif
	void Z_Construct_UClass_UXeSSSettings_Statics::NewProp_bEnableXeSSInEditorViewports_SetBit(void* Obj)
	{
		((UXeSSSettings*)Obj)->bEnableXeSSInEditorViewports = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXeSSSettings_Statics::NewProp_bEnableXeSSInEditorViewports = { "bEnableXeSSInEditorViewports", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UXeSSSettings), &Z_Construct_UClass_UXeSSSettings_Statics::NewProp_bEnableXeSSInEditorViewports_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXeSSSettings_Statics::NewProp_bEnableXeSSInEditorViewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXeSSSettings_Statics::NewProp_bEnableXeSSInEditorViewports_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXeSSSettings_Statics::NewProp_DebugDataDumpPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "XeSSSettings" },
		{ "ModuleRelativePath", "Public/XeSSSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UXeSSSettings_Statics::NewProp_DebugDataDumpPath = { "DebugDataDumpPath", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UXeSSSettings, DebugDataDumpPath), METADATA_PARAMS(Z_Construct_UClass_UXeSSSettings_Statics::NewProp_DebugDataDumpPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXeSSSettings_Statics::NewProp_DebugDataDumpPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXeSSSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXeSSSettings_Statics::NewProp_bEnableXeSSInEditorViewports,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXeSSSettings_Statics::NewProp_DebugDataDumpPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXeSSSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXeSSSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXeSSSettings_Statics::ClassParams = {
		&UXeSSSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UXeSSSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UXeSSSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UXeSSSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXeSSSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXeSSSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXeSSSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXeSSSettings, 2038805846);
	template<> XESSPLUGIN_API UClass* StaticClass<UXeSSSettings>()
	{
		return UXeSSSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXeSSSettings(Z_Construct_UClass_UXeSSSettings, &UXeSSSettings::StaticClass, TEXT("/Script/XeSSPlugin"), TEXT("UXeSSSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXeSSSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
