// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSSilhouetteActorManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSSilhouetteActorManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSilhouetteActorManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSilhouetteActorManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPlayer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSSilhouetteActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AELSSSilhouetteActorManager::StaticRegisterNativesAELSSSilhouetteActorManager()
	{
	}
	UClass* Z_Construct_UClass_AELSSSilhouetteActorManager_NoRegister()
	{
		return AELSSSilhouetteActorManager::StaticClass();
	}
	struct Z_Construct_UClass_AELSSSilhouetteActorManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerPlayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SilhouetteActorList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SilhouetteActorList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SilhouetteActorList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SilhouetteActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SilhouetteActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSSilhouetteActorManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSSilhouetteActorManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::NewProp_OwnerPlayer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSilhouetteActorManager" },
		{ "ModuleRelativePath", "Public/ELSSSilhouetteActorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::NewProp_OwnerPlayer = { "OwnerPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSilhouetteActorManager, OwnerPlayer), Z_Construct_UClass_AELSSPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::NewProp_OwnerPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::NewProp_OwnerPlayer_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::NewProp_SilhouetteActorList_Inner = { "SilhouetteActorList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELSSSilhouetteActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::NewProp_SilhouetteActorList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSilhouetteActorManager" },
		{ "ModuleRelativePath", "Public/ELSSSilhouetteActorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::NewProp_SilhouetteActorList = { "SilhouetteActorList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSilhouetteActorManager, SilhouetteActorList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::NewProp_SilhouetteActorList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::NewProp_SilhouetteActorList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::NewProp_SilhouetteActorClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSSilhouetteActorManager" },
		{ "ModuleRelativePath", "Public/ELSSSilhouetteActorManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::NewProp_SilhouetteActorClass = { "SilhouetteActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSSilhouetteActorManager, SilhouetteActorClass), Z_Construct_UClass_AELSSSilhouetteActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::NewProp_SilhouetteActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::NewProp_SilhouetteActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::NewProp_OwnerPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::NewProp_SilhouetteActorList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::NewProp_SilhouetteActorList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::NewProp_SilhouetteActorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSSilhouetteActorManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::ClassParams = {
		&AELSSSilhouetteActorManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSSilhouetteActorManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSSilhouetteActorManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSSilhouetteActorManager, 1616994224);
	template<> ABP_200508_API UClass* StaticClass<AELSSSilhouetteActorManager>()
	{
		return AELSSSilhouetteActorManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSSilhouetteActorManager(Z_Construct_UClass_AELSSSilhouetteActorManager, &AELSSSilhouetteActorManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSSilhouetteActorManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSSilhouetteActorManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
