// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesPlayerStart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesPlayerStart() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_AELMovesPlayerStart_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_AELMovesPlayerStart();
	CREATION_API UClass* Z_Construct_UClass_AELMovesPlayerPosition();
	UPackage* Z_Construct_UPackage__Script_Creation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void AELMovesPlayerStart::StaticRegisterNativesAELMovesPlayerStart()
	{
	}
	UClass* Z_Construct_UClass_AELMovesPlayerStart_NoRegister()
	{
		return AELMovesPlayerStart::StaticClass();
	}
	struct Z_Construct_UClass_AELMovesPlayerStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Visible_MetaData[];
#endif
		static void NewProp_Visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Visible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WithWeapon_MetaData[];
#endif
		static void NewProp_WithWeapon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WithWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponLocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponLocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponRotatorOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponRotatorOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELMovesPlayerStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELMovesPlayerPosition,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMovesPlayerStart_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "ELMovesPlayerStart.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMovesPlayerStart.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_Visible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesPlayerStart" },
		{ "ModuleRelativePath", "Public/ELMovesPlayerStart.h" },
	};
#endif
	void Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_Visible_SetBit(void* Obj)
	{
		((AELMovesPlayerStart*)Obj)->Visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELMovesPlayerStart), &Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_Visible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_Visible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_WithWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesPlayerStart" },
		{ "ModuleRelativePath", "Public/ELMovesPlayerStart.h" },
	};
#endif
	void Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_WithWeapon_SetBit(void* Obj)
	{
		((AELMovesPlayerStart*)Obj)->WithWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_WithWeapon = { "WithWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AELMovesPlayerStart), &Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_WithWeapon_SetBit, METADATA_PARAMS(Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_WithWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_WithWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_WeaponLocationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesPlayerStart" },
		{ "ModuleRelativePath", "Public/ELMovesPlayerStart.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_WeaponLocationOffset = { "WeaponLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELMovesPlayerStart, WeaponLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_WeaponLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_WeaponLocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_WeaponRotatorOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesPlayerStart" },
		{ "ModuleRelativePath", "Public/ELMovesPlayerStart.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_WeaponRotatorOffset = { "WeaponRotatorOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELMovesPlayerStart, WeaponRotatorOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_WeaponRotatorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_WeaponRotatorOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELMovesPlayerStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_Visible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_WithWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_WeaponLocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELMovesPlayerStart_Statics::NewProp_WeaponRotatorOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELMovesPlayerStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELMovesPlayerStart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELMovesPlayerStart_Statics::ClassParams = {
		&AELMovesPlayerStart::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AELMovesPlayerStart_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AELMovesPlayerStart_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELMovesPlayerStart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELMovesPlayerStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELMovesPlayerStart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELMovesPlayerStart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELMovesPlayerStart, 1133464156);
	template<> CREATION_API UClass* StaticClass<AELMovesPlayerStart>()
	{
		return AELMovesPlayerStart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELMovesPlayerStart(Z_Construct_UClass_AELMovesPlayerStart, &AELMovesPlayerStart::StaticClass, TEXT("/Script/Creation"), TEXT("AELMovesPlayerStart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELMovesPlayerStart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
