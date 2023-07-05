// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Response_ConsumeItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Response_ConsumeItem() {}
// Cross Module References
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
class UScriptStruct* FYGS2Response_ConsumeItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YGS2CLIENT_API uint32 Get_Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem, Z_Construct_UPackage__Script_yGS2Client(), TEXT("YGS2Response_ConsumeItem"), sizeof(FYGS2Response_ConsumeItem), Get_Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Hash());
	}
	return Singleton;
}
template<> YGS2CLIENT_API UScriptStruct* StaticStruct<FYGS2Response_ConsumeItem>()
{
	return FYGS2Response_ConsumeItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYGS2Response_ConsumeItem(FYGS2Response_ConsumeItem::StaticStruct, TEXT("/Script/yGS2Client"), TEXT("YGS2Response_ConsumeItem"), false, nullptr, nullptr);
static struct FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Response_ConsumeItem
{
	FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Response_ConsumeItem()
	{
		UScriptStruct::DeferCppStructOps<FYGS2Response_ConsumeItem>(FName(TEXT("YGS2Response_ConsumeItem")));
	}
} ScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Response_ConsumeItem;
	struct Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentKind_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ContentKind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentNum_Sub_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ContentNum_Sub;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentNum_Before_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ContentNum_Before;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentNum_After_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ContentNum_After;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YGS2Response_ConsumeItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYGS2Response_ConsumeItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentKind_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_ConsumeItem" },
		{ "ModuleRelativePath", "Public/YGS2Response_ConsumeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentKind = { "ContentKind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_ConsumeItem, ContentKind), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentKind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_ConsumeItem" },
		{ "ModuleRelativePath", "Public/YGS2Response_ConsumeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentID = { "ContentID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_ConsumeItem, ContentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentNum_Sub_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_ConsumeItem" },
		{ "ModuleRelativePath", "Public/YGS2Response_ConsumeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentNum_Sub = { "ContentNum_Sub", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_ConsumeItem, ContentNum_Sub), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentNum_Sub_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentNum_Sub_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentNum_Before_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_ConsumeItem" },
		{ "ModuleRelativePath", "Public/YGS2Response_ConsumeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentNum_Before = { "ContentNum_Before", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_ConsumeItem, ContentNum_Before), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentNum_Before_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentNum_Before_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentNum_After_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_ConsumeItem" },
		{ "ModuleRelativePath", "Public/YGS2Response_ConsumeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentNum_After = { "ContentNum_After", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_ConsumeItem, ContentNum_After), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentNum_After_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentNum_After_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_ConsumeItem" },
		{ "ModuleRelativePath", "Public/YGS2Response_ConsumeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_ConsumeItem, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentNum_Sub,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentNum_Before,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_ContentNum_After,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::NewProp_UserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
		nullptr,
		&NewStructOps,
		"YGS2Response_ConsumeItem",
		sizeof(FYGS2Response_ConsumeItem),
		alignof(FYGS2Response_ConsumeItem),
		Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YGS2Response_ConsumeItem"), sizeof(FYGS2Response_ConsumeItem), Get_Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem_Hash() { return 1224813158U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
