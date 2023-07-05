// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/BattlePassRewardMenuParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattlePassRewardMenuParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FBattlePassRewardMenuParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FBattlePassRewardItemParam();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FUnlockableItemParam();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPossessedItemParam();
// End Cross Module References
class UScriptStruct* FBattlePassRewardMenuParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBattlePassRewardMenuParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("BattlePassRewardMenuParam"), sizeof(FBattlePassRewardMenuParam), Get_Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FBattlePassRewardMenuParam>()
{
	return FBattlePassRewardMenuParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBattlePassRewardMenuParam(FBattlePassRewardMenuParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("BattlePassRewardMenuParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFBattlePassRewardMenuParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFBattlePassRewardMenuParam()
	{
		UScriptStruct::DeferCppStructOps<FBattlePassRewardMenuParam>(FName(TEXT("BattlePassRewardMenuParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFBattlePassRewardMenuParam;
	struct Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockedReward_MetaData[];
#endif
		static void NewProp_UnlockedReward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UnlockedReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarnedReward_MetaData[];
#endif
		static void NewProp_EarnedReward_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EarnedReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetUnlockableItemParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetUnlockableItemParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPossessedItemParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetPossessedItemParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BattlePassRewardMenuParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBattlePassRewardMenuParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_ItemParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassRewardMenuParam" },
		{ "ModuleRelativePath", "Public/BattlePassRewardMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_ItemParam = { "ItemParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassRewardMenuParam, ItemParam), Z_Construct_UScriptStruct_FBattlePassRewardItemParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_ItemParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_ItemParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_UnlockedReward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassRewardMenuParam" },
		{ "ModuleRelativePath", "Public/BattlePassRewardMenuParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_UnlockedReward_SetBit(void* Obj)
	{
		((FBattlePassRewardMenuParam*)Obj)->UnlockedReward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_UnlockedReward = { "UnlockedReward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBattlePassRewardMenuParam), &Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_UnlockedReward_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_UnlockedReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_UnlockedReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_EarnedReward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassRewardMenuParam" },
		{ "ModuleRelativePath", "Public/BattlePassRewardMenuParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_EarnedReward_SetBit(void* Obj)
	{
		((FBattlePassRewardMenuParam*)Obj)->EarnedReward = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_EarnedReward = { "EarnedReward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBattlePassRewardMenuParam), &Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_EarnedReward_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_EarnedReward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_EarnedReward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_TargetUnlockableItemParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassRewardMenuParam" },
		{ "ModuleRelativePath", "Public/BattlePassRewardMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_TargetUnlockableItemParam = { "TargetUnlockableItemParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassRewardMenuParam, TargetUnlockableItemParam), Z_Construct_UScriptStruct_FUnlockableItemParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_TargetUnlockableItemParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_TargetUnlockableItemParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_TargetPossessedItemParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BattlePassRewardMenuParam" },
		{ "ModuleRelativePath", "Public/BattlePassRewardMenuParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_TargetPossessedItemParam = { "TargetPossessedItemParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBattlePassRewardMenuParam, TargetPossessedItemParam), Z_Construct_UScriptStruct_FPossessedItemParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_TargetPossessedItemParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_TargetPossessedItemParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_ItemParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_UnlockedReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_EarnedReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_TargetUnlockableItemParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::NewProp_TargetPossessedItemParam,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"BattlePassRewardMenuParam",
		sizeof(FBattlePassRewardMenuParam),
		alignof(FBattlePassRewardMenuParam),
		Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBattlePassRewardMenuParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BattlePassRewardMenuParam"), sizeof(FBattlePassRewardMenuParam), Get_Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBattlePassRewardMenuParam_Hash() { return 1251090705U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
