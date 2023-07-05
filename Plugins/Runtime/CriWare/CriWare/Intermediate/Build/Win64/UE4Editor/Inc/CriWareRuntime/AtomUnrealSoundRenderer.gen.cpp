// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomUnrealSoundRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomUnrealSoundRenderer() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomUnrealSoundRenderer_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UAtomUnrealSoundRenderer();
	ENGINE_API UClass* Z_Construct_UClass_USoundWaveProcedural();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	void UAtomUnrealSoundRenderer::StaticRegisterNativesUAtomUnrealSoundRenderer()
	{
	}
	UClass* Z_Construct_UClass_UAtomUnrealSoundRenderer_NoRegister()
	{
		return UAtomUnrealSoundRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundWaveProcedural,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AtomUnrealSoundRenderer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AtomUnrealSoundRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtomUnrealSoundRenderer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::ClassParams = {
		&UAtomUnrealSoundRenderer::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtomUnrealSoundRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtomUnrealSoundRenderer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtomUnrealSoundRenderer, 2515808138);
	template<> CRIWARERUNTIME_API UClass* StaticClass<UAtomUnrealSoundRenderer>()
	{
		return UAtomUnrealSoundRenderer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtomUnrealSoundRenderer(Z_Construct_UClass_UAtomUnrealSoundRenderer, &UAtomUnrealSoundRenderer::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("UAtomUnrealSoundRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtomUnrealSoundRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
