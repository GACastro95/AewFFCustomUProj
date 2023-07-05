// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CDebugMenuCareer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCDebugMenuCareer() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_ACDebugMenuCareer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_ACDebugMenuCareer();
	ABP_200508_API UClass* Z_Construct_UClass_ACDebugCareerBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void ACDebugMenuCareer::StaticRegisterNativesACDebugMenuCareer()
	{
	}
	UClass* Z_Construct_UClass_ACDebugMenuCareer_NoRegister()
	{
		return ACDebugMenuCareer::StaticClass();
	}
	struct Z_Construct_UClass_ACDebugMenuCareer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACDebugMenuCareer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACDebugCareerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACDebugMenuCareer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CDebugMenuCareer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CDebugMenuCareer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACDebugMenuCareer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACDebugMenuCareer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACDebugMenuCareer_Statics::ClassParams = {
		&ACDebugMenuCareer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACDebugMenuCareer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACDebugMenuCareer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACDebugMenuCareer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACDebugMenuCareer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACDebugMenuCareer, 2615035482);
	template<> ABP_200508_API UClass* StaticClass<ACDebugMenuCareer>()
	{
		return ACDebugMenuCareer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACDebugMenuCareer(Z_Construct_UClass_ACDebugMenuCareer, &ACDebugMenuCareer::StaticClass, TEXT("/Script/ABP_200508"), TEXT("ACDebugMenuCareer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACDebugMenuCareer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
