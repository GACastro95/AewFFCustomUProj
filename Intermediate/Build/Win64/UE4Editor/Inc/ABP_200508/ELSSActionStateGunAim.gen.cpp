// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSActionStateGunAim.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSActionStateGunAim() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateGunAim_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateGunAim();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateGunBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELSSActionStateGunAim::StaticRegisterNativesUELSSActionStateGunAim()
	{
	}
	UClass* Z_Construct_UClass_UELSSActionStateGunAim_NoRegister()
	{
		return UELSSActionStateGunAim::StaticClass();
	}
	struct Z_Construct_UClass_UELSSActionStateGunAim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSActionStateGunAim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSActionStateGunBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionStateGunAim_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSActionStateGunAim.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSActionStateGunAim.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSActionStateGunAim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSActionStateGunAim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSActionStateGunAim_Statics::ClassParams = {
		&UELSSActionStateGunAim::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSActionStateGunAim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionStateGunAim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSActionStateGunAim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSActionStateGunAim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSActionStateGunAim, 26265353);
	template<> ABP_200508_API UClass* StaticClass<UELSSActionStateGunAim>()
	{
		return UELSSActionStateGunAim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSActionStateGunAim(Z_Construct_UClass_UELSSActionStateGunAim, &UELSSActionStateGunAim::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSActionStateGunAim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSActionStateGunAim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
