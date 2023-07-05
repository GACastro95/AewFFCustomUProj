// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSDebugMenuDummyItem01_MenuSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSDebugMenuDummyItem01_MenuSettings() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FDummyItem01Value_Param();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_ChangeValue_DebugDispatcher__DelegateSignature();
// End Cross Module References
	void UELSSDebugMenuDummyItem01_MenuSettings::StaticRegisterNativesUELSSDebugMenuDummyItem01_MenuSettings()
	{
	}
	UClass* Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_NoRegister()
	{
		return UELSSDebugMenuDummyItem01_MenuSettings::StaticClass();
	}
	struct Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_MenuCategory_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_MenuCategory_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MenuCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_MenuCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeValue_DebugDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ChangeValue_DebugDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSDebugMenuDummyItem01_MenuSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSDebugMenuDummyItem01_MenuSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::NewProp_m_MenuCategory_ValueProp = { "m_MenuCategory", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FDummyItem01Value_Param, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::NewProp_m_MenuCategory_Key_KeyProp = { "m_MenuCategory_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::NewProp_m_MenuCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugMenuDummyItem01_MenuSettings" },
		{ "ModuleRelativePath", "Public/ELSSDebugMenuDummyItem01_MenuSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::NewProp_m_MenuCategory = { "m_MenuCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSDebugMenuDummyItem01_MenuSettings, m_MenuCategory), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::NewProp_m_MenuCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::NewProp_m_MenuCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::NewProp_ChangeValue_DebugDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSDebugMenuDummyItem01_MenuSettings" },
		{ "ModuleRelativePath", "Public/ELSSDebugMenuDummyItem01_MenuSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::NewProp_ChangeValue_DebugDispatcher = { "ChangeValue_DebugDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSDebugMenuDummyItem01_MenuSettings, ChangeValue_DebugDispatcher), Z_Construct_UDelegateFunction_ABP_200508_ChangeValue_DebugDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::NewProp_ChangeValue_DebugDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::NewProp_ChangeValue_DebugDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::NewProp_m_MenuCategory_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::NewProp_m_MenuCategory_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::NewProp_m_MenuCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::NewProp_ChangeValue_DebugDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSDebugMenuDummyItem01_MenuSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::ClassParams = {
		&UELSSDebugMenuDummyItem01_MenuSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSDebugMenuDummyItem01_MenuSettings, 3464239570);
	template<> ABP_200508_API UClass* StaticClass<UELSSDebugMenuDummyItem01_MenuSettings>()
	{
		return UELSSDebugMenuDummyItem01_MenuSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSDebugMenuDummyItem01_MenuSettings(Z_Construct_UClass_UELSSDebugMenuDummyItem01_MenuSettings, &UELSSDebugMenuDummyItem01_MenuSettings::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSDebugMenuDummyItem01_MenuSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSDebugMenuDummyItem01_MenuSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
