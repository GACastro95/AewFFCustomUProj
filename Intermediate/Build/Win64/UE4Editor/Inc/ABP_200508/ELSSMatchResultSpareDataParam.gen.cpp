// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSMatchResultSpareDataParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSMatchResultSpareDataParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSResultTallyPlayerData();
// End Cross Module References
class UScriptStruct* FELSSMatchResultSpareDataParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSMatchResultSpareDataParam"), sizeof(FELSSMatchResultSpareDataParam), Get_Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSMatchResultSpareDataParam>()
{
	return FELSSMatchResultSpareDataParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSMatchResultSpareDataParam(FELSSMatchResultSpareDataParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSMatchResultSpareDataParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSMatchResultSpareDataParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSMatchResultSpareDataParam()
	{
		UScriptStruct::DeferCppStructOps<FELSSMatchResultSpareDataParam>(FName(TEXT("ELSSMatchResultSpareDataParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSMatchResultSpareDataParam;
	struct Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorRanking_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SurvivorRanking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttentionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeverCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FeverCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KillCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_resultTallyPlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_resultTallyPlayerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPlayerDataUpdate_MetaData[];
#endif
		static void NewProp_IsPlayerDataUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPlayerDataUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSSResultTallyDataUpdate_MetaData[];
#endif
		static void NewProp_IsSSResultTallyDataUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSSResultTallyDataUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSSResultDataUpdate_MetaData[];
#endif
		static void NewProp_IsSSResultDataUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSSResultDataUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsChallengeUpdate_MetaData[];
#endif
		static void NewProp_IsChallengeUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsChallengeUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBattlePassPointUpdate_MetaData[];
#endif
		static void NewProp_IsBattlePassPointUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBattlePassPointUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAEWCashPointUpdate_MetaData[];
#endif
		static void NewProp_IsAEWCashPointUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAEWCashPointUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSMatchResultSpareDataParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSMatchResultSpareDataParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_SurvivorRanking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMatchResultSpareDataParam" },
		{ "ModuleRelativePath", "Public/ELSSMatchResultSpareDataParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_SurvivorRanking = { "SurvivorRanking", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSMatchResultSpareDataParam, SurvivorRanking), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_SurvivorRanking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_SurvivorRanking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_AttentionPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMatchResultSpareDataParam" },
		{ "ModuleRelativePath", "Public/ELSSMatchResultSpareDataParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_AttentionPoint = { "AttentionPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSMatchResultSpareDataParam, AttentionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_AttentionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_AttentionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_FeverCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMatchResultSpareDataParam" },
		{ "ModuleRelativePath", "Public/ELSSMatchResultSpareDataParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_FeverCount = { "FeverCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSMatchResultSpareDataParam, FeverCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_FeverCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_FeverCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_KillCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMatchResultSpareDataParam" },
		{ "ModuleRelativePath", "Public/ELSSMatchResultSpareDataParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_KillCount = { "KillCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSMatchResultSpareDataParam, KillCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_KillCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_KillCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_resultTallyPlayerData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMatchResultSpareDataParam" },
		{ "ModuleRelativePath", "Public/ELSSMatchResultSpareDataParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_resultTallyPlayerData = { "resultTallyPlayerData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSMatchResultSpareDataParam, resultTallyPlayerData), Z_Construct_UScriptStruct_FELSSResultTallyPlayerData, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_resultTallyPlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_resultTallyPlayerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsPlayerDataUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMatchResultSpareDataParam" },
		{ "ModuleRelativePath", "Public/ELSSMatchResultSpareDataParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsPlayerDataUpdate_SetBit(void* Obj)
	{
		((FELSSMatchResultSpareDataParam*)Obj)->IsPlayerDataUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsPlayerDataUpdate = { "IsPlayerDataUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELSSMatchResultSpareDataParam), &Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsPlayerDataUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsPlayerDataUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsPlayerDataUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsSSResultTallyDataUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMatchResultSpareDataParam" },
		{ "ModuleRelativePath", "Public/ELSSMatchResultSpareDataParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsSSResultTallyDataUpdate_SetBit(void* Obj)
	{
		((FELSSMatchResultSpareDataParam*)Obj)->IsSSResultTallyDataUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsSSResultTallyDataUpdate = { "IsSSResultTallyDataUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELSSMatchResultSpareDataParam), &Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsSSResultTallyDataUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsSSResultTallyDataUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsSSResultTallyDataUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsSSResultDataUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMatchResultSpareDataParam" },
		{ "ModuleRelativePath", "Public/ELSSMatchResultSpareDataParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsSSResultDataUpdate_SetBit(void* Obj)
	{
		((FELSSMatchResultSpareDataParam*)Obj)->IsSSResultDataUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsSSResultDataUpdate = { "IsSSResultDataUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELSSMatchResultSpareDataParam), &Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsSSResultDataUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsSSResultDataUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsSSResultDataUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsChallengeUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMatchResultSpareDataParam" },
		{ "ModuleRelativePath", "Public/ELSSMatchResultSpareDataParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsChallengeUpdate_SetBit(void* Obj)
	{
		((FELSSMatchResultSpareDataParam*)Obj)->IsChallengeUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsChallengeUpdate = { "IsChallengeUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELSSMatchResultSpareDataParam), &Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsChallengeUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsChallengeUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsChallengeUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsBattlePassPointUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMatchResultSpareDataParam" },
		{ "ModuleRelativePath", "Public/ELSSMatchResultSpareDataParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsBattlePassPointUpdate_SetBit(void* Obj)
	{
		((FELSSMatchResultSpareDataParam*)Obj)->IsBattlePassPointUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsBattlePassPointUpdate = { "IsBattlePassPointUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELSSMatchResultSpareDataParam), &Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsBattlePassPointUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsBattlePassPointUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsBattlePassPointUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsAEWCashPointUpdate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSMatchResultSpareDataParam" },
		{ "ModuleRelativePath", "Public/ELSSMatchResultSpareDataParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsAEWCashPointUpdate_SetBit(void* Obj)
	{
		((FELSSMatchResultSpareDataParam*)Obj)->IsAEWCashPointUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsAEWCashPointUpdate = { "IsAEWCashPointUpdate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELSSMatchResultSpareDataParam), &Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsAEWCashPointUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsAEWCashPointUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsAEWCashPointUpdate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_SurvivorRanking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_AttentionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_FeverCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_KillCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_resultTallyPlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsPlayerDataUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsSSResultTallyDataUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsSSResultDataUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsChallengeUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsBattlePassPointUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::NewProp_IsAEWCashPointUpdate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSMatchResultSpareDataParam",
		sizeof(FELSSMatchResultSpareDataParam),
		alignof(FELSSMatchResultSpareDataParam),
		Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSMatchResultSpareDataParam"), sizeof(FELSSMatchResultSpareDataParam), Get_Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSMatchResultSpareDataParam_Hash() { return 2829370729U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
