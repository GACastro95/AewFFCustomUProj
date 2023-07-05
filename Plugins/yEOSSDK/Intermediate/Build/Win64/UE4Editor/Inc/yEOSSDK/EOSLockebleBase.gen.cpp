// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSLockebleBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLockebleBase() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockebleBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockebleBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockableInterface_NoRegister();
// End Cross Module References
	void UEOSLockebleBase::StaticRegisterNativesUEOSLockebleBase()
	{
	}
	UClass* Z_Construct_UClass_UEOSLockebleBase_NoRegister()
	{
		return UEOSLockebleBase::StaticClass();
	}
	struct Z_Construct_UClass_UEOSLockebleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSLockebleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLockebleBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSLockebleBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSLockebleBase.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UEOSLockebleBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEOSLockableInterface_NoRegister, (int32)VTABLE_OFFSET(UEOSLockebleBase, IEOSLockableInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSLockebleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSLockebleBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSLockebleBase_Statics::ClassParams = {
		&UEOSLockebleBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEOSLockebleBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLockebleBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSLockebleBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSLockebleBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSLockebleBase, 2202146682);
	template<> YEOSSDK_API UClass* StaticClass<UEOSLockebleBase>()
	{
		return UEOSLockebleBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSLockebleBase(Z_Construct_UClass_UEOSLockebleBase, &UEOSLockebleBase::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSLockebleBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSLockebleBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
