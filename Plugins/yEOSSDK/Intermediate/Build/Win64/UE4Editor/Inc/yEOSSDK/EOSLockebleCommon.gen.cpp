// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSLockebleCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLockebleCommon() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockebleCommon_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockebleCommon();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommon();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockableInterface_NoRegister();
// End Cross Module References
	void UEOSLockebleCommon::StaticRegisterNativesUEOSLockebleCommon()
	{
	}
	UClass* Z_Construct_UClass_UEOSLockebleCommon_NoRegister()
	{
		return UEOSLockebleCommon::StaticClass();
	}
	struct Z_Construct_UClass_UEOSLockebleCommon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSLockebleCommon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLockebleCommon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSLockebleCommon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSLockebleCommon.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEOSLockebleCommon_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEOSLockableInterface_NoRegister, (int32)VTABLE_OFFSET(UEOSLockebleCommon, IEOSLockableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSLockebleCommon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSLockebleCommon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSLockebleCommon_Statics::ClassParams = {
		&UEOSLockebleCommon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSLockebleCommon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLockebleCommon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSLockebleCommon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSLockebleCommon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSLockebleCommon, 3975000746);
	template<> YEOSSDK_API UClass* StaticClass<UEOSLockebleCommon>()
	{
		return UEOSLockebleCommon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSLockebleCommon(Z_Construct_UClass_UEOSLockebleCommon, &UEOSLockebleCommon::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSLockebleCommon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSLockebleCommon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
