// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELAnimNotifyState_AOn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAnimNotifyState_AOn() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELAnimNotifyState_AOn_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELAnimNotifyState_AOn();
	ABP_200508_API UClass* Z_Construct_UClass_UELAnimNotifyStateBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStAOnColPoint();
// End Cross Module References
	void UELAnimNotifyState_AOn::StaticRegisterNativesUELAnimNotifyState_AOn()
	{
	}
	UClass* Z_Construct_UClass_UELAnimNotifyState_AOn_NoRegister()
	{
		return UELAnimNotifyState_AOn::StaticClass();
	}
	struct Z_Construct_UClass_UELAnimNotifyState_AOn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionParts_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionParts_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWeapon_N_MetaData[];
#endif
		static void NewProp_bWeapon_N_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWeapon_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWeaponHitEffect_N_MetaData[];
#endif
		static void NewProp_bWeaponHitEffect_N_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWeaponHitEffect_N;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELAnimNotifyStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ELAnimNotifyState_AOn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELAnimNotifyState_AOn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_CollisionParts_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimNotifyState_AOn" },
		{ "ModuleRelativePath", "Public/ELAnimNotifyState_AOn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_CollisionParts_N = { "CollisionParts_N", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimNotifyState_AOn, CollisionParts_N), Z_Construct_UScriptStruct_FStAOnColPoint, METADATA_PARAMS(Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_CollisionParts_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_CollisionParts_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_Scale_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimNotifyState_AOn" },
		{ "ModuleRelativePath", "Public/ELAnimNotifyState_AOn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_Scale_N = { "Scale_N", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELAnimNotifyState_AOn, Scale_N), METADATA_PARAMS(Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_Scale_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_Scale_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_bWeapon_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimNotifyState_AOn" },
		{ "ModuleRelativePath", "Public/ELAnimNotifyState_AOn.h" },
	};
#endif
	void Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_bWeapon_N_SetBit(void* Obj)
	{
		((UELAnimNotifyState_AOn*)Obj)->bWeapon_N = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_bWeapon_N = { "bWeapon_N", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELAnimNotifyState_AOn), &Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_bWeapon_N_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_bWeapon_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_bWeapon_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_bWeaponHitEffect_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAnimNotifyState_AOn" },
		{ "ModuleRelativePath", "Public/ELAnimNotifyState_AOn.h" },
	};
#endif
	void Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_bWeaponHitEffect_N_SetBit(void* Obj)
	{
		((UELAnimNotifyState_AOn*)Obj)->bWeaponHitEffect_N = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_bWeaponHitEffect_N = { "bWeaponHitEffect_N", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELAnimNotifyState_AOn), &Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_bWeaponHitEffect_N_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_bWeaponHitEffect_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_bWeaponHitEffect_N_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_CollisionParts_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_Scale_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_bWeapon_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::NewProp_bWeaponHitEffect_N,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELAnimNotifyState_AOn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::ClassParams = {
		&UELAnimNotifyState_AOn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELAnimNotifyState_AOn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELAnimNotifyState_AOn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELAnimNotifyState_AOn, 781125894);
	template<> ABP_200508_API UClass* StaticClass<UELAnimNotifyState_AOn>()
	{
		return UELAnimNotifyState_AOn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELAnimNotifyState_AOn(Z_Construct_UClass_UELAnimNotifyState_AOn, &UELAnimNotifyState_AOn::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELAnimNotifyState_AOn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELAnimNotifyState_AOn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
