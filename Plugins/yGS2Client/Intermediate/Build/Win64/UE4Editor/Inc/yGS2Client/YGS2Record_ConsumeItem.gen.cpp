// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Record_ConsumeItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Record_ConsumeItem() {}
// Cross Module References
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
class UScriptStruct* FYGS2Record_ConsumeItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YGS2CLIENT_API uint32 Get_Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem, Z_Construct_UPackage__Script_yGS2Client(), TEXT("YGS2Record_ConsumeItem"), sizeof(FYGS2Record_ConsumeItem), Get_Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Hash());
	}
	return Singleton;
}
template<> YGS2CLIENT_API UScriptStruct* StaticStruct<FYGS2Record_ConsumeItem>()
{
	return FYGS2Record_ConsumeItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYGS2Record_ConsumeItem(FYGS2Record_ConsumeItem::StaticStruct, TEXT("/Script/yGS2Client"), TEXT("YGS2Record_ConsumeItem"), false, nullptr, nullptr);
static struct FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Record_ConsumeItem
{
	FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Record_ConsumeItem()
	{
		UScriptStruct::DeferCppStructOps<FYGS2Record_ConsumeItem>(FName(TEXT("YGS2Record_ConsumeItem")));
	}
} ScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Record_ConsumeItem;
	struct Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentKind_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ContentKind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ContentNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Total_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Total;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YGS2Record_ConsumeItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYGS2Record_ConsumeItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_UniqueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_ConsumeItem" },
		{ "ModuleRelativePath", "Public/YGS2Record_ConsumeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_ConsumeItem, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_UniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_RegisteredTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_ConsumeItem" },
		{ "ModuleRelativePath", "Public/YGS2Record_ConsumeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_RegisteredTime = { "RegisteredTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_ConsumeItem, RegisteredTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_RegisteredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_RegisteredTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_ContentKind_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_ConsumeItem" },
		{ "ModuleRelativePath", "Public/YGS2Record_ConsumeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_ContentKind = { "ContentKind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_ConsumeItem, ContentKind), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_ContentKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_ContentKind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_ContentID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_ConsumeItem" },
		{ "ModuleRelativePath", "Public/YGS2Record_ConsumeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_ContentID = { "ContentID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_ConsumeItem, ContentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_ContentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_ContentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_ContentNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_ConsumeItem" },
		{ "ModuleRelativePath", "Public/YGS2Record_ConsumeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_ContentNum = { "ContentNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_ConsumeItem, ContentNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_ContentNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_ContentNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_Total_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_ConsumeItem" },
		{ "ModuleRelativePath", "Public/YGS2Record_ConsumeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_Total = { "Total", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_ConsumeItem, Total), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_Total_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_Total_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_UniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_RegisteredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_ContentKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_ContentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_ContentNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::NewProp_Total,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
		nullptr,
		&NewStructOps,
		"YGS2Record_ConsumeItem",
		sizeof(FYGS2Record_ConsumeItem),
		alignof(FYGS2Record_ConsumeItem),
		Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YGS2Record_ConsumeItem"), sizeof(FYGS2Record_ConsumeItem), Get_Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem_Hash() { return 2989604151U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
