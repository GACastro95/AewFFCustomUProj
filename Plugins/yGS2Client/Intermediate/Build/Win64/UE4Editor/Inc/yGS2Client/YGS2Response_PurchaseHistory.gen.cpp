// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Response_PurchaseHistory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Response_PurchaseHistory() {}
// Cross Module References
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
class UScriptStruct* FYGS2Response_PurchaseHistory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YGS2CLIENT_API uint32 Get_Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory, Z_Construct_UPackage__Script_yGS2Client(), TEXT("YGS2Response_PurchaseHistory"), sizeof(FYGS2Response_PurchaseHistory), Get_Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Hash());
	}
	return Singleton;
}
template<> YGS2CLIENT_API UScriptStruct* StaticStruct<FYGS2Response_PurchaseHistory>()
{
	return FYGS2Response_PurchaseHistory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYGS2Response_PurchaseHistory(FYGS2Response_PurchaseHistory::StaticStruct, TEXT("/Script/yGS2Client"), TEXT("YGS2Response_PurchaseHistory"), false, nullptr, nullptr);
static struct FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Response_PurchaseHistory
{
	FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Response_PurchaseHistory()
	{
		UScriptStruct::DeferCppStructOps<FYGS2Response_PurchaseHistory>(FName(TEXT("YGS2Response_PurchaseHistory")));
	}
} ScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Response_PurchaseHistory;
	struct Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AEW_Gold_Before_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AEW_Gold_Before;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AEW_Gold_After_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AEW_Gold_After;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AEW_Gold_Total_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AEW_Gold_Total;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YGS2Response_PurchaseHistory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYGS2Response_PurchaseHistory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_AEW_Gold_Before_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_PurchaseHistory" },
		{ "ModuleRelativePath", "Public/YGS2Response_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_AEW_Gold_Before = { "AEW_Gold_Before", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_PurchaseHistory, AEW_Gold_Before), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_AEW_Gold_Before_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_AEW_Gold_Before_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_AEW_Gold_After_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_PurchaseHistory" },
		{ "ModuleRelativePath", "Public/YGS2Response_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_AEW_Gold_After = { "AEW_Gold_After", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_PurchaseHistory, AEW_Gold_After), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_AEW_Gold_After_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_AEW_Gold_After_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_AEW_Gold_Total_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_PurchaseHistory" },
		{ "ModuleRelativePath", "Public/YGS2Response_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_AEW_Gold_Total = { "AEW_Gold_Total", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_PurchaseHistory, AEW_Gold_Total), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_AEW_Gold_Total_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_AEW_Gold_Total_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_PurchaseHistory" },
		{ "ModuleRelativePath", "Public/YGS2Response_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_PurchaseHistory, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_AEW_Gold_Before,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_AEW_Gold_After,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_AEW_Gold_Total,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::NewProp_UserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
		nullptr,
		&NewStructOps,
		"YGS2Response_PurchaseHistory",
		sizeof(FYGS2Response_PurchaseHistory),
		alignof(FYGS2Response_PurchaseHistory),
		Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YGS2Response_PurchaseHistory"), sizeof(FYGS2Response_PurchaseHistory), Get_Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory_Hash() { return 2004869409U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
