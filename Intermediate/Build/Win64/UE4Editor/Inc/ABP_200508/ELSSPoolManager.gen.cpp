// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSPoolManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSPoolManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPoolManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPoolManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELSSPoolManager::StaticRegisterNativesUELSSPoolManager()
	{
	}
	UClass* Z_Construct_UClass_UELSSPoolManager_NoRegister()
	{
		return UELSSPoolManager::StaticClass();
	}
	struct Z_Construct_UClass_UELSSPoolManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSPoolManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPoolManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSPoolManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSPoolManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSPoolManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSPoolManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSPoolManager_Statics::ClassParams = {
		&UELSSPoolManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSPoolManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPoolManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSPoolManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSPoolManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSPoolManager, 2771370963);
	template<> ABP_200508_API UClass* StaticClass<UELSSPoolManager>()
	{
		return UELSSPoolManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSPoolManager(Z_Construct_UClass_UELSSPoolManager, &UELSSPoolManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSPoolManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSPoolManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
