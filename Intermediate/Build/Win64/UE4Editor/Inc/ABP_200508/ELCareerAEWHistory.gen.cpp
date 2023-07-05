// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerAEWHistory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerAEWHistory() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerAEWHistory_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerAEWHistory();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerMovieSceneWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELCareerAEWHistory::StaticRegisterNativesUELCareerAEWHistory()
	{
	}
	UClass* Z_Construct_UClass_UELCareerAEWHistory_NoRegister()
	{
		return UELCareerAEWHistory::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerAEWHistory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerAEWHistory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerMovieSceneWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerAEWHistory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerAEWHistory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerAEWHistory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerAEWHistory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerAEWHistory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerAEWHistory_Statics::ClassParams = {
		&UELCareerAEWHistory::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerAEWHistory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerAEWHistory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerAEWHistory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerAEWHistory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerAEWHistory, 3955561565);
	template<> ABP_200508_API UClass* StaticClass<UELCareerAEWHistory>()
	{
		return UELCareerAEWHistory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerAEWHistory(Z_Construct_UClass_UELCareerAEWHistory, &UELCareerAEWHistory::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerAEWHistory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerAEWHistory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
