// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSMoveParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSMoveParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSMoveParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSActionCameraID();
// End Cross Module References

static_assert(std::is_polymorphic<FSSMoveParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSMoveParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSMoveParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSMoveParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSMoveParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSMoveParam"), sizeof(FSSMoveParam), Get_Z_Construct_UScriptStruct_FSSMoveParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSMoveParam>()
{
	return FSSMoveParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSMoveParam(FSSMoveParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSMoveParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveParam()
	{
		UScriptStruct::DeferCppStructOps<FSSMoveParam>(FName(TEXT("SSMoveParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSMoveParam;
	struct Z_Construct_UScriptStruct_FSSMoveParam_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StateBP;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageReplaceMap_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MontageReplaceMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageReplaceMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MontageReplaceMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeedScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeedScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsWeaponMove_MetaData[];
#endif
		static void NewProp_IsWeaponMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsWeaponMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackWithArmor_MetaData[];
#endif
		static void NewProp_AttackWithArmor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AttackWithArmor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionCameraID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionCameraID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionCameraID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboMoveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ComboMoveId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReachMoveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReachMoveId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowPredictionPowerScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowPredictionPowerScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowPredictionFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThrowPredictionFrequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSMoveParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSMoveParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveParam" },
		{ "ModuleRelativePath", "Public/SSMoveParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveParam, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_StateBP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveParam" },
		{ "ModuleRelativePath", "Public/SSMoveParam.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_StateBP = { "StateBP", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveParam, StateBP), Z_Construct_UClass_UELSSActionStateBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_StateBP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_StateBP_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_MontageReplaceMap_ValueProp = { "MontageReplaceMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_MontageReplaceMap_Key_KeyProp = { "MontageReplaceMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_MontageReplaceMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveParam" },
		{ "ModuleRelativePath", "Public/SSMoveParam.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_MontageReplaceMap = { "MontageReplaceMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveParam, MontageReplaceMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_MontageReplaceMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_MontageReplaceMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_RotationSpeedScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveParam" },
		{ "ModuleRelativePath", "Public/SSMoveParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_RotationSpeedScale = { "RotationSpeedScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveParam, RotationSpeedScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_RotationSpeedScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_RotationSpeedScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_IsWeaponMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveParam" },
		{ "ModuleRelativePath", "Public/SSMoveParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_IsWeaponMove_SetBit(void* Obj)
	{
		((FSSMoveParam*)Obj)->IsWeaponMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_IsWeaponMove = { "IsWeaponMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSMoveParam), &Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_IsWeaponMove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_IsWeaponMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_IsWeaponMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_AttackWithArmor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveParam" },
		{ "ModuleRelativePath", "Public/SSMoveParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_AttackWithArmor_SetBit(void* Obj)
	{
		((FSSMoveParam*)Obj)->AttackWithArmor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_AttackWithArmor = { "AttackWithArmor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSMoveParam), &Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_AttackWithArmor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_AttackWithArmor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_AttackWithArmor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ActionCameraID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ActionCameraID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveParam" },
		{ "ModuleRelativePath", "Public/SSMoveParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ActionCameraID = { "ActionCameraID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveParam, ActionCameraID), Z_Construct_UEnum_ABP_200508_ESSActionCameraID, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ActionCameraID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ActionCameraID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ComboMoveId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveParam" },
		{ "ModuleRelativePath", "Public/SSMoveParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ComboMoveId = { "ComboMoveId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveParam, ComboMoveId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ComboMoveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ComboMoveId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ReachMoveId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveParam" },
		{ "ModuleRelativePath", "Public/SSMoveParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ReachMoveId = { "ReachMoveId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveParam, ReachMoveId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ReachMoveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ReachMoveId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ThrowPredictionPowerScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveParam" },
		{ "ModuleRelativePath", "Public/SSMoveParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ThrowPredictionPowerScale = { "ThrowPredictionPowerScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveParam, ThrowPredictionPowerScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ThrowPredictionPowerScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ThrowPredictionPowerScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ThrowPredictionFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSMoveParam" },
		{ "ModuleRelativePath", "Public/SSMoveParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ThrowPredictionFrequency = { "ThrowPredictionFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSMoveParam, ThrowPredictionFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ThrowPredictionFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ThrowPredictionFrequency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSMoveParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_StateBP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_MontageReplaceMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_MontageReplaceMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_MontageReplaceMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_RotationSpeedScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_IsWeaponMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_AttackWithArmor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ActionCameraID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ActionCameraID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ComboMoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ReachMoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ThrowPredictionPowerScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSMoveParam_Statics::NewProp_ThrowPredictionFrequency,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSMoveParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSMoveParam",
		sizeof(FSSMoveParam),
		alignof(FSSMoveParam),
		Z_Construct_UScriptStruct_FSSMoveParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSMoveParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSMoveParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSMoveParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSMoveParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSMoveParam"), sizeof(FSSMoveParam), Get_Z_Construct_UScriptStruct_FSSMoveParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSMoveParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSMoveParam_Hash() { return 203097790U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
