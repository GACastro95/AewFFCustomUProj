// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSItem_Exp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSItem_Exp() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItem_Exp_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItem_Exp();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItemBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void AELSSItem_Exp::StaticRegisterNativesAELSSItem_Exp()
	{
	}
	UClass* Z_Construct_UClass_AELSSItem_Exp_NoRegister()
	{
		return AELSSItem_Exp::StaticClass();
	}
	struct Z_Construct_UClass_AELSSItem_Exp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Exp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSItem_Exp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSItemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItem_Exp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSItem_Exp.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSItem_Exp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItem_Exp_Statics::NewProp_Exp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItem_Exp" },
		{ "ModuleRelativePath", "Public/ELSSItem_Exp.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSItem_Exp_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItem_Exp, Exp), METADATA_PARAMS(Z_Construct_UClass_AELSSItem_Exp_Statics::NewProp_Exp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItem_Exp_Statics::NewProp_Exp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSItem_Exp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItem_Exp_Statics::NewProp_Exp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSItem_Exp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSItem_Exp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSItem_Exp_Statics::ClassParams = {
		&AELSSItem_Exp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AELSSItem_Exp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItem_Exp_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSItem_Exp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItem_Exp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSItem_Exp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSItem_Exp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSItem_Exp, 4236267526);
	template<> ABP_200508_API UClass* StaticClass<AELSSItem_Exp>()
	{
		return AELSSItem_Exp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSItem_Exp(Z_Construct_UClass_AELSSItem_Exp, &AELSSItem_Exp::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSItem_Exp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSItem_Exp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
