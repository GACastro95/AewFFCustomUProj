// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/MenuParamAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuParamAsset() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UMenuParamAsset_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UMenuParamAsset();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELDataAssetBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	void UMenuParamAsset::StaticRegisterNativesUMenuParamAsset()
	{
	}
	UClass* Z_Construct_UClass_UMenuParamAsset_NoRegister()
	{
		return UMenuParamAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMenuParamAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenuParamAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDataAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuParamAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MenuParamAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MenuParamAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenuParamAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuParamAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMenuParamAsset_Statics::ClassParams = {
		&UMenuParamAsset::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMenuParamAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuParamAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenuParamAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMenuParamAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMenuParamAsset, 662336183);
	template<> ELITE_API UClass* StaticClass<UMenuParamAsset>()
	{
		return UMenuParamAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMenuParamAsset(Z_Construct_UClass_UMenuParamAsset, &UMenuParamAsset::StaticClass, TEXT("/Script/ELITE"), TEXT("UMenuParamAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuParamAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
