// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionOwnRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionOwnRequest() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionOwnRequest_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionOwnRequest();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSession_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase_NoRegister();
// End Cross Module References
	void UEOSSessionOwnRequest::StaticRegisterNativesUEOSSessionOwnRequest()
	{
	}
	UClass* Z_Construct_UClass_UEOSSessionOwnRequest_NoRegister()
	{
		return UEOSSessionOwnRequest::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionOwnRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strSessionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strSessionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strTargetProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strTargetProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcSession_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcSession;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcCommunityInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcCommunityInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcCommunityUserBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcCommunityUserBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionOwnRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionOwnRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionOwnRequest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionOwnRequest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_strSessionName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionOwnRequest" },
		{ "ModuleRelativePath", "Public/EOSSessionOwnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_strSessionName = { "m_strSessionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionOwnRequest, m_strSessionName), METADATA_PARAMS(Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_strSessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_strSessionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_strTargetProductUserID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionOwnRequest" },
		{ "ModuleRelativePath", "Public/EOSSessionOwnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_strTargetProductUserID = { "m_strTargetProductUserID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionOwnRequest, m_strTargetProductUserID), METADATA_PARAMS(Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_strTargetProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_strTargetProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_pcSession_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionOwnRequest" },
		{ "ModuleRelativePath", "Public/EOSSessionOwnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_pcSession = { "m_pcSession", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionOwnRequest, m_pcSession), Z_Construct_UClass_UEOSSession_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_pcSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_pcSession_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_pcCommunityInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionOwnRequest" },
		{ "ModuleRelativePath", "Public/EOSSessionOwnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_pcCommunityInfo = { "m_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionOwnRequest, m_pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_pcCommunityInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_pcCommunityInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_pcCommunityUserBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionOwnRequest" },
		{ "ModuleRelativePath", "Public/EOSSessionOwnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_pcCommunityUserBase = { "m_pcCommunityUserBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionOwnRequest, m_pcCommunityUserBase), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_pcCommunityUserBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_pcCommunityUserBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSSessionOwnRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_strSessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_strTargetProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_pcSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionOwnRequest_Statics::NewProp_m_pcCommunityUserBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionOwnRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionOwnRequest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionOwnRequest_Statics::ClassParams = {
		&UEOSSessionOwnRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEOSSessionOwnRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionOwnRequest_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionOwnRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionOwnRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionOwnRequest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionOwnRequest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionOwnRequest, 2862689977);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionOwnRequest>()
	{
		return UEOSSessionOwnRequest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionOwnRequest(Z_Construct_UClass_UEOSSessionOwnRequest, &UEOSSessionOwnRequest::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionOwnRequest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionOwnRequest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
