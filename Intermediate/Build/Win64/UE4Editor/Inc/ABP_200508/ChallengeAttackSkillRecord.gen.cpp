// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ChallengeAttackSkillRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeAttackSkillRecord() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeAttackSkillRecord();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FChallengeAttackSkillRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ChallengeAttackSkillRecord"), sizeof(FChallengeAttackSkillRecord), Get_Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FChallengeAttackSkillRecord>()
{
	return FChallengeAttackSkillRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeAttackSkillRecord(FChallengeAttackSkillRecord::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ChallengeAttackSkillRecord"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeAttackSkillRecord
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeAttackSkillRecord()
	{
		UScriptStruct::DeferCppStructOps<FChallengeAttackSkillRecord>(FName(TEXT("ChallengeAttackSkillRecord")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFChallengeAttackSkillRecord;
	struct Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitWeakBlowNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitWeakBlowNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitStrongBlowNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitStrongBlowNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDashBlowNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitDashBlowNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitDivingBlowNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitDivingBlowNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitFrontWeakGrabNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitFrontWeakGrabNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitFrontStrongGrabNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitFrontStrongGrabNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitBehindWeakGrabNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitBehindWeakGrabNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitBehindStrongGrabNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitBehindStrongGrabNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitWeaponAttackNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HitWeaponAttackNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrewOpponentWhoCamebackFromRopeNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThrewOpponentWhoCamebackFromRopeNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlowOpponentWhoCamebackFromRopeNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlowOpponentWhoCamebackFromRopeNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabToTheOpponentWhoWentDownNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GrabToTheOpponentWhoWentDownNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedTheTauntNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompletedTheTauntNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BecameFinisherNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BecameFinisherNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefeatedCpuWithPinfallNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefeatedCpuWithPinfallNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefeatedCpuWithSubmissionNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefeatedCpuWithSubmissionNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefeatedCpuWithCountoutNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefeatedCpuWithCountoutNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeAttackSkillRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitWeakBlowNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAttackSkillRecord" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitWeakBlowNum = { "HitWeakBlowNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAttackSkillRecord, HitWeakBlowNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitWeakBlowNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitWeakBlowNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitStrongBlowNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAttackSkillRecord" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitStrongBlowNum = { "HitStrongBlowNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAttackSkillRecord, HitStrongBlowNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitStrongBlowNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitStrongBlowNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitDashBlowNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAttackSkillRecord" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitDashBlowNum = { "HitDashBlowNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAttackSkillRecord, HitDashBlowNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitDashBlowNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitDashBlowNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitDivingBlowNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAttackSkillRecord" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitDivingBlowNum = { "HitDivingBlowNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAttackSkillRecord, HitDivingBlowNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitDivingBlowNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitDivingBlowNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitFrontWeakGrabNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAttackSkillRecord" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitFrontWeakGrabNum = { "HitFrontWeakGrabNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAttackSkillRecord, HitFrontWeakGrabNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitFrontWeakGrabNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitFrontWeakGrabNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitFrontStrongGrabNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAttackSkillRecord" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitFrontStrongGrabNum = { "HitFrontStrongGrabNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAttackSkillRecord, HitFrontStrongGrabNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitFrontStrongGrabNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitFrontStrongGrabNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitBehindWeakGrabNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAttackSkillRecord" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitBehindWeakGrabNum = { "HitBehindWeakGrabNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAttackSkillRecord, HitBehindWeakGrabNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitBehindWeakGrabNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitBehindWeakGrabNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitBehindStrongGrabNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAttackSkillRecord" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitBehindStrongGrabNum = { "HitBehindStrongGrabNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAttackSkillRecord, HitBehindStrongGrabNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitBehindStrongGrabNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitBehindStrongGrabNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitWeaponAttackNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAttackSkillRecord" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitWeaponAttackNum = { "HitWeaponAttackNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAttackSkillRecord, HitWeaponAttackNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitWeaponAttackNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitWeaponAttackNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_ThrewOpponentWhoCamebackFromRopeNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAttackSkillRecord" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_ThrewOpponentWhoCamebackFromRopeNum = { "ThrewOpponentWhoCamebackFromRopeNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAttackSkillRecord, ThrewOpponentWhoCamebackFromRopeNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_ThrewOpponentWhoCamebackFromRopeNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_ThrewOpponentWhoCamebackFromRopeNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_BlowOpponentWhoCamebackFromRopeNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAttackSkillRecord" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_BlowOpponentWhoCamebackFromRopeNum = { "BlowOpponentWhoCamebackFromRopeNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAttackSkillRecord, BlowOpponentWhoCamebackFromRopeNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_BlowOpponentWhoCamebackFromRopeNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_BlowOpponentWhoCamebackFromRopeNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_GrabToTheOpponentWhoWentDownNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAttackSkillRecord" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_GrabToTheOpponentWhoWentDownNum = { "GrabToTheOpponentWhoWentDownNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAttackSkillRecord, GrabToTheOpponentWhoWentDownNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_GrabToTheOpponentWhoWentDownNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_GrabToTheOpponentWhoWentDownNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_CompletedTheTauntNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAttackSkillRecord" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_CompletedTheTauntNum = { "CompletedTheTauntNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAttackSkillRecord, CompletedTheTauntNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_CompletedTheTauntNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_CompletedTheTauntNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_BecameFinisherNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAttackSkillRecord" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_BecameFinisherNum = { "BecameFinisherNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAttackSkillRecord, BecameFinisherNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_BecameFinisherNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_BecameFinisherNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_DefeatedCpuWithPinfallNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAttackSkillRecord" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_DefeatedCpuWithPinfallNum = { "DefeatedCpuWithPinfallNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAttackSkillRecord, DefeatedCpuWithPinfallNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_DefeatedCpuWithPinfallNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_DefeatedCpuWithPinfallNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_DefeatedCpuWithSubmissionNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAttackSkillRecord" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_DefeatedCpuWithSubmissionNum = { "DefeatedCpuWithSubmissionNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAttackSkillRecord, DefeatedCpuWithSubmissionNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_DefeatedCpuWithSubmissionNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_DefeatedCpuWithSubmissionNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_DefeatedCpuWithCountoutNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeAttackSkillRecord" },
		{ "ModuleRelativePath", "Public/ChallengeAttackSkillRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_DefeatedCpuWithCountoutNum = { "DefeatedCpuWithCountoutNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeAttackSkillRecord, DefeatedCpuWithCountoutNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_DefeatedCpuWithCountoutNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_DefeatedCpuWithCountoutNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitWeakBlowNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitStrongBlowNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitDashBlowNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitDivingBlowNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitFrontWeakGrabNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitFrontStrongGrabNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitBehindWeakGrabNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitBehindStrongGrabNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_HitWeaponAttackNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_ThrewOpponentWhoCamebackFromRopeNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_BlowOpponentWhoCamebackFromRopeNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_GrabToTheOpponentWhoWentDownNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_CompletedTheTauntNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_BecameFinisherNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_DefeatedCpuWithPinfallNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_DefeatedCpuWithSubmissionNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::NewProp_DefeatedCpuWithCountoutNum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ChallengeAttackSkillRecord",
		sizeof(FChallengeAttackSkillRecord),
		alignof(FChallengeAttackSkillRecord),
		Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeAttackSkillRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeAttackSkillRecord"), sizeof(FChallengeAttackSkillRecord), Get_Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeAttackSkillRecord_Hash() { return 3640312464U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
