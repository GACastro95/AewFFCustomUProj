// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMatchScoreBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchScoreBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELMatchScoreBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELMatchScoreBase();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELMatchScoreBase::StaticRegisterNativesUELMatchScoreBase()
	{
	}
	UClass* Z_Construct_UClass_UELMatchScoreBase_NoRegister()
	{
		return UELMatchScoreBase::StaticClass();
	}
	struct Z_Construct_UClass_UELMatchScoreBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMatchScoreBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMatchScoreBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELMatchScoreBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMatchScoreBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMatchScoreBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMatchScoreBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMatchScoreBase_Statics::ClassParams = {
		&UELMatchScoreBase::StaticClass,
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
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UELMatchScoreBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMatchScoreBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMatchScoreBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMatchScoreBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMatchScoreBase, 3010367242);
	template<> ABP_200508_API UClass* StaticClass<UELMatchScoreBase>()
	{
		return UELMatchScoreBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMatchScoreBase(Z_Construct_UClass_UELMatchScoreBase, &UELMatchScoreBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELMatchScoreBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMatchScoreBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
