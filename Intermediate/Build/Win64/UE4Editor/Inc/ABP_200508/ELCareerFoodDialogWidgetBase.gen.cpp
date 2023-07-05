// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerFoodDialogWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerFoodDialogWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerFoodDialogWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerFoodDialogWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELCareerFoodDialogWidgetBase::StaticRegisterNativesUELCareerFoodDialogWidgetBase()
	{
	}
	UClass* Z_Construct_UClass_UELCareerFoodDialogWidgetBase_NoRegister()
	{
		return UELCareerFoodDialogWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerFoodDialogWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerFoodDialogWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerFoodDialogWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerFoodDialogWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerFoodDialogWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerFoodDialogWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerFoodDialogWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerFoodDialogWidgetBase_Statics::ClassParams = {
		&UELCareerFoodDialogWidgetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELCareerFoodDialogWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerFoodDialogWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerFoodDialogWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerFoodDialogWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerFoodDialogWidgetBase, 4019712556);
	template<> ABP_200508_API UClass* StaticClass<UELCareerFoodDialogWidgetBase>()
	{
		return UELCareerFoodDialogWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerFoodDialogWidgetBase(Z_Construct_UClass_UELCareerFoodDialogWidgetBase, &UELCareerFoodDialogWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerFoodDialogWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerFoodDialogWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
