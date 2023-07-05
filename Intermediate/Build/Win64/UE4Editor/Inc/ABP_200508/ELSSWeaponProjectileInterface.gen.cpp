// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWeaponProjectileInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWeaponProjectileInterface() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWeaponProjectileInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWeaponProjectileInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void UELSSWeaponProjectileInterface::StaticRegisterNativesUELSSWeaponProjectileInterface()
	{
	}
	UClass* Z_Construct_UClass_UELSSWeaponProjectileInterface_NoRegister()
	{
		return UELSSWeaponProjectileInterface::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWeaponProjectileInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWeaponProjectileInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWeaponProjectileInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponProjectileInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWeaponProjectileInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IELSSWeaponProjectileInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWeaponProjectileInterface_Statics::ClassParams = {
		&UELSSWeaponProjectileInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSWeaponProjectileInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWeaponProjectileInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWeaponProjectileInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWeaponProjectileInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWeaponProjectileInterface, 1741357820);
	template<> ABP_200508_API UClass* StaticClass<UELSSWeaponProjectileInterface>()
	{
		return UELSSWeaponProjectileInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWeaponProjectileInterface(Z_Construct_UClass_UELSSWeaponProjectileInterface, &UELSSWeaponProjectileInterface::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWeaponProjectileInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWeaponProjectileInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
