// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerMenuItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerMenuItem() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerMenuItem();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMenuAction();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMenuPage();
// End Cross Module References

static_assert(std::is_polymorphic<FCareerMenuItem>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCareerMenuItem cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCareerMenuItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerMenuItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerMenuItem, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerMenuItem"), sizeof(FCareerMenuItem), Get_Z_Construct_UScriptStruct_FCareerMenuItem_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerMenuItem>()
{
	return FCareerMenuItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerMenuItem(FCareerMenuItem::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerMenuItem"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMenuItem
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerMenuItem()
	{
		UScriptStruct::DeferCppStructOps<FCareerMenuItem>(FName(TEXT("CareerMenuItem")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerMenuItem;
	struct Z_Construct_UScriptStruct_FCareerMenuItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MenuAction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MenuAction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NextPage_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextPage_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NextPage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TextID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseParam_MetaData[];
#endif
		static void NewProp_UseParam_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Energy_GreatSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Energy_GreatSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Energy_Success_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Energy_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Energy_Failed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Energy_Failed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Motivation_GreatSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Motivation_GreatSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Motivation_Success_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Motivation_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Motivation_Failed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Motivation_Failed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillPoint_GreatSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillPoint_GreatSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillPoint_Success_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillPoint_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillPoint_Failed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillPoint_Failed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CareerMoney_GreatSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CareerMoney_GreatSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CareerMoney_Success_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CareerMoney_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CareerMoney_Failed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CareerMoney_Failed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessRate_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuccessRate_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessRate_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuccessRate_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessRate_C_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuccessRate_C;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessRate_D_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuccessRate_D;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessRate_E_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuccessRate_E;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessRate_F_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SuccessRate_F;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerMenuItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_MenuAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_MenuAction_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_MenuAction = { "MenuAction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, MenuAction), Z_Construct_UEnum_ABP_200508_ECareerMenuAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_MenuAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_MenuAction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_NextPage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_NextPage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_NextPage = { "NextPage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, NextPage), Z_Construct_UEnum_ABP_200508_ECareerMenuPage, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_NextPage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_NextPage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_TextID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_TextID = { "TextID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, TextID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_TextID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_TextID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_UseParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_UseParam_SetBit(void* Obj)
	{
		((FCareerMenuItem*)Obj)->UseParam = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_UseParam = { "UseParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCareerMenuItem), &Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_UseParam_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_UseParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_UseParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Energy_GreatSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Energy_GreatSuccess = { "Energy_GreatSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, Energy_GreatSuccess), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Energy_GreatSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Energy_GreatSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Energy_Success_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Energy_Success = { "Energy_Success", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, Energy_Success), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Energy_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Energy_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Energy_Failed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Energy_Failed = { "Energy_Failed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, Energy_Failed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Energy_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Energy_Failed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Motivation_GreatSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Motivation_GreatSuccess = { "Motivation_GreatSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, Motivation_GreatSuccess), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Motivation_GreatSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Motivation_GreatSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Motivation_Success_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Motivation_Success = { "Motivation_Success", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, Motivation_Success), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Motivation_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Motivation_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Motivation_Failed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Motivation_Failed = { "Motivation_Failed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, Motivation_Failed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Motivation_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Motivation_Failed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SkillPoint_GreatSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SkillPoint_GreatSuccess = { "SkillPoint_GreatSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, SkillPoint_GreatSuccess), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SkillPoint_GreatSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SkillPoint_GreatSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SkillPoint_Success_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SkillPoint_Success = { "SkillPoint_Success", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, SkillPoint_Success), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SkillPoint_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SkillPoint_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SkillPoint_Failed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SkillPoint_Failed = { "SkillPoint_Failed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, SkillPoint_Failed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SkillPoint_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SkillPoint_Failed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_CareerMoney_GreatSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_CareerMoney_GreatSuccess = { "CareerMoney_GreatSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, CareerMoney_GreatSuccess), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_CareerMoney_GreatSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_CareerMoney_GreatSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_CareerMoney_Success_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_CareerMoney_Success = { "CareerMoney_Success", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, CareerMoney_Success), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_CareerMoney_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_CareerMoney_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_CareerMoney_Failed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_CareerMoney_Failed = { "CareerMoney_Failed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, CareerMoney_Failed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_CareerMoney_Failed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_CareerMoney_Failed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_A_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_A = { "SuccessRate_A", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, SuccessRate_A), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_B_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_B = { "SuccessRate_B", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, SuccessRate_B), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_C_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_C = { "SuccessRate_C", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, SuccessRate_C), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_C_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_D_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_D = { "SuccessRate_D", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, SuccessRate_D), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_D_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_E_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_E = { "SuccessRate_E", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, SuccessRate_E), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_E_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_E_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_F_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerMenuItem" },
		{ "ModuleRelativePath", "Public/CareerMenuItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_F = { "SuccessRate_F", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerMenuItem, SuccessRate_F), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_F_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_F_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerMenuItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_MenuAction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_MenuAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_NextPage_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_NextPage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_TextID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_UseParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Energy_GreatSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Energy_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Energy_Failed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Motivation_GreatSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Motivation_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_Motivation_Failed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SkillPoint_GreatSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SkillPoint_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SkillPoint_Failed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_CareerMoney_GreatSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_CareerMoney_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_CareerMoney_Failed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_E,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerMenuItem_Statics::NewProp_SuccessRate_F,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerMenuItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CareerMenuItem",
		sizeof(FCareerMenuItem),
		alignof(FCareerMenuItem),
		Z_Construct_UScriptStruct_FCareerMenuItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerMenuItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerMenuItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerMenuItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerMenuItem"), sizeof(FCareerMenuItem), Get_Z_Construct_UScriptStruct_FCareerMenuItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerMenuItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerMenuItem_Hash() { return 1248192068U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
