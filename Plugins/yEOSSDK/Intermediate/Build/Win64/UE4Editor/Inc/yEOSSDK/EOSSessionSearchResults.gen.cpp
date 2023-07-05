// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionSearchResults.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionSearchResults() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionSearchResults_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionSearchResults();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSearchResultsBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSession_NoRegister();
// End Cross Module References
	void UEOSSessionSearchResults::StaticRegisterNativesUEOSSessionSearchResults()
	{
	}
	UClass* Z_Construct_UClass_UEOSSessionSearchResults_NoRegister()
	{
		return UEOSSessionSearchResults::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionSearchResults_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcSession;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionSearchResults_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSearchResultsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionSearchResults_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionSearchResults.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionSearchResults.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionSearchResults_Statics::NewProp_m_pcSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionSearchResults" },
		{ "ModuleRelativePath", "Public/EOSSessionSearchResults.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionSearchResults_Statics::NewProp_m_pcSession = { "m_pcSession", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionSearchResults, m_pcSession), Z_Construct_UClass_UEOSSession_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionSearchResults_Statics::NewProp_m_pcSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionSearchResults_Statics::NewProp_m_pcSession_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSSessionSearchResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionSearchResults_Statics::NewProp_m_pcSession,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionSearchResults_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionSearchResults>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionSearchResults_Statics::ClassParams = {
		&UEOSSessionSearchResults::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEOSSessionSearchResults_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionSearchResults_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionSearchResults_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionSearchResults_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionSearchResults()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionSearchResults_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionSearchResults, 1004271708);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionSearchResults>()
	{
		return UEOSSessionSearchResults::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionSearchResults(Z_Construct_UClass_UEOSSessionSearchResults, &UEOSSessionSearchResults::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionSearchResults"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionSearchResults);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
