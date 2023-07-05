// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELTutorialDialogBoxWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELTutorialDialogBoxWidgetBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELTutorialDialogBoxWidgetBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELTutorialDialogBoxWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELDialogBoxWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	void UELTutorialDialogBoxWidgetBase::StaticRegisterNativesUELTutorialDialogBoxWidgetBase()
	{
	}
	UClass* Z_Construct_UClass_UELTutorialDialogBoxWidgetBase_NoRegister()
	{
		return UELTutorialDialogBoxWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELTutorialDialogBoxWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELTutorialDialogBoxWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDialogBoxWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELTutorialDialogBoxWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELTutorialDialogBoxWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELTutorialDialogBoxWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELTutorialDialogBoxWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELTutorialDialogBoxWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELTutorialDialogBoxWidgetBase_Statics::ClassParams = {
		&UELTutorialDialogBoxWidgetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELTutorialDialogBoxWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELTutorialDialogBoxWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELTutorialDialogBoxWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELTutorialDialogBoxWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELTutorialDialogBoxWidgetBase, 466677514);
	template<> ELITE_API UClass* StaticClass<UELTutorialDialogBoxWidgetBase>()
	{
		return UELTutorialDialogBoxWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELTutorialDialogBoxWidgetBase(Z_Construct_UClass_UELTutorialDialogBoxWidgetBase, &UELTutorialDialogBoxWidgetBase::StaticClass, TEXT("/Script/ELITE"), TEXT("UELTutorialDialogBoxWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELTutorialDialogBoxWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
