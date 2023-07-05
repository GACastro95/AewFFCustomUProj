// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSApiBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSApiBase() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSApiBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSApiBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSAPIBaseEventDispatchar__DelegateSignature();
// End Cross Module References
	void UEOSApiBase::StaticRegisterNativesUEOSApiBase()
	{
	}
	UClass* Z_Construct_UClass_UEOSApiBase_NoRegister()
	{
		return UEOSApiBase::StaticClass();
	}
	struct Z_Construct_UClass_UEOSApiBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSAPIBaseEventDispatchar_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EOSAPIBaseEventDispatchar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSApiBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSApiBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSApiBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSApiBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSApiBase_Statics::NewProp_EOSAPIBaseEventDispatchar_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSApiBase" },
		{ "ModuleRelativePath", "Public/EOSApiBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSApiBase_Statics::NewProp_EOSAPIBaseEventDispatchar = { "EOSAPIBaseEventDispatchar", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSApiBase, EOSAPIBaseEventDispatchar), Z_Construct_UDelegateFunction_yEOSSDK_EOSAPIBaseEventDispatchar__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSApiBase_Statics::NewProp_EOSAPIBaseEventDispatchar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSApiBase_Statics::NewProp_EOSAPIBaseEventDispatchar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSApiBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSApiBase_Statics::NewProp_EOSAPIBaseEventDispatchar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSApiBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSApiBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSApiBase_Statics::ClassParams = {
		&UEOSApiBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEOSApiBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSApiBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSApiBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSApiBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSApiBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSApiBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSApiBase, 991741053);
	template<> YEOSSDK_API UClass* StaticClass<UEOSApiBase>()
	{
		return UEOSApiBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSApiBase(Z_Construct_UClass_UEOSApiBase, &UEOSApiBase::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSApiBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSApiBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
