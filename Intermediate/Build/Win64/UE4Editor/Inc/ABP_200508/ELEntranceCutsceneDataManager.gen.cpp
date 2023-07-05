// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEntranceCutsceneDataManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEntranceCutsceneDataManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELEntranceCutsceneDataManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEntranceCutsceneDataManager();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELEntranceCutsceneDataManager::StaticRegisterNativesUELEntranceCutsceneDataManager()
	{
	}
	UClass* Z_Construct_UClass_UELEntranceCutsceneDataManager_NoRegister()
	{
		return UELEntranceCutsceneDataManager::StaticClass();
	}
	struct Z_Construct_UClass_UELEntranceCutsceneDataManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEntranceCutsceneDataManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEntranceCutsceneDataManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELEntranceCutsceneDataManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneDataManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEntranceCutsceneDataManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEntranceCutsceneDataManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEntranceCutsceneDataManager_Statics::ClassParams = {
		&UELEntranceCutsceneDataManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UELEntranceCutsceneDataManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEntranceCutsceneDataManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEntranceCutsceneDataManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEntranceCutsceneDataManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEntranceCutsceneDataManager, 3143875225);
	template<> ABP_200508_API UClass* StaticClass<UELEntranceCutsceneDataManager>()
	{
		return UELEntranceCutsceneDataManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEntranceCutsceneDataManager(Z_Construct_UClass_UELEntranceCutsceneDataManager, &UELEntranceCutsceneDataManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEntranceCutsceneDataManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEntranceCutsceneDataManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
