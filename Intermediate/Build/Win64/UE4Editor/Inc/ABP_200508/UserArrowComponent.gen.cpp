// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/UserArrowComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserArrowComponent() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UUserArrowComponent_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UUserArrowComponent();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UUserArrowComponent::StaticRegisterNativesUUserArrowComponent()
	{
	}
	UClass* Z_Construct_UClass_UUserArrowComponent_NoRegister()
	{
		return UUserArrowComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUserArrowComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserArrowComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArrowComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserArrowComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Mobility VirtualTexture Trigger" },
		{ "IncludePath", "UserArrowComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UserArrowComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserArrowComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserArrowComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserArrowComponent_Statics::ClassParams = {
		&UUserArrowComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUserArrowComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserArrowComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserArrowComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserArrowComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserArrowComponent, 3650339077);
	template<> ABP_200508_API UClass* StaticClass<UUserArrowComponent>()
	{
		return UUserArrowComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserArrowComponent(Z_Construct_UClass_UUserArrowComponent, &UUserArrowComponent::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UUserArrowComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserArrowComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
