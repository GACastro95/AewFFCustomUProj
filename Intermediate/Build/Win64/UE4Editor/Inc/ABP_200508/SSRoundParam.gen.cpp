// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSRoundParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSRoundParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSRoundParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSRound();
// End Cross Module References

static_assert(std::is_polymorphic<FSSRoundParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSSRoundParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSSRoundParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSRoundParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSRoundParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSRoundParam"), sizeof(FSSRoundParam), Get_Z_Construct_UScriptStruct_FSSRoundParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSRoundParam>()
{
	return FSSRoundParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSRoundParam(FSSRoundParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSRoundParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSRoundParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSRoundParam()
	{
		UScriptStruct::DeferCppStructOps<FSSRoundParam>(FName(TEXT("SSRoundParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSRoundParam;
	struct Z_Construct_UScriptStruct_FSSRoundParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Round_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Round_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Round;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoundDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnnounceTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnnounceTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkBeginTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShrinkBeginTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShrinkEndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShrinkEndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetRadiusMeter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetRadiusMeter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageCycle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageCycle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRoundParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSRoundParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSRoundParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_Round_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_Round_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSRoundParam" },
		{ "ModuleRelativePath", "Public/SSRoundParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_Round = { "Round", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSRoundParam, Round), Z_Construct_UEnum_ABP_200508_ESSRound, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_Round_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_Round_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_RoundDuration_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSRoundParam" },
		{ "ModuleRelativePath", "Public/SSRoundParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_RoundDuration = { "RoundDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSRoundParam, RoundDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_RoundDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_RoundDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_AnnounceTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSRoundParam" },
		{ "ModuleRelativePath", "Public/SSRoundParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_AnnounceTime = { "AnnounceTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSRoundParam, AnnounceTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_AnnounceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_AnnounceTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_ShrinkBeginTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSRoundParam" },
		{ "ModuleRelativePath", "Public/SSRoundParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_ShrinkBeginTime = { "ShrinkBeginTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSRoundParam, ShrinkBeginTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_ShrinkBeginTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_ShrinkBeginTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_ShrinkEndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSRoundParam" },
		{ "ModuleRelativePath", "Public/SSRoundParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_ShrinkEndTime = { "ShrinkEndTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSRoundParam, ShrinkEndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_ShrinkEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_ShrinkEndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_TargetRadiusMeter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSRoundParam" },
		{ "ModuleRelativePath", "Public/SSRoundParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_TargetRadiusMeter = { "TargetRadiusMeter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSRoundParam, TargetRadiusMeter), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_TargetRadiusMeter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_TargetRadiusMeter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_DamageCycle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSRoundParam" },
		{ "ModuleRelativePath", "Public/SSRoundParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_DamageCycle = { "DamageCycle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSRoundParam, DamageCycle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_DamageCycle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_DamageCycle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_DamageRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSRoundParam" },
		{ "ModuleRelativePath", "Public/SSRoundParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_DamageRate = { "DamageRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSRoundParam, DamageRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_DamageRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_DamageRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSRoundParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_Round_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_Round,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_RoundDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_AnnounceTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_ShrinkBeginTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_ShrinkEndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_TargetRadiusMeter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_DamageCycle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSRoundParam_Statics::NewProp_DamageRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSRoundParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SSRoundParam",
		sizeof(FSSRoundParam),
		alignof(FSSRoundParam),
		Z_Construct_UScriptStruct_FSSRoundParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRoundParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSRoundParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSRoundParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSRoundParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSRoundParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSRoundParam"), sizeof(FSSRoundParam), Get_Z_Construct_UScriptStruct_FSSRoundParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSRoundParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSRoundParam_Hash() { return 2015627663U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
