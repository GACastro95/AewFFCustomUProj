// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSDamageResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSDamageResult() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDamageResult();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGuardReactionType();
// End Cross Module References
class UScriptStruct* FSSDamageResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSDamageResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSDamageResult, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSDamageResult"), sizeof(FSSDamageResult), Get_Z_Construct_UScriptStruct_FSSDamageResult_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSDamageResult>()
{
	return FSSDamageResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSDamageResult(FSSDamageResult::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSDamageResult"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSDamageResult
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSDamageResult()
	{
		UScriptStruct::DeferCppStructOps<FSSDamageResult>(FName(TEXT("SSDamageResult")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSDamageResult;
	struct Z_Construct_UScriptStruct_FSSDamageResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActualDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ActualDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackHitId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttackHitId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReactionYaw;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickAttachedWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StickAttachedWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlowVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlowVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitAttackerTimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitAttackerTimeStamp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GuardReactionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardReactionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GuardReactionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalEffective_MetaData[];
#endif
		static void NewProp_LocalEffective_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LocalEffective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoReaction_MetaData[];
#endif
		static void NewProp_NoReaction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NoReaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackDamage_MetaData[];
#endif
		static void NewProp_BackDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirDamage_MetaData[];
#endif
		static void NewProp_AirDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AirDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceKoDamage_MetaData[];
#endif
		static void NewProp_ForceKoDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceKoDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceDeadDamage_MetaData[];
#endif
		static void NewProp_ForceDeadDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceDeadDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetachVehicle_MetaData[];
#endif
		static void NewProp_DetachVehicle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DetachVehicle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSDamageResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ActualDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageResult" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ActualDamage = { "ActualDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageResult, ActualDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ActualDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ActualDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_MoveId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageResult" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_MoveId = { "MoveId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageResult, MoveId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_MoveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_MoveId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AttackHitId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageResult" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AttackHitId = { "AttackHitId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageResult, AttackHitId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AttackHitId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AttackHitId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ReactionYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageResult" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ReactionYaw = { "ReactionYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageResult, ReactionYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ReactionYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ReactionYaw_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AttackOwner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageResult" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AttackOwner = { "AttackOwner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageResult, AttackOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AttackOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AttackOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AttackUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageResult" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AttackUser = { "AttackUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageResult, AttackUser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AttackUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AttackUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_StickAttachedWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageResult" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_StickAttachedWeapon = { "StickAttachedWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageResult, StickAttachedWeapon), Z_Construct_UClass_AELSSWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_StickAttachedWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_StickAttachedWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_BlowVector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageResult" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_BlowVector = { "BlowVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageResult, BlowVector), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_BlowVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_BlowVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_HitAttackerTimeStamp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageResult" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_HitAttackerTimeStamp = { "HitAttackerTimeStamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageResult, HitAttackerTimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_HitAttackerTimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_HitAttackerTimeStamp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_GuardReactionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_GuardReactionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageResult" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_GuardReactionType = { "GuardReactionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageResult, GuardReactionType), Z_Construct_UEnum_ABP_200508_ESSGuardReactionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_GuardReactionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_GuardReactionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_LocalEffective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageResult" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_LocalEffective_SetBit(void* Obj)
	{
		((FSSDamageResult*)Obj)->LocalEffective = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_LocalEffective = { "LocalEffective", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSDamageResult), &Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_LocalEffective_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_LocalEffective_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_LocalEffective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_NoReaction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageResult" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_NoReaction_SetBit(void* Obj)
	{
		((FSSDamageResult*)Obj)->NoReaction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_NoReaction = { "NoReaction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSDamageResult), &Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_NoReaction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_NoReaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_NoReaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_BackDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageResult" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_BackDamage_SetBit(void* Obj)
	{
		((FSSDamageResult*)Obj)->BackDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_BackDamage = { "BackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSDamageResult), &Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_BackDamage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_BackDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_BackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AirDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageResult" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AirDamage_SetBit(void* Obj)
	{
		((FSSDamageResult*)Obj)->AirDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AirDamage = { "AirDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSDamageResult), &Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AirDamage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AirDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AirDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ForceKoDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageResult" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ForceKoDamage_SetBit(void* Obj)
	{
		((FSSDamageResult*)Obj)->ForceKoDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ForceKoDamage = { "ForceKoDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSDamageResult), &Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ForceKoDamage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ForceKoDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ForceKoDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ForceDeadDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageResult" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ForceDeadDamage_SetBit(void* Obj)
	{
		((FSSDamageResult*)Obj)->ForceDeadDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ForceDeadDamage = { "ForceDeadDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSDamageResult), &Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ForceDeadDamage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ForceDeadDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ForceDeadDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_DetachVehicle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageResult" },
		{ "ModuleRelativePath", "Public/SSDamageResult.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_DetachVehicle_SetBit(void* Obj)
	{
		((FSSDamageResult*)Obj)->DetachVehicle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_DetachVehicle = { "DetachVehicle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSDamageResult), &Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_DetachVehicle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_DetachVehicle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_DetachVehicle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSDamageResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ActualDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_MoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AttackHitId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ReactionYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AttackOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AttackUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_StickAttachedWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_BlowVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_HitAttackerTimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_GuardReactionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_GuardReactionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_LocalEffective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_NoReaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_BackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_AirDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ForceKoDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_ForceDeadDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageResult_Statics::NewProp_DetachVehicle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSDamageResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSDamageResult",
		sizeof(FSSDamageResult),
		alignof(FSSDamageResult),
		Z_Construct_UScriptStruct_FSSDamageResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSDamageResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSDamageResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSDamageResult"), sizeof(FSSDamageResult), Get_Z_Construct_UScriptStruct_FSSDamageResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSDamageResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSDamageResult_Hash() { return 1635904618U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
