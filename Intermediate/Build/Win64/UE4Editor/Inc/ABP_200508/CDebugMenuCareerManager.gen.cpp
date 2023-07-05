// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CDebugMenuCareerManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDebugMenuCareerManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_ACDebugMenuCareerManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_ACDebugMenuCareerManager();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void ACDebugMenuCareerManager::StaticRegisterNativesACDebugMenuCareerManager()
	{
	}
	UClass* Z_Construct_UClass_ACDebugMenuCareerManager_NoRegister()
	{
		return ACDebugMenuCareerManager::StaticClass();
	}
	struct Z_Construct_UClass_ACDebugMenuCareerManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACDebugMenuCareerManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDebugMenuCareerManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CDebugMenuCareerManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CDebugMenuCareerManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACDebugMenuCareerManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACDebugMenuCareerManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACDebugMenuCareerManager_Statics::ClassParams = {
		&ACDebugMenuCareerManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACDebugMenuCareerManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACDebugMenuCareerManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACDebugMenuCareerManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACDebugMenuCareerManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACDebugMenuCareerManager, 2541791447);
	template<> ABP_200508_API UClass* StaticClass<ACDebugMenuCareerManager>()
	{
		return ACDebugMenuCareerManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACDebugMenuCareerManager(Z_Construct_UClass_ACDebugMenuCareerManager, &ACDebugMenuCareerManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("ACDebugMenuCareerManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACDebugMenuCareerManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
