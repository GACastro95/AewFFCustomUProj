// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSAPIRequestCallback.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAPIRequestCallback() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAPIRequestCallback_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAPIRequestCallback();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	void UEOSAPIRequestCallback::StaticRegisterNativesUEOSAPIRequestCallback()
	{
	}
	UClass* Z_Construct_UClass_UEOSAPIRequestCallback_NoRegister()
	{
		return UEOSAPIRequestCallback::StaticClass();
	}
	struct Z_Construct_UClass_UEOSAPIRequestCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSAPIRequestCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAPIRequestCallback_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSAPIRequestCallback.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSAPIRequestCallback.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSAPIRequestCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSAPIRequestCallback>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSAPIRequestCallback_Statics::ClassParams = {
		&UEOSAPIRequestCallback::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSAPIRequestCallback_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAPIRequestCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSAPIRequestCallback()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSAPIRequestCallback_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSAPIRequestCallback, 5407311);
	template<> YEOSSDK_API UClass* StaticClass<UEOSAPIRequestCallback>()
	{
		return UEOSAPIRequestCallback::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSAPIRequestCallback(Z_Construct_UClass_UEOSAPIRequestCallback, &UEOSAPIRequestCallback::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSAPIRequestCallback"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSAPIRequestCallback);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif