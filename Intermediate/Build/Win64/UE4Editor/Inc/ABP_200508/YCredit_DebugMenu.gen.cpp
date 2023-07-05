// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/YCredit_DebugMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYCredit_DebugMenu() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UYCredit_DebugMenu_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UYCredit_DebugMenu();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnScrollMenu__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnChangePauseResume__DelegateSignature();
// End Cross Module References
	void UYCredit_DebugMenu::StaticRegisterNativesUYCredit_DebugMenu()
	{
	}
	UClass* Z_Construct_UClass_UYCredit_DebugMenu_NoRegister()
	{
		return UYCredit_DebugMenu::StaticClass();
	}
	struct Z_Construct_UClass_UYCredit_DebugMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnScrollMenu_DebugDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScrollMenu_DebugDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnChangePauseResume_DebugDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChangePauseResume_DebugDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYCredit_DebugMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCredit_DebugMenu_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YCredit_DebugMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YCredit_DebugMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCredit_DebugMenu_Statics::NewProp_OnScrollMenu_DebugDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCredit_DebugMenu" },
		{ "ModuleRelativePath", "Public/YCredit_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYCredit_DebugMenu_Statics::NewProp_OnScrollMenu_DebugDelegate = { "OnScrollMenu_DebugDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCredit_DebugMenu, OnScrollMenu_DebugDelegate), Z_Construct_UDelegateFunction_ABP_200508_OnScrollMenu__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYCredit_DebugMenu_Statics::NewProp_OnScrollMenu_DebugDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCredit_DebugMenu_Statics::NewProp_OnScrollMenu_DebugDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYCredit_DebugMenu_Statics::NewProp_OnChangePauseResume_DebugDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YCredit_DebugMenu" },
		{ "ModuleRelativePath", "Public/YCredit_DebugMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYCredit_DebugMenu_Statics::NewProp_OnChangePauseResume_DebugDelegate = { "OnChangePauseResume_DebugDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYCredit_DebugMenu, OnChangePauseResume_DebugDelegate), Z_Construct_UDelegateFunction_ABP_200508_OnChangePauseResume__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYCredit_DebugMenu_Statics::NewProp_OnChangePauseResume_DebugDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYCredit_DebugMenu_Statics::NewProp_OnChangePauseResume_DebugDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYCredit_DebugMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCredit_DebugMenu_Statics::NewProp_OnScrollMenu_DebugDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYCredit_DebugMenu_Statics::NewProp_OnChangePauseResume_DebugDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYCredit_DebugMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYCredit_DebugMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYCredit_DebugMenu_Statics::ClassParams = {
		&UYCredit_DebugMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UYCredit_DebugMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UYCredit_DebugMenu_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYCredit_DebugMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYCredit_DebugMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYCredit_DebugMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYCredit_DebugMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYCredit_DebugMenu, 2208360391);
	template<> ABP_200508_API UClass* StaticClass<UYCredit_DebugMenu>()
	{
		return UYCredit_DebugMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYCredit_DebugMenu(Z_Construct_UClass_UYCredit_DebugMenu, &UYCredit_DebugMenu::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UYCredit_DebugMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYCredit_DebugMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
