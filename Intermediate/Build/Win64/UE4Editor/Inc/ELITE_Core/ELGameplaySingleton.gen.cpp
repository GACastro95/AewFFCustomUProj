// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/ELGameplaySingleton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGameplaySingleton() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UELGameplaySingleton_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELGameplaySingleton();
	ELITE_CORE_API UClass* Z_Construct_UClass_USingletonBase();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	void UELGameplaySingleton::StaticRegisterNativesUELGameplaySingleton()
	{
	}
	UClass* Z_Construct_UClass_UELGameplaySingleton_NoRegister()
	{
		return UELGameplaySingleton::StaticClass();
	}
	struct Z_Construct_UClass_UELGameplaySingleton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELGameplaySingleton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingletonBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameplaySingleton_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGameplaySingleton.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGameplaySingleton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELGameplaySingleton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELGameplaySingleton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELGameplaySingleton_Statics::ClassParams = {
		&UELGameplaySingleton::StaticClass,
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
		0x001002A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELGameplaySingleton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameplaySingleton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELGameplaySingleton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELGameplaySingleton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELGameplaySingleton, 3209803801);
	template<> ELITE_CORE_API UClass* StaticClass<UELGameplaySingleton>()
	{
		return UELGameplaySingleton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELGameplaySingleton(Z_Construct_UClass_UELGameplaySingleton, &UELGameplaySingleton::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UELGameplaySingleton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELGameplaySingleton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif