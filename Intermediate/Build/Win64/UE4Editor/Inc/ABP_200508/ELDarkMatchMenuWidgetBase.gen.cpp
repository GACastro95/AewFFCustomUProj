// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELDarkMatchMenuWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDarkMatchMenuWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELDarkMatchMenuWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELDarkMatchMenuWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELDarkMatchMenuWidgetBase::StaticRegisterNativesUELDarkMatchMenuWidgetBase()
	{
	}
	UClass* Z_Construct_UClass_UELDarkMatchMenuWidgetBase_NoRegister()
	{
		return UELDarkMatchMenuWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELDarkMatchMenuWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELDarkMatchMenuWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELDarkMatchMenuWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELDarkMatchMenuWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELDarkMatchMenuWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELDarkMatchMenuWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELDarkMatchMenuWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELDarkMatchMenuWidgetBase_Statics::ClassParams = {
		&UELDarkMatchMenuWidgetBase::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELDarkMatchMenuWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELDarkMatchMenuWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELDarkMatchMenuWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELDarkMatchMenuWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELDarkMatchMenuWidgetBase, 3993773386);
	template<> ABP_200508_API UClass* StaticClass<UELDarkMatchMenuWidgetBase>()
	{
		return UELDarkMatchMenuWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELDarkMatchMenuWidgetBase(Z_Construct_UClass_UELDarkMatchMenuWidgetBase, &UELDarkMatchMenuWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELDarkMatchMenuWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELDarkMatchMenuWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
