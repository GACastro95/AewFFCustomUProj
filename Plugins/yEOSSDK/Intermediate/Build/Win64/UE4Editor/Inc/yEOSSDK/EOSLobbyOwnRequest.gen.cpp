// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSLobbyOwnRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLobbyOwnRequest() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLobbyOwnRequest_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLobbyOwnRequest();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLobby_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase_NoRegister();
// End Cross Module References
	void UEOSLobbyOwnRequest::StaticRegisterNativesUEOSLobbyOwnRequest()
	{
	}
	UClass* Z_Construct_UClass_UEOSLobbyOwnRequest_NoRegister()
	{
		return UEOSLobbyOwnRequest::StaticClass();
	}
	struct Z_Construct_UClass_UEOSLobbyOwnRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcLobby_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcLobby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcCommunityInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcCommunityInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSLobbyOwnRequest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSLobbyOwnRequest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::NewProp_m_pcLobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyOwnRequest" },
		{ "ModuleRelativePath", "Public/EOSLobbyOwnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::NewProp_m_pcLobby = { "m_pcLobby", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSLobbyOwnRequest, m_pcLobby), Z_Construct_UClass_UEOSLobby_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::NewProp_m_pcLobby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::NewProp_m_pcLobby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::NewProp_m_pcCommunityInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyOwnRequest" },
		{ "ModuleRelativePath", "Public/EOSLobbyOwnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::NewProp_m_pcCommunityInfo = { "m_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSLobbyOwnRequest, m_pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::NewProp_m_pcCommunityInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::NewProp_m_pcCommunityInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::NewProp_m_pcUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobbyOwnRequest" },
		{ "ModuleRelativePath", "Public/EOSLobbyOwnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::NewProp_m_pcUser = { "m_pcUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSLobbyOwnRequest, m_pcUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::NewProp_m_pcUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::NewProp_m_pcUser_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::NewProp_m_pcLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::NewProp_m_pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::NewProp_m_pcUser,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSLobbyOwnRequest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::ClassParams = {
		&UEOSLobbyOwnRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSLobbyOwnRequest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSLobbyOwnRequest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSLobbyOwnRequest, 1809755032);
	template<> YEOSSDK_API UClass* StaticClass<UEOSLobbyOwnRequest>()
	{
		return UEOSLobbyOwnRequest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSLobbyOwnRequest(Z_Construct_UClass_UEOSLobbyOwnRequest, &UEOSLobbyOwnRequest::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSLobbyOwnRequest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSLobbyOwnRequest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
