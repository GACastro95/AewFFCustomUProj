// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSItem_RecoveryShield.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSItem_RecoveryShield() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItem_RecoveryShield_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItem_RecoveryShield();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSItemBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void AELSSItem_RecoveryShield::StaticRegisterNativesAELSSItem_RecoveryShield()
	{
	}
	UClass* Z_Construct_UClass_AELSSItem_RecoveryShield_NoRegister()
	{
		return AELSSItem_RecoveryShield::StaticClass();
	}
	struct Z_Construct_UClass_AELSSItem_RecoveryShield_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecoveryRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecoveryRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSItem_RecoveryShield_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSItemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItem_RecoveryShield_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSItem_RecoveryShield.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSItem_RecoveryShield.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSItem_RecoveryShield_Statics::NewProp_RecoveryRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSItem_RecoveryShield" },
		{ "ModuleRelativePath", "Public/ELSSItem_RecoveryShield.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AELSSItem_RecoveryShield_Statics::NewProp_RecoveryRate = { "RecoveryRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSItem_RecoveryShield, RecoveryRate), METADATA_PARAMS(Z_Construct_UClass_AELSSItem_RecoveryShield_Statics::NewProp_RecoveryRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItem_RecoveryShield_Statics::NewProp_RecoveryRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSItem_RecoveryShield_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSItem_RecoveryShield_Statics::NewProp_RecoveryRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSItem_RecoveryShield_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSItem_RecoveryShield>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSItem_RecoveryShield_Statics::ClassParams = {
		&AELSSItem_RecoveryShield::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AELSSItem_RecoveryShield_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItem_RecoveryShield_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSItem_RecoveryShield_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSItem_RecoveryShield_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSItem_RecoveryShield()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSItem_RecoveryShield_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSItem_RecoveryShield, 3317461768);
	template<> ABP_200508_API UClass* StaticClass<AELSSItem_RecoveryShield>()
	{
		return AELSSItem_RecoveryShield::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSItem_RecoveryShield(Z_Construct_UClass_AELSSItem_RecoveryShield, &AELSSItem_RecoveryShield::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSItem_RecoveryShield"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSItem_RecoveryShield);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
