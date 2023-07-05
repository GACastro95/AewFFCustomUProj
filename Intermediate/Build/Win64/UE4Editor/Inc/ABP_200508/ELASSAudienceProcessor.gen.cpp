// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELASSAudienceProcessor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELASSAudienceProcessor() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELASSAudienceProcessor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELASSAudienceProcessor();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingStateProcessor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELASSAudienceProcessor::StaticRegisterNativesUELASSAudienceProcessor()
	{
	}
	UClass* Z_Construct_UClass_UELASSAudienceProcessor_NoRegister()
	{
		return UELASSAudienceProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UELASSAudienceProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELASSAudienceProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationSharingStateProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELASSAudienceProcessor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELASSAudienceProcessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELASSAudienceProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELASSAudienceProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELASSAudienceProcessor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELASSAudienceProcessor_Statics::ClassParams = {
		&UELASSAudienceProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELASSAudienceProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELASSAudienceProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELASSAudienceProcessor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELASSAudienceProcessor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELASSAudienceProcessor, 167500084);
	template<> ABP_200508_API UClass* StaticClass<UELASSAudienceProcessor>()
	{
		return UELASSAudienceProcessor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELASSAudienceProcessor(Z_Construct_UClass_UELASSAudienceProcessor, &UELASSAudienceProcessor::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELASSAudienceProcessor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELASSAudienceProcessor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
