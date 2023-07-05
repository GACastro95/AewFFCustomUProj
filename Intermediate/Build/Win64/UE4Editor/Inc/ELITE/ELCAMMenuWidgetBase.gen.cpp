// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELCAMMenuWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCAMMenuWidgetBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELCAMMenuWidgetBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELCAMMenuWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMainMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	void UELCAMMenuWidgetBase::StaticRegisterNativesUELCAMMenuWidgetBase()
	{
	}
	UClass* Z_Construct_UClass_UELCAMMenuWidgetBase_NoRegister()
	{
		return UELCAMMenuWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELCAMMenuWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCAMMenuWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMainMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCAMMenuWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCAMMenuWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCAMMenuWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCAMMenuWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCAMMenuWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCAMMenuWidgetBase_Statics::ClassParams = {
		&UELCAMMenuWidgetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELCAMMenuWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCAMMenuWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCAMMenuWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCAMMenuWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCAMMenuWidgetBase, 3773251651);
	template<> ELITE_API UClass* StaticClass<UELCAMMenuWidgetBase>()
	{
		return UELCAMMenuWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCAMMenuWidgetBase(Z_Construct_UClass_UELCAMMenuWidgetBase, &UELCAMMenuWidgetBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELCAMMenuWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCAMMenuWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
