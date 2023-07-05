// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StManagerSystemMotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStManagerSystemMotion() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStManagerSystemMotion();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStSyncMontageObj();
// End Cross Module References

static_assert(std::is_polymorphic<FStManagerSystemMotion>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStManagerSystemMotion cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStManagerSystemMotion::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStManagerSystemMotion_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStManagerSystemMotion, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StManagerSystemMotion"), sizeof(FStManagerSystemMotion), Get_Z_Construct_UScriptStruct_FStManagerSystemMotion_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStManagerSystemMotion>()
{
	return FStManagerSystemMotion::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStManagerSystemMotion(FStManagerSystemMotion::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StManagerSystemMotion"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStManagerSystemMotion
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStManagerSystemMotion()
	{
		UScriptStruct::DeferCppStructOps<FStManagerSystemMotion>(FName(TEXT("StManagerSystemMotion")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStManagerSystemMotion;
	struct Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Idle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Idle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Support_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Support_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Support;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Disturbance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Disturbance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Happy_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Happy_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Happy;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Angry_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Angry_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Angry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponOneHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponOneHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponBothHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponBothHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trickery_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trickery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Leave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Leave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApronLeave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ApronLeave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApronReach_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ApronReach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApronFront_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApronFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApronBack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApronBack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApronFrontRev_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApronFrontRev;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApronBackRev_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApronBackRev;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StManagerSystemMotion.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStManagerSystemMotion>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Idle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StManagerSystemMotion" },
		{ "ModuleRelativePath", "Public/StManagerSystemMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Idle = { "Idle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStManagerSystemMotion, Idle), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Idle_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Support_Inner = { "Support", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Support_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StManagerSystemMotion" },
		{ "ModuleRelativePath", "Public/StManagerSystemMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Support = { "Support", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStManagerSystemMotion, Support), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Support_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Support_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Disturbance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StManagerSystemMotion" },
		{ "ModuleRelativePath", "Public/StManagerSystemMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Disturbance = { "Disturbance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStManagerSystemMotion, Disturbance), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Disturbance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Disturbance_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Happy_Inner = { "Happy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Happy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StManagerSystemMotion" },
		{ "ModuleRelativePath", "Public/StManagerSystemMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Happy = { "Happy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStManagerSystemMotion, Happy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Happy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Happy_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Angry_Inner = { "Angry", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Angry_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StManagerSystemMotion" },
		{ "ModuleRelativePath", "Public/StManagerSystemMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Angry = { "Angry", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStManagerSystemMotion, Angry), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Angry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Angry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_WeaponOneHand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StManagerSystemMotion" },
		{ "ModuleRelativePath", "Public/StManagerSystemMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_WeaponOneHand = { "WeaponOneHand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStManagerSystemMotion, WeaponOneHand), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_WeaponOneHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_WeaponOneHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_WeaponBothHand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StManagerSystemMotion" },
		{ "ModuleRelativePath", "Public/StManagerSystemMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_WeaponBothHand = { "WeaponBothHand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStManagerSystemMotion, WeaponBothHand), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_WeaponBothHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_WeaponBothHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Trickery_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StManagerSystemMotion" },
		{ "ModuleRelativePath", "Public/StManagerSystemMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Trickery = { "Trickery", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStManagerSystemMotion, Trickery), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Trickery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Trickery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Leave_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StManagerSystemMotion" },
		{ "ModuleRelativePath", "Public/StManagerSystemMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Leave = { "Leave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStManagerSystemMotion, Leave), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Leave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Leave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronLeave_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StManagerSystemMotion" },
		{ "ModuleRelativePath", "Public/StManagerSystemMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronLeave = { "ApronLeave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStManagerSystemMotion, ApronLeave), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronLeave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronLeave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronReach_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StManagerSystemMotion" },
		{ "ModuleRelativePath", "Public/StManagerSystemMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronReach = { "ApronReach", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStManagerSystemMotion, ApronReach), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronReach_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronReach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronFront_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StManagerSystemMotion" },
		{ "ModuleRelativePath", "Public/StManagerSystemMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronFront = { "ApronFront", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStManagerSystemMotion, ApronFront), Z_Construct_UScriptStruct_FStSyncMontageObj, METADATA_PARAMS(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronBack_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StManagerSystemMotion" },
		{ "ModuleRelativePath", "Public/StManagerSystemMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronBack = { "ApronBack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStManagerSystemMotion, ApronBack), Z_Construct_UScriptStruct_FStSyncMontageObj, METADATA_PARAMS(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronBack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronFrontRev_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StManagerSystemMotion" },
		{ "ModuleRelativePath", "Public/StManagerSystemMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronFrontRev = { "ApronFrontRev", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStManagerSystemMotion, ApronFrontRev), Z_Construct_UScriptStruct_FStSyncMontageObj, METADATA_PARAMS(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronFrontRev_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronFrontRev_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronBackRev_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StManagerSystemMotion" },
		{ "ModuleRelativePath", "Public/StManagerSystemMotion.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronBackRev = { "ApronBackRev", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStManagerSystemMotion, ApronBackRev), Z_Construct_UScriptStruct_FStSyncMontageObj, METADATA_PARAMS(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronBackRev_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronBackRev_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Idle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Support_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Support,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Disturbance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Happy_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Happy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Angry_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Angry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_WeaponOneHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_WeaponBothHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Trickery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_Leave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronLeave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronReach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronBack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronFrontRev,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::NewProp_ApronBackRev,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StManagerSystemMotion",
		sizeof(FStManagerSystemMotion),
		alignof(FStManagerSystemMotion),
		Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStManagerSystemMotion()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStManagerSystemMotion_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StManagerSystemMotion"), sizeof(FStManagerSystemMotion), Get_Z_Construct_UScriptStruct_FStManagerSystemMotion_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStManagerSystemMotion_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStManagerSystemMotion_Hash() { return 1920002260U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
