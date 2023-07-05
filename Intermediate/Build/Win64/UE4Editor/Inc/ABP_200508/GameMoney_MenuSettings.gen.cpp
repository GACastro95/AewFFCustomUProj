// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/GameMoney_MenuSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameMoney_MenuSettings() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UGameMoney_MenuSettings_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UGameMoney_MenuSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_ChangeCashNum_DebugDelegate__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_SaveMoney_DebugDelegate__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_LoadMoney_DebugDelegate__DelegateSignature();
// End Cross Module References
	void UGameMoney_MenuSettings::StaticRegisterNativesUGameMoney_MenuSettings()
	{
	}
	UClass* Z_Construct_UClass_UGameMoney_MenuSettings_NoRegister()
	{
		return UGameMoney_MenuSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGameMoney_MenuSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeCashNum_DebugDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ChangeCashNum_DebugDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveMoney_DebugDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SaveMoney_DebugDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadMoney_DebugDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LoadMoney_DebugDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameMoney_MenuSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMoney_MenuSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "GameMoney_MenuSettings.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameMoney_MenuSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMoney_MenuSettings_Statics::NewProp_ChangeCashNum_DebugDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameMoney_MenuSettings" },
		{ "ModuleRelativePath", "Public/GameMoney_MenuSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameMoney_MenuSettings_Statics::NewProp_ChangeCashNum_DebugDelegate = { "ChangeCashNum_DebugDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMoney_MenuSettings, ChangeCashNum_DebugDelegate), Z_Construct_UDelegateFunction_ABP_200508_ChangeCashNum_DebugDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameMoney_MenuSettings_Statics::NewProp_ChangeCashNum_DebugDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameMoney_MenuSettings_Statics::NewProp_ChangeCashNum_DebugDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMoney_MenuSettings_Statics::NewProp_SaveMoney_DebugDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameMoney_MenuSettings" },
		{ "ModuleRelativePath", "Public/GameMoney_MenuSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameMoney_MenuSettings_Statics::NewProp_SaveMoney_DebugDelegate = { "SaveMoney_DebugDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMoney_MenuSettings, SaveMoney_DebugDelegate), Z_Construct_UDelegateFunction_ABP_200508_SaveMoney_DebugDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameMoney_MenuSettings_Statics::NewProp_SaveMoney_DebugDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameMoney_MenuSettings_Statics::NewProp_SaveMoney_DebugDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameMoney_MenuSettings_Statics::NewProp_LoadMoney_DebugDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "GameMoney_MenuSettings" },
		{ "ModuleRelativePath", "Public/GameMoney_MenuSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameMoney_MenuSettings_Statics::NewProp_LoadMoney_DebugDelegate = { "LoadMoney_DebugDelegate", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameMoney_MenuSettings, LoadMoney_DebugDelegate), Z_Construct_UDelegateFunction_ABP_200508_LoadMoney_DebugDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameMoney_MenuSettings_Statics::NewProp_LoadMoney_DebugDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameMoney_MenuSettings_Statics::NewProp_LoadMoney_DebugDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameMoney_MenuSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMoney_MenuSettings_Statics::NewProp_ChangeCashNum_DebugDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMoney_MenuSettings_Statics::NewProp_SaveMoney_DebugDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameMoney_MenuSettings_Statics::NewProp_LoadMoney_DebugDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameMoney_MenuSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameMoney_MenuSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameMoney_MenuSettings_Statics::ClassParams = {
		&UGameMoney_MenuSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameMoney_MenuSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameMoney_MenuSettings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameMoney_MenuSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameMoney_MenuSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameMoney_MenuSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameMoney_MenuSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameMoney_MenuSettings, 435663563);
	template<> ABP_200508_API UClass* StaticClass<UGameMoney_MenuSettings>()
	{
		return UGameMoney_MenuSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameMoney_MenuSettings(Z_Construct_UClass_UGameMoney_MenuSettings, &UGameMoney_MenuSettings::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UGameMoney_MenuSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameMoney_MenuSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
