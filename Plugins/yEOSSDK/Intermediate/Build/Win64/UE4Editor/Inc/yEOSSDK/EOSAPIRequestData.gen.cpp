// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSAPIRequestData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAPIRequestData() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAPIRequestData_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAPIRequestData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAPIRequestManager_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSInstanceBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAPIRequestDataFlag();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAPIRequestCallback_NoRegister();
// End Cross Module References
	void UEOSAPIRequestData::StaticRegisterNativesUEOSAPIRequestData()
	{
	}
	UClass* Z_Construct_UClass_UEOSAPIRequestData_NoRegister()
	{
		return UEOSAPIRequestData::StaticClass();
	}
	struct Z_Construct_UClass_UEOSAPIRequestData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcEOSCommon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcEOSCommon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcEOSInstanceBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcEOSInstanceBase;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_enFlags_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_enFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_enFlags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_APIRequestCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_APIRequestCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSAPIRequestData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAPIRequestData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSAPIRequestData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSAPIRequestData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_pcManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAPIRequestData" },
		{ "ModuleRelativePath", "Public/EOSAPIRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_pcManager = { "m_pcManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAPIRequestData, m_pcManager), Z_Construct_UClass_UEOSAPIRequestManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_pcManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_pcManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_pcEOSCommon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAPIRequestData" },
		{ "ModuleRelativePath", "Public/EOSAPIRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_pcEOSCommon = { "m_pcEOSCommon", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAPIRequestData, m_pcEOSCommon), Z_Construct_UClass_UEOSCommon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_pcEOSCommon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_pcEOSCommon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_pcEOSInstanceBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAPIRequestData" },
		{ "ModuleRelativePath", "Public/EOSAPIRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_pcEOSInstanceBase = { "m_pcEOSInstanceBase", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAPIRequestData, m_pcEOSInstanceBase), Z_Construct_UClass_UEOSInstanceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_pcEOSInstanceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_pcEOSInstanceBase_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_enFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_enFlags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAPIRequestData" },
		{ "ModuleRelativePath", "Public/EOSAPIRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_enFlags = { "m_enFlags", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAPIRequestData, m_enFlags), Z_Construct_UEnum_yEOSSDK_EEOSAPIRequestDataFlag, METADATA_PARAMS(Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_enFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_enFlags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_APIRequestCallback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAPIRequestData" },
		{ "ModuleRelativePath", "Public/EOSAPIRequestData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_APIRequestCallback = { "m_APIRequestCallback", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAPIRequestData, m_APIRequestCallback), Z_Construct_UClass_UEOSAPIRequestCallback_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_APIRequestCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_APIRequestCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSAPIRequestData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_pcManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_pcEOSCommon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_pcEOSInstanceBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_enFlags_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_enFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAPIRequestData_Statics::NewProp_m_APIRequestCallback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSAPIRequestData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSAPIRequestData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSAPIRequestData_Statics::ClassParams = {
		&UEOSAPIRequestData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEOSAPIRequestData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAPIRequestData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSAPIRequestData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAPIRequestData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSAPIRequestData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSAPIRequestData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSAPIRequestData, 265700964);
	template<> YEOSSDK_API UClass* StaticClass<UEOSAPIRequestData>()
	{
		return UEOSAPIRequestData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSAPIRequestData(Z_Construct_UClass_UEOSAPIRequestData, &UEOSAPIRequestData::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSAPIRequestData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSAPIRequestData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
