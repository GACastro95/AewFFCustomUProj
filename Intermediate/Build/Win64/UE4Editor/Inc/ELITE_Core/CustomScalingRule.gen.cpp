// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/CustomScalingRule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomScalingRule() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UCustomScalingRule_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UCustomScalingRule();
	ENGINE_API UClass* Z_Construct_UClass_UDPICustomScalingRule();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	void UCustomScalingRule::StaticRegisterNativesUCustomScalingRule()
	{
	}
	UClass* Z_Construct_UClass_UCustomScalingRule_NoRegister()
	{
		return UCustomScalingRule::StaticClass();
	}
	struct Z_Construct_UClass_UCustomScalingRule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomScalingRule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDPICustomScalingRule,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomScalingRule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CustomScalingRule.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CustomScalingRule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomScalingRule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomScalingRule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomScalingRule_Statics::ClassParams = {
		&UCustomScalingRule::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomScalingRule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomScalingRule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomScalingRule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomScalingRule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomScalingRule, 787198752);
	template<> ELITE_CORE_API UClass* StaticClass<UCustomScalingRule>()
	{
		return UCustomScalingRule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomScalingRule(Z_Construct_UClass_UCustomScalingRule, &UCustomScalingRule::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UCustomScalingRule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomScalingRule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
