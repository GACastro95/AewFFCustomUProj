// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/MyWrestlerDataEditComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyWrestlerDataEditComponent() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UMyWrestlerDataEditComponent_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UMyWrestlerDataEditComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	void UMyWrestlerDataEditComponent::StaticRegisterNativesUMyWrestlerDataEditComponent()
	{
	}
	UClass* Z_Construct_UClass_UMyWrestlerDataEditComponent_NoRegister()
	{
		return UMyWrestlerDataEditComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMyWrestlerDataEditComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyWrestlerDataEditComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyWrestlerDataEditComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyWrestlerDataEditComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MyWrestlerDataEditComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyWrestlerDataEditComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyWrestlerDataEditComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyWrestlerDataEditComponent_Statics::ClassParams = {
		&UMyWrestlerDataEditComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyWrestlerDataEditComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyWrestlerDataEditComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyWrestlerDataEditComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyWrestlerDataEditComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyWrestlerDataEditComponent, 2845705900);
	template<> CREATION_API UClass* StaticClass<UMyWrestlerDataEditComponent>()
	{
		return UMyWrestlerDataEditComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyWrestlerDataEditComponent(Z_Construct_UClass_UMyWrestlerDataEditComponent, &UMyWrestlerDataEditComponent::StaticClass, TEXT("/Script/Creation"), TEXT("UMyWrestlerDataEditComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyWrestlerDataEditComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
