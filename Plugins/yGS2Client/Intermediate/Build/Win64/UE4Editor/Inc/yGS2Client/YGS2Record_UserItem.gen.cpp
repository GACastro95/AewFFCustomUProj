// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Record_UserItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Record_UserItem() {}
// Cross Module References
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2Record_UserItem();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
class UScriptStruct* FYGS2Record_UserItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YGS2CLIENT_API uint32 Get_Z_Construct_UScriptStruct_FYGS2Record_UserItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYGS2Record_UserItem, Z_Construct_UPackage__Script_yGS2Client(), TEXT("YGS2Record_UserItem"), sizeof(FYGS2Record_UserItem), Get_Z_Construct_UScriptStruct_FYGS2Record_UserItem_Hash());
	}
	return Singleton;
}
template<> YGS2CLIENT_API UScriptStruct* StaticStruct<FYGS2Record_UserItem>()
{
	return FYGS2Record_UserItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYGS2Record_UserItem(FYGS2Record_UserItem::StaticStruct, TEXT("/Script/yGS2Client"), TEXT("YGS2Record_UserItem"), false, nullptr, nullptr);
static struct FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Record_UserItem
{
	FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Record_UserItem()
	{
		UScriptStruct::DeferCppStructOps<FYGS2Record_UserItem>(FName(TEXT("YGS2Record_UserItem")));
	}
} ScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Record_UserItem;
	struct Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YGS2Record_UserItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYGS2Record_UserItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_UniqueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_UserItem" },
		{ "ModuleRelativePath", "Public/YGS2Record_UserItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_UserItem, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_UniqueID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_RegisteredTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_UserItem" },
		{ "ModuleRelativePath", "Public/YGS2Record_UserItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_RegisteredTime = { "RegisteredTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_UserItem, RegisteredTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_RegisteredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_RegisteredTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_ContentKind_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_UserItem" },
		{ "ModuleRelativePath", "Public/YGS2Record_UserItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_ContentKind = { "ContentKind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_UserItem, ContentKind), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_ContentKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_ContentKind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_ContentID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_UserItem" },
		{ "ModuleRelativePath", "Public/YGS2Record_UserItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_ContentID = { "ContentID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_UserItem, ContentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_ContentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_ContentID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_ContentNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Record_UserItem" },
		{ "ModuleRelativePath", "Public/YGS2Record_UserItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_ContentNum = { "ContentNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Record_UserItem, ContentNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_ContentNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_ContentNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_UniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_RegisteredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_ContentKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_ContentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::NewProp_ContentNum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
		nullptr,
		&NewStructOps,
		"YGS2Record_UserItem",
		sizeof(FYGS2Record_UserItem),
		alignof(FYGS2Record_UserItem),
		Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYGS2Record_UserItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYGS2Record_UserItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YGS2Record_UserItem"), sizeof(FYGS2Record_UserItem), Get_Z_Construct_UScriptStruct_FYGS2Record_UserItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYGS2Record_UserItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYGS2Record_UserItem_Hash() { return 2090135980U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
