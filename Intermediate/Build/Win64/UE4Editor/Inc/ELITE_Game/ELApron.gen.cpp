// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELApron.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELApron() {}
// Cross Module References
	ELITE_GAME_API UClass* Z_Construct_UClass_AELApron_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_AELApron();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	void AELApron::StaticRegisterNativesAELApron()
	{
	}
	UClass* Z_Construct_UClass_AELApron_NoRegister()
	{
		return AELApron::StaticClass();
	}
	struct Z_Construct_UClass_AELApron_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELApron_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELApron_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELApron.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELApron.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELApron_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELApron>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELApron_Statics::ClassParams = {
		&AELApron::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELApron_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELApron_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELApron()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELApron_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELApron, 873698311);
	template<> ELITE_GAME_API UClass* StaticClass<AELApron>()
	{
		return AELApron::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELApron(Z_Construct_UClass_AELApron, &AELApron::StaticClass, TEXT("/Script/ELITE_Game"), TEXT("AELApron"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELApron);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
