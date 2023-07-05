// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSCommunityUserBaseOwnRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSCommunityUserBaseOwnRequest() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase_NoRegister();
// End Cross Module References
	void UEOSCommunityUserBaseOwnRequest::StaticRegisterNativesUEOSCommunityUserBaseOwnRequest()
	{
	}
	UClass* Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_NoRegister()
	{
		return UEOSCommunityUserBaseOwnRequest::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSCommunityUserBaseOwnRequest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSCommunityUserBaseOwnRequest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_Statics::NewProp_m_pcUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSCommunityUserBaseOwnRequest" },
		{ "ModuleRelativePath", "Public/EOSCommunityUserBaseOwnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_Statics::NewProp_m_pcUser = { "m_pcUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSCommunityUserBaseOwnRequest, m_pcUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_Statics::NewProp_m_pcUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_Statics::NewProp_m_pcUser_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_Statics::NewProp_m_pcUser,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCommunityUserBaseOwnRequest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_Statics::ClassParams = {
		&UEOSCommunityUserBaseOwnRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCommunityUserBaseOwnRequest, 2373177582);
	template<> YEOSSDK_API UClass* StaticClass<UEOSCommunityUserBaseOwnRequest>()
	{
		return UEOSCommunityUserBaseOwnRequest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCommunityUserBaseOwnRequest(Z_Construct_UClass_UEOSCommunityUserBaseOwnRequest, &UEOSCommunityUserBaseOwnRequest::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSCommunityUserBaseOwnRequest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCommunityUserBaseOwnRequest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
