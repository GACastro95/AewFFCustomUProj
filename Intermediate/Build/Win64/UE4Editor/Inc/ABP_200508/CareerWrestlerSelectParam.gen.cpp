// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerWrestlerSelectParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerWrestlerSelectParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerWrestlerSelectParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStartOfMatch();
// End Cross Module References
class UScriptStruct* FCareerWrestlerSelectParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerWrestlerSelectParam"), sizeof(FCareerWrestlerSelectParam), Get_Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerWrestlerSelectParam>()
{
	return FCareerWrestlerSelectParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerWrestlerSelectParam(FCareerWrestlerSelectParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerWrestlerSelectParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerWrestlerSelectParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerWrestlerSelectParam()
	{
		UScriptStruct::DeferCppStructOps<FCareerWrestlerSelectParam>(FName(TEXT("CareerWrestlerSelectParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerWrestlerSelectParam;
	struct Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attire_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Attire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CostumeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CostumeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManager_MetaData[];
#endif
		static void NewProp_bManager_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAI_MetaData[];
#endif
		static void NewProp_bAI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIDifficulity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AIDifficulity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIFightStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AIFightStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContorollerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ContorollerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CasinoBattleRoyal_Zugara_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CasinoBattleRoyal_Zugara;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CasinoBattleRoyal_Number_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CasinoBattleRoyal_Number;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCasualMode_MetaData[];
#endif
		static void NewProp_bCasualMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCasualMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fCoreHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fCoreHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fHeadHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fHeadHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fArmHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fArmHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fBodyHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fBodyHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fLegHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fLegHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fMomentum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fMomentum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fMomentumUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fMomentumUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinisherOverwrite_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FinisherOverwrite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllFinisher_MetaData[];
#endif
		static void NewProp_bAllFinisher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllFinisher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDarkSkinMode_MetaData[];
#endif
		static void NewProp_bDarkSkinMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDarkSkinMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEntranceAttireMode_MetaData[];
#endif
		static void NewProp_bEntranceAttireMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEntranceAttireMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlainAttireMode_MetaData[];
#endif
		static void NewProp_bPlainAttireMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlainAttireMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInvader_MetaData[];
#endif
		static void NewProp_bInvader_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInvader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvaderInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InvaderInTime;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ECareerStartOfMatch_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ECareerStartOfMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ECareerStartOfMatch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerWrestlerSelectParam>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_TeamNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_TeamNo = { "TeamNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, TeamNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_TeamNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_TeamNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_Attire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_Attire = { "Attire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, Attire), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_Attire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_Attire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_CostumeID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_CostumeID = { "CostumeID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, CostumeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_CostumeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_CostumeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bManager_SetBit(void* Obj)
	{
		((FCareerWrestlerSelectParam*)Obj)->bManager = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bManager = { "bManager", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerWrestlerSelectParam), &Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bManager_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bAI_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bAI_SetBit(void* Obj)
	{
		((FCareerWrestlerSelectParam*)Obj)->bAI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bAI = { "bAI", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerWrestlerSelectParam), &Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bAI_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bAI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_AIDifficulity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_AIDifficulity = { "AIDifficulity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, AIDifficulity), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_AIDifficulity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_AIDifficulity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_AIFightStyle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_AIFightStyle = { "AIFightStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, AIFightStyle), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_AIFightStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_AIFightStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_ContorollerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_ContorollerID = { "ContorollerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, ContorollerID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_ContorollerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_ContorollerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_CasinoBattleRoyal_Zugara_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_CasinoBattleRoyal_Zugara = { "CasinoBattleRoyal_Zugara", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, CasinoBattleRoyal_Zugara), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_CasinoBattleRoyal_Zugara_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_CasinoBattleRoyal_Zugara_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_CasinoBattleRoyal_Number_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_CasinoBattleRoyal_Number = { "CasinoBattleRoyal_Number", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, CasinoBattleRoyal_Number), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_CasinoBattleRoyal_Number_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_CasinoBattleRoyal_Number_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bCasualMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bCasualMode_SetBit(void* Obj)
	{
		((FCareerWrestlerSelectParam*)Obj)->bCasualMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bCasualMode = { "bCasualMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerWrestlerSelectParam), &Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bCasualMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bCasualMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bCasualMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fCoreHP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fCoreHP = { "fCoreHP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, fCoreHP), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fCoreHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fCoreHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fHeadHP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fHeadHP = { "fHeadHP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, fHeadHP), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fHeadHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fHeadHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fArmHP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fArmHP = { "fArmHP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, fArmHP), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fArmHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fArmHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fBodyHP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fBodyHP = { "fBodyHP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, fBodyHP), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fBodyHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fBodyHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fLegHP_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fLegHP = { "fLegHP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, fLegHP), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fLegHP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fLegHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fMomentum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fMomentum = { "fMomentum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, fMomentum), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fMomentum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fMomentum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fMomentumUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fMomentumUpRate = { "fMomentumUpRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, fMomentumUpRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fMomentumUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fMomentumUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_FinisherOverwrite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_FinisherOverwrite = { "FinisherOverwrite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, FinisherOverwrite), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_FinisherOverwrite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_FinisherOverwrite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bAllFinisher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bAllFinisher_SetBit(void* Obj)
	{
		((FCareerWrestlerSelectParam*)Obj)->bAllFinisher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bAllFinisher = { "bAllFinisher", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerWrestlerSelectParam), &Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bAllFinisher_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bAllFinisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bAllFinisher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bDarkSkinMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bDarkSkinMode_SetBit(void* Obj)
	{
		((FCareerWrestlerSelectParam*)Obj)->bDarkSkinMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bDarkSkinMode = { "bDarkSkinMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerWrestlerSelectParam), &Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bDarkSkinMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bDarkSkinMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bDarkSkinMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bEntranceAttireMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bEntranceAttireMode_SetBit(void* Obj)
	{
		((FCareerWrestlerSelectParam*)Obj)->bEntranceAttireMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bEntranceAttireMode = { "bEntranceAttireMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerWrestlerSelectParam), &Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bEntranceAttireMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bEntranceAttireMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bEntranceAttireMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bPlainAttireMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bPlainAttireMode_SetBit(void* Obj)
	{
		((FCareerWrestlerSelectParam*)Obj)->bPlainAttireMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bPlainAttireMode = { "bPlainAttireMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerWrestlerSelectParam), &Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bPlainAttireMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bPlainAttireMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bPlainAttireMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bInvader_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bInvader_SetBit(void* Obj)
	{
		((FCareerWrestlerSelectParam*)Obj)->bInvader = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bInvader = { "bInvader", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerWrestlerSelectParam), &Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bInvader_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bInvader_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bInvader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_InvaderInTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_InvaderInTime = { "InvaderInTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, InvaderInTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_InvaderInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_InvaderInTime_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_ECareerStartOfMatch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_ECareerStartOfMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerWrestlerSelectParam" },
		{ "ModuleRelativePath", "Public/CareerWrestlerSelectParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_ECareerStartOfMatch = { "ECareerStartOfMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerWrestlerSelectParam, ECareerStartOfMatch), Z_Construct_UEnum_ABP_200508_ECareerStartOfMatch, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_ECareerStartOfMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_ECareerStartOfMatch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_TeamNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_Attire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_CostumeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bAI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_AIDifficulity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_AIFightStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_ContorollerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_CasinoBattleRoyal_Zugara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_CasinoBattleRoyal_Number,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bCasualMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fCoreHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fHeadHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fArmHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fBodyHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fLegHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fMomentum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_fMomentumUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_FinisherOverwrite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bAllFinisher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bDarkSkinMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bEntranceAttireMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bPlainAttireMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_bInvader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_InvaderInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_ECareerStartOfMatch_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::NewProp_ECareerStartOfMatch,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerWrestlerSelectParam",
		sizeof(FCareerWrestlerSelectParam),
		alignof(FCareerWrestlerSelectParam),
		Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerWrestlerSelectParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerWrestlerSelectParam"), sizeof(FCareerWrestlerSelectParam), Get_Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerWrestlerSelectParam_Hash() { return 1612093494U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
