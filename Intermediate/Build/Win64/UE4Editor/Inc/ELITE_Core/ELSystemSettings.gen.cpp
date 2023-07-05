// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/ELSystemSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSystemSettings() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UELSystemSettings_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELSystemSettings();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	void UELSystemSettings::StaticRegisterNativesUELSystemSettings()
	{
	}
	UClass* Z_Construct_UClass_UELSystemSettings_NoRegister()
	{
		return UELSystemSettings::StaticClass();
	}
	struct Z_Construct_UClass_UELSystemSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DpiScaleSizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DpiScaleSizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DpiScaleSizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DpiScaleSizeY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSystemSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSystemSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSystemSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSystemSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSystemSettings_Statics::NewProp_DpiScaleSizeX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSystemSettings" },
		{ "ModuleRelativePath", "Public/ELSystemSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSystemSettings_Statics::NewProp_DpiScaleSizeX = { "DpiScaleSizeX", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSystemSettings, DpiScaleSizeX), METADATA_PARAMS(Z_Construct_UClass_UELSystemSettings_Statics::NewProp_DpiScaleSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSystemSettings_Statics::NewProp_DpiScaleSizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSystemSettings_Statics::NewProp_DpiScaleSizeY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSystemSettings" },
		{ "ModuleRelativePath", "Public/ELSystemSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSystemSettings_Statics::NewProp_DpiScaleSizeY = { "DpiScaleSizeY", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSystemSettings, DpiScaleSizeY), METADATA_PARAMS(Z_Construct_UClass_UELSystemSettings_Statics::NewProp_DpiScaleSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSystemSettings_Statics::NewProp_DpiScaleSizeY_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSystemSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSystemSettings_Statics::NewProp_DpiScaleSizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSystemSettings_Statics::NewProp_DpiScaleSizeY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSystemSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSystemSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSystemSettings_Statics::ClassParams = {
		&UELSystemSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELSystemSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSystemSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UELSystemSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSystemSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSystemSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSystemSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSystemSettings, 3213187701);
	template<> ELITE_CORE_API UClass* StaticClass<UELSystemSettings>()
	{
		return UELSystemSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSystemSettings(Z_Construct_UClass_UELSystemSettings, &UELSystemSettings::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UELSystemSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSystemSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
