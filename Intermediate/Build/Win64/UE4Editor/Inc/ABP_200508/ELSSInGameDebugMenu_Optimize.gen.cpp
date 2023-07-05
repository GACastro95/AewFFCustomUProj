// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSInGameDebugMenu_Optimize.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSInGameDebugMenu_Optimize() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInGameDebugMenu_Optimize_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInGameDebugMenu_Optimize();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInGameDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELSSInGameDebugMenu_Optimize::StaticRegisterNativesUELSSInGameDebugMenu_Optimize()
	{
	}
	UClass* Z_Construct_UClass_UELSSInGameDebugMenu_Optimize_NoRegister()
	{
		return UELSSInGameDebugMenu_Optimize::StaticClass();
	}
	struct Z_Construct_UClass_UELSSInGameDebugMenu_Optimize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSInGameDebugMenu_Optimize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSInGameDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSInGameDebugMenu_Optimize_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSInGameDebugMenu_Optimize.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSInGameDebugMenu_Optimize.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSInGameDebugMenu_Optimize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSInGameDebugMenu_Optimize>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSInGameDebugMenu_Optimize_Statics::ClassParams = {
		&UELSSInGameDebugMenu_Optimize::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSInGameDebugMenu_Optimize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSInGameDebugMenu_Optimize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSInGameDebugMenu_Optimize()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSInGameDebugMenu_Optimize_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSInGameDebugMenu_Optimize, 629125997);
	template<> ABP_200508_API UClass* StaticClass<UELSSInGameDebugMenu_Optimize>()
	{
		return UELSSInGameDebugMenu_Optimize::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSInGameDebugMenu_Optimize(Z_Construct_UClass_UELSSInGameDebugMenu_Optimize, &UELSSInGameDebugMenu_Optimize::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSInGameDebugMenu_Optimize"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSInGameDebugMenu_Optimize);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
