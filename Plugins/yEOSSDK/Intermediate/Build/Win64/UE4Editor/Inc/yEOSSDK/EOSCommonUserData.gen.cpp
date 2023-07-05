// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSCommonUserData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSCommonUserData() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommonUserData_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommonUserData();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	void UEOSCommonUserData::StaticRegisterNativesUEOSCommonUserData()
	{
	}
	UClass* Z_Construct_UClass_UEOSCommonUserData_NoRegister()
	{
		return UEOSCommonUserData::StaticClass();
	}
	struct Z_Construct_UClass_UEOSCommonUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSCommonUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSCommonUserData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSCommonUserData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSCommonUserData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSCommonUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSCommonUserData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSCommonUserData_Statics::ClassParams = {
		&UEOSCommonUserData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSCommonUserData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSCommonUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSCommonUserData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSCommonUserData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSCommonUserData, 3485284709);
	template<> YEOSSDK_API UClass* StaticClass<UEOSCommonUserData>()
	{
		return UEOSCommonUserData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSCommonUserData(Z_Construct_UClass_UEOSCommonUserData, &UEOSCommonUserData::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSCommonUserData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSCommonUserData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
