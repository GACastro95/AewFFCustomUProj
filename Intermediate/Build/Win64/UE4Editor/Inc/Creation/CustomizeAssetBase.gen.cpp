// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/CustomizeAssetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizeAssetBase() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UCustomizeAssetBase_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UCustomizeAssetBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	void UCustomizeAssetBase::StaticRegisterNativesUCustomizeAssetBase()
	{
	}
	UClass* Z_Construct_UClass_UCustomizeAssetBase_NoRegister()
	{
		return UCustomizeAssetBase::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizeAssetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizeAssetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizeAssetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CustomizeAssetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CustomizeAssetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizeAssetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizeAssetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomizeAssetBase_Statics::ClassParams = {
		&UCustomizeAssetBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizeAssetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizeAssetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizeAssetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomizeAssetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomizeAssetBase, 689803594);
	template<> CREATION_API UClass* StaticClass<UCustomizeAssetBase>()
	{
		return UCustomizeAssetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomizeAssetBase(Z_Construct_UClass_UCustomizeAssetBase, &UCustomizeAssetBase::StaticClass, TEXT("/Script/Creation"), TEXT("UCustomizeAssetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizeAssetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
