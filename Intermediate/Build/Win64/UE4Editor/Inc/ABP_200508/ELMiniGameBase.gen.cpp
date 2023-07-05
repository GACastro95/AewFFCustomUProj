// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMiniGameBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMiniGameBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELMiniGameBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELMiniGameBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void AELMiniGameBase::StaticRegisterNativesAELMiniGameBase()
	{
	}
	UClass* Z_Construct_UClass_AELMiniGameBase_NoRegister()
	{
		return AELMiniGameBase::StaticClass();
	}
	struct Z_Construct_UClass_AELMiniGameBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELMiniGameBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMiniGameBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMiniGameBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMiniGameBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELMiniGameBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELMiniGameBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELMiniGameBase_Statics::ClassParams = {
		&AELMiniGameBase::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELMiniGameBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELMiniGameBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELMiniGameBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELMiniGameBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELMiniGameBase, 1848232708);
	template<> ABP_200508_API UClass* StaticClass<AELMiniGameBase>()
	{
		return AELMiniGameBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELMiniGameBase(Z_Construct_UClass_AELMiniGameBase, &AELMiniGameBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELMiniGameBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELMiniGameBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
