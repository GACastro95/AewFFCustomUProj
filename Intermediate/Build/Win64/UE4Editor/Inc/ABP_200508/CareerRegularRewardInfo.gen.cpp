// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerRegularRewardInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerRegularRewardInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerRegularRewardInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FCareerRegularRewardInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerRegularRewardInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerRegularRewardInfo"), sizeof(FCareerRegularRewardInfo), Get_Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerRegularRewardInfo>()
{
	return FCareerRegularRewardInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerRegularRewardInfo(FCareerRegularRewardInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerRegularRewardInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerRegularRewardInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerRegularRewardInfo()
	{
		UScriptStruct::DeferCppStructOps<FCareerRegularRewardInfo>(FName(TEXT("CareerRegularRewardInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerRegularRewardInfo;
	struct Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CareerMoney_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CareerMoney;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Motivation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Motivation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Energy_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Energy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerRegularRewardInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerRegularRewardInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_SkillPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRegularRewardInfo" },
		{ "ModuleRelativePath", "Public/CareerRegularRewardInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_SkillPoint = { "SkillPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRegularRewardInfo, SkillPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_SkillPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_SkillPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_CareerMoney_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRegularRewardInfo" },
		{ "ModuleRelativePath", "Public/CareerRegularRewardInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_CareerMoney = { "CareerMoney", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRegularRewardInfo, CareerMoney), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_CareerMoney_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_CareerMoney_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_Motivation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRegularRewardInfo" },
		{ "ModuleRelativePath", "Public/CareerRegularRewardInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_Motivation = { "Motivation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRegularRewardInfo, Motivation), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_Motivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_Motivation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_Energy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRegularRewardInfo" },
		{ "ModuleRelativePath", "Public/CareerRegularRewardInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_Energy = { "Energy", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRegularRewardInfo, Energy), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_Energy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_Energy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_SkillPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_CareerMoney,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_Motivation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::NewProp_Energy,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerRegularRewardInfo",
		sizeof(FCareerRegularRewardInfo),
		alignof(FCareerRegularRewardInfo),
		Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerRegularRewardInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerRegularRewardInfo"), sizeof(FCareerRegularRewardInfo), Get_Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerRegularRewardInfo_Hash() { return 2211380472U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
