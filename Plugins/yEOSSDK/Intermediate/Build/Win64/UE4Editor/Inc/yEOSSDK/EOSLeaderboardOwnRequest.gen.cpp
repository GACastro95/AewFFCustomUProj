// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSLeaderboardOwnRequest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLeaderboardOwnRequest() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLeaderboardOwnRequest_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLeaderboardOwnRequest();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLeaderboard_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSQueryStatOption();
// End Cross Module References
	void UEOSLeaderboardOwnRequest::StaticRegisterNativesUEOSLeaderboardOwnRequest()
	{
	}
	UClass* Z_Construct_UClass_UEOSLeaderboardOwnRequest_NoRegister()
	{
		return UEOSLeaderboardOwnRequest::StaticClass();
	}
	struct Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_strLeaderboardId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_strLeaderboardId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcLeaderboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcLeaderboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_stStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_stStats;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cProductUserIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cProductUserIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cProductUserIds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSLeaderboardOwnRequest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardOwnRequest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_strLeaderboardId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardOwnRequest" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardOwnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_strLeaderboardId = { "m_strLeaderboardId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSLeaderboardOwnRequest, m_strLeaderboardId), METADATA_PARAMS(Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_strLeaderboardId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_strLeaderboardId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_pcLeaderboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardOwnRequest" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardOwnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_pcLeaderboard = { "m_pcLeaderboard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSLeaderboardOwnRequest, m_pcLeaderboard), Z_Construct_UClass_UEOSLeaderboard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_pcLeaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_pcLeaderboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_stStats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardOwnRequest" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardOwnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_stStats = { "m_stStats", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSLeaderboardOwnRequest, m_stStats), Z_Construct_UScriptStruct_FEOSQueryStatOption, METADATA_PARAMS(Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_stStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_stStats_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_cProductUserIds_Inner = { "m_cProductUserIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_cProductUserIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardOwnRequest" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardOwnRequest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_cProductUserIds = { "m_cProductUserIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSLeaderboardOwnRequest, m_cProductUserIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_cProductUserIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_cProductUserIds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_strLeaderboardId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_pcLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_stStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_cProductUserIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::NewProp_m_cProductUserIds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSLeaderboardOwnRequest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::ClassParams = {
		&UEOSLeaderboardOwnRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSLeaderboardOwnRequest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSLeaderboardOwnRequest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSLeaderboardOwnRequest, 876630805);
	template<> YEOSSDK_API UClass* StaticClass<UEOSLeaderboardOwnRequest>()
	{
		return UEOSLeaderboardOwnRequest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSLeaderboardOwnRequest(Z_Construct_UClass_UEOSLeaderboardOwnRequest, &UEOSLeaderboardOwnRequest::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSLeaderboardOwnRequest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSLeaderboardOwnRequest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
