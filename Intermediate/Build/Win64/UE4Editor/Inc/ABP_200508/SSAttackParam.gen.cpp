// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSAttackParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSAttackParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttackParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAttackType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGuardBreakerType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSReactionType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAttackDirectionType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSDamageSE();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHitStopType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraShakeType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSLogIconType();
// End Cross Module References

static_assert(std::is_polymorphic<FSSAttackParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSAttackParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSAttackParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSAttackParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSAttackParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSAttackParam"), sizeof(FSSAttackParam), Get_Z_Construct_UScriptStruct_FSSAttackParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSAttackParam>()
{
	return FSSAttackParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSAttackParam(FSSAttackParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSAttackParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttackParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttackParam()
	{
		UScriptStruct::DeferCppStructOps<FSSAttackParam>(FName(TEXT("SSAttackParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSAttackParam;
	struct Z_Construct_UScriptStruct_FSSAttackParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackHitId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttackHitId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttackType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GuardBreakerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardBreakerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GuardBreakerType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackToDown_MetaData[];
#endif
		static void NewProp_AttackToDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AttackToDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttentionPoint;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReactionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReactionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReactionParamRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReactionParamRowName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DirectionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DirectionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlowPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlowPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlowAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlowAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlowAngleYaw_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlowAngleYaw;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageSE_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageSE_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageSE;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HitStopType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitStopType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HitStopType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CameraShakeType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShakeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CameraShakeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitMoveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransitMoveId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickAttachRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StickAttachRowName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LogIcon_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LogIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackCapsuleScaleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackCapsuleScaleRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackCapsuleScaleHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackCapsuleScaleHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSAttackParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_MoveId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_MoveId = { "MoveId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, MoveId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_MoveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_MoveId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackHitId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackHitId = { "AttackHitId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, AttackHitId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackHitId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackHitId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackType = { "AttackType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, AttackType), Z_Construct_UEnum_ABP_200508_ESSAttackType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_GuardBreakerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_GuardBreakerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_GuardBreakerType = { "GuardBreakerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, GuardBreakerType), Z_Construct_UEnum_ABP_200508_ESSGuardBreakerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_GuardBreakerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_GuardBreakerType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackToDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackToDown_SetBit(void* Obj)
	{
		((FSSAttackParam*)Obj)->AttackToDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackToDown = { "AttackToDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSAttackParam), &Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackToDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackToDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackToDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttentionPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttentionPoint = { "AttentionPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, AttentionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttentionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttentionPoint_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_ReactionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_ReactionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_ReactionType = { "ReactionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, ReactionType), Z_Construct_UEnum_ABP_200508_ESSReactionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_ReactionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_ReactionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_ReactionParamRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_ReactionParamRowName = { "ReactionParamRowName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, ReactionParamRowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_ReactionParamRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_ReactionParamRowName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_DirectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_DirectionType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_DirectionType = { "DirectionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, DirectionType), Z_Construct_UEnum_ABP_200508_ESSAttackDirectionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_DirectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_DirectionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_BlowPower_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_BlowPower = { "BlowPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, BlowPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_BlowPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_BlowPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_BlowAngle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_BlowAngle = { "BlowAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, BlowAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_BlowAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_BlowAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_BlowAngleYaw_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_BlowAngleYaw = { "BlowAngleYaw", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, BlowAngleYaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_BlowAngleYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_BlowAngleYaw_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_DamageSE_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_DamageSE_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_DamageSE = { "DamageSE", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, DamageSE), Z_Construct_UEnum_ABP_200508_ESSDamageSE, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_DamageSE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_DamageSE_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_HitStopType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_HitStopType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_HitStopType = { "HitStopType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, HitStopType), Z_Construct_UEnum_ABP_200508_ESSHitStopType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_HitStopType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_HitStopType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_CameraShakeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_CameraShakeType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_CameraShakeType = { "CameraShakeType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, CameraShakeType), Z_Construct_UEnum_ABP_200508_ESSCameraShakeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_CameraShakeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_CameraShakeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_TransitMoveId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_TransitMoveId = { "TransitMoveId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, TransitMoveId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_TransitMoveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_TransitMoveId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_StickAttachRowName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_StickAttachRowName = { "StickAttachRowName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, StickAttachRowName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_StickAttachRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_StickAttachRowName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_LogIcon_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_LogIcon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_LogIcon = { "LogIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, LogIcon), Z_Construct_UEnum_ABP_200508_ESSLogIconType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_LogIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_LogIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackCapsuleScaleRadius_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackCapsuleScaleRadius = { "AttackCapsuleScaleRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, AttackCapsuleScaleRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackCapsuleScaleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackCapsuleScaleRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackCapsuleScaleHeight_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackParam" },
		{ "ModuleRelativePath", "Public/SSAttackParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackCapsuleScaleHeight = { "AttackCapsuleScaleHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackParam, AttackCapsuleScaleHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackCapsuleScaleHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackCapsuleScaleHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSAttackParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_MoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackHitId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_GuardBreakerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_GuardBreakerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackToDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttentionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_ReactionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_ReactionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_ReactionParamRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_DirectionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_DirectionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_BlowPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_BlowAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_BlowAngleYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_DamageSE_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_DamageSE,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_HitStopType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_HitStopType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_CameraShakeType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_CameraShakeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_TransitMoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_StickAttachRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_LogIcon_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_LogIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackCapsuleScaleRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackParam_Statics::NewProp_AttackCapsuleScaleHeight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSAttackParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSAttackParam",
		sizeof(FSSAttackParam),
		alignof(FSSAttackParam),
		Z_Construct_UScriptStruct_FSSAttackParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSAttackParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSAttackParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSAttackParam"), sizeof(FSSAttackParam), Get_Z_Construct_UScriptStruct_FSSAttackParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSAttackParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSAttackParam_Hash() { return 1622792416U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
