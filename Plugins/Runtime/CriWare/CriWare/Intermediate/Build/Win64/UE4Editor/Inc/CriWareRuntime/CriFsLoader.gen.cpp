// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/CriFsLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCriFsLoader() {}
// Cross Module References
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_ACriFsLoader_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_ACriFsLoader();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_UCriFsLoaderComponent_NoRegister();
// End Cross Module References
	void ACriFsLoader::StaticRegisterNativesACriFsLoader()
	{
	}
	UClass* Z_Construct_UClass_ACriFsLoader_NoRegister()
	{
		return ACriFsLoader::StaticClass();
	}
	struct Z_Construct_UClass_ACriFsLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoaderComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoaderComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACriFsLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACriFsLoader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CriFsLoader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CriFsLoader.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACriFsLoader_Statics::NewProp_LoaderComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CriFsLoader" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CriFsLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACriFsLoader_Statics::NewProp_LoaderComponent = { "LoaderComponent", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACriFsLoader, LoaderComponent), Z_Construct_UClass_UCriFsLoaderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACriFsLoader_Statics::NewProp_LoaderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACriFsLoader_Statics::NewProp_LoaderComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACriFsLoader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACriFsLoader_Statics::NewProp_LoaderComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACriFsLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACriFsLoader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACriFsLoader_Statics::ClassParams = {
		&ACriFsLoader::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACriFsLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACriFsLoader_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACriFsLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACriFsLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACriFsLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACriFsLoader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACriFsLoader, 721813937);
	template<> CRIWARERUNTIME_API UClass* StaticClass<ACriFsLoader>()
	{
		return ACriFsLoader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACriFsLoader(Z_Construct_UClass_ACriFsLoader, &ACriFsLoader::StaticClass, TEXT("/Script/CriWareRuntime"), TEXT("ACriFsLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACriFsLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
