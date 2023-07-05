// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StSeesawParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStSeesawParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStSeesawParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FStSeesawParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStSeesawParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStSeesawParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStSeesawParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStSeesawParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StSeesawParam"), sizeof(FStSeesawParam), Get_Z_Construct_UScriptStruct_FStSeesawParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStSeesawParam>()
{
	return FStSeesawParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStSeesawParam(FStSeesawParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StSeesawParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStSeesawParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStSeesawParam()
	{
		UScriptStruct::DeferCppStructOps<FStSeesawParam>(FName(TEXT("StSeesawParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStSeesawParam;
	struct Z_Construct_UScriptStruct_FStSeesawParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_N_EliteMeterDiffPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_N_EliteMeterDiffPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offense_UpEliteMeterPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offense_UpEliteMeterPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offense_DownEliteMeterPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Offense_DownEliteMeterPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Defense_UpEliteMeterPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Defense_UpEliteMeterPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Defense_DownEliteMeterPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Defense_DownEliteMeterPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_TouchRingInSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_B_TouchRingInSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_BattleRoyalSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_B_BattleRoyalSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_CriticalAtkSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_B_CriticalAtkSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_InjuryAtkSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_B_InjuryAtkSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P_EndSpecialStateSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_P_EndSpecialStateSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P_RevFinisherDamagerSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_P_RevFinisherDamagerSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P_RevSignatureDamagerSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_P_RevSignatureDamagerSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P_EndExciteStateSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_P_EndExciteStateSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P_CriticalDamageSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_P_CriticalDamageSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P_InjuryDamageSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_P_InjuryDamageSec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSeesawParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StSeesawParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStSeesawParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_N_EliteMeterDiffPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSeesawParam" },
		{ "ModuleRelativePath", "Public/StSeesawParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_N_EliteMeterDiffPercent = { "N_EliteMeterDiffPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSeesawParam, N_EliteMeterDiffPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_N_EliteMeterDiffPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_N_EliteMeterDiffPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Offense_UpEliteMeterPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSeesawParam" },
		{ "ModuleRelativePath", "Public/StSeesawParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Offense_UpEliteMeterPercent = { "Offense_UpEliteMeterPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSeesawParam, Offense_UpEliteMeterPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Offense_UpEliteMeterPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Offense_UpEliteMeterPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Offense_DownEliteMeterPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSeesawParam" },
		{ "ModuleRelativePath", "Public/StSeesawParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Offense_DownEliteMeterPercent = { "Offense_DownEliteMeterPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSeesawParam, Offense_DownEliteMeterPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Offense_DownEliteMeterPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Offense_DownEliteMeterPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Defense_UpEliteMeterPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSeesawParam" },
		{ "ModuleRelativePath", "Public/StSeesawParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Defense_UpEliteMeterPercent = { "Defense_UpEliteMeterPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSeesawParam, Defense_UpEliteMeterPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Defense_UpEliteMeterPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Defense_UpEliteMeterPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Defense_DownEliteMeterPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSeesawParam" },
		{ "ModuleRelativePath", "Public/StSeesawParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Defense_DownEliteMeterPercent = { "Defense_DownEliteMeterPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSeesawParam, Defense_DownEliteMeterPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Defense_DownEliteMeterPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Defense_DownEliteMeterPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_TouchRingInSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSeesawParam" },
		{ "ModuleRelativePath", "Public/StSeesawParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_TouchRingInSec = { "B_TouchRingInSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSeesawParam, B_TouchRingInSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_TouchRingInSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_TouchRingInSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_BattleRoyalSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSeesawParam" },
		{ "ModuleRelativePath", "Public/StSeesawParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_BattleRoyalSec = { "B_BattleRoyalSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSeesawParam, B_BattleRoyalSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_BattleRoyalSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_BattleRoyalSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_CriticalAtkSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSeesawParam" },
		{ "ModuleRelativePath", "Public/StSeesawParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_CriticalAtkSec = { "B_CriticalAtkSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSeesawParam, B_CriticalAtkSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_CriticalAtkSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_CriticalAtkSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_InjuryAtkSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSeesawParam" },
		{ "ModuleRelativePath", "Public/StSeesawParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_InjuryAtkSec = { "B_InjuryAtkSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSeesawParam, B_InjuryAtkSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_InjuryAtkSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_InjuryAtkSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_EndSpecialStateSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSeesawParam" },
		{ "ModuleRelativePath", "Public/StSeesawParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_EndSpecialStateSec = { "P_EndSpecialStateSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSeesawParam, P_EndSpecialStateSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_EndSpecialStateSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_EndSpecialStateSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_RevFinisherDamagerSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSeesawParam" },
		{ "ModuleRelativePath", "Public/StSeesawParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_RevFinisherDamagerSec = { "P_RevFinisherDamagerSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSeesawParam, P_RevFinisherDamagerSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_RevFinisherDamagerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_RevFinisherDamagerSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_RevSignatureDamagerSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSeesawParam" },
		{ "ModuleRelativePath", "Public/StSeesawParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_RevSignatureDamagerSec = { "P_RevSignatureDamagerSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSeesawParam, P_RevSignatureDamagerSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_RevSignatureDamagerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_RevSignatureDamagerSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_EndExciteStateSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSeesawParam" },
		{ "ModuleRelativePath", "Public/StSeesawParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_EndExciteStateSec = { "P_EndExciteStateSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSeesawParam, P_EndExciteStateSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_EndExciteStateSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_EndExciteStateSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_CriticalDamageSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSeesawParam" },
		{ "ModuleRelativePath", "Public/StSeesawParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_CriticalDamageSec = { "P_CriticalDamageSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSeesawParam, P_CriticalDamageSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_CriticalDamageSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_CriticalDamageSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_InjuryDamageSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StSeesawParam" },
		{ "ModuleRelativePath", "Public/StSeesawParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_InjuryDamageSec = { "P_InjuryDamageSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStSeesawParam, P_InjuryDamageSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_InjuryDamageSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_InjuryDamageSec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStSeesawParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_N_EliteMeterDiffPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Offense_UpEliteMeterPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Offense_DownEliteMeterPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Defense_UpEliteMeterPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_Defense_DownEliteMeterPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_TouchRingInSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_BattleRoyalSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_CriticalAtkSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_B_InjuryAtkSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_EndSpecialStateSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_RevFinisherDamagerSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_RevSignatureDamagerSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_EndExciteStateSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_CriticalDamageSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStSeesawParam_Statics::NewProp_P_InjuryDamageSec,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStSeesawParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StSeesawParam",
		sizeof(FStSeesawParam),
		alignof(FStSeesawParam),
		Z_Construct_UScriptStruct_FStSeesawParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSeesawParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStSeesawParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStSeesawParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStSeesawParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStSeesawParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StSeesawParam"), sizeof(FStSeesawParam), Get_Z_Construct_UScriptStruct_FStSeesawParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStSeesawParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStSeesawParam_Hash() { return 293715220U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
