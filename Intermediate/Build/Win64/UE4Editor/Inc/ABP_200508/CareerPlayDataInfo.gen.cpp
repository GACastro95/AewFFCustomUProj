// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerPlayDataInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerPlayDataInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerPlayDataInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FCareerPlayDataInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerPlayDataInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerPlayDataInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerPlayDataInfo"), sizeof(FCareerPlayDataInfo), Get_Z_Construct_UScriptStruct_FCareerPlayDataInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerPlayDataInfo>()
{
	return FCareerPlayDataInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerPlayDataInfo(FCareerPlayDataInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerPlayDataInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerPlayDataInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerPlayDataInfo()
	{
		UScriptStruct::DeferCppStructOps<FCareerPlayDataInfo>(FName(TEXT("CareerPlayDataInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerPlayDataInfo;
	struct Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenu_Select_New_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MainMenu_Select_New;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenu_Select_Continue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MainMenu_Select_Continue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMenu_Select_Snapshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MainMenu_Select_Snapshot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finished_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Finished_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finished_Rank_APlus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Finished_Rank_APlus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finished_Rank_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Finished_Rank_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finished_Rank_BPlus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Finished_Rank_BPlus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finished_Rank_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Finished_Rank_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finished_Rank_C_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Finished_Rank_C;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finished_Rank_D_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Finished_Rank_D;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartSelect_WrestlerID_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSelect_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StartSelect_WrestlerID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartSelect_WrestlerType_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSelect_WrestlerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StartSelect_WrestlerType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartSelect_Difficulty_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSelect_Difficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StartSelect_Difficulty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSelect_NonVegetarian_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartSelect_NonVegetarian;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSelect_Vegetarian_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartSelect_Vegetarian;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Select_RemainingTurn_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Select_RemainingTurn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Select_RemainingTurn;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Select_HubMenu_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Select_HubMenu_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Select_HubMenu;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Event_Scene_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_Scene_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Event_Scene;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Item_Buy_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_Buy_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Item_Buy;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Item_UseSelect_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_UseSelect_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Item_UseSelect;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Skill_Parameter_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skill_Parameter_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Skill_Parameter;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Skill_Action_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skill_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Skill_Action;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Skill_Passive_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skill_Passive_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Skill_Passive;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Snapshot_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Snapshot;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Transition_Scenario_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transition_Scenario_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Transition_Scenario;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Select_Partner_WrestlerID_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Select_Partner_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Select_Partner_WrestlerID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Select_Story_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Select_Story_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Select_Story;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerPlayDataInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_MainMenu_Select_New_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_MainMenu_Select_New = { "MainMenu_Select_New", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, MainMenu_Select_New), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_MainMenu_Select_New_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_MainMenu_Select_New_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_MainMenu_Select_Continue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_MainMenu_Select_Continue = { "MainMenu_Select_Continue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, MainMenu_Select_Continue), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_MainMenu_Select_Continue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_MainMenu_Select_Continue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_MainMenu_Select_Snapshot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_MainMenu_Select_Snapshot = { "MainMenu_Select_Snapshot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, MainMenu_Select_Snapshot), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_MainMenu_Select_Snapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_MainMenu_Select_Snapshot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Count_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Count = { "Finished_Count", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Finished_Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_APlus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_APlus = { "Finished_Rank_APlus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Finished_Rank_APlus), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_APlus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_APlus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_A_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_A = { "Finished_Rank_A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Finished_Rank_A), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_BPlus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_BPlus = { "Finished_Rank_BPlus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Finished_Rank_BPlus), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_BPlus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_BPlus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_B = { "Finished_Rank_B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Finished_Rank_B), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_C_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_C = { "Finished_Rank_C", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Finished_Rank_C), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_C_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_D = { "Finished_Rank_D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Finished_Rank_D), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_D_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_WrestlerID_Inner = { "StartSelect_WrestlerID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_WrestlerID = { "StartSelect_WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, StartSelect_WrestlerID), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_WrestlerID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_WrestlerType_Inner = { "StartSelect_WrestlerType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_WrestlerType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_WrestlerType = { "StartSelect_WrestlerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, StartSelect_WrestlerType), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_WrestlerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_WrestlerType_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_Difficulty_Inner = { "StartSelect_Difficulty", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_Difficulty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_Difficulty = { "StartSelect_Difficulty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, StartSelect_Difficulty), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_Difficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_Difficulty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_NonVegetarian_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_NonVegetarian = { "StartSelect_NonVegetarian", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, StartSelect_NonVegetarian), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_NonVegetarian_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_NonVegetarian_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_Vegetarian_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_Vegetarian = { "StartSelect_Vegetarian", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, StartSelect_Vegetarian), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_Vegetarian_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_Vegetarian_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_RemainingTurn_Inner = { "Select_RemainingTurn", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_RemainingTurn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_RemainingTurn = { "Select_RemainingTurn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Select_RemainingTurn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_RemainingTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_RemainingTurn_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_HubMenu_Inner = { "Select_HubMenu", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_HubMenu_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_HubMenu = { "Select_HubMenu", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Select_HubMenu), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_HubMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_HubMenu_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Event_Scene_Inner = { "Event_Scene", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Event_Scene_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Event_Scene = { "Event_Scene", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Event_Scene), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Event_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Event_Scene_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Item_Buy_Inner = { "Item_Buy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Item_Buy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Item_Buy = { "Item_Buy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Item_Buy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Item_Buy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Item_Buy_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Item_UseSelect_Inner = { "Item_UseSelect", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Item_UseSelect_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Item_UseSelect = { "Item_UseSelect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Item_UseSelect), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Item_UseSelect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Item_UseSelect_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Parameter_Inner = { "Skill_Parameter", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Parameter_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Parameter = { "Skill_Parameter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Skill_Parameter), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Parameter_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Action_Inner = { "Skill_Action", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Action_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Action = { "Skill_Action", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Skill_Action), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Action_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Passive_Inner = { "Skill_Passive", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Passive_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Passive = { "Skill_Passive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Skill_Passive), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Passive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Passive_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Snapshot_Inner = { "Snapshot", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Snapshot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Snapshot), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Snapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Snapshot_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Transition_Scenario_Inner = { "Transition_Scenario", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Transition_Scenario_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Transition_Scenario = { "Transition_Scenario", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Transition_Scenario), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Transition_Scenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Transition_Scenario_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_Partner_WrestlerID_Inner = { "Select_Partner_WrestlerID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_Partner_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_Partner_WrestlerID = { "Select_Partner_WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Select_Partner_WrestlerID), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_Partner_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_Partner_WrestlerID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_Story_Inner = { "Select_Story", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_Story_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerPlayDataInfo" },
		{ "ModuleRelativePath", "Public/CareerPlayDataInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_Story = { "Select_Story", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerPlayDataInfo, Select_Story), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_Story_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_Story_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_MainMenu_Select_New,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_MainMenu_Select_Continue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_MainMenu_Select_Snapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_APlus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_BPlus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Finished_Rank_D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_WrestlerID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_WrestlerType_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_WrestlerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_Difficulty_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_Difficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_NonVegetarian,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_StartSelect_Vegetarian,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_RemainingTurn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_RemainingTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_HubMenu_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_HubMenu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Event_Scene_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Event_Scene,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Item_Buy_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Item_Buy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Item_UseSelect_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Item_UseSelect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Parameter_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Parameter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Action_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Passive_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Skill_Passive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Snapshot_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Snapshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Transition_Scenario_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Transition_Scenario,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_Partner_WrestlerID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_Partner_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_Story_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::NewProp_Select_Story,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerPlayDataInfo",
		sizeof(FCareerPlayDataInfo),
		alignof(FCareerPlayDataInfo),
		Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerPlayDataInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerPlayDataInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerPlayDataInfo"), sizeof(FCareerPlayDataInfo), Get_Z_Construct_UScriptStruct_FCareerPlayDataInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerPlayDataInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerPlayDataInfo_Hash() { return 3075350571U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
