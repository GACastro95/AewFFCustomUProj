// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Record_ShopItems.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Record_ShopItems() {}
// Cross Module References
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2Record_ShopItems();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
class UScriptStruct* FYGS2Record_ShopItems::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YGS2CLIENT_API uint32 Get_Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYGS2Record_ShopItems, Z_Construct_UPackage__Script_yGS2Client(), TEXT("YGS2Record_ShopItems"), sizeof(FYGS2Record_ShopItems), Get_Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Hash());
	}
	return Singleton;
}
template<> YGS2CLIENT_API UScriptStruct* StaticStruct<FYGS2Record_ShopItems>()
{
	return FYGS2Record_ShopItems::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYGS2Record_ShopItems(FYGS2Record_ShopItems::StaticStruct, TEXT("/Script/yGS2Client"), TEXT("YGS2Record_ShopItems"), false, nullptr, nullptr);
static struct FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Record_ShopItems
{
	FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Record_ShopItems()
	{
		UScriptStruct::DeferCppStructOps<FYGS2Record_ShopItems>(FName(TEXT("YGS2Record_ShopItems")));
	}
} ScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Record_ShopItems;
	struct Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CreateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UpdateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Kind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_Lo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Flag_Lo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_Hi_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Flag_Hi;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BeginTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentPrice;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YGS2Record_ShopItems.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYGS2Record_ShopItems>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_ShopItems" },
		{ "ModuleRelativePath", "Public/YGS2Record_ShopItems.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_ShopItems, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_CreateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_ShopItems" },
		{ "ModuleRelativePath", "Public/YGS2Record_ShopItems.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_CreateTime = { "CreateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_ShopItems, CreateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_CreateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_CreateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_UpdateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_ShopItems" },
		{ "ModuleRelativePath", "Public/YGS2Record_ShopItems.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_UpdateTime = { "UpdateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_ShopItems, UpdateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_UpdateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_UpdateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Kind_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_ShopItems" },
		{ "ModuleRelativePath", "Public/YGS2Record_ShopItems.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_ShopItems, Kind), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Kind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Kind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_ItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_ShopItems" },
		{ "ModuleRelativePath", "Public/YGS2Record_ShopItems.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_ShopItems, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Flag_Lo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_ShopItems" },
		{ "ModuleRelativePath", "Public/YGS2Record_ShopItems.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Flag_Lo = { "Flag_Lo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_ShopItems, Flag_Lo), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Flag_Lo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Flag_Lo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Flag_Hi_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_ShopItems" },
		{ "ModuleRelativePath", "Public/YGS2Record_ShopItems.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Flag_Hi = { "Flag_Hi", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_ShopItems, Flag_Hi), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Flag_Hi_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Flag_Hi_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_BeginTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_ShopItems" },
		{ "ModuleRelativePath", "Public/YGS2Record_ShopItems.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_BeginTime = { "BeginTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_ShopItems, BeginTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_BeginTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_BeginTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_EndTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_ShopItems" },
		{ "ModuleRelativePath", "Public/YGS2Record_ShopItems.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_ShopItems, EndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_DefaultPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_ShopItems" },
		{ "ModuleRelativePath", "Public/YGS2Record_ShopItems.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_DefaultPrice = { "DefaultPrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_ShopItems, DefaultPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_DefaultPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_DefaultPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_CurrentPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_ShopItems" },
		{ "ModuleRelativePath", "Public/YGS2Record_ShopItems.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_CurrentPrice = { "CurrentPrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_ShopItems, CurrentPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_CurrentPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_CurrentPrice_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_CreateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_UpdateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Kind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Flag_Lo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_Flag_Hi,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_BeginTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_EndTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_DefaultPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::NewProp_CurrentPrice,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
		nullptr,
		&NewStructOps,
		"YGS2Record_ShopItems",
		sizeof(FYGS2Record_ShopItems),
		alignof(FYGS2Record_ShopItems),
		Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYGS2Record_ShopItems()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YGS2Record_ShopItems"), sizeof(FYGS2Record_ShopItems), Get_Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYGS2Record_ShopItems_Hash() { return 1073790821U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
