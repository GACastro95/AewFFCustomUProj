// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSActionCameraGunAim.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSActionCameraGunAim() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionCameraGunAim_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionCameraGunAim();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionCameraController();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELSSActionCameraGunAim::StaticRegisterNativesUELSSActionCameraGunAim()
	{
	}
	UClass* Z_Construct_UClass_UELSSActionCameraGunAim_NoRegister()
	{
		return UELSSActionCameraGunAim::StaticClass();
	}
	struct Z_Construct_UClass_UELSSActionCameraGunAim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSActionCameraGunAim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSActionCameraController,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActionCameraGunAim_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSActionCameraGunAim.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSActionCameraGunAim.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSActionCameraGunAim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSActionCameraGunAim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSActionCameraGunAim_Statics::ClassParams = {
		&UELSSActionCameraGunAim::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSActionCameraGunAim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActionCameraGunAim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSActionCameraGunAim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSActionCameraGunAim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSActionCameraGunAim, 475394565);
	template<> ABP_200508_API UClass* StaticClass<UELSSActionCameraGunAim>()
	{
		return UELSSActionCameraGunAim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSActionCameraGunAim(Z_Construct_UClass_UELSSActionCameraGunAim, &UELSSActionCameraGunAim::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSActionCameraGunAim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSActionCameraGunAim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
