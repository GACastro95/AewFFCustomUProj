// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCAEMusicItemBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCAEMusicItemBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCAEMusicItemBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCAEMusicItemBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELCAEMusicItemBase::StaticRegisterNativesUELCAEMusicItemBase()
	{
	}
	UClass* Z_Construct_UClass_UELCAEMusicItemBase_NoRegister()
	{
		return UELCAEMusicItemBase::StaticClass();
	}
	struct Z_Construct_UClass_UELCAEMusicItemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCAEMusicItemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCAEMusicItemBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCAEMusicItemBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCAEMusicItemBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCAEMusicItemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCAEMusicItemBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCAEMusicItemBase_Statics::ClassParams = {
		&UELCAEMusicItemBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELCAEMusicItemBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCAEMusicItemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCAEMusicItemBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCAEMusicItemBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCAEMusicItemBase, 2410025008);
	template<> ABP_200508_API UClass* StaticClass<UELCAEMusicItemBase>()
	{
		return UELCAEMusicItemBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCAEMusicItemBase(Z_Construct_UClass_UELCAEMusicItemBase, &UELCAEMusicItemBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCAEMusicItemBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCAEMusicItemBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
