// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerMovieSceneUtilityBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerMovieSceneUtilityBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerMovieSceneUtilityBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELCareerMovieSceneUtilityBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void AELCareerMovieSceneUtilityBase::StaticRegisterNativesAELCareerMovieSceneUtilityBase()
	{
	}
	UClass* Z_Construct_UClass_AELCareerMovieSceneUtilityBase_NoRegister()
	{
		return AELCareerMovieSceneUtilityBase::StaticClass();
	}
	struct Z_Construct_UClass_AELCareerMovieSceneUtilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELCareerMovieSceneUtilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELCareerMovieSceneUtilityBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerMovieSceneUtilityBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerMovieSceneUtilityBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELCareerMovieSceneUtilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELCareerMovieSceneUtilityBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELCareerMovieSceneUtilityBase_Statics::ClassParams = {
		&AELCareerMovieSceneUtilityBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AELCareerMovieSceneUtilityBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELCareerMovieSceneUtilityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELCareerMovieSceneUtilityBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELCareerMovieSceneUtilityBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELCareerMovieSceneUtilityBase, 2107594347);
	template<> ABP_200508_API UClass* StaticClass<AELCareerMovieSceneUtilityBase>()
	{
		return AELCareerMovieSceneUtilityBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELCareerMovieSceneUtilityBase(Z_Construct_UClass_AELCareerMovieSceneUtilityBase, &AELCareerMovieSceneUtilityBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELCareerMovieSceneUtilityBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELCareerMovieSceneUtilityBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
