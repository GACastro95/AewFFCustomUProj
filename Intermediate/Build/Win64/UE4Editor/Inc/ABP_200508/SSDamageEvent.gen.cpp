// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSDamageEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSDamageEvent() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSDamageEvent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttackParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageReason();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAttackHitDirMode();
// End Cross Module References

static_assert(std::is_polymorphic<FSSDamageEvent>() == std::is_polymorphic<FDamageEvent>(), "USTRUCT FSSDamageEvent cannot be polymorphic unless super FDamageEvent is polymorphic");

class UScriptStruct* FSSDamageEvent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSDamageEvent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSDamageEvent, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSDamageEvent"), sizeof(FSSDamageEvent), Get_Z_Construct_UScriptStruct_FSSDamageEvent_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSDamageEvent>()
{
	return FSSDamageEvent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSDamageEvent(FSSDamageEvent::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSDamageEvent"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSDamageEvent
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSDamageEvent()
	{
		UScriptStruct::DeferCppStructOps<FSSDamageEvent>(FName(TEXT("SSDamageEvent")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSDamageEvent;
	struct Z_Construct_UScriptStruct_FSSDamageEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackParam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageReason;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageCoef_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageCoef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FixedDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionCoef_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttentionCoef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlowVector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlowVector;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitDirMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDirMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HitDirMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApproximateHitCollisionLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApproximateHitCollisionLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableReaction_MetaData[];
#endif
		static void NewProp_DisableReaction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableReaction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalEffective_MetaData[];
#endif
		static void NewProp_LocalEffective_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LocalEffective;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSDamageEvent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSDamageEvent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageEvent" },
		{ "ModuleRelativePath", "Public/SSDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackParam = { "AttackParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageEvent, AttackParam), Z_Construct_UScriptStruct_FSSAttackParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackParam_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DamageReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DamageReason_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageEvent" },
		{ "ModuleRelativePath", "Public/SSDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DamageReason = { "DamageReason", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageEvent, DamageReason), Z_Construct_UEnum_ABP_200508_ESSDamageReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DamageReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DamageReason_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DamageCoef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageEvent" },
		{ "ModuleRelativePath", "Public/SSDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DamageCoef = { "DamageCoef", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageEvent, DamageCoef), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DamageCoef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DamageCoef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_FixedDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageEvent" },
		{ "ModuleRelativePath", "Public/SSDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_FixedDamage = { "FixedDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageEvent, FixedDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_FixedDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_FixedDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttentionCoef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageEvent" },
		{ "ModuleRelativePath", "Public/SSDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttentionCoef = { "AttentionCoef", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageEvent, AttentionCoef), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttentionCoef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttentionCoef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageEvent" },
		{ "ModuleRelativePath", "Public/SSDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackUser = { "AttackUser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageEvent, AttackUser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageEvent" },
		{ "ModuleRelativePath", "Public/SSDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackLocation = { "AttackLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageEvent, AttackLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackDirection_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageEvent" },
		{ "ModuleRelativePath", "Public/SSDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackDirection = { "AttackDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageEvent, AttackDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_BlowVector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageEvent" },
		{ "ModuleRelativePath", "Public/SSDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_BlowVector = { "BlowVector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageEvent, BlowVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_BlowVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_BlowVector_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_HitDirMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_HitDirMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageEvent" },
		{ "ModuleRelativePath", "Public/SSDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_HitDirMode = { "HitDirMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageEvent, HitDirMode), Z_Construct_UEnum_ABP_200508_ESSAttackHitDirMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_HitDirMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_HitDirMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_ApproximateHitCollisionLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageEvent" },
		{ "ModuleRelativePath", "Public/SSDamageEvent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_ApproximateHitCollisionLocation = { "ApproximateHitCollisionLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSDamageEvent, ApproximateHitCollisionLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_ApproximateHitCollisionLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_ApproximateHitCollisionLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DisableReaction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageEvent" },
		{ "ModuleRelativePath", "Public/SSDamageEvent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DisableReaction_SetBit(void* Obj)
	{
		((FSSDamageEvent*)Obj)->DisableReaction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DisableReaction = { "DisableReaction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSDamageEvent), &Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DisableReaction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DisableReaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DisableReaction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_LocalEffective_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSDamageEvent" },
		{ "ModuleRelativePath", "Public/SSDamageEvent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_LocalEffective_SetBit(void* Obj)
	{
		((FSSDamageEvent*)Obj)->LocalEffective = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_LocalEffective = { "LocalEffective", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSSDamageEvent), &Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_LocalEffective_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_LocalEffective_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_LocalEffective_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSDamageEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DamageReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DamageReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DamageCoef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_FixedDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttentionCoef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_AttackDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_BlowVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_HitDirMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_HitDirMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_ApproximateHitCollisionLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_DisableReaction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSDamageEvent_Statics::NewProp_LocalEffective,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSDamageEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FDamageEvent,
		&NewStructOps,
		"SSDamageEvent",
		sizeof(FSSDamageEvent),
		alignof(FSSDamageEvent),
		Z_Construct_UScriptStruct_FSSDamageEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSDamageEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSDamageEvent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSDamageEvent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSDamageEvent"), sizeof(FSSDamageEvent), Get_Z_Construct_UScriptStruct_FSSDamageEvent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSDamageEvent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSDamageEvent_Hash() { return 673226804U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
