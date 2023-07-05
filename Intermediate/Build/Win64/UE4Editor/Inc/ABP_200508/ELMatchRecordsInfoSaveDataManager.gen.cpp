// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMatchRecordsInfoSaveDataManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchRecordsInfoSaveDataManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELMatchRecordsInfoSaveDataManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMatchRecordsInfoSaveDataManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELMatchRecordsInfoSaveDataManager::StaticRegisterNativesUELMatchRecordsInfoSaveDataManager()
	{
	}
	UClass* Z_Construct_UClass_UELMatchRecordsInfoSaveDataManager_NoRegister()
	{
		return UELMatchRecordsInfoSaveDataManager::StaticClass();
	}
	struct Z_Construct_UClass_UELMatchRecordsInfoSaveDataManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMatchRecordsInfoSaveDataManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMatchRecordsInfoSaveDataManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMatchRecordsInfoSaveDataManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsInfoSaveDataManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMatchRecordsInfoSaveDataManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMatchRecordsInfoSaveDataManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMatchRecordsInfoSaveDataManager_Statics::ClassParams = {
		&UELMatchRecordsInfoSaveDataManager::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELMatchRecordsInfoSaveDataManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMatchRecordsInfoSaveDataManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMatchRecordsInfoSaveDataManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMatchRecordsInfoSaveDataManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMatchRecordsInfoSaveDataManager, 731675585);
	template<> ABP_200508_API UClass* StaticClass<UELMatchRecordsInfoSaveDataManager>()
	{
		return UELMatchRecordsInfoSaveDataManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMatchRecordsInfoSaveDataManager(Z_Construct_UClass_UELMatchRecordsInfoSaveDataManager, &UELMatchRecordsInfoSaveDataManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELMatchRecordsInfoSaveDataManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMatchRecordsInfoSaveDataManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
