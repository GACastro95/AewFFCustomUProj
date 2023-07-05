// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSInGameDebugMenu_General.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSInGameDebugMenu_General() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInGameDebugMenu_General_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInGameDebugMenu_General();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInGameDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELSSInGameDebugMenu_General::StaticRegisterNativesUELSSInGameDebugMenu_General()
	{
	}
	UClass* Z_Construct_UClass_UELSSInGameDebugMenu_General_NoRegister()
	{
		return UELSSInGameDebugMenu_General::StaticClass();
	}
	struct Z_Construct_UClass_UELSSInGameDebugMenu_General_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSInGameDebugMenu_General_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSInGameDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSInGameDebugMenu_General_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSInGameDebugMenu_General.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSInGameDebugMenu_General.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSInGameDebugMenu_General_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSInGameDebugMenu_General>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSInGameDebugMenu_General_Statics::ClassParams = {
		&UELSSInGameDebugMenu_General::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSInGameDebugMenu_General_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSInGameDebugMenu_General_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSInGameDebugMenu_General()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSInGameDebugMenu_General_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSInGameDebugMenu_General, 2195669648);
	template<> ABP_200508_API UClass* StaticClass<UELSSInGameDebugMenu_General>()
	{
		return UELSSInGameDebugMenu_General::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSInGameDebugMenu_General(Z_Construct_UClass_UELSSInGameDebugMenu_General, &UELSSInGameDebugMenu_General::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSInGameDebugMenu_General"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSInGameDebugMenu_General);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
