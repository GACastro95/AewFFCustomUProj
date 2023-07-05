// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELKeyConfigManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELKeyConfigManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELKeyConfigManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELKeyConfigManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FKeyMapSettingData();
// End Cross Module References
	void UELKeyConfigManager::StaticRegisterNativesUELKeyConfigManager()
	{
	}
	UClass* Z_Construct_UClass_UELKeyConfigManager_NoRegister()
	{
		return UELKeyConfigManager::StaticClass();
	}
	struct Z_Construct_UClass_UELKeyConfigManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_GamepadKeyConfigList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_GamepadKeyConfigList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_GamepadKeyConfigList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_KeyboardMouseKeyConfigList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_KeyboardMouseKeyConfigList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_KeyboardMouseKeyConfigList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_SSGamepadKeyConfigList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SSGamepadKeyConfigList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_SSGamepadKeyConfigList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_SSKeyboardMouseKeyConfigList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SSKeyboardMouseKeyConfigList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_SSKeyboardMouseKeyConfigList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELKeyConfigManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELKeyConfigManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELKeyConfigManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELKeyConfigManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_GamepadKeyConfigList_Inner = { "m_GamepadKeyConfigList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_GamepadKeyConfigList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELKeyConfigManager" },
		{ "ModuleRelativePath", "Public/ELKeyConfigManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_GamepadKeyConfigList = { "m_GamepadKeyConfigList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELKeyConfigManager, m_GamepadKeyConfigList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_GamepadKeyConfigList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_GamepadKeyConfigList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_KeyboardMouseKeyConfigList_Inner = { "m_KeyboardMouseKeyConfigList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_KeyboardMouseKeyConfigList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELKeyConfigManager" },
		{ "ModuleRelativePath", "Public/ELKeyConfigManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_KeyboardMouseKeyConfigList = { "m_KeyboardMouseKeyConfigList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELKeyConfigManager, m_KeyboardMouseKeyConfigList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_KeyboardMouseKeyConfigList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_KeyboardMouseKeyConfigList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_SSGamepadKeyConfigList_Inner = { "m_SSGamepadKeyConfigList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_SSGamepadKeyConfigList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELKeyConfigManager" },
		{ "ModuleRelativePath", "Public/ELKeyConfigManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_SSGamepadKeyConfigList = { "m_SSGamepadKeyConfigList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELKeyConfigManager, m_SSGamepadKeyConfigList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_SSGamepadKeyConfigList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_SSGamepadKeyConfigList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_SSKeyboardMouseKeyConfigList_Inner = { "m_SSKeyboardMouseKeyConfigList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKeyMapSettingData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_SSKeyboardMouseKeyConfigList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELKeyConfigManager" },
		{ "ModuleRelativePath", "Public/ELKeyConfigManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_SSKeyboardMouseKeyConfigList = { "m_SSKeyboardMouseKeyConfigList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELKeyConfigManager, m_SSKeyboardMouseKeyConfigList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_SSKeyboardMouseKeyConfigList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_SSKeyboardMouseKeyConfigList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELKeyConfigManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_GamepadKeyConfigList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_GamepadKeyConfigList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_KeyboardMouseKeyConfigList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_KeyboardMouseKeyConfigList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_SSGamepadKeyConfigList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_SSGamepadKeyConfigList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_SSKeyboardMouseKeyConfigList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELKeyConfigManager_Statics::NewProp_m_SSKeyboardMouseKeyConfigList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELKeyConfigManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELKeyConfigManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELKeyConfigManager_Statics::ClassParams = {
		&UELKeyConfigManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELKeyConfigManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELKeyConfigManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELKeyConfigManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELKeyConfigManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELKeyConfigManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELKeyConfigManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELKeyConfigManager, 3652544352);
	template<> ABP_200508_API UClass* StaticClass<UELKeyConfigManager>()
	{
		return UELKeyConfigManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELKeyConfigManager(Z_Construct_UClass_UELKeyConfigManager, &UELKeyConfigManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELKeyConfigManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELKeyConfigManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
