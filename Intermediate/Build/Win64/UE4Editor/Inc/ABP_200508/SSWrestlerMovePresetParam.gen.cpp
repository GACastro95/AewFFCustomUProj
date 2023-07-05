// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSWrestlerMovePresetParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSWrestlerMovePresetParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAbilitySlotParam();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatLevelSkillType();
// End Cross Module References
class UScriptStruct* FSSWrestlerMovePresetParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSWrestlerMovePresetParam"), sizeof(FSSWrestlerMovePresetParam), Get_Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSWrestlerMovePresetParam>()
{
	return FSSWrestlerMovePresetParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSWrestlerMovePresetParam(FSSWrestlerMovePresetParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSWrestlerMovePresetParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerMovePresetParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerMovePresetParam()
	{
		UScriptStruct::DeferCppStructOps<FSSWrestlerMovePresetParam>(FName(TEXT("SSWrestlerMovePresetParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSWrestlerMovePresetParam;
	struct Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AbilityId_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilityId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilitySlot_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AbilitySlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HeatLevelSkill_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HeatLevelSkill_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeatLevelSkill_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeatLevelSkill;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSWrestlerMovePresetParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSWrestlerMovePresetParam>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_AbilityId_Inner = { "AbilityId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_AbilityId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerMovePresetParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerMovePresetParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_AbilityId = { "AbilityId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerMovePresetParam, AbilityId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_AbilityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_AbilityId_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_AbilitySlot_Inner = { "AbilitySlot", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSAbilitySlotParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_AbilitySlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerMovePresetParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerMovePresetParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_AbilitySlot = { "AbilitySlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerMovePresetParam, AbilitySlot), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_AbilitySlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_AbilitySlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_HeatLevelSkill_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_HeatLevelSkill_Inner = { "HeatLevelSkill", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_ESSHeatLevelSkillType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_HeatLevelSkill_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSWrestlerMovePresetParam" },
		{ "ModuleRelativePath", "Public/SSWrestlerMovePresetParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_HeatLevelSkill = { "HeatLevelSkill", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSWrestlerMovePresetParam, HeatLevelSkill), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_HeatLevelSkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_HeatLevelSkill_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_AbilityId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_AbilityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_AbilitySlot_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_AbilitySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_HeatLevelSkill_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_HeatLevelSkill_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::NewProp_HeatLevelSkill,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSWrestlerMovePresetParam",
		sizeof(FSSWrestlerMovePresetParam),
		alignof(FSSWrestlerMovePresetParam),
		Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSWrestlerMovePresetParam"), sizeof(FSSWrestlerMovePresetParam), Get_Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSWrestlerMovePresetParam_Hash() { return 175928342U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
