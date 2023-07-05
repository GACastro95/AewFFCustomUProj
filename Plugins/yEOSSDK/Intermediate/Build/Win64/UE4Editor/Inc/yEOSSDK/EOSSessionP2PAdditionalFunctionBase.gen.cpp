// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSessionP2PAdditionalFunctionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSessionP2PAdditionalFunctionBase() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockebleCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2P_NoRegister();
// End Cross Module References
	void UEOSSessionP2PAdditionalFunctionBase::StaticRegisterNativesUEOSSessionP2PAdditionalFunctionBase()
	{
	}
	UClass* Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_NoRegister()
	{
		return UEOSSessionP2PAdditionalFunctionBase::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcRefSessionP2P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcRefSessionP2P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSLockebleCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSessionP2PAdditionalFunctionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PAdditionalFunctionBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_Statics::NewProp_m_pcRefSessionP2P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSessionP2PAdditionalFunctionBase" },
		{ "ModuleRelativePath", "Public/EOSSessionP2PAdditionalFunctionBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_Statics::NewProp_m_pcRefSessionP2P = { "m_pcRefSessionP2P", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSessionP2PAdditionalFunctionBase, m_pcRefSessionP2P), Z_Construct_UClass_UEOSSessionP2P_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_Statics::NewProp_m_pcRefSessionP2P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_Statics::NewProp_m_pcRefSessionP2P_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_Statics::NewProp_m_pcRefSessionP2P,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSessionP2PAdditionalFunctionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_Statics::ClassParams = {
		&UEOSSessionP2PAdditionalFunctionBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSessionP2PAdditionalFunctionBase, 1295540570);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSessionP2PAdditionalFunctionBase>()
	{
		return UEOSSessionP2PAdditionalFunctionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSessionP2PAdditionalFunctionBase(Z_Construct_UClass_UEOSSessionP2PAdditionalFunctionBase, &UEOSSessionP2PAdditionalFunctionBase::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSessionP2PAdditionalFunctionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSessionP2PAdditionalFunctionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
