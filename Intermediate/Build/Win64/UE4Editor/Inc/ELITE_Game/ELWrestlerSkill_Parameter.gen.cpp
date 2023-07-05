// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELWrestlerSkill_Parameter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELWrestlerSkill_Parameter() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELWrestlerSkill_Parameter>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELWrestlerSkill_Parameter cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELWrestlerSkill_Parameter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELWrestlerSkill_Parameter"), sizeof(FELWrestlerSkill_Parameter), Get_Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELWrestlerSkill_Parameter>()
{
	return FELWrestlerSkill_Parameter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELWrestlerSkill_Parameter(FELWrestlerSkill_Parameter::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELWrestlerSkill_Parameter"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerSkill_Parameter
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerSkill_Parameter()
	{
		UScriptStruct::DeferCppStructOps<FELWrestlerSkill_Parameter>(FName(TEXT("ELWrestlerSkill_Parameter")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELWrestlerSkill_Parameter;
	struct Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MomentumRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MomentumRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinisherSlotNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FinisherSlotNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignatureSlotNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SignatureSlotNum;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FinisherSlotStrength_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinisherSlotStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FinisherSlotStrength;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SignatureSlotStrength_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SignatureSlotStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SignatureSlotStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainWrestling_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChainWrestling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArmPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArmPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KickPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrapplePower_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GrapplePower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DivingPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DivingPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringboardPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpringboardPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovementSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELWrestlerSkill_Parameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELWrestlerSkill_Parameter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_MomentumRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSkill_Parameter" },
		{ "ModuleRelativePath", "Public/ELWrestlerSkill_Parameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_MomentumRate = { "MomentumRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerSkill_Parameter, MomentumRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_MomentumRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_MomentumRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_FinisherSlotNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSkill_Parameter" },
		{ "ModuleRelativePath", "Public/ELWrestlerSkill_Parameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_FinisherSlotNum = { "FinisherSlotNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerSkill_Parameter, FinisherSlotNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_FinisherSlotNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_FinisherSlotNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_SignatureSlotNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSkill_Parameter" },
		{ "ModuleRelativePath", "Public/ELWrestlerSkill_Parameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_SignatureSlotNum = { "SignatureSlotNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerSkill_Parameter, SignatureSlotNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_SignatureSlotNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_SignatureSlotNum_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_FinisherSlotStrength_Inner = { "FinisherSlotStrength", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_FinisherSlotStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSkill_Parameter" },
		{ "ModuleRelativePath", "Public/ELWrestlerSkill_Parameter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_FinisherSlotStrength = { "FinisherSlotStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerSkill_Parameter, FinisherSlotStrength), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_FinisherSlotStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_FinisherSlotStrength_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_SignatureSlotStrength_Inner = { "SignatureSlotStrength", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_SignatureSlotStrength_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSkill_Parameter" },
		{ "ModuleRelativePath", "Public/ELWrestlerSkill_Parameter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_SignatureSlotStrength = { "SignatureSlotStrength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerSkill_Parameter, SignatureSlotStrength), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_SignatureSlotStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_SignatureSlotStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_ChainWrestling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSkill_Parameter" },
		{ "ModuleRelativePath", "Public/ELWrestlerSkill_Parameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_ChainWrestling = { "ChainWrestling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerSkill_Parameter, ChainWrestling), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_ChainWrestling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_ChainWrestling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_ArmPower_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSkill_Parameter" },
		{ "ModuleRelativePath", "Public/ELWrestlerSkill_Parameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_ArmPower = { "ArmPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerSkill_Parameter, ArmPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_ArmPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_ArmPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_KickPower_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSkill_Parameter" },
		{ "ModuleRelativePath", "Public/ELWrestlerSkill_Parameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_KickPower = { "KickPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerSkill_Parameter, KickPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_KickPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_KickPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_GrapplePower_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSkill_Parameter" },
		{ "ModuleRelativePath", "Public/ELWrestlerSkill_Parameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_GrapplePower = { "GrapplePower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerSkill_Parameter, GrapplePower), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_GrapplePower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_GrapplePower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_DivingPower_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSkill_Parameter" },
		{ "ModuleRelativePath", "Public/ELWrestlerSkill_Parameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_DivingPower = { "DivingPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerSkill_Parameter, DivingPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_DivingPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_DivingPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_SpringboardPower_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSkill_Parameter" },
		{ "ModuleRelativePath", "Public/ELWrestlerSkill_Parameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_SpringboardPower = { "SpringboardPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerSkill_Parameter, SpringboardPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_SpringboardPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_SpringboardPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELWrestlerSkill_Parameter" },
		{ "ModuleRelativePath", "Public/ELWrestlerSkill_Parameter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELWrestlerSkill_Parameter, MovementSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_MovementSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_MomentumRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_FinisherSlotNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_SignatureSlotNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_FinisherSlotStrength_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_FinisherSlotStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_SignatureSlotStrength_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_SignatureSlotStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_ChainWrestling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_ArmPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_KickPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_GrapplePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_DivingPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_SpringboardPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::NewProp_MovementSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELWrestlerSkill_Parameter",
		sizeof(FELWrestlerSkill_Parameter),
		alignof(FELWrestlerSkill_Parameter),
		Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELWrestlerSkill_Parameter"), sizeof(FELWrestlerSkill_Parameter), Get_Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELWrestlerSkill_Parameter_Hash() { return 2262330716U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
