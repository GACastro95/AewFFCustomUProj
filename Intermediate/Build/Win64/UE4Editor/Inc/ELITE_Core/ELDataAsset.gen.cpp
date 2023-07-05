// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/ELDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDataAsset() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UELDataAsset_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELDataAsset();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELDataAssetBase();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	void UELDataAsset::StaticRegisterNativesUELDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UELDataAsset_NoRegister()
	{
		return UELDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UELDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDataAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELDataAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELDataAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELDataAsset_Statics::ClassParams = {
		&UELDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELDataAsset, 1548615322);
	template<> ELITE_CORE_API UClass* StaticClass<UELDataAsset>()
	{
		return UELDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELDataAsset(Z_Construct_UClass_UELDataAsset, &UELDataAsset::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UELDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
