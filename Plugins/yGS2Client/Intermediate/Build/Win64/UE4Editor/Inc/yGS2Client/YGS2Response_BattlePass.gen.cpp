// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Response_BattlePass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Response_BattlePass() {}
// Cross Module References
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2Response_BattlePass();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
class UScriptStruct* FYGS2Response_BattlePass::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YGS2CLIENT_API uint32 Get_Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYGS2Response_BattlePass, Z_Construct_UPackage__Script_yGS2Client(), TEXT("YGS2Response_BattlePass"), sizeof(FYGS2Response_BattlePass), Get_Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Hash());
	}
	return Singleton;
}
template<> YGS2CLIENT_API UScriptStruct* StaticStruct<FYGS2Response_BattlePass>()
{
	return FYGS2Response_BattlePass::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYGS2Response_BattlePass(FYGS2Response_BattlePass::StaticStruct, TEXT("/Script/yGS2Client"), TEXT("YGS2Response_BattlePass"), false, nullptr, nullptr);
static struct FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Response_BattlePass
{
	FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Response_BattlePass()
	{
		UScriptStruct::DeferCppStructOps<FYGS2Response_BattlePass>(FName(TEXT("YGS2Response_BattlePass")));
	}
} ScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Response_BattlePass;
	struct Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BattlePassPointNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BattlePassPointNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BattlePassLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BattlePassLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PremiumPassPurchase_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PremiumPassPurchase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeRewardLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FreeRewardLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PremiumRewardLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PremiumRewardLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YGS2Response_BattlePass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYGS2Response_BattlePass>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_SeasonNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_BattlePass" },
		{ "ModuleRelativePath", "Public/YGS2Response_BattlePass.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_SeasonNo = { "SeasonNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_BattlePass, SeasonNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_SeasonNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_SeasonNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_BattlePassPointNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_BattlePass" },
		{ "ModuleRelativePath", "Public/YGS2Response_BattlePass.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_BattlePassPointNum = { "BattlePassPointNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_BattlePass, BattlePassPointNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_BattlePassPointNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_BattlePassPointNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_BattlePassLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_BattlePass" },
		{ "ModuleRelativePath", "Public/YGS2Response_BattlePass.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_BattlePassLevel = { "BattlePassLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_BattlePass, BattlePassLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_BattlePassLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_BattlePassLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_PremiumPassPurchase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_BattlePass" },
		{ "ModuleRelativePath", "Public/YGS2Response_BattlePass.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_PremiumPassPurchase = { "PremiumPassPurchase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_BattlePass, PremiumPassPurchase), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_PremiumPassPurchase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_PremiumPassPurchase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_FreeRewardLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_BattlePass" },
		{ "ModuleRelativePath", "Public/YGS2Response_BattlePass.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_FreeRewardLevel = { "FreeRewardLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_BattlePass, FreeRewardLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_FreeRewardLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_FreeRewardLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_PremiumRewardLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_BattlePass" },
		{ "ModuleRelativePath", "Public/YGS2Response_BattlePass.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_PremiumRewardLevel = { "PremiumRewardLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_BattlePass, PremiumRewardLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_PremiumRewardLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_PremiumRewardLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_BattlePass" },
		{ "ModuleRelativePath", "Public/YGS2Response_BattlePass.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_BattlePass, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_SeasonNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_BattlePassPointNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_BattlePassLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_PremiumPassPurchase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_FreeRewardLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_PremiumRewardLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::NewProp_UserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
		nullptr,
		&NewStructOps,
		"YGS2Response_BattlePass",
		sizeof(FYGS2Response_BattlePass),
		alignof(FYGS2Response_BattlePass),
		Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYGS2Response_BattlePass()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YGS2Response_BattlePass"), sizeof(FYGS2Response_BattlePass), Get_Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYGS2Response_BattlePass_Hash() { return 52883074U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
