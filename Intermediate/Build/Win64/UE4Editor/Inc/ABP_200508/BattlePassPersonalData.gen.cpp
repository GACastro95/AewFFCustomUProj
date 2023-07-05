// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/BattlePassPersonalData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattlePassPersonalData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FBattlePassPersonalData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FBattlePassPersonalData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FBattlePassPersonalData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBattlePassPersonalData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("BattlePassPersonalData"), sizeof(FBattlePassPersonalData), Get_Z_Construct_UScriptStruct_FBattlePassPersonalData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FBattlePassPersonalData>()
{
	return FBattlePassPersonalData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBattlePassPersonalData(FBattlePassPersonalData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("BattlePassPersonalData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFBattlePassPersonalData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFBattlePassPersonalData()
	{
		UScriptStruct::DeferCppStructOps<FBattlePassPersonalData>(FName(TEXT("BattlePassPersonalData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFBattlePassPersonalData;
	struct Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeasonNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeasonNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardLevelReceivedWithFreePass_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RewardLevelReceivedWithFreePass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardLevelReceivedWithPremiumPass_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RewardLevelReceivedWithPremiumPass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PossessedPremiumPass_MetaData[];
#endif
		static void NewProp_PossessedPremiumPass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PossessedPremiumPass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BattlePassPersonalData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBattlePassPersonalData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_SeasonNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPersonalData" },
		{ "ModuleRelativePath", "Public/BattlePassPersonalData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_SeasonNo = { "SeasonNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPersonalData, SeasonNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_SeasonNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_SeasonNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_TotalPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPersonalData" },
		{ "ModuleRelativePath", "Public/BattlePassPersonalData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_TotalPoints = { "TotalPoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPersonalData, TotalPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_TotalPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_TotalPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_RewardLevelReceivedWithFreePass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPersonalData" },
		{ "ModuleRelativePath", "Public/BattlePassPersonalData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_RewardLevelReceivedWithFreePass = { "RewardLevelReceivedWithFreePass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPersonalData, RewardLevelReceivedWithFreePass), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_RewardLevelReceivedWithFreePass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_RewardLevelReceivedWithFreePass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_RewardLevelReceivedWithPremiumPass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPersonalData" },
		{ "ModuleRelativePath", "Public/BattlePassPersonalData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_RewardLevelReceivedWithPremiumPass = { "RewardLevelReceivedWithPremiumPass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassPersonalData, RewardLevelReceivedWithPremiumPass), METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_RewardLevelReceivedWithPremiumPass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_RewardLevelReceivedWithPremiumPass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_PossessedPremiumPass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassPersonalData" },
		{ "ModuleRelativePath", "Public/BattlePassPersonalData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_PossessedPremiumPass_SetBit(void* Obj)
	{
		((FBattlePassPersonalData*)Obj)->PossessedPremiumPass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_PossessedPremiumPass = { "PossessedPremiumPass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBattlePassPersonalData), &Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_PossessedPremiumPass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_PossessedPremiumPass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_PossessedPremiumPass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_SeasonNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_TotalPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_RewardLevelReceivedWithFreePass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_RewardLevelReceivedWithPremiumPass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::NewProp_PossessedPremiumPass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"BattlePassPersonalData",
		sizeof(FBattlePassPersonalData),
		alignof(FBattlePassPersonalData),
		Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBattlePassPersonalData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBattlePassPersonalData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BattlePassPersonalData"), sizeof(FBattlePassPersonalData), Get_Z_Construct_UScriptStruct_FBattlePassPersonalData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBattlePassPersonalData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBattlePassPersonalData_Hash() { return 1015162702U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
