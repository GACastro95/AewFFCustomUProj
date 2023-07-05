// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSWeaponGunParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSWeaponGunParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponGunParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponGunBullet_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSPoolDecalBase_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSSWeaponGunParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSWeaponGunParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSWeaponGunParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSWeaponGunParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSWeaponGunParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSWeaponGunParam"), sizeof(FSSWeaponGunParam), Get_Z_Construct_UScriptStruct_FSSWeaponGunParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSWeaponGunParam>()
{
	return FSSWeaponGunParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSWeaponGunParam(FSSWeaponGunParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSWeaponGunParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSWeaponGunParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSWeaponGunParam()
	{
		UScriptStruct::DeferCppStructOps<FSSWeaponGunParam>(FName(TEXT("SSWeaponGunParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSWeaponGunParam;
	struct Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnBulletSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpawnBulletSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimOffsetBaseLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AimOffsetBaseLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlashEffectRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MuzzleFlashEffectRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCue_Fire_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCue_Fire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BulletClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DecalClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecalSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSWeaponGunParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSWeaponGunParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponGunParam" },
		{ "ModuleRelativePath", "Public/SSWeaponGunParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponGunParam, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponGunParam" },
		{ "ModuleRelativePath", "Public/SSWeaponGunParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponGunParam, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_SpawnBulletSocketName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponGunParam" },
		{ "ModuleRelativePath", "Public/SSWeaponGunParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_SpawnBulletSocketName = { "SpawnBulletSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponGunParam, SpawnBulletSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_SpawnBulletSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_SpawnBulletSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_AimOffsetBaseLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponGunParam" },
		{ "ModuleRelativePath", "Public/SSWeaponGunParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_AimOffsetBaseLocation = { "AimOffsetBaseLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponGunParam, AimOffsetBaseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_AimOffsetBaseLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_AimOffsetBaseLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_MuzzleFlashEffectRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponGunParam" },
		{ "ModuleRelativePath", "Public/SSWeaponGunParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_MuzzleFlashEffectRowName = { "MuzzleFlashEffectRowName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponGunParam, MuzzleFlashEffectRowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_MuzzleFlashEffectRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_MuzzleFlashEffectRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_SoundCue_Fire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponGunParam" },
		{ "ModuleRelativePath", "Public/SSWeaponGunParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_SoundCue_Fire = { "SoundCue_Fire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponGunParam, SoundCue_Fire), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_SoundCue_Fire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_SoundCue_Fire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_BulletClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponGunParam" },
		{ "ModuleRelativePath", "Public/SSWeaponGunParam.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponGunParam, BulletClass), Z_Construct_UClass_AELSSWeaponGunBullet_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_BulletClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_BulletClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_DecalClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponGunParam" },
		{ "ModuleRelativePath", "Public/SSWeaponGunParam.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_DecalClass = { "DecalClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponGunParam, DecalClass), Z_Construct_UClass_AELSSPoolDecalBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_DecalClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_DecalClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_DecalSize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponGunParam" },
		{ "ModuleRelativePath", "Public/SSWeaponGunParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_DecalSize = { "DecalSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponGunParam, DecalSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_DecalSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_DecalSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_SpawnBulletSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_AimOffsetBaseLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_MuzzleFlashEffectRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_SoundCue_Fire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_BulletClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_DecalClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::NewProp_DecalSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSWeaponGunParam",
		sizeof(FSSWeaponGunParam),
		alignof(FSSWeaponGunParam),
		Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponGunParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSWeaponGunParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSWeaponGunParam"), sizeof(FSSWeaponGunParam), Get_Z_Construct_UScriptStruct_FSSWeaponGunParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSWeaponGunParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSWeaponGunParam_Hash() { return 2705033415U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
