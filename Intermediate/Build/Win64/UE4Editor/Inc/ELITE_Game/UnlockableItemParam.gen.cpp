// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/UnlockableItemParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnlockableItemParam() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FUnlockableItemParam();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EUnlockItemCategory();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EUnlockableItemRarityType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EUnlockableItemCurrencyType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FUnlockableItemParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FUnlockableItemParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FUnlockableItemParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FUnlockableItemParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnlockableItemParam, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("UnlockableItemParam"), sizeof(FUnlockableItemParam), Get_Z_Construct_UScriptStruct_FUnlockableItemParam_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FUnlockableItemParam>()
{
	return FUnlockableItemParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUnlockableItemParam(FUnlockableItemParam::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("UnlockableItemParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFUnlockableItemParam
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFUnlockableItemParam()
	{
		UScriptStruct::DeferCppStructOps<FUnlockableItemParam>(FName(TEXT("UnlockableItemParam")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFUnlockableItemParam;
	struct Z_Construct_UScriptStruct_FUnlockableItemParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UniqueID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UnlockCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UnlockCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultUnlocked_MetaData[];
#endif
		static void NewProp_DefaultUnlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultUnlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RarityStr;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulkBuyingStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BulkBuyingStr;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BulkBuyingItemIdList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulkBuyingItemIdList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BulkBuyingItemIdList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalSortNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionalSortNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShopItem_MetaData[];
#endif
		static void NewProp_ShopItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShopItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultStockStatus_MetaData[];
#endif
		static void NewProp_DefaultStockStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultStockStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStockTiming_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InStockTiming;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrencyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrencyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideUnlockCondition_MetaData[];
#endif
		static void NewProp_HideUnlockCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HideUnlockCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrateItem_MetaData[];
#endif
		static void NewProp_CrateItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CrateItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FreeB_PassItem_MetaData[];
#endif
		static void NewProp_FreeB_PassItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FreeB_PassItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PremiumB_PassItem_MetaData[];
#endif
		static void NewProp_PremiumB_PassItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PremiumB_PassItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChallengeItem_MetaData[];
#endif
		static void NewProp_ChallengeItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ChallengeItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DlcItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DlcItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableChangeColor_MetaData[];
#endif
		static void NewProp_EnableChangeColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableChangeColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailsAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ThumbnailsAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BrandLogoAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BrandLogoAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailCategoryText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DetailCategoryText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnlockableItemParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_UniqueID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_UniqueID = { "UniqueID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockableItemParam, UniqueID), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_UniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_UniqueID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_UnlockCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_UnlockCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_UnlockCategory = { "UnlockCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockableItemParam, UnlockCategory), Z_Construct_UEnum_ELITE_Game_EUnlockItemCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_UnlockCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_UnlockCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DefaultUnlocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DefaultUnlocked_SetBit(void* Obj)
	{
		((FUnlockableItemParam*)Obj)->DefaultUnlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DefaultUnlocked = { "DefaultUnlocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUnlockableItemParam), &Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DefaultUnlocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DefaultUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DefaultUnlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_RarityStr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_RarityStr = { "RarityStr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockableItemParam, RarityStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_RarityStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_RarityStr_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_Rarity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockableItemParam, Rarity), Z_Construct_UEnum_ELITE_Game_EUnlockableItemRarityType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_Rarity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_BulkBuyingStr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_BulkBuyingStr = { "BulkBuyingStr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockableItemParam, BulkBuyingStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_BulkBuyingStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_BulkBuyingStr_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_BulkBuyingItemIdList_Inner = { "BulkBuyingItemIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_BulkBuyingItemIdList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_BulkBuyingItemIdList = { "BulkBuyingItemIdList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockableItemParam, BulkBuyingItemIdList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_BulkBuyingItemIdList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_BulkBuyingItemIdList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_OptionalSortNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_OptionalSortNo = { "OptionalSortNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockableItemParam, OptionalSortNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_OptionalSortNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_OptionalSortNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ShopItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ShopItem_SetBit(void* Obj)
	{
		((FUnlockableItemParam*)Obj)->ShopItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ShopItem = { "ShopItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUnlockableItemParam), &Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ShopItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ShopItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ShopItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DefaultStockStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DefaultStockStatus_SetBit(void* Obj)
	{
		((FUnlockableItemParam*)Obj)->DefaultStockStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DefaultStockStatus = { "DefaultStockStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUnlockableItemParam), &Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DefaultStockStatus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DefaultStockStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DefaultStockStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_InStockTiming_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_InStockTiming = { "InStockTiming", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockableItemParam, InStockTiming), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_InStockTiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_InStockTiming_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_CurrencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_CurrencyType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_CurrencyType = { "CurrencyType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockableItemParam, CurrencyType), Z_Construct_UEnum_ELITE_Game_EUnlockableItemCurrencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_CurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_CurrencyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ItemPrice_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ItemPrice = { "ItemPrice", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockableItemParam, ItemPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ItemPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ItemPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_HideUnlockCondition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_HideUnlockCondition_SetBit(void* Obj)
	{
		((FUnlockableItemParam*)Obj)->HideUnlockCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_HideUnlockCondition = { "HideUnlockCondition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUnlockableItemParam), &Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_HideUnlockCondition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_HideUnlockCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_HideUnlockCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_CrateItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_CrateItem_SetBit(void* Obj)
	{
		((FUnlockableItemParam*)Obj)->CrateItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_CrateItem = { "CrateItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUnlockableItemParam), &Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_CrateItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_CrateItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_CrateItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_FreeB_PassItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_FreeB_PassItem_SetBit(void* Obj)
	{
		((FUnlockableItemParam*)Obj)->FreeB_PassItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_FreeB_PassItem = { "FreeB_PassItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUnlockableItemParam), &Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_FreeB_PassItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_FreeB_PassItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_FreeB_PassItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_PremiumB_PassItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_PremiumB_PassItem_SetBit(void* Obj)
	{
		((FUnlockableItemParam*)Obj)->PremiumB_PassItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_PremiumB_PassItem = { "PremiumB_PassItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUnlockableItemParam), &Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_PremiumB_PassItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_PremiumB_PassItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_PremiumB_PassItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ChallengeItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ChallengeItem_SetBit(void* Obj)
	{
		((FUnlockableItemParam*)Obj)->ChallengeItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ChallengeItem = { "ChallengeItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUnlockableItemParam), &Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ChallengeItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ChallengeItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ChallengeItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DlcItemName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DlcItemName = { "DlcItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockableItemParam, DlcItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DlcItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DlcItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_EnableChangeColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_EnableChangeColor_SetBit(void* Obj)
	{
		((FUnlockableItemParam*)Obj)->EnableChangeColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_EnableChangeColor = { "EnableChangeColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FUnlockableItemParam), &Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_EnableChangeColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_EnableChangeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_EnableChangeColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ThumbnailsAssetPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ThumbnailsAssetPath = { "ThumbnailsAssetPath", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockableItemParam, ThumbnailsAssetPath), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ThumbnailsAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ThumbnailsAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_BrandLogoAssetPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_BrandLogoAssetPath = { "BrandLogoAssetPath", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockableItemParam, BrandLogoAssetPath), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_BrandLogoAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_BrandLogoAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DisplayText = { "DisplayText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockableItemParam, DisplayText), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DisplayText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DetailCategoryText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DetailCategoryText = { "DetailCategoryText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockableItemParam, DetailCategoryText), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DetailCategoryText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DetailCategoryText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_OptionTag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnlockableItemParam" },
		{ "ModuleRelativePath", "Public/UnlockableItemParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_OptionTag = { "OptionTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnlockableItemParam, OptionTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_OptionTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_OptionTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_UniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_UnlockCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_UnlockCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DefaultUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_RarityStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_BulkBuyingStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_BulkBuyingItemIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_BulkBuyingItemIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_OptionalSortNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ShopItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DefaultStockStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_InStockTiming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_CurrencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_CurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ItemPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_HideUnlockCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_CrateItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_FreeB_PassItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_PremiumB_PassItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ChallengeItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DlcItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_EnableChangeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_ThumbnailsAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_BrandLogoAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DisplayText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_DetailCategoryText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::NewProp_OptionTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"UnlockableItemParam",
		sizeof(FUnlockableItemParam),
		alignof(FUnlockableItemParam),
		Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUnlockableItemParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUnlockableItemParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UnlockableItemParam"), sizeof(FUnlockableItemParam), Get_Z_Construct_UScriptStruct_FUnlockableItemParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUnlockableItemParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUnlockableItemParam_Hash() { return 2236743043U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
