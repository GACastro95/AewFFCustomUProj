// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSLevelTransitionUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSLevelTransitionUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSLevelTransitionUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSLevelTransitionUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELSSLevelTransitionUtility::StaticRegisterNativesUELSSLevelTransitionUtility()
	{
	}
	UClass* Z_Construct_UClass_UELSSLevelTransitionUtility_NoRegister()
	{
		return UELSSLevelTransitionUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELSSLevelTransitionUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSLevelTransitionUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSLevelTransitionUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSLevelTransitionUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSLevelTransitionUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSLevelTransitionUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSLevelTransitionUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSLevelTransitionUtility_Statics::ClassParams = {
		&UELSSLevelTransitionUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSLevelTransitionUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSLevelTransitionUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSLevelTransitionUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSLevelTransitionUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSLevelTransitionUtility, 3751733439);
	template<> ABP_200508_API UClass* StaticClass<UELSSLevelTransitionUtility>()
	{
		return UELSSLevelTransitionUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSLevelTransitionUtility(Z_Construct_UClass_UELSSLevelTransitionUtility, &UELSSLevelTransitionUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSLevelTransitionUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSLevelTransitionUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
