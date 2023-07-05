// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELNetObjectInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELNetObjectInterface() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELNetObjectInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELNetObjectInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELNetObjectInterface::StaticRegisterNativesUELNetObjectInterface()
	{
	}
	UClass* Z_Construct_UClass_UELNetObjectInterface_NoRegister()
	{
		return UELNetObjectInterface::StaticClass();
	}
	struct Z_Construct_UClass_UELNetObjectInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELNetObjectInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetObjectInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetObjectInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELNetObjectInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IELNetObjectInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELNetObjectInterface_Statics::ClassParams = {
		&UELNetObjectInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELNetObjectInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetObjectInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELNetObjectInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELNetObjectInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELNetObjectInterface, 1005466226);
	template<> ABP_200508_API UClass* StaticClass<UELNetObjectInterface>()
	{
		return UELNetObjectInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELNetObjectInterface(Z_Construct_UClass_UELNetObjectInterface, &UELNetObjectInterface::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELNetObjectInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELNetObjectInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
