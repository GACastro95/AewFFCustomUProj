// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ShopGeneralItemManageData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShopGeneralItemManageData() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FShopGeneralItemManageData();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FShopDisplayParam();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FUnlockableItemParam();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPossessedItemParam();
// End Cross Module References
class UScriptStruct* FShopGeneralItemManageData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FShopGeneralItemManageData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FShopGeneralItemManageData, Z_Construct_UPackage__Script_ELITE(), TEXT("ShopGeneralItemManageData"), sizeof(FShopGeneralItemManageData), Get_Z_Construct_UScriptStruct_FShopGeneralItemManageData_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FShopGeneralItemManageData>()
{
	return FShopGeneralItemManageData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FShopGeneralItemManageData(FShopGeneralItemManageData::StaticStruct, TEXT("/Script/ELITE"), TEXT("ShopGeneralItemManageData"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFShopGeneralItemManageData
{
	FScriptStruct_ELITE_StaticRegisterNativesFShopGeneralItemManageData()
	{
		UScriptStruct::DeferCppStructOps<FShopGeneralItemManageData>(FName(TEXT("ShopGeneralItemManageData")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFShopGeneralItemManageData;
	struct Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPurchased_MetaData[];
#endif
		static void NewProp_IsPurchased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPurchased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedMoveAnimation_MetaData[];
#endif
		static void NewProp_NeedMoveAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedMoveAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPremiumBattePassItem_MetaData[];
#endif
		static void NewProp_IsPremiumBattePassItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPremiumBattePassItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSaleItem_MetaData[];
#endif
		static void NewProp_IsSaleItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSaleItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayItemParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisplayItemParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockableItemParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnlockableItemParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PossessedItemParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PossessedItemParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ShopGeneralItemManageData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShopGeneralItemManageData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_Index_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShopGeneralItemManageData" },
		{ "ModuleRelativePath", "Public/ShopGeneralItemManageData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopGeneralItemManageData, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsPurchased_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShopGeneralItemManageData" },
		{ "ModuleRelativePath", "Public/ShopGeneralItemManageData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsPurchased_SetBit(void* Obj)
	{
		((FShopGeneralItemManageData*)Obj)->IsPurchased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsPurchased = { "IsPurchased", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FShopGeneralItemManageData), &Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsPurchased_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsPurchased_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsPurchased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_NeedMoveAnimation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShopGeneralItemManageData" },
		{ "ModuleRelativePath", "Public/ShopGeneralItemManageData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_NeedMoveAnimation_SetBit(void* Obj)
	{
		((FShopGeneralItemManageData*)Obj)->NeedMoveAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_NeedMoveAnimation = { "NeedMoveAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FShopGeneralItemManageData), &Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_NeedMoveAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_NeedMoveAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_NeedMoveAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsPremiumBattePassItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShopGeneralItemManageData" },
		{ "ModuleRelativePath", "Public/ShopGeneralItemManageData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsPremiumBattePassItem_SetBit(void* Obj)
	{
		((FShopGeneralItemManageData*)Obj)->IsPremiumBattePassItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsPremiumBattePassItem = { "IsPremiumBattePassItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FShopGeneralItemManageData), &Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsPremiumBattePassItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsPremiumBattePassItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsPremiumBattePassItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsSaleItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShopGeneralItemManageData" },
		{ "ModuleRelativePath", "Public/ShopGeneralItemManageData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsSaleItem_SetBit(void* Obj)
	{
		((FShopGeneralItemManageData*)Obj)->IsSaleItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsSaleItem = { "IsSaleItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FShopGeneralItemManageData), &Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsSaleItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsSaleItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsSaleItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_DisplayItemParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShopGeneralItemManageData" },
		{ "ModuleRelativePath", "Public/ShopGeneralItemManageData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_DisplayItemParam = { "DisplayItemParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopGeneralItemManageData, DisplayItemParam), Z_Construct_UScriptStruct_FShopDisplayParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_DisplayItemParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_DisplayItemParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_UnlockableItemParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShopGeneralItemManageData" },
		{ "ModuleRelativePath", "Public/ShopGeneralItemManageData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_UnlockableItemParam = { "UnlockableItemParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopGeneralItemManageData, UnlockableItemParam), Z_Construct_UScriptStruct_FUnlockableItemParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_UnlockableItemParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_UnlockableItemParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_PossessedItemParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ShopGeneralItemManageData" },
		{ "ModuleRelativePath", "Public/ShopGeneralItemManageData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_PossessedItemParam = { "PossessedItemParam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FShopGeneralItemManageData, PossessedItemParam), Z_Construct_UScriptStruct_FPossessedItemParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_PossessedItemParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_PossessedItemParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsPurchased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_NeedMoveAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsPremiumBattePassItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_IsSaleItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_DisplayItemParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_UnlockableItemParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::NewProp_PossessedItemParam,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		nullptr,
		&NewStructOps,
		"ShopGeneralItemManageData",
		sizeof(FShopGeneralItemManageData),
		alignof(FShopGeneralItemManageData),
		Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShopGeneralItemManageData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FShopGeneralItemManageData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ShopGeneralItemManageData"), sizeof(FShopGeneralItemManageData), Get_Z_Construct_UScriptStruct_FShopGeneralItemManageData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShopGeneralItemManageData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FShopGeneralItemManageData_Hash() { return 3212440575U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
