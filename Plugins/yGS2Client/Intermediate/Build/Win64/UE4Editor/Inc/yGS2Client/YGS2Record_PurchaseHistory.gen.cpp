// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Record_PurchaseHistory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Record_PurchaseHistory() {}
// Cross Module References
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
class UScriptStruct* FYGS2Record_PurchaseHistory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YGS2CLIENT_API uint32 Get_Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory, Z_Construct_UPackage__Script_yGS2Client(), TEXT("YGS2Record_PurchaseHistory"), sizeof(FYGS2Record_PurchaseHistory), Get_Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Hash());
	}
	return Singleton;
}
template<> YGS2CLIENT_API UScriptStruct* StaticStruct<FYGS2Record_PurchaseHistory>()
{
	return FYGS2Record_PurchaseHistory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYGS2Record_PurchaseHistory(FYGS2Record_PurchaseHistory::StaticStruct, TEXT("/Script/yGS2Client"), TEXT("YGS2Record_PurchaseHistory"), false, nullptr, nullptr);
static struct FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Record_PurchaseHistory
{
	FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Record_PurchaseHistory()
	{
		UScriptStruct::DeferCppStructOps<FYGS2Record_PurchaseHistory>(FName(TEXT("YGS2Record_PurchaseHistory")));
	}
} ScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Record_PurchaseHistory;
	struct Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UniqueID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RegisteredTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TransactionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShopItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShopItemID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AEW_Gold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AEW_Gold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AEW_Gold_Before_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AEW_Gold_Before;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AEW_Gold_After_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AEW_Gold_After;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrencyValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YGS2Record_PurchaseHistory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYGS2Record_PurchaseHistory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_UniqueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_PurchaseHistory" },
		{ "ModuleRelativePath", "Public/YGS2Record_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_PurchaseHistory, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_UniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_RegisteredTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_PurchaseHistory" },
		{ "ModuleRelativePath", "Public/YGS2Record_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_RegisteredTime = { "RegisteredTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_PurchaseHistory, RegisteredTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_RegisteredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_RegisteredTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_Platform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_PurchaseHistory" },
		{ "ModuleRelativePath", "Public/YGS2Record_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_PurchaseHistory, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_TransactionID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_PurchaseHistory" },
		{ "ModuleRelativePath", "Public/YGS2Record_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_TransactionID = { "TransactionID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_PurchaseHistory, TransactionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_TransactionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_TransactionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_ShopItemID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_PurchaseHistory" },
		{ "ModuleRelativePath", "Public/YGS2Record_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_ShopItemID = { "ShopItemID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_PurchaseHistory, ShopItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_ShopItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_ShopItemID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_AEW_Gold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_PurchaseHistory" },
		{ "ModuleRelativePath", "Public/YGS2Record_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_AEW_Gold = { "AEW_Gold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_PurchaseHistory, AEW_Gold), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_AEW_Gold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_AEW_Gold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_AEW_Gold_Before_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_PurchaseHistory" },
		{ "ModuleRelativePath", "Public/YGS2Record_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_AEW_Gold_Before = { "AEW_Gold_Before", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_PurchaseHistory, AEW_Gold_Before), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_AEW_Gold_Before_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_AEW_Gold_Before_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_AEW_Gold_After_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_PurchaseHistory" },
		{ "ModuleRelativePath", "Public/YGS2Record_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_AEW_Gold_After = { "AEW_Gold_After", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_PurchaseHistory, AEW_Gold_After), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_AEW_Gold_After_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_AEW_Gold_After_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_CurrencyValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_PurchaseHistory" },
		{ "ModuleRelativePath", "Public/YGS2Record_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_CurrencyValue = { "CurrencyValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_PurchaseHistory, CurrencyValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_CurrencyValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_CurrencyValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_CurrencyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_PurchaseHistory" },
		{ "ModuleRelativePath", "Public/YGS2Record_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_CurrencyType = { "CurrencyType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_PurchaseHistory, CurrencyType), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_CurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_CurrencyType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_UniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_RegisteredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_TransactionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_ShopItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_AEW_Gold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_AEW_Gold_Before,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_AEW_Gold_After,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_CurrencyValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::NewProp_CurrencyType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
		nullptr,
		&NewStructOps,
		"YGS2Record_PurchaseHistory",
		sizeof(FYGS2Record_PurchaseHistory),
		alignof(FYGS2Record_PurchaseHistory),
		Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YGS2Record_PurchaseHistory"), sizeof(FYGS2Record_PurchaseHistory), Get_Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory_Hash() { return 694254681U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
