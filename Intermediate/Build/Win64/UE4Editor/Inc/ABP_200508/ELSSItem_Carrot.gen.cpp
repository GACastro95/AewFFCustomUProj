// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSItem_Carrot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSItem_Carrot() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItem_Carrot_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItem_Carrot();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItemBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void AELSSItem_Carrot::StaticRegisterNativesAELSSItem_Carrot()
	{
	}
	UClass* Z_Construct_UClass_AELSSItem_Carrot_NoRegister()
	{
		return AELSSItem_Carrot::StaticClass();
	}
	struct Z_Construct_UClass_AELSSItem_Carrot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSItem_Carrot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSItemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItem_Carrot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSItem_Carrot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSItem_Carrot.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSItem_Carrot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSItem_Carrot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSItem_Carrot_Statics::ClassParams = {
		&AELSSItem_Carrot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSItem_Carrot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItem_Carrot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSItem_Carrot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSItem_Carrot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSItem_Carrot, 41330112);
	template<> ABP_200508_API UClass* StaticClass<AELSSItem_Carrot>()
	{
		return AELSSItem_Carrot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSItem_Carrot(Z_Construct_UClass_AELSSItem_Carrot, &AELSSItem_Carrot::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSItem_Carrot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSItem_Carrot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
