// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StFEquipPassiveSkillData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStFEquipPassiveSkillData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStFEquipPassiveSkillData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData();
// End Cross Module References

static_assert(std::is_polymorphic<FStFEquipPassiveSkillData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStFEquipPassiveSkillData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStFEquipPassiveSkillData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStFEquipPassiveSkillData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StFEquipPassiveSkillData"), sizeof(FStFEquipPassiveSkillData), Get_Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStFEquipPassiveSkillData>()
{
	return FStFEquipPassiveSkillData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStFEquipPassiveSkillData(FStFEquipPassiveSkillData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StFEquipPassiveSkillData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStFEquipPassiveSkillData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStFEquipPassiveSkillData()
	{
		UScriptStruct::DeferCppStructOps<FStFEquipPassiveSkillData>(FName(TEXT("StFEquipPassiveSkillData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStFEquipPassiveSkillData;
	struct Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StPassiveSkillData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StPassiveSkillData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TriggerCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fTriggerSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fTriggerSec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StFEquipPassiveSkillData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStFEquipPassiveSkillData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_StPassiveSkillData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StFEquipPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StFEquipPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_StPassiveSkillData = { "StPassiveSkillData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStFEquipPassiveSkillData, StPassiveSkillData), Z_Construct_UScriptStruct_FStPassiveSkillData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_StPassiveSkillData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_StPassiveSkillData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_SkillNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StFEquipPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StFEquipPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_SkillNo = { "SkillNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStFEquipPassiveSkillData, SkillNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_SkillNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_SkillNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_TriggerCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StFEquipPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StFEquipPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_TriggerCount = { "TriggerCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStFEquipPassiveSkillData, TriggerCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_TriggerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_TriggerCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_fTriggerSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StFEquipPassiveSkillData" },
		{ "ModuleRelativePath", "Public/StFEquipPassiveSkillData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_fTriggerSec = { "fTriggerSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStFEquipPassiveSkillData, fTriggerSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_fTriggerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_fTriggerSec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_StPassiveSkillData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_SkillNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_TriggerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::NewProp_fTriggerSec,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StFEquipPassiveSkillData",
		sizeof(FStFEquipPassiveSkillData),
		alignof(FStFEquipPassiveSkillData),
		Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStFEquipPassiveSkillData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StFEquipPassiveSkillData"), sizeof(FStFEquipPassiveSkillData), Get_Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStFEquipPassiveSkillData_Hash() { return 1224245927U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
