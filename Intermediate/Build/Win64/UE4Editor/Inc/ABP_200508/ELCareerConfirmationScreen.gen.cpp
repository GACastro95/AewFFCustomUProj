// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerConfirmationScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerConfirmationScreen() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerConfirmationScreen_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerConfirmationScreen();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELCareerConfirmationScreen::StaticRegisterNativesUELCareerConfirmationScreen()
	{
	}
	UClass* Z_Construct_UClass_UELCareerConfirmationScreen_NoRegister()
	{
		return UELCareerConfirmationScreen::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerConfirmationScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerConfirmationScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerConfirmationScreen_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerConfirmationScreen.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerConfirmationScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerConfirmationScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerConfirmationScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerConfirmationScreen_Statics::ClassParams = {
		&UELCareerConfirmationScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELCareerConfirmationScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerConfirmationScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerConfirmationScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerConfirmationScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerConfirmationScreen, 1423331180);
	template<> ABP_200508_API UClass* StaticClass<UELCareerConfirmationScreen>()
	{
		return UELCareerConfirmationScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerConfirmationScreen(Z_Construct_UClass_UELCareerConfirmationScreen, &UELCareerConfirmationScreen::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerConfirmationScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerConfirmationScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
