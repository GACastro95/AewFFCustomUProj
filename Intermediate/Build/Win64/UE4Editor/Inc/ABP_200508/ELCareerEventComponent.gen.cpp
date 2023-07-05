// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerEventComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerEventComponent() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerEventComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerEventComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELCareerEventComponent::StaticRegisterNativesUELCareerEventComponent()
	{
	}
	UClass* Z_Construct_UClass_UELCareerEventComponent_NoRegister()
	{
		return UELCareerEventComponent::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerEventComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerEventComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerEventComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELCareerEventComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerEventComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerEventComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerEventComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerEventComponent_Statics::ClassParams = {
		&UELCareerEventComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELCareerEventComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerEventComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerEventComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerEventComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerEventComponent, 1648480796);
	template<> ABP_200508_API UClass* StaticClass<UELCareerEventComponent>()
	{
		return UELCareerEventComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerEventComponent(Z_Construct_UClass_UELCareerEventComponent, &UELCareerEventComponent::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerEventComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerEventComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
