// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELRequestTutorialParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELRequestTutorialParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELRequestTutorialParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELRequestTutorialParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELRequestTutorialParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELRequestTutorialParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELRequestTutorialParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELRequestTutorialParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELRequestTutorialParam"), sizeof(FELRequestTutorialParam), Get_Z_Construct_UScriptStruct_FELRequestTutorialParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELRequestTutorialParam>()
{
	return FELRequestTutorialParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELRequestTutorialParam(FELRequestTutorialParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELRequestTutorialParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELRequestTutorialParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELRequestTutorialParam()
	{
		UScriptStruct::DeferCppStructOps<FELRequestTutorialParam>(FName(TEXT("ELRequestTutorialParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELRequestTutorialParam;
	struct Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTime_Appear_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTime_Appear;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTime_Input_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTime_Input;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tutorials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tutorials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tutorials;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tutorial_Basic03_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tutorial_Basic03;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tutorial_Pinfall_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tutorial_Pinfall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tutorial_GoRingSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tutorial_GoRingSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tutorial_GrabWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tutorial_GrabWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tutorial_Reversal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tutorial_Reversal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tutorial_Momentum_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tutorial_Momentum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tutorial_Guard_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tutorial_Guard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tutorial_StrikeReversal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tutorial_StrikeReversal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrikeDamagedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StrikeDamagedCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tutorial_ReachReversal_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tutorial_ReachReversal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrappleDamagedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GrappleDamagedCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReversalCountMatchLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReversalCountMatchLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tutorial_TrainingMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tutorial_TrainingMode;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AgainTutorials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgainTutorials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AgainTutorials;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELRequestTutorialParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_DelayTime_Appear_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRequestTutorialParam" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_DelayTime_Appear = { "DelayTime_Appear", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRequestTutorialParam, DelayTime_Appear), METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_DelayTime_Appear_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_DelayTime_Appear_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_DelayTime_Input_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRequestTutorialParam" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_DelayTime_Input = { "DelayTime_Input", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRequestTutorialParam, DelayTime_Input), METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_DelayTime_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_DelayTime_Input_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorials_Inner = { "Tutorials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRequestTutorialParam" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorials = { "Tutorials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRequestTutorialParam, Tutorials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorials_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Basic03_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRequestTutorialParam" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Basic03 = { "Tutorial_Basic03", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRequestTutorialParam, Tutorial_Basic03), METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Basic03_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Basic03_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Pinfall_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRequestTutorialParam" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Pinfall = { "Tutorial_Pinfall", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRequestTutorialParam, Tutorial_Pinfall), METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Pinfall_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Pinfall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_GoRingSide_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRequestTutorialParam" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_GoRingSide = { "Tutorial_GoRingSide", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRequestTutorialParam, Tutorial_GoRingSide), METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_GoRingSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_GoRingSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_GrabWeapon_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRequestTutorialParam" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_GrabWeapon = { "Tutorial_GrabWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRequestTutorialParam, Tutorial_GrabWeapon), METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_GrabWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_GrabWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Reversal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRequestTutorialParam" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Reversal = { "Tutorial_Reversal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRequestTutorialParam, Tutorial_Reversal), METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Reversal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Reversal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Momentum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRequestTutorialParam" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Momentum = { "Tutorial_Momentum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRequestTutorialParam, Tutorial_Momentum), METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Momentum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Momentum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Guard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRequestTutorialParam" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Guard = { "Tutorial_Guard", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRequestTutorialParam, Tutorial_Guard), METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Guard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Guard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_StrikeReversal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRequestTutorialParam" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_StrikeReversal = { "Tutorial_StrikeReversal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRequestTutorialParam, Tutorial_StrikeReversal), METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_StrikeReversal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_StrikeReversal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_StrikeDamagedCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRequestTutorialParam" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_StrikeDamagedCount = { "StrikeDamagedCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRequestTutorialParam, StrikeDamagedCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_StrikeDamagedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_StrikeDamagedCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_ReachReversal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRequestTutorialParam" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_ReachReversal = { "Tutorial_ReachReversal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRequestTutorialParam, Tutorial_ReachReversal), METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_ReachReversal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_ReachReversal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_GrappleDamagedCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRequestTutorialParam" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_GrappleDamagedCount = { "GrappleDamagedCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRequestTutorialParam, GrappleDamagedCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_GrappleDamagedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_GrappleDamagedCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_ReversalCountMatchLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRequestTutorialParam" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_ReversalCountMatchLimit = { "ReversalCountMatchLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRequestTutorialParam, ReversalCountMatchLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_ReversalCountMatchLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_ReversalCountMatchLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_TrainingMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRequestTutorialParam" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_TrainingMode = { "Tutorial_TrainingMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRequestTutorialParam, Tutorial_TrainingMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_TrainingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_TrainingMode_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_AgainTutorials_Inner = { "AgainTutorials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_AgainTutorials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELRequestTutorialParam" },
		{ "ModuleRelativePath", "Public/ELRequestTutorialParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_AgainTutorials = { "AgainTutorials", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELRequestTutorialParam, AgainTutorials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_AgainTutorials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_AgainTutorials_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_DelayTime_Appear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_DelayTime_Input,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Basic03,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Pinfall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_GoRingSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_GrabWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Reversal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Momentum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_Guard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_StrikeReversal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_StrikeDamagedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_ReachReversal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_GrappleDamagedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_ReversalCountMatchLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_Tutorial_TrainingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_AgainTutorials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::NewProp_AgainTutorials,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELRequestTutorialParam",
		sizeof(FELRequestTutorialParam),
		alignof(FELRequestTutorialParam),
		Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELRequestTutorialParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELRequestTutorialParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELRequestTutorialParam"), sizeof(FELRequestTutorialParam), Get_Z_Construct_UScriptStruct_FELRequestTutorialParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELRequestTutorialParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELRequestTutorialParam_Hash() { return 3472792855U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
