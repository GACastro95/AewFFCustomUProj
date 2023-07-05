// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSActionStateGunFire.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSActionStateGunFire() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateGunFire_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateGunFire();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateGunBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELSSActionStateGunFire::StaticRegisterNativesUELSSActionStateGunFire()
	{
	}
	UClass* Z_Construct_UClass_UELSSActionStateGunFire_NoRegister()
	{
		return UELSSActionStateGunFire::StaticClass();
	}
	struct Z_Construct_UClass_UELSSActionStateGunFire_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSActionStateGunFire_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSActionStateGunBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateGunFire_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSActionStateGunFire.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSActionStateGunFire.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSActionStateGunFire_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSActionStateGunFire>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSActionStateGunFire_Statics::ClassParams = {
		&UELSSActionStateGunFire::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateGunFire_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateGunFire_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSActionStateGunFire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSActionStateGunFire_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSActionStateGunFire, 1686708191);
	template<> ABP_200508_API UClass* StaticClass<UELSSActionStateGunFire>()
	{
		return UELSSActionStateGunFire::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSActionStateGunFire(Z_Construct_UClass_UELSSActionStateGunFire, &UELSSActionStateGunFire::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSActionStateGunFire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSActionStateGunFire);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
