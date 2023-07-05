// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/ELDataAssetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDataAssetBase() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UELDataAssetBase_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELDataAssetBase();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	void UELDataAssetBase::StaticRegisterNativesUELDataAssetBase()
	{
	}
	UClass* Z_Construct_UClass_UELDataAssetBase_NoRegister()
	{
		return UELDataAssetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELDataAssetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELDataAssetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDataAssetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELDataAssetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELDataAssetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELDataAssetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELDataAssetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELDataAssetBase_Statics::ClassParams = {
		&UELDataAssetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELDataAssetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELDataAssetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELDataAssetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELDataAssetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELDataAssetBase, 1427463929);
	template<> ELITE_CORE_API UClass* StaticClass<UELDataAssetBase>()
	{
		return UELDataAssetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELDataAssetBase(Z_Construct_UClass_UELDataAssetBase, &UELDataAssetBase::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UELDataAssetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELDataAssetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
