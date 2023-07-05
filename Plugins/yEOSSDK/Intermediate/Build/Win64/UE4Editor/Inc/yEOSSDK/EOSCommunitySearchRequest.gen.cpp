// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSCommunitySearchRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSCommunitySearchRequest() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunitySearchRequest_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunitySearchRequest();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSearchResultsBase_NoRegister();
// End Cross Module References
	void UEOSCommunitySearchRequest::StaticRegisterNativesUEOSCommunitySearchRequest()
	{
	}
	UClass* Z_Construct_UClass_UEOSCommunitySearchRequest_NoRegister()
	{
		return UEOSCommunitySearchRequest::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCommunitySearchRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcCommunityBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcCommunityBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcSearchResultsBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcSearchResultsBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSCommunitySearchRequest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSCommunitySearchRequest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::NewProp_m_pcCommunityBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunitySearchRequest" },
		{ "ModuleRelativePath", "Public/EOSCommunitySearchRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::NewProp_m_pcCommunityBase = { "m_pcCommunityBase", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunitySearchRequest, m_pcCommunityBase), Z_Construct_UClass_UEOSCommunityBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::NewProp_m_pcCommunityBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::NewProp_m_pcCommunityBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::NewProp_m_pcSearchResultsBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunitySearchRequest" },
		{ "ModuleRelativePath", "Public/EOSCommunitySearchRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::NewProp_m_pcSearchResultsBase = { "m_pcSearchResultsBase", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunitySearchRequest, m_pcSearchResultsBase), Z_Construct_UClass_UEOSSearchResultsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::NewProp_m_pcSearchResultsBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::NewProp_m_pcSearchResultsBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::NewProp_m_pcCommunityBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::NewProp_m_pcSearchResultsBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCommunitySearchRequest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::ClassParams = {
		&UEOSCommunitySearchRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCommunitySearchRequest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCommunitySearchRequest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCommunitySearchRequest, 3998709323);
	template<> YEOSSDK_API UClass* StaticClass<UEOSCommunitySearchRequest>()
	{
		return UEOSCommunitySearchRequest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCommunitySearchRequest(Z_Construct_UClass_UEOSCommunitySearchRequest, &UEOSCommunitySearchRequest::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSCommunitySearchRequest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCommunitySearchRequest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
