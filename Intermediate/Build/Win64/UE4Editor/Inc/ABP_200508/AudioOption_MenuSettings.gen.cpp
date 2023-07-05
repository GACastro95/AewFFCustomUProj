// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/AudioOption_MenuSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioOption_MenuSettings() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UAudioOption_MenuSettings_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UAudioOption_MenuSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FAudioVolume_Param();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_ChangeVolume_DebugDispatcher__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_ChangeMute_DebugDispatcher__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_SetDefault_DebugDispatcher__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_Reset_DebugDispatcher__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OpenTrigger_DebugDispatcher__DelegateSignature();
// End Cross Module References
	void UAudioOption_MenuSettings::StaticRegisterNativesUAudioOption_MenuSettings()
	{
	}
	UClass* Z_Construct_UClass_UAudioOption_MenuSettings_NoRegister()
	{
		return UAudioOption_MenuSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAudioOption_MenuSettings_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeVolume_DebugDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ChangeVolume_DebugDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeMute_DebugDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ChangeMute_DebugDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetDefault_DebugDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SetDefault_DebugDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reset_DebugDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Reset_DebugDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenTrigger_DebugDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OpenTrigger_DebugDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioOption_MenuSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioOption_MenuSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AudioOption_MenuSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AudioOption_MenuSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_m_MenuCategory_ValueProp = { "m_MenuCategory", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAudioVolume_Param, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_m_MenuCategory_Key_KeyProp = { "m_MenuCategory_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_m_MenuCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AudioOption_MenuSettings" },
		{ "ModuleRelativePath", "Public/AudioOption_MenuSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_m_MenuCategory = { "m_MenuCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioOption_MenuSettings, m_MenuCategory), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_m_MenuCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_m_MenuCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_ChangeVolume_DebugDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AudioOption_MenuSettings" },
		{ "ModuleRelativePath", "Public/AudioOption_MenuSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_ChangeVolume_DebugDispatcher = { "ChangeVolume_DebugDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioOption_MenuSettings, ChangeVolume_DebugDispatcher), Z_Construct_UDelegateFunction_ABP_200508_ChangeVolume_DebugDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_ChangeVolume_DebugDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_ChangeVolume_DebugDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_ChangeMute_DebugDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AudioOption_MenuSettings" },
		{ "ModuleRelativePath", "Public/AudioOption_MenuSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_ChangeMute_DebugDispatcher = { "ChangeMute_DebugDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioOption_MenuSettings, ChangeMute_DebugDispatcher), Z_Construct_UDelegateFunction_ABP_200508_ChangeMute_DebugDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_ChangeMute_DebugDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_ChangeMute_DebugDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_SetDefault_DebugDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AudioOption_MenuSettings" },
		{ "ModuleRelativePath", "Public/AudioOption_MenuSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_SetDefault_DebugDispatcher = { "SetDefault_DebugDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioOption_MenuSettings, SetDefault_DebugDispatcher), Z_Construct_UDelegateFunction_ABP_200508_SetDefault_DebugDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_SetDefault_DebugDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_SetDefault_DebugDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_Reset_DebugDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AudioOption_MenuSettings" },
		{ "ModuleRelativePath", "Public/AudioOption_MenuSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_Reset_DebugDispatcher = { "Reset_DebugDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioOption_MenuSettings, Reset_DebugDispatcher), Z_Construct_UDelegateFunction_ABP_200508_Reset_DebugDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_Reset_DebugDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_Reset_DebugDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_OpenTrigger_DebugDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AudioOption_MenuSettings" },
		{ "ModuleRelativePath", "Public/AudioOption_MenuSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_OpenTrigger_DebugDispatcher = { "OpenTrigger_DebugDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAudioOption_MenuSettings, OpenTrigger_DebugDispatcher), Z_Construct_UDelegateFunction_ABP_200508_OpenTrigger_DebugDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_OpenTrigger_DebugDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_OpenTrigger_DebugDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAudioOption_MenuSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_m_MenuCategory_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_m_MenuCategory_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_m_MenuCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_ChangeVolume_DebugDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_ChangeMute_DebugDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_SetDefault_DebugDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_Reset_DebugDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAudioOption_MenuSettings_Statics::NewProp_OpenTrigger_DebugDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioOption_MenuSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioOption_MenuSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAudioOption_MenuSettings_Statics::ClassParams = {
		&UAudioOption_MenuSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAudioOption_MenuSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAudioOption_MenuSettings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioOption_MenuSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioOption_MenuSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioOption_MenuSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAudioOption_MenuSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAudioOption_MenuSettings, 2748518531);
	template<> ABP_200508_API UClass* StaticClass<UAudioOption_MenuSettings>()
	{
		return UAudioOption_MenuSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAudioOption_MenuSettings(Z_Construct_UClass_UAudioOption_MenuSettings, &UAudioOption_MenuSettings::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UAudioOption_MenuSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioOption_MenuSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
