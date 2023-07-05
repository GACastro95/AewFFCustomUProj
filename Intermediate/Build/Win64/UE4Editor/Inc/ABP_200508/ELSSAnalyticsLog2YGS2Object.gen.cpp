// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSAnalyticsLog2YGS2Object.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSAnalyticsLog2YGS2Object() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnalyticsLog2YGS2Object_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSAnalyticsLog2YGS2Object();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELSSAnalyticsLog2YGS2Object::StaticRegisterNativesUELSSAnalyticsLog2YGS2Object()
	{
	}
	UClass* Z_Construct_UClass_UELSSAnalyticsLog2YGS2Object_NoRegister()
	{
		return UELSSAnalyticsLog2YGS2Object::StaticClass();
	}
	struct Z_Construct_UClass_UELSSAnalyticsLog2YGS2Object_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSAnalyticsLog2YGS2Object_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSAnalyticsLog2YGS2Object_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSAnalyticsLog2YGS2Object.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSAnalyticsLog2YGS2Object.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSAnalyticsLog2YGS2Object_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSAnalyticsLog2YGS2Object>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSAnalyticsLog2YGS2Object_Statics::ClassParams = {
		&UELSSAnalyticsLog2YGS2Object::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSAnalyticsLog2YGS2Object_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSAnalyticsLog2YGS2Object_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSAnalyticsLog2YGS2Object()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSAnalyticsLog2YGS2Object_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSAnalyticsLog2YGS2Object, 2643771094);
	template<> ABP_200508_API UClass* StaticClass<UELSSAnalyticsLog2YGS2Object>()
	{
		return UELSSAnalyticsLog2YGS2Object::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSAnalyticsLog2YGS2Object(Z_Construct_UClass_UELSSAnalyticsLog2YGS2Object, &UELSSAnalyticsLog2YGS2Object::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSAnalyticsLog2YGS2Object"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSAnalyticsLog2YGS2Object);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
