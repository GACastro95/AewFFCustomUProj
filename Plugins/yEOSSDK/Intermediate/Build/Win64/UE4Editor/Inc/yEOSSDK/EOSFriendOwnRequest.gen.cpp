// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSFriendOwnRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSFriendOwnRequest() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriendOwnRequest_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriendOwnRequest();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriend_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriendUser_NoRegister();
// End Cross Module References
	void UEOSFriendOwnRequest::StaticRegisterNativesUEOSFriendOwnRequest()
	{
	}
	UClass* Z_Construct_UClass_UEOSFriendOwnRequest_NoRegister()
	{
		return UEOSFriendOwnRequest::StaticClass();
	}
	struct Z_Construct_UClass_UEOSFriendOwnRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcFriend_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcFriend;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cUsers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cUsers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cUsers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSFriendOwnRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSFriendOwnRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSFriendOwnRequest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSFriendOwnRequest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSFriendOwnRequest_Statics::NewProp_m_pcFriend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSFriendOwnRequest" },
		{ "ModuleRelativePath", "Public/EOSFriendOwnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSFriendOwnRequest_Statics::NewProp_m_pcFriend = { "m_pcFriend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSFriendOwnRequest, m_pcFriend), Z_Construct_UClass_UEOSFriend_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSFriendOwnRequest_Statics::NewProp_m_pcFriend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSFriendOwnRequest_Statics::NewProp_m_pcFriend_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSFriendOwnRequest_Statics::NewProp_m_cUsers_Inner = { "m_cUsers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSFriendUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSFriendOwnRequest_Statics::NewProp_m_cUsers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSFriendOwnRequest" },
		{ "ModuleRelativePath", "Public/EOSFriendOwnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEOSFriendOwnRequest_Statics::NewProp_m_cUsers = { "m_cUsers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSFriendOwnRequest, m_cUsers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSFriendOwnRequest_Statics::NewProp_m_cUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSFriendOwnRequest_Statics::NewProp_m_cUsers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSFriendOwnRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSFriendOwnRequest_Statics::NewProp_m_pcFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSFriendOwnRequest_Statics::NewProp_m_cUsers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSFriendOwnRequest_Statics::NewProp_m_cUsers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSFriendOwnRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSFriendOwnRequest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSFriendOwnRequest_Statics::ClassParams = {
		&UEOSFriendOwnRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEOSFriendOwnRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSFriendOwnRequest_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSFriendOwnRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSFriendOwnRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSFriendOwnRequest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSFriendOwnRequest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSFriendOwnRequest, 1043239336);
	template<> YEOSSDK_API UClass* StaticClass<UEOSFriendOwnRequest>()
	{
		return UEOSFriendOwnRequest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSFriendOwnRequest(Z_Construct_UClass_UEOSFriendOwnRequest, &UEOSFriendOwnRequest::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSFriendOwnRequest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSFriendOwnRequest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
