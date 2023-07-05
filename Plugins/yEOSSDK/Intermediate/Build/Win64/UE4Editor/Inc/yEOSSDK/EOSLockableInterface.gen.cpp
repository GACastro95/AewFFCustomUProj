// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSLockableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLockableInterface() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockableInterface_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLockableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	void UEOSLockableInterface::StaticRegisterNativesUEOSLockableInterface()
	{
	}
	UClass* Z_Construct_UClass_UEOSLockableInterface_NoRegister()
	{
		return UEOSLockableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEOSLockableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSLockableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLockableInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLockableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSLockableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEOSLockableInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSLockableInterface_Statics::ClassParams = {
		&UEOSLockableInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSLockableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLockableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSLockableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSLockableInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSLockableInterface, 2604215665);
	template<> YEOSSDK_API UClass* StaticClass<UEOSLockableInterface>()
	{
		return UEOSLockableInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSLockableInterface(Z_Construct_UClass_UEOSLockableInterface, &UEOSLockableInterface::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSLockableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSLockableInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
