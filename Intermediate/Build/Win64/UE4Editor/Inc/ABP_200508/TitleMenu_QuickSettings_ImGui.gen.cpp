// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/TitleMenu_QuickSettings_ImGui.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTitleMenu_QuickSettings_ImGui() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FTitleMenu_Param();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_MenuEnd_Delegate__DelegateSignature();
// End Cross Module References
	void ATitleMenu_QuickSettings_ImGui::StaticRegisterNativesATitleMenu_QuickSettings_ImGui()
	{
	}
	UClass* Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_NoRegister()
	{
		return ATitleMenu_QuickSettings_ImGui::StaticClass();
	}
	struct Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_stMenuParams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_stMenuParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_stMenuParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuEnd_Dispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_MenuEnd_Dispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TitleMenu_QuickSettings_ImGui.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TitleMenu_QuickSettings_ImGui.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::NewProp_m_stMenuParams_Inner = { "m_stMenuParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTitleMenu_Param, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::NewProp_m_stMenuParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TitleMenu_QuickSettings_ImGui" },
		{ "ModuleRelativePath", "Public/TitleMenu_QuickSettings_ImGui.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::NewProp_m_stMenuParams = { "m_stMenuParams", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATitleMenu_QuickSettings_ImGui, m_stMenuParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::NewProp_m_stMenuParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::NewProp_m_stMenuParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::NewProp_MenuEnd_Dispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TitleMenu_QuickSettings_ImGui" },
		{ "ModuleRelativePath", "Public/TitleMenu_QuickSettings_ImGui.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::NewProp_MenuEnd_Dispatcher = { "MenuEnd_Dispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATitleMenu_QuickSettings_ImGui, MenuEnd_Dispatcher), Z_Construct_UDelegateFunction_ABP_200508_MenuEnd_Delegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::NewProp_MenuEnd_Dispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::NewProp_MenuEnd_Dispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::NewProp_m_stMenuParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::NewProp_m_stMenuParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::NewProp_MenuEnd_Dispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATitleMenu_QuickSettings_ImGui>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::ClassParams = {
		&ATitleMenu_QuickSettings_ImGui::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATitleMenu_QuickSettings_ImGui, 2776331180);
	template<> ABP_200508_API UClass* StaticClass<ATitleMenu_QuickSettings_ImGui>()
	{
		return ATitleMenu_QuickSettings_ImGui::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATitleMenu_QuickSettings_ImGui(Z_Construct_UClass_ATitleMenu_QuickSettings_ImGui, &ATitleMenu_QuickSettings_ImGui::StaticClass, TEXT("/Script/ABP_200508"), TEXT("ATitleMenu_QuickSettings_ImGui"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATitleMenu_QuickSettings_ImGui);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
