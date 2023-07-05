// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PCallbackParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PCallbackParam() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PCallbackParam_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PCallbackParam();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockebleCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PCallbackInterface_NoRegister();
// End Cross Module References
	void UEOSSessionP2PCallbackParam::StaticRegisterNativesUEOSSessionP2PCallbackParam()
	{
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PCallbackParam_NoRegister()
	{
		return UEOSSessionP2PCallbackParam::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_m_cIntarfaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cIntarfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cIntarfaces;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSLockebleCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PCallbackParam.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PCallbackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics::NewProp_m_cIntarfaces_Inner = { "m_cIntarfaces", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSSessionP2PCallbackInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics::NewProp_m_cIntarfaces_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PCallbackParam" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PCallbackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics::NewProp_m_cIntarfaces = { "m_cIntarfaces", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2PCallbackParam, m_cIntarfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics::NewProp_m_cIntarfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics::NewProp_m_cIntarfaces_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics::NewProp_m_cIntarfaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics::NewProp_m_cIntarfaces,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PCallbackParam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics::ClassParams = {
		&UEOSSessionP2PCallbackParam::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PCallbackParam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PCallbackParam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PCallbackParam, 2658598500);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PCallbackParam>()
	{
		return UEOSSessionP2PCallbackParam::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PCallbackParam(Z_Construct_UClass_UEOSSessionP2PCallbackParam, &UEOSSessionP2PCallbackParam::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PCallbackParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PCallbackParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
