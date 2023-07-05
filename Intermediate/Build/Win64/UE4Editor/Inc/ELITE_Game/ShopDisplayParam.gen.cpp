// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ShopDisplayParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShopDisplayParam() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FShopDisplayParam();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EShopDisplayCategory();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EShopDisplayItemType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FShopDisplayParam>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FShopDisplayParam cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FShopDisplayParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FShopDisplayParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShopDisplayParam, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ShopDisplayParam"), sizeof(FShopDisplayParam), Get_Z_Construct_UScriptStruct_FShopDisplayParam_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FShopDisplayParam>()
{
	return FShopDisplayParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShopDisplayParam(FShopDisplayParam::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ShopDisplayParam"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFShopDisplayParam
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFShopDisplayParam()
	{
		UScriptStruct::DeferCppStructOps<FShopDisplayParam>(FName(TEXT("ShopDisplayParam")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFShopDisplayParam;
	struct Z_Construct_UScriptStruct_FShopDisplayParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DisplayCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DisplayCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UniqueItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickUpItem_MetaData[];
#endif
		static void NewProp_PickUpItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PickUpItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridePreviewAssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_OverridePreviewAssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverridePreviewDisplayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OverridePreviewDisplayText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopDisplayParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShopDisplayParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShopDisplayParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShopDisplayParam" },
		{ "ModuleRelativePath", "Public/ShopDisplayParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopDisplayParam, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_DisplayCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_DisplayCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShopDisplayParam" },
		{ "ModuleRelativePath", "Public/ShopDisplayParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_DisplayCategory = { "DisplayCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopDisplayParam, DisplayCategory), Z_Construct_UEnum_ELITE_Game_EShopDisplayCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_DisplayCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_DisplayCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_ItemType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShopDisplayParam" },
		{ "ModuleRelativePath", "Public/ShopDisplayParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopDisplayParam, ItemType), Z_Construct_UEnum_ELITE_Game_EShopDisplayItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_UniqueItemId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShopDisplayParam" },
		{ "ModuleRelativePath", "Public/ShopDisplayParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_UniqueItemId = { "UniqueItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopDisplayParam, UniqueItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_UniqueItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_UniqueItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_PickUpItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShopDisplayParam" },
		{ "ModuleRelativePath", "Public/ShopDisplayParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_PickUpItem_SetBit(void* Obj)
	{
		((FShopDisplayParam*)Obj)->PickUpItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_PickUpItem = { "PickUpItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FShopDisplayParam), &Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_PickUpItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_PickUpItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_PickUpItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_OverridePreviewAssetPath_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShopDisplayParam" },
		{ "ModuleRelativePath", "Public/ShopDisplayParam.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_OverridePreviewAssetPath = { "OverridePreviewAssetPath", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopDisplayParam, OverridePreviewAssetPath), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_OverridePreviewAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_OverridePreviewAssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_OverridePreviewDisplayText_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShopDisplayParam" },
		{ "ModuleRelativePath", "Public/ShopDisplayParam.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_OverridePreviewDisplayText = { "OverridePreviewDisplayText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopDisplayParam, OverridePreviewDisplayText), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_OverridePreviewDisplayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_OverridePreviewDisplayText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShopDisplayParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_DisplayCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_DisplayCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_ItemType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_UniqueItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_PickUpItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_OverridePreviewAssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopDisplayParam_Statics::NewProp_OverridePreviewDisplayText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShopDisplayParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ShopDisplayParam",
		sizeof(FShopDisplayParam),
		alignof(FShopDisplayParam),
		Z_Construct_UScriptStruct_FShopDisplayParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopDisplayParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShopDisplayParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopDisplayParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShopDisplayParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShopDisplayParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShopDisplayParam"), sizeof(FShopDisplayParam), Get_Z_Construct_UScriptStruct_FShopDisplayParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShopDisplayParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShopDisplayParam_Hash() { return 4131387424U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
