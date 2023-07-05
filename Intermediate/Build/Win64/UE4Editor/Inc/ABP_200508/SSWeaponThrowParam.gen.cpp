// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSWeaponThrowParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSWeaponThrowParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponThrowParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References

static_assert(std::is_polymorphic<FSSWeaponThrowParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSWeaponThrowParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSWeaponThrowParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSWeaponThrowParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSWeaponThrowParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSWeaponThrowParam"), sizeof(FSSWeaponThrowParam), Get_Z_Construct_UScriptStruct_FSSWeaponThrowParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSWeaponThrowParam>()
{
	return FSSWeaponThrowParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSWeaponThrowParam(FSSWeaponThrowParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSWeaponThrowParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSWeaponThrowParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSWeaponThrowParam()
	{
		UScriptStruct::DeferCppStructOps<FSSWeaponThrowParam>(FName(TEXT("SSWeaponThrowParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSWeaponThrowParam;
	struct Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundCue_Fire_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundCue_Fire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EffectRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowLocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThrowLocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultThrowPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultThrowPitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UpperBodyAnim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSWeaponThrowParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSWeaponThrowParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponThrowParam" },
		{ "ModuleRelativePath", "Public/SSWeaponThrowParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponThrowParam, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponThrowParam" },
		{ "ModuleRelativePath", "Public/SSWeaponThrowParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponThrowParam, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_SoundCue_Fire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponThrowParam" },
		{ "ModuleRelativePath", "Public/SSWeaponThrowParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_SoundCue_Fire = { "SoundCue_Fire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponThrowParam, SoundCue_Fire), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_SoundCue_Fire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_SoundCue_Fire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponThrowParam" },
		{ "ModuleRelativePath", "Public/SSWeaponThrowParam.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponThrowParam, ProjectileClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_EffectRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponThrowParam" },
		{ "ModuleRelativePath", "Public/SSWeaponThrowParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_EffectRadius = { "EffectRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponThrowParam, EffectRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_EffectRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_EffectRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_ThrowLocationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponThrowParam" },
		{ "ModuleRelativePath", "Public/SSWeaponThrowParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_ThrowLocationOffset = { "ThrowLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponThrowParam, ThrowLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_ThrowLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_ThrowLocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_DefaultThrowPitch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponThrowParam" },
		{ "ModuleRelativePath", "Public/SSWeaponThrowParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_DefaultThrowPitch = { "DefaultThrowPitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponThrowParam, DefaultThrowPitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_DefaultThrowPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_DefaultThrowPitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_UpperBodyAnim_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWeaponThrowParam" },
		{ "ModuleRelativePath", "Public/SSWeaponThrowParam.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_UpperBodyAnim = { "UpperBodyAnim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWeaponThrowParam, UpperBodyAnim), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_UpperBodyAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_UpperBodyAnim_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_SoundCue_Fire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_EffectRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_ThrowLocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_DefaultThrowPitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::NewProp_UpperBodyAnim,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSWeaponThrowParam",
		sizeof(FSSWeaponThrowParam),
		alignof(FSSWeaponThrowParam),
		Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponThrowParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSWeaponThrowParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSWeaponThrowParam"), sizeof(FSSWeaponThrowParam), Get_Z_Construct_UScriptStruct_FSSWeaponThrowParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSWeaponThrowParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSWeaponThrowParam_Hash() { return 1003093078U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
