// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSLobbySearchResults.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLobbySearchResults() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLobbySearchResults_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLobbySearchResults();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSearchResultsBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLobby_NoRegister();
// End Cross Module References
	void UEOSLobbySearchResults::StaticRegisterNativesUEOSLobbySearchResults()
	{
	}
	UClass* Z_Construct_UClass_UEOSLobbySearchResults_NoRegister()
	{
		return UEOSLobbySearchResults::StaticClass();
	}
	struct Z_Construct_UClass_UEOSLobbySearchResults_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSLobbySearchResults_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSSearchResultsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLobbySearchResults_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSLobbySearchResults.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSLobbySearchResults.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLobbySearchResults_Statics::NewProp_m_pcLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbySearchResults" },
		{ "ModuleRelativePath", "Public/EOSLobbySearchResults.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSLobbySearchResults_Statics::NewProp_m_pcLobby = { "m_pcLobby", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSLobbySearchResults, m_pcLobby), Z_Construct_UClass_UEOSLobby_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSLobbySearchResults_Statics::NewProp_m_pcLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLobbySearchResults_Statics::NewProp_m_pcLobby_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSLobbySearchResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSLobbySearchResults_Statics::NewProp_m_pcLobby,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSLobbySearchResults_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSLobbySearchResults>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSLobbySearchResults_Statics::ClassParams = {
		&UEOSLobbySearchResults::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEOSLobbySearchResults_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLobbySearchResults_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSLobbySearchResults_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLobbySearchResults_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSLobbySearchResults()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSLobbySearchResults_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSLobbySearchResults, 1776170406);
	template<> YEOSSDK_API UClass* StaticClass<UEOSLobbySearchResults>()
	{
		return UEOSLobbySearchResults::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSLobbySearchResults(Z_Construct_UClass_UEOSLobbySearchResults, &UEOSLobbySearchResults::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSLobbySearchResults"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSLobbySearchResults);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
