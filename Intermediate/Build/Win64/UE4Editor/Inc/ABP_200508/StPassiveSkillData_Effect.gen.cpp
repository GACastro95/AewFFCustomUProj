// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StPassiveSkillData_Effect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStPassiveSkillData_Effect() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData_Effect();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage();
// End Cross Module References

static_assert(std::is_polymorphic<FStPassiveSkillData_Effect>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStPassiveSkillData_Effect cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStPassiveSkillData_Effect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StPassiveSkillData_Effect"), sizeof(FStPassiveSkillData_Effect), Get_Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStPassiveSkillData_Effect>()
{
	return FStPassiveSkillData_Effect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStPassiveSkillData_Effect(FStPassiveSkillData_Effect::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StPassiveSkillData_Effect"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillData_Effect
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillData_Effect()
	{
		UScriptStruct::DeferCppStructOps<FStPassiveSkillData_Effect>(FName(TEXT("StPassiveSkillData_Effect")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStPassiveSkillData_Effect;
	struct Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fMomentumPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fMomentumPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fSpecialSec_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fSpecialSec;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCriticalPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCriticalPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fReversalPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fReversalPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stDamageUpPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stDamageUpPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stDamageDownPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_stDamageDownPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fNoDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fNoDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fRaiseUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fRaiseUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fKickoutEscape_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fKickoutEscape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fMomentumMaxPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fMomentumMaxPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fSubmitPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fSubmitPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fPinFallPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fPinFallPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fMaxDamagePercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fMaxDamagePercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fInjuryPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fInjuryPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fFinisherReversalPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fFinisherReversalPercent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Effect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStPassiveSkillData_Effect>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fMomentumPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Effect" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fMomentumPercent = { "fMomentumPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Effect, fMomentumPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fMomentumPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fMomentumPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fSpecialSec_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Effect" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fSpecialSec = { "fSpecialSec", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Effect, fSpecialSec), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fSpecialSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fSpecialSec_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fCriticalPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Effect" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fCriticalPercent = { "fCriticalPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Effect, fCriticalPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fCriticalPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fCriticalPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fReversalPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Effect" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fReversalPercent = { "fReversalPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Effect, fReversalPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fReversalPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fReversalPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_stDamageUpPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Effect" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_stDamageUpPercent = { "stDamageUpPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Effect, stDamageUpPercent), Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_stDamageUpPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_stDamageUpPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_stDamageDownPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Effect" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_stDamageDownPercent = { "stDamageDownPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Effect, stDamageDownPercent), Z_Construct_UScriptStruct_FStPassiveSkillData_EffectDamage, METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_stDamageDownPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_stDamageDownPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fNoDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Effect" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fNoDown = { "fNoDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Effect, fNoDown), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fNoDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fNoDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fRaiseUp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Effect" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fRaiseUp = { "fRaiseUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Effect, fRaiseUp), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fRaiseUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fRaiseUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fKickoutEscape_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Effect" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fKickoutEscape = { "fKickoutEscape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Effect, fKickoutEscape), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fKickoutEscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fKickoutEscape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fMomentumMaxPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Effect" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fMomentumMaxPercent = { "fMomentumMaxPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Effect, fMomentumMaxPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fMomentumMaxPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fMomentumMaxPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fSubmitPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Effect" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fSubmitPercent = { "fSubmitPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Effect, fSubmitPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fSubmitPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fSubmitPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fPinFallPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Effect" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fPinFallPercent = { "fPinFallPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Effect, fPinFallPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fPinFallPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fPinFallPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fMaxDamagePercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Effect" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fMaxDamagePercent = { "fMaxDamagePercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Effect, fMaxDamagePercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fMaxDamagePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fMaxDamagePercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fInjuryPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Effect" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fInjuryPercent = { "fInjuryPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Effect, fInjuryPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fInjuryPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fInjuryPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fFinisherReversalPercent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StPassiveSkillData_Effect" },
		{ "ModuleRelativePath", "Public/StPassiveSkillData_Effect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fFinisherReversalPercent = { "fFinisherReversalPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStPassiveSkillData_Effect, fFinisherReversalPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fFinisherReversalPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fFinisherReversalPercent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fMomentumPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fSpecialSec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fCriticalPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fReversalPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_stDamageUpPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_stDamageDownPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fNoDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fRaiseUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fKickoutEscape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fMomentumMaxPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fSubmitPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fPinFallPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fMaxDamagePercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fInjuryPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::NewProp_fFinisherReversalPercent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StPassiveSkillData_Effect",
		sizeof(FStPassiveSkillData_Effect),
		alignof(FStPassiveSkillData_Effect),
		Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStPassiveSkillData_Effect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StPassiveSkillData_Effect"), sizeof(FStPassiveSkillData_Effect), Get_Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStPassiveSkillData_Effect_Hash() { return 3564165760U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
