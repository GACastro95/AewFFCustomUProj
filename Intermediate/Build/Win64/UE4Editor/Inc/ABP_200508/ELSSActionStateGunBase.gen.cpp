// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSActionStateGunBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSActionStateGunBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateGunBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateGunBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponGun_NoRegister();
// End Cross Module References
	void UELSSActionStateGunBase::StaticRegisterNativesUELSSActionStateGunBase()
	{
	}
	UClass* Z_Construct_UClass_UELSSActionStateGunBase_NoRegister()
	{
		return UELSSActionStateGunBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSSActionStateGunBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedGunTemp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedGunTemp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSActionStateGunBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSActionStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateGunBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSActionStateGunBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSActionStateGunBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateGunBase_Statics::NewProp_EquippedGunTemp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateGunBase" },
		{ "ModuleRelativePath", "Public/ELSSActionStateGunBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSActionStateGunBase_Statics::NewProp_EquippedGunTemp = { "EquippedGunTemp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSActionStateGunBase, EquippedGunTemp), Z_Construct_UClass_AELSSWeaponGun_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateGunBase_Statics::NewProp_EquippedGunTemp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateGunBase_Statics::NewProp_EquippedGunTemp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSActionStateGunBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSActionStateGunBase_Statics::NewProp_EquippedGunTemp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSActionStateGunBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSActionStateGunBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSActionStateGunBase_Statics::ClassParams = {
		&UELSSActionStateGunBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELSSActionStateGunBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateGunBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateGunBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateGunBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSActionStateGunBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSActionStateGunBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSActionStateGunBase, 263347446);
	template<> ABP_200508_API UClass* StaticClass<UELSSActionStateGunBase>()
	{
		return UELSSActionStateGunBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSActionStateGunBase(Z_Construct_UClass_UELSSActionStateGunBase, &UELSSActionStateGunBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSActionStateGunBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSActionStateGunBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
