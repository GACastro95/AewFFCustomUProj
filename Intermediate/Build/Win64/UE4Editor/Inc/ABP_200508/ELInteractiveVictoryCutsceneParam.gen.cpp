// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELInteractiveVictoryCutsceneParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELInteractiveVictoryCutsceneParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References

static_assert(std::is_polymorphic<FELInteractiveVictoryCutsceneParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELInteractiveVictoryCutsceneParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELInteractiveVictoryCutsceneParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELInteractiveVictoryCutsceneParam"), sizeof(FELInteractiveVictoryCutsceneParam), Get_Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELInteractiveVictoryCutsceneParam>()
{
	return FELInteractiveVictoryCutsceneParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELInteractiveVictoryCutsceneParam(FELInteractiveVictoryCutsceneParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELInteractiveVictoryCutsceneParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELInteractiveVictoryCutsceneParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELInteractiveVictoryCutsceneParam()
	{
		UScriptStruct::DeferCppStructOps<FELInteractiveVictoryCutsceneParam>(FName(TEXT("ELInteractiveVictoryCutsceneParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELInteractiveVictoryCutsceneParam;
	struct Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownLoser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownLoser;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShakeHand_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShakeHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShakeHand;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hug_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hug_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hug;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LiftUp_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LiftUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LiftUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LimitTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecialSceneParams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialSceneParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpecialSceneParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RampX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RampX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceCameraLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntranceCameraLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceCameraRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EntranceCameraRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureDelayTimeForTaunt_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CaptureDelayTimeForTaunt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELInteractiveVictoryCutsceneParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_DownLoser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInteractiveVictoryCutsceneParam" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_DownLoser = { "DownLoser", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELInteractiveVictoryCutsceneParam, DownLoser), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_DownLoser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_DownLoser_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_ShakeHand_Inner = { "ShakeHand", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_ShakeHand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInteractiveVictoryCutsceneParam" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_ShakeHand = { "ShakeHand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELInteractiveVictoryCutsceneParam, ShakeHand), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_ShakeHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_ShakeHand_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_Hug_Inner = { "Hug", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_Hug_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInteractiveVictoryCutsceneParam" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_Hug = { "Hug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELInteractiveVictoryCutsceneParam, Hug), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_Hug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_Hug_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_LiftUp_Inner = { "LiftUp", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_LiftUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInteractiveVictoryCutsceneParam" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_LiftUp = { "LiftUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELInteractiveVictoryCutsceneParam, LiftUp), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_LiftUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_LiftUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_LimitTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInteractiveVictoryCutsceneParam" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_LimitTime = { "LimitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELInteractiveVictoryCutsceneParam, LimitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_LimitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_LimitTime_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_SpecialSceneParams_Inner = { "SpecialSceneParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneSpecialSceneParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_SpecialSceneParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInteractiveVictoryCutsceneParam" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_SpecialSceneParams = { "SpecialSceneParams", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELInteractiveVictoryCutsceneParam, SpecialSceneParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_SpecialSceneParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_SpecialSceneParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_RampX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInteractiveVictoryCutsceneParam" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_RampX = { "RampX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELInteractiveVictoryCutsceneParam, RampX), METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_RampX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_RampX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_EntranceCameraLocation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInteractiveVictoryCutsceneParam" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_EntranceCameraLocation = { "EntranceCameraLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELInteractiveVictoryCutsceneParam, EntranceCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_EntranceCameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_EntranceCameraLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_EntranceCameraRotation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInteractiveVictoryCutsceneParam" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_EntranceCameraRotation = { "EntranceCameraRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELInteractiveVictoryCutsceneParam, EntranceCameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_EntranceCameraRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_EntranceCameraRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_TotalDamage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInteractiveVictoryCutsceneParam" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_TotalDamage = { "TotalDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELInteractiveVictoryCutsceneParam, TotalDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_TotalDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_TotalDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_CaptureDelayTimeForTaunt_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInteractiveVictoryCutsceneParam" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_CaptureDelayTimeForTaunt = { "CaptureDelayTimeForTaunt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELInteractiveVictoryCutsceneParam, CaptureDelayTimeForTaunt), METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_CaptureDelayTimeForTaunt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_CaptureDelayTimeForTaunt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_DownLoser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_ShakeHand_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_ShakeHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_Hug_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_Hug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_LiftUp_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_LiftUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_LimitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_SpecialSceneParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_SpecialSceneParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_RampX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_EntranceCameraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_EntranceCameraRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_TotalDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::NewProp_CaptureDelayTimeForTaunt,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELInteractiveVictoryCutsceneParam",
		sizeof(FELInteractiveVictoryCutsceneParam),
		alignof(FELInteractiveVictoryCutsceneParam),
		Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELInteractiveVictoryCutsceneParam"), sizeof(FELInteractiveVictoryCutsceneParam), Get_Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParam_Hash() { return 622315374U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
