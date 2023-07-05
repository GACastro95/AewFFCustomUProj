// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSActionStateMovementAdjust.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSActionStateMovementAdjust() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELSSActionStateMovementAdjust::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSActionStateMovementAdjust"), sizeof(FELSSActionStateMovementAdjust), Get_Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSActionStateMovementAdjust>()
{
	return FELSSActionStateMovementAdjust::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSActionStateMovementAdjust(FELSSActionStateMovementAdjust::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSActionStateMovementAdjust"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSActionStateMovementAdjust
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSActionStateMovementAdjust()
	{
		UScriptStruct::DeferCppStructOps<FELSSActionStateMovementAdjust>(FName(TEXT("ELSSActionStateMovementAdjust")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSActionStateMovementAdjust;
	struct Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearOnLand_MetaData[];
#endif
		static void NewProp_ClearOnLand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClearOnLand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityScaleOnRise_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityScaleOnRise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RiseThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RiseThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallingLateralFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FallingLateralFriction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSActionStateMovementAdjust.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSActionStateMovementAdjust>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_Duration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateMovementAdjust" },
		{ "ModuleRelativePath", "Public/ELSSActionStateMovementAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSActionStateMovementAdjust, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_ClearOnLand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateMovementAdjust" },
		{ "ModuleRelativePath", "Public/ELSSActionStateMovementAdjust.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_ClearOnLand_SetBit(void* Obj)
	{
		((FELSSActionStateMovementAdjust*)Obj)->ClearOnLand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_ClearOnLand = { "ClearOnLand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELSSActionStateMovementAdjust), &Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_ClearOnLand_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_ClearOnLand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_ClearOnLand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GravityScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateMovementAdjust" },
		{ "ModuleRelativePath", "Public/ELSSActionStateMovementAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSActionStateMovementAdjust, GravityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GravityScaleOnRise_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateMovementAdjust" },
		{ "ModuleRelativePath", "Public/ELSSActionStateMovementAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GravityScaleOnRise = { "GravityScaleOnRise", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSActionStateMovementAdjust, GravityScaleOnRise), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GravityScaleOnRise_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GravityScaleOnRise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_RiseThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateMovementAdjust" },
		{ "ModuleRelativePath", "Public/ELSSActionStateMovementAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_RiseThreshold = { "RiseThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSActionStateMovementAdjust, RiseThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_RiseThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_RiseThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GravityInterpSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateMovementAdjust" },
		{ "ModuleRelativePath", "Public/ELSSActionStateMovementAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GravityInterpSpeed = { "GravityInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSActionStateMovementAdjust, GravityInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GravityInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GravityInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GroundFriction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateMovementAdjust" },
		{ "ModuleRelativePath", "Public/ELSSActionStateMovementAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GroundFriction = { "GroundFriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSActionStateMovementAdjust, GroundFriction), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GroundFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GroundFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_FallingLateralFriction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSActionStateMovementAdjust" },
		{ "ModuleRelativePath", "Public/ELSSActionStateMovementAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_FallingLateralFriction = { "FallingLateralFriction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSActionStateMovementAdjust, FallingLateralFriction), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_FallingLateralFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_FallingLateralFriction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_ClearOnLand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GravityScaleOnRise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_RiseThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GravityInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_GroundFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::NewProp_FallingLateralFriction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSActionStateMovementAdjust",
		sizeof(FELSSActionStateMovementAdjust),
		alignof(FELSSActionStateMovementAdjust),
		Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSActionStateMovementAdjust"), sizeof(FELSSActionStateMovementAdjust), Get_Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSActionStateMovementAdjust_Hash() { return 2127644896U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
