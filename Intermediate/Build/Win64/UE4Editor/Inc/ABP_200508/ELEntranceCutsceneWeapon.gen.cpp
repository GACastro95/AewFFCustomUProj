// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEntranceCutsceneWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEntranceCutsceneWeapon() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELEntranceCutsceneWeapon_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELEntranceCutsceneWeapon();
	ABP_200508_API UClass* Z_Construct_UClass_AELEntranceCutsceneWeaponBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	void AELEntranceCutsceneWeapon::StaticRegisterNativesAELEntranceCutsceneWeapon()
	{
	}
	UClass* Z_Construct_UClass_AELEntranceCutsceneWeapon_NoRegister()
	{
		return AELEntranceCutsceneWeapon::StaticClass();
	}
	struct Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VanishedWhenNonDefaultEntrance_MetaData[];
#endif
		static void NewProp_VanishedWhenNonDefaultEntrance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VanishedWhenNonDefaultEntrance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELEntranceCutsceneWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEntranceCutsceneWeapon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics::NewProp_VanishedWhenNonDefaultEntrance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEntranceCutsceneWeapon" },
		{ "ModuleRelativePath", "Public/ELEntranceCutsceneWeapon.h" },
	};
#endif
	void Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics::NewProp_VanishedWhenNonDefaultEntrance_SetBit(void* Obj)
	{
		((AELEntranceCutsceneWeapon*)Obj)->VanishedWhenNonDefaultEntrance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics::NewProp_VanishedWhenNonDefaultEntrance = { "VanishedWhenNonDefaultEntrance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELEntranceCutsceneWeapon), &Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics::NewProp_VanishedWhenNonDefaultEntrance_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics::NewProp_VanishedWhenNonDefaultEntrance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics::NewProp_VanishedWhenNonDefaultEntrance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics::NewProp_VanishedWhenNonDefaultEntrance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELEntranceCutsceneWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics::ClassParams = {
		&AELEntranceCutsceneWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELEntranceCutsceneWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELEntranceCutsceneWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELEntranceCutsceneWeapon, 1186968600);
	template<> ABP_200508_API UClass* StaticClass<AELEntranceCutsceneWeapon>()
	{
		return AELEntranceCutsceneWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELEntranceCutsceneWeapon(Z_Construct_UClass_AELEntranceCutsceneWeapon, &AELEntranceCutsceneWeapon::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELEntranceCutsceneWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELEntranceCutsceneWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
