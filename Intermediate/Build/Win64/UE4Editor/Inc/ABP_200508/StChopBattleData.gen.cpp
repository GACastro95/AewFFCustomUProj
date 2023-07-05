// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StChopBattleData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStChopBattleData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStChopBattleData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FStChopBattleData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStChopBattleData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStChopBattleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStChopBattleData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStChopBattleData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StChopBattleData"), sizeof(FStChopBattleData), Get_Z_Construct_UScriptStruct_FStChopBattleData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStChopBattleData>()
{
	return FStChopBattleData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStChopBattleData(FStChopBattleData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StChopBattleData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStChopBattleData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStChopBattleData()
	{
		UScriptStruct::DeferCppStructOps<FStChopBattleData>(FName(TEXT("StChopBattleData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStChopBattleData;
	struct Z_Construct_UScriptStruct_FStChopBattleData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fBonusMomentumValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fBonusMomentumValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TurnMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCameraZoomSec_ST_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCameraZoomSec_ST;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCameraZoomSec_LO_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCameraZoomSec_LO;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCameraZoomSec_EN_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCameraZoomSec_EN;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStChopBattleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StChopBattleData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStChopBattleData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fBonusMomentumValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StChopBattleData" },
		{ "ModuleRelativePath", "Public/StChopBattleData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fBonusMomentumValue = { "fBonusMomentumValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStChopBattleData, fBonusMomentumValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fBonusMomentumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fBonusMomentumValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_TurnMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StChopBattleData" },
		{ "ModuleRelativePath", "Public/StChopBattleData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_TurnMax = { "TurnMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStChopBattleData, TurnMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_TurnMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_TurnMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fCameraZoomSec_ST_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StChopBattleData" },
		{ "ModuleRelativePath", "Public/StChopBattleData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fCameraZoomSec_ST = { "fCameraZoomSec_ST", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStChopBattleData, fCameraZoomSec_ST), METADATA_PARAMS(Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fCameraZoomSec_ST_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fCameraZoomSec_ST_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fCameraZoomSec_LO_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StChopBattleData" },
		{ "ModuleRelativePath", "Public/StChopBattleData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fCameraZoomSec_LO = { "fCameraZoomSec_LO", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStChopBattleData, fCameraZoomSec_LO), METADATA_PARAMS(Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fCameraZoomSec_LO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fCameraZoomSec_LO_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fCameraZoomSec_EN_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StChopBattleData" },
		{ "ModuleRelativePath", "Public/StChopBattleData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fCameraZoomSec_EN = { "fCameraZoomSec_EN", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStChopBattleData, fCameraZoomSec_EN), METADATA_PARAMS(Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fCameraZoomSec_EN_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fCameraZoomSec_EN_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStChopBattleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fBonusMomentumValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_TurnMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fCameraZoomSec_ST,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fCameraZoomSec_LO,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStChopBattleData_Statics::NewProp_fCameraZoomSec_EN,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStChopBattleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StChopBattleData",
		sizeof(FStChopBattleData),
		alignof(FStChopBattleData),
		Z_Construct_UScriptStruct_FStChopBattleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStChopBattleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStChopBattleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStChopBattleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStChopBattleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStChopBattleData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StChopBattleData"), sizeof(FStChopBattleData), Get_Z_Construct_UScriptStruct_FStChopBattleData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStChopBattleData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStChopBattleData_Hash() { return 4193217810U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
