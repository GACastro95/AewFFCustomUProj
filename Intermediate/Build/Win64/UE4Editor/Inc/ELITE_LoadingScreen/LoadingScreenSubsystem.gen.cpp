// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_LoadingScreen/Public/LoadingScreenSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoadingScreenSubsystem() {}
// Cross Module References
	ELITE_LOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingScreenSubsystem_NoRegister();
	ELITE_LOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingScreenSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_ELITE_LoadingScreen();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void ULoadingScreenSubsystem::StaticRegisterNativesULoadingScreenSubsystem()
	{
	}
	UClass* Z_Construct_UClass_ULoadingScreenSubsystem_NoRegister()
	{
		return ULoadingScreenSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULoadingScreenSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadingWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LoadingWidget;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExcludeLoadingScreenLevels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludeLoadingScreenLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludeLoadingScreenLevels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_LoadingUWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_LoadingUWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadingScreenSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_LoadingScreen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LoadingScreenSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LoadingScreenSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_LoadingWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenSubsystem" },
		{ "ModuleRelativePath", "Public/LoadingScreenSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_LoadingWidget = { "LoadingWidget", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSubsystem, LoadingWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_LoadingWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_LoadingWidget_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_ExcludeLoadingScreenLevels_Inner = { "ExcludeLoadingScreenLevels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_ExcludeLoadingScreenLevels_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenSubsystem" },
		{ "ModuleRelativePath", "Public/LoadingScreenSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_ExcludeLoadingScreenLevels = { "ExcludeLoadingScreenLevels", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSubsystem, ExcludeLoadingScreenLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_ExcludeLoadingScreenLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_ExcludeLoadingScreenLevels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_m_LoadingUWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadingScreenSubsystem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoadingScreenSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_m_LoadingUWidget = { "m_LoadingUWidget", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULoadingScreenSubsystem, m_LoadingUWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_m_LoadingUWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_m_LoadingUWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadingScreenSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_LoadingWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_ExcludeLoadingScreenLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_ExcludeLoadingScreenLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadingScreenSubsystem_Statics::NewProp_m_LoadingUWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadingScreenSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadingScreenSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULoadingScreenSubsystem_Statics::ClassParams = {
		&ULoadingScreenSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULoadingScreenSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadingScreenSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingScreenSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadingScreenSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULoadingScreenSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULoadingScreenSubsystem, 2672841398);
	template<> ELITE_LOADINGSCREEN_API UClass* StaticClass<ULoadingScreenSubsystem>()
	{
		return ULoadingScreenSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULoadingScreenSubsystem(Z_Construct_UClass_ULoadingScreenSubsystem, &ULoadingScreenSubsystem::StaticClass, TEXT("/Script/ELITE_LoadingScreen"), TEXT("ULoadingScreenSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingScreenSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
