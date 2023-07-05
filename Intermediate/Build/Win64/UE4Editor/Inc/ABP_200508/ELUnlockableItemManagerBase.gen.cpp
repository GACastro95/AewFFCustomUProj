// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELUnlockableItemManagerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELUnlockableItemManagerBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELUnlockableItemManagerBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELUnlockableItemManagerBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELUnlockItemSaveData();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FUnlockableItemParam();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EUnlockItemCategory();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EUnlockableItemPurchaseResult();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FUnavailableDlcData();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_CheckInstalledDlcItemCompleteDelegate__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_QueryEntitlementCompleteDelegate__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_ItemPurchaseCompleteDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ABP_200508_API UClass* Z_Construct_UClass_UELGoldCoinPossessManager_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELRefUnlockableItemInfo();
// End Cross Module References
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execCheckEntitlementedDlc)
	{
		P_GET_TARRAY_REF(FText,Z_Param_Out_ReleasedItemName);
		P_GET_TARRAY_REF(FText,Z_Param_Out_ShortageGameVersionItemName);
		P_GET_TARRAY_REF(FText,Z_Param_Out_NotFoundItemName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckEntitlementedDlc(Z_Param_Out_ReleasedItemName,Z_Param_Out_ShortageGameVersionItemName,Z_Param_Out_NotFoundItemName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execGetAllUnlockableItemSaveData)
	{
		P_GET_TARRAY_REF(FELUnlockItemSaveData,Z_Param_Out_ResultList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllUnlockableItemSaveData(Z_Param_Out_ResultList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execGetCurrentAEW_CASH)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAEW_CASH();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execGetCurrentAEW_GOLD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentAEW_GOLD();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execGetHotItemListFromAll)
	{
		P_GET_TARRAY_REF(FUnlockableItemParam,Z_Param_Out_ResultList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHotItemListFromAll(Z_Param_Out_ResultList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execGetHotItemListFromCategory)
	{
		P_GET_ENUM(EUnlockItemCategory,Z_Param__targetItemCategory);
		P_GET_TARRAY_REF(FUnlockableItemParam,Z_Param_Out_ResultList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHotItemListFromCategory(EUnlockItemCategory(Z_Param__targetItemCategory),Z_Param_Out_ResultList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execGetHotItemListFromID)
	{
		P_GET_TARRAY(int32,Z_Param__targetItemIdList);
		P_GET_TARRAY_REF(FUnlockableItemParam,Z_Param_Out_ResultList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHotItemListFromID(Z_Param__targetItemIdList,Z_Param_Out_ResultList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execGetPurchaseLastResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUnlockableItemPurchaseResult*)Z_Param__Result=P_THIS->GetPurchaseLastResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execGetUnavailableDlcData)
	{
		P_GET_STRUCT_REF(FUnavailableDlcData,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUnavailableDlcData(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execGetUnlockableItemInfoFromFromCategory)
	{
		P_GET_ENUM(EUnlockItemCategory,Z_Param__targetItemCategory);
		P_GET_TARRAY_REF(FUnlockableItemParam,Z_Param_Out_ItemParamList);
		P_GET_TARRAY_REF(FELUnlockItemSaveData,Z_Param_Out_ItemSaveDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUnlockableItemInfoFromFromCategory(EUnlockItemCategory(Z_Param__targetItemCategory),Z_Param_Out_ItemParamList,Z_Param_Out_ItemSaveDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execGetUnlockableItemInfoFromID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetItemId);
		P_GET_STRUCT_REF(FUnlockableItemParam,Z_Param_Out_ItemParam);
		P_GET_STRUCT_REF(FELUnlockItemSaveData,Z_Param_Out_ItemSaveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUnlockableItemInfoFromID(Z_Param__targetItemId,Z_Param_Out_ItemParam,Z_Param_Out_ItemSaveData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execGetUnlockableItemInfoFromIdList)
	{
		P_GET_TARRAY(int32,Z_Param__targetItemIdList);
		P_GET_TARRAY_REF(FUnlockableItemParam,Z_Param_Out_ItemParamList);
		P_GET_TARRAY_REF(FELUnlockItemSaveData,Z_Param_Out_ItemSaveDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUnlockableItemInfoFromIdList(Z_Param__targetItemIdList,Z_Param_Out_ItemParamList,Z_Param_Out_ItemSaveDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execGetUnlockableItemList)
	{
		P_GET_TARRAY_REF(FUnlockableItemParam,Z_Param_Out_ResultList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUnlockableItemList(Z_Param_Out_ResultList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execGetUnlockableItemListFromCategory)
	{
		P_GET_ENUM(EUnlockItemCategory,Z_Param__targetItemCategory);
		P_GET_TARRAY_REF(FUnlockableItemParam,Z_Param_Out_ResultList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUnlockableItemListFromCategory(EUnlockItemCategory(Z_Param__targetItemCategory),Z_Param_Out_ResultList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execGetUnlockableItemListFromID)
	{
		P_GET_TARRAY(int32,Z_Param__targetItemIdList);
		P_GET_TARRAY_REF(FUnlockableItemParam,Z_Param_Out_ResultList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUnlockableItemListFromID(Z_Param__targetItemIdList,Z_Param_Out_ResultList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execGetUnlockableItemMapFromID)
	{
		P_GET_TARRAY(int32,Z_Param__targetItemIdList);
		P_GET_TMAP_REF(int32,FUnlockableItemParam,Z_Param_Out_ResultList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUnlockableItemMapFromID(Z_Param__targetItemIdList,Z_Param_Out_ResultList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execGetUnlockableItemSaveDataFromID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetItemId);
		P_GET_STRUCT_REF(FELUnlockItemSaveData,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUnlockableItemSaveDataFromID(Z_Param__targetItemId,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execGetUnlockableItemSaveDataFromIdList)
	{
		P_GET_TARRAY(int32,Z_Param__targetItemIdList);
		P_GET_TARRAY_REF(FELUnlockItemSaveData,Z_Param_Out_ResultList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUnlockableItemSaveDataFromIdList(Z_Param__targetItemIdList,Z_Param_Out_ResultList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execIsUpdatedUnlockData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUpdatedUnlockData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execLockingItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockingItem(Z_Param__targetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execLockingItemList)
	{
		P_GET_TARRAY(int32,Z_Param__targetIdList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockingItemList(Z_Param__targetIdList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execOnAutoQueryEntitlementsComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAutoQueryEntitlementsComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execOnCheckedQueryEntitlements)
	{
		P_GET_UBOOL(Z_Param_Successed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCheckedQueryEntitlements(Z_Param_Successed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execOnConsumeGold)
	{
		P_GET_UBOOL(Z_Param__Successed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConsumeGold(Z_Param__Successed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execOnDownloadPossessedGold)
	{
		P_GET_UBOOL(Z_Param__Successed);
		P_GET_PROPERTY(FIntProperty,Z_Param__goldNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDownloadPossessedGold(Z_Param__Successed,Z_Param__goldNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execOnUploadPossessedGold)
	{
		P_GET_UBOOL(Z_Param__Successed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUploadPossessedGold(Z_Param__Successed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execRequestInstalledDlcItemCheck)
	{
		P_GET_TARRAY(FText,Z_Param_CheckDlcItemNames);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestInstalledDlcItemCheck(Z_Param_CheckDlcItemNames,FCheckInstalledDlcItemCompleteDelegate(Z_Param_OnResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execRequestQueryEntitlements)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param__completeDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestQueryEntitlements(FQueryEntitlementCompleteDelegate(Z_Param__completeDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execRequestUnlockableItemPurchase)
	{
		P_GET_TARRAY(int32,Z_Param__targetItemIdList);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestUnlockableItemPurchase(Z_Param__targetItemIdList,FItemPurchaseCompleteDelegate(Z_Param_OnResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execSetCurrentAEW_GOLD)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__newNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentAEW_GOLD(Z_Param__newNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execSetupUnlockableItemDataTable)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param__itemDT);
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupUnlockableItemDataTable(Z_Param__itemDT,Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execSortUnlockItemParamMap)
	{
		P_GET_TMAP_REF(int32,int32,Z_Param_Out__SortedMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortUnlockItemParamMap(Z_Param_Out__SortedMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execUnlockingItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockingItem(Z_Param__targetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELUnlockableItemManagerBase::execUnlockingItemList)
	{
		P_GET_TARRAY(int32,Z_Param__targetIdList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockingItemList(Z_Param__targetIdList);
		P_NATIVE_END;
	}
	void UELUnlockableItemManagerBase::StaticRegisterNativesUELUnlockableItemManagerBase()
	{
		UClass* Class = UELUnlockableItemManagerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckEntitlementedDlc", &UELUnlockableItemManagerBase::execCheckEntitlementedDlc },
			{ "GetAllUnlockableItemSaveData", &UELUnlockableItemManagerBase::execGetAllUnlockableItemSaveData },
			{ "GetCurrentAEW_CASH", &UELUnlockableItemManagerBase::execGetCurrentAEW_CASH },
			{ "GetCurrentAEW_GOLD", &UELUnlockableItemManagerBase::execGetCurrentAEW_GOLD },
			{ "GetHotItemListFromAll", &UELUnlockableItemManagerBase::execGetHotItemListFromAll },
			{ "GetHotItemListFromCategory", &UELUnlockableItemManagerBase::execGetHotItemListFromCategory },
			{ "GetHotItemListFromID", &UELUnlockableItemManagerBase::execGetHotItemListFromID },
			{ "GetPurchaseLastResult", &UELUnlockableItemManagerBase::execGetPurchaseLastResult },
			{ "GetUnavailableDlcData", &UELUnlockableItemManagerBase::execGetUnavailableDlcData },
			{ "GetUnlockableItemInfoFromFromCategory", &UELUnlockableItemManagerBase::execGetUnlockableItemInfoFromFromCategory },
			{ "GetUnlockableItemInfoFromID", &UELUnlockableItemManagerBase::execGetUnlockableItemInfoFromID },
			{ "GetUnlockableItemInfoFromIdList", &UELUnlockableItemManagerBase::execGetUnlockableItemInfoFromIdList },
			{ "GetUnlockableItemList", &UELUnlockableItemManagerBase::execGetUnlockableItemList },
			{ "GetUnlockableItemListFromCategory", &UELUnlockableItemManagerBase::execGetUnlockableItemListFromCategory },
			{ "GetUnlockableItemListFromID", &UELUnlockableItemManagerBase::execGetUnlockableItemListFromID },
			{ "GetUnlockableItemMapFromID", &UELUnlockableItemManagerBase::execGetUnlockableItemMapFromID },
			{ "GetUnlockableItemSaveDataFromID", &UELUnlockableItemManagerBase::execGetUnlockableItemSaveDataFromID },
			{ "GetUnlockableItemSaveDataFromIdList", &UELUnlockableItemManagerBase::execGetUnlockableItemSaveDataFromIdList },
			{ "IsUpdatedUnlockData", &UELUnlockableItemManagerBase::execIsUpdatedUnlockData },
			{ "LockingItem", &UELUnlockableItemManagerBase::execLockingItem },
			{ "LockingItemList", &UELUnlockableItemManagerBase::execLockingItemList },
			{ "OnAutoQueryEntitlementsComplete", &UELUnlockableItemManagerBase::execOnAutoQueryEntitlementsComplete },
			{ "OnCheckedQueryEntitlements", &UELUnlockableItemManagerBase::execOnCheckedQueryEntitlements },
			{ "OnConsumeGold", &UELUnlockableItemManagerBase::execOnConsumeGold },
			{ "OnDownloadPossessedGold", &UELUnlockableItemManagerBase::execOnDownloadPossessedGold },
			{ "OnUploadPossessedGold", &UELUnlockableItemManagerBase::execOnUploadPossessedGold },
			{ "RequestInstalledDlcItemCheck", &UELUnlockableItemManagerBase::execRequestInstalledDlcItemCheck },
			{ "RequestQueryEntitlements", &UELUnlockableItemManagerBase::execRequestQueryEntitlements },
			{ "RequestUnlockableItemPurchase", &UELUnlockableItemManagerBase::execRequestUnlockableItemPurchase },
			{ "SetCurrentAEW_GOLD", &UELUnlockableItemManagerBase::execSetCurrentAEW_GOLD },
			{ "SetupUnlockableItemDataTable", &UELUnlockableItemManagerBase::execSetupUnlockableItemDataTable },
			{ "SortUnlockItemParamMap", &UELUnlockableItemManagerBase::execSortUnlockItemParamMap },
			{ "UnlockingItem", &UELUnlockableItemManagerBase::execUnlockingItem },
			{ "UnlockingItemList", &UELUnlockableItemManagerBase::execUnlockingItemList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics
	{
		struct ELUnlockableItemManagerBase_eventCheckEntitlementedDlc_Parms
		{
			TArray<FText> ReleasedItemName;
			TArray<FText> ShortageGameVersionItemName;
			TArray<FText> NotFoundItemName;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReleasedItemName_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReleasedItemName;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ShortageGameVersionItemName_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShortageGameVersionItemName;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NotFoundItemName_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NotFoundItemName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::NewProp_ReleasedItemName_Inner = { "ReleasedItemName", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::NewProp_ReleasedItemName = { "ReleasedItemName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventCheckEntitlementedDlc_Parms, ReleasedItemName), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::NewProp_ShortageGameVersionItemName_Inner = { "ShortageGameVersionItemName", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::NewProp_ShortageGameVersionItemName = { "ShortageGameVersionItemName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventCheckEntitlementedDlc_Parms, ShortageGameVersionItemName), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::NewProp_NotFoundItemName_Inner = { "NotFoundItemName", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::NewProp_NotFoundItemName = { "NotFoundItemName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventCheckEntitlementedDlc_Parms, NotFoundItemName), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::NewProp_ReleasedItemName_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::NewProp_ReleasedItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::NewProp_ShortageGameVersionItemName_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::NewProp_ShortageGameVersionItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::NewProp_NotFoundItemName_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::NewProp_NotFoundItemName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "CheckEntitlementedDlc", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventCheckEntitlementedDlc_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_GetAllUnlockableItemSaveData_Statics
	{
		struct ELUnlockableItemManagerBase_eventGetAllUnlockableItemSaveData_Parms
		{
			TArray<FELUnlockItemSaveData> ResultList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetAllUnlockableItemSaveData_Statics::NewProp_ResultList_Inner = { "ResultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetAllUnlockableItemSaveData_Statics::NewProp_ResultList = { "ResultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetAllUnlockableItemSaveData_Parms, ResultList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_GetAllUnlockableItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetAllUnlockableItemSaveData_Statics::NewProp_ResultList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetAllUnlockableItemSaveData_Statics::NewProp_ResultList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_GetAllUnlockableItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetAllUnlockableItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "GetAllUnlockableItemSaveData", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventGetAllUnlockableItemSaveData_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_GetAllUnlockableItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetAllUnlockableItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetAllUnlockableItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetAllUnlockableItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_GetAllUnlockableItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_GetAllUnlockableItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_CASH_Statics
	{
		struct ELUnlockableItemManagerBase_eventGetCurrentAEW_CASH_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_CASH_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetCurrentAEW_CASH_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_CASH_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_CASH_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_CASH_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_CASH_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "GetCurrentAEW_CASH", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventGetCurrentAEW_CASH_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_CASH_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_CASH_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_CASH_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_CASH_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_CASH()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_CASH_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_GOLD_Statics
	{
		struct ELUnlockableItemManagerBase_eventGetCurrentAEW_GOLD_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_GOLD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetCurrentAEW_GOLD_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_GOLD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_GOLD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_GOLD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_GOLD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "GetCurrentAEW_GOLD", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventGetCurrentAEW_GOLD_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_GOLD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_GOLD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_GOLD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_GOLD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_GOLD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_GOLD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromAll_Statics
	{
		struct ELUnlockableItemManagerBase_eventGetHotItemListFromAll_Parms
		{
			TArray<FUnlockableItemParam> ResultList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromAll_Statics::NewProp_ResultList_Inner = { "ResultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUnlockableItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromAll_Statics::NewProp_ResultList = { "ResultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetHotItemListFromAll_Parms, ResultList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromAll_Statics::NewProp_ResultList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromAll_Statics::NewProp_ResultList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "GetHotItemListFromAll", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventGetHotItemListFromAll_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory_Statics
	{
		struct ELUnlockableItemManagerBase_eventGetHotItemListFromCategory_Parms
		{
			EUnlockItemCategory _targetItemCategory;
			TArray<FUnlockableItemParam> ResultList;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__targetItemCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__targetItemCategory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory_Statics::NewProp__targetItemCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory_Statics::NewProp__targetItemCategory = { "_targetItemCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetHotItemListFromCategory_Parms, _targetItemCategory), Z_Construct_UEnum_ELITE_Game_EUnlockItemCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory_Statics::NewProp_ResultList_Inner = { "ResultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUnlockableItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory_Statics::NewProp_ResultList = { "ResultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetHotItemListFromCategory_Parms, ResultList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory_Statics::NewProp__targetItemCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory_Statics::NewProp__targetItemCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory_Statics::NewProp_ResultList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory_Statics::NewProp_ResultList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "GetHotItemListFromCategory", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventGetHotItemListFromCategory_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID_Statics
	{
		struct ELUnlockableItemManagerBase_eventGetHotItemListFromID_Parms
		{
			TArray<int32> _targetItemIdList;
			TArray<FUnlockableItemParam> ResultList;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetItemIdList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetItemIdList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID_Statics::NewProp__targetItemIdList_Inner = { "_targetItemIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID_Statics::NewProp__targetItemIdList = { "_targetItemIdList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetHotItemListFromID_Parms, _targetItemIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID_Statics::NewProp_ResultList_Inner = { "ResultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUnlockableItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID_Statics::NewProp_ResultList = { "ResultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetHotItemListFromID_Parms, ResultList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID_Statics::NewProp__targetItemIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID_Statics::NewProp__targetItemIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID_Statics::NewProp_ResultList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID_Statics::NewProp_ResultList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "GetHotItemListFromID", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventGetHotItemListFromID_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_GetPurchaseLastResult_Statics
	{
		struct ELUnlockableItemManagerBase_eventGetPurchaseLastResult_Parms
		{
			EUnlockableItemPurchaseResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetPurchaseLastResult_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetPurchaseLastResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetPurchaseLastResult_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EUnlockableItemPurchaseResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_GetPurchaseLastResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetPurchaseLastResult_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetPurchaseLastResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_GetPurchaseLastResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetPurchaseLastResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "GetPurchaseLastResult", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventGetPurchaseLastResult_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_GetPurchaseLastResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetPurchaseLastResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetPurchaseLastResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetPurchaseLastResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_GetPurchaseLastResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_GetPurchaseLastResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnavailableDlcData_Statics
	{
		struct ELUnlockableItemManagerBase_eventGetUnavailableDlcData_Parms
		{
			FUnavailableDlcData Result;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnavailableDlcData_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnavailableDlcData_Parms, Result), Z_Construct_UScriptStruct_FUnavailableDlcData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnavailableDlcData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnavailableDlcData_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnavailableDlcData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnavailableDlcData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "GetUnavailableDlcData", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventGetUnavailableDlcData_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnavailableDlcData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnavailableDlcData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnavailableDlcData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnavailableDlcData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnavailableDlcData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnavailableDlcData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics
	{
		struct ELUnlockableItemManagerBase_eventGetUnlockableItemInfoFromFromCategory_Parms
		{
			EUnlockItemCategory _targetItemCategory;
			TArray<FUnlockableItemParam> ItemParamList;
			TArray<FELUnlockItemSaveData> ItemSaveDataList;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__targetItemCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__targetItemCategory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemParamList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemParamList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemSaveDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemSaveDataList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::NewProp__targetItemCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::NewProp__targetItemCategory = { "_targetItemCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemInfoFromFromCategory_Parms, _targetItemCategory), Z_Construct_UEnum_ELITE_Game_EUnlockItemCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::NewProp_ItemParamList_Inner = { "ItemParamList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUnlockableItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::NewProp_ItemParamList = { "ItemParamList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemInfoFromFromCategory_Parms, ItemParamList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::NewProp_ItemSaveDataList_Inner = { "ItemSaveDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::NewProp_ItemSaveDataList = { "ItemSaveDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemInfoFromFromCategory_Parms, ItemSaveDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::NewProp__targetItemCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::NewProp__targetItemCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::NewProp_ItemParamList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::NewProp_ItemParamList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::NewProp_ItemSaveDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::NewProp_ItemSaveDataList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "GetUnlockableItemInfoFromFromCategory", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventGetUnlockableItemInfoFromFromCategory_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromID_Statics
	{
		struct ELUnlockableItemManagerBase_eventGetUnlockableItemInfoFromID_Parms
		{
			int32 _targetItemId;
			FUnlockableItemParam ItemParam;
			FELUnlockItemSaveData ItemSaveData;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetItemId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemParam;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemSaveData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromID_Statics::NewProp__targetItemId = { "_targetItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemInfoFromID_Parms, _targetItemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromID_Statics::NewProp_ItemParam = { "ItemParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemInfoFromID_Parms, ItemParam), Z_Construct_UScriptStruct_FUnlockableItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromID_Statics::NewProp_ItemSaveData = { "ItemSaveData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemInfoFromID_Parms, ItemSaveData), Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromID_Statics::NewProp__targetItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromID_Statics::NewProp_ItemParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromID_Statics::NewProp_ItemSaveData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "GetUnlockableItemInfoFromID", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventGetUnlockableItemInfoFromID_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics
	{
		struct ELUnlockableItemManagerBase_eventGetUnlockableItemInfoFromIdList_Parms
		{
			TArray<int32> _targetItemIdList;
			TArray<FUnlockableItemParam> ItemParamList;
			TArray<FELUnlockItemSaveData> ItemSaveDataList;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetItemIdList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetItemIdList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemParamList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemParamList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemSaveDataList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemSaveDataList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::NewProp__targetItemIdList_Inner = { "_targetItemIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::NewProp__targetItemIdList = { "_targetItemIdList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemInfoFromIdList_Parms, _targetItemIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::NewProp_ItemParamList_Inner = { "ItemParamList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUnlockableItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::NewProp_ItemParamList = { "ItemParamList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemInfoFromIdList_Parms, ItemParamList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::NewProp_ItemSaveDataList_Inner = { "ItemSaveDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::NewProp_ItemSaveDataList = { "ItemSaveDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemInfoFromIdList_Parms, ItemSaveDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::NewProp__targetItemIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::NewProp__targetItemIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::NewProp_ItemParamList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::NewProp_ItemParamList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::NewProp_ItemSaveDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::NewProp_ItemSaveDataList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "GetUnlockableItemInfoFromIdList", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventGetUnlockableItemInfoFromIdList_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemList_Statics
	{
		struct ELUnlockableItemManagerBase_eventGetUnlockableItemList_Parms
		{
			TArray<FUnlockableItemParam> ResultList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemList_Statics::NewProp_ResultList_Inner = { "ResultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUnlockableItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemList_Statics::NewProp_ResultList = { "ResultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemList_Parms, ResultList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemList_Statics::NewProp_ResultList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemList_Statics::NewProp_ResultList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "GetUnlockableItemList", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventGetUnlockableItemList_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory_Statics
	{
		struct ELUnlockableItemManagerBase_eventGetUnlockableItemListFromCategory_Parms
		{
			EUnlockItemCategory _targetItemCategory;
			TArray<FUnlockableItemParam> ResultList;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__targetItemCategory_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__targetItemCategory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory_Statics::NewProp__targetItemCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory_Statics::NewProp__targetItemCategory = { "_targetItemCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemListFromCategory_Parms, _targetItemCategory), Z_Construct_UEnum_ELITE_Game_EUnlockItemCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory_Statics::NewProp_ResultList_Inner = { "ResultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUnlockableItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory_Statics::NewProp_ResultList = { "ResultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemListFromCategory_Parms, ResultList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory_Statics::NewProp__targetItemCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory_Statics::NewProp__targetItemCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory_Statics::NewProp_ResultList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory_Statics::NewProp_ResultList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "GetUnlockableItemListFromCategory", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventGetUnlockableItemListFromCategory_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID_Statics
	{
		struct ELUnlockableItemManagerBase_eventGetUnlockableItemListFromID_Parms
		{
			TArray<int32> _targetItemIdList;
			TArray<FUnlockableItemParam> ResultList;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetItemIdList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetItemIdList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID_Statics::NewProp__targetItemIdList_Inner = { "_targetItemIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID_Statics::NewProp__targetItemIdList = { "_targetItemIdList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemListFromID_Parms, _targetItemIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID_Statics::NewProp_ResultList_Inner = { "ResultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUnlockableItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID_Statics::NewProp_ResultList = { "ResultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemListFromID_Parms, ResultList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID_Statics::NewProp__targetItemIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID_Statics::NewProp__targetItemIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID_Statics::NewProp_ResultList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID_Statics::NewProp_ResultList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "GetUnlockableItemListFromID", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventGetUnlockableItemListFromID_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics
	{
		struct ELUnlockableItemManagerBase_eventGetUnlockableItemMapFromID_Parms
		{
			TArray<int32> _targetItemIdList;
			TMap<int32,FUnlockableItemParam> ResultList;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetItemIdList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetItemIdList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultList_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResultList_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ResultList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::NewProp__targetItemIdList_Inner = { "_targetItemIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::NewProp__targetItemIdList = { "_targetItemIdList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemMapFromID_Parms, _targetItemIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::NewProp_ResultList_ValueProp = { "ResultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FUnlockableItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::NewProp_ResultList_Key_KeyProp = { "ResultList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::NewProp_ResultList = { "ResultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemMapFromID_Parms, ResultList), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::NewProp__targetItemIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::NewProp__targetItemIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::NewProp_ResultList_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::NewProp_ResultList_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::NewProp_ResultList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "GetUnlockableItemMapFromID", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventGetUnlockableItemMapFromID_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromID_Statics
	{
		struct ELUnlockableItemManagerBase_eventGetUnlockableItemSaveDataFromID_Parms
		{
			int32 _targetItemId;
			FELUnlockItemSaveData Result;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetItemId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromID_Statics::NewProp__targetItemId = { "_targetItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemSaveDataFromID_Parms, _targetItemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromID_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemSaveDataFromID_Parms, Result), Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromID_Statics::NewProp__targetItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromID_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "GetUnlockableItemSaveDataFromID", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventGetUnlockableItemSaveDataFromID_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList_Statics
	{
		struct ELUnlockableItemManagerBase_eventGetUnlockableItemSaveDataFromIdList_Parms
		{
			TArray<int32> _targetItemIdList;
			TArray<FELUnlockItemSaveData> ResultList;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetItemIdList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetItemIdList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList_Statics::NewProp__targetItemIdList_Inner = { "_targetItemIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList_Statics::NewProp__targetItemIdList = { "_targetItemIdList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemSaveDataFromIdList_Parms, _targetItemIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList_Statics::NewProp_ResultList_Inner = { "ResultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList_Statics::NewProp_ResultList = { "ResultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventGetUnlockableItemSaveDataFromIdList_Parms, ResultList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList_Statics::NewProp__targetItemIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList_Statics::NewProp__targetItemIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList_Statics::NewProp_ResultList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList_Statics::NewProp_ResultList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "GetUnlockableItemSaveDataFromIdList", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventGetUnlockableItemSaveDataFromIdList_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_IsUpdatedUnlockData_Statics
	{
		struct ELUnlockableItemManagerBase_eventIsUpdatedUnlockData_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELUnlockableItemManagerBase_IsUpdatedUnlockData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELUnlockableItemManagerBase_eventIsUpdatedUnlockData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_IsUpdatedUnlockData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELUnlockableItemManagerBase_eventIsUpdatedUnlockData_Parms), &Z_Construct_UFunction_UELUnlockableItemManagerBase_IsUpdatedUnlockData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_IsUpdatedUnlockData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_IsUpdatedUnlockData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_IsUpdatedUnlockData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_IsUpdatedUnlockData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "IsUpdatedUnlockData", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventIsUpdatedUnlockData_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_IsUpdatedUnlockData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_IsUpdatedUnlockData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_IsUpdatedUnlockData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_IsUpdatedUnlockData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_IsUpdatedUnlockData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_IsUpdatedUnlockData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItem_Statics
	{
		struct ELUnlockableItemManagerBase_eventLockingItem_Parms
		{
			int32 _targetId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItem_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventLockingItem_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItem_Statics::NewProp__targetId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "LockingItem", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventLockingItem_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItemList_Statics
	{
		struct ELUnlockableItemManagerBase_eventLockingItemList_Parms
		{
			TArray<int32> _targetIdList;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetIdList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetIdList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItemList_Statics::NewProp__targetIdList_Inner = { "_targetIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItemList_Statics::NewProp__targetIdList = { "_targetIdList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventLockingItemList_Parms, _targetIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItemList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItemList_Statics::NewProp__targetIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItemList_Statics::NewProp__targetIdList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItemList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItemList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "LockingItemList", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventLockingItemList_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItemList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItemList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItemList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItemList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItemList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItemList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_OnAutoQueryEntitlementsComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_OnAutoQueryEntitlementsComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_OnAutoQueryEntitlementsComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "OnAutoQueryEntitlementsComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_OnAutoQueryEntitlementsComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_OnAutoQueryEntitlementsComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_OnAutoQueryEntitlementsComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_OnAutoQueryEntitlementsComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_OnCheckedQueryEntitlements_Statics
	{
		struct ELUnlockableItemManagerBase_eventOnCheckedQueryEntitlements_Parms
		{
			bool Successed;
		};
		static void NewProp_Successed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Successed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELUnlockableItemManagerBase_OnCheckedQueryEntitlements_Statics::NewProp_Successed_SetBit(void* Obj)
	{
		((ELUnlockableItemManagerBase_eventOnCheckedQueryEntitlements_Parms*)Obj)->Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_OnCheckedQueryEntitlements_Statics::NewProp_Successed = { "Successed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELUnlockableItemManagerBase_eventOnCheckedQueryEntitlements_Parms), &Z_Construct_UFunction_UELUnlockableItemManagerBase_OnCheckedQueryEntitlements_Statics::NewProp_Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_OnCheckedQueryEntitlements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_OnCheckedQueryEntitlements_Statics::NewProp_Successed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_OnCheckedQueryEntitlements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_OnCheckedQueryEntitlements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "OnCheckedQueryEntitlements", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventOnCheckedQueryEntitlements_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_OnCheckedQueryEntitlements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_OnCheckedQueryEntitlements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_OnCheckedQueryEntitlements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_OnCheckedQueryEntitlements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_OnCheckedQueryEntitlements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_OnCheckedQueryEntitlements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_OnConsumeGold_Statics
	{
		struct ELUnlockableItemManagerBase_eventOnConsumeGold_Parms
		{
			bool _Successed;
		};
		static void NewProp__Successed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Successed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELUnlockableItemManagerBase_OnConsumeGold_Statics::NewProp__Successed_SetBit(void* Obj)
	{
		((ELUnlockableItemManagerBase_eventOnConsumeGold_Parms*)Obj)->_Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_OnConsumeGold_Statics::NewProp__Successed = { "_Successed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELUnlockableItemManagerBase_eventOnConsumeGold_Parms), &Z_Construct_UFunction_UELUnlockableItemManagerBase_OnConsumeGold_Statics::NewProp__Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_OnConsumeGold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_OnConsumeGold_Statics::NewProp__Successed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_OnConsumeGold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_OnConsumeGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "OnConsumeGold", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventOnConsumeGold_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_OnConsumeGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_OnConsumeGold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_OnConsumeGold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_OnConsumeGold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_OnConsumeGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_OnConsumeGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_OnDownloadPossessedGold_Statics
	{
		struct ELUnlockableItemManagerBase_eventOnDownloadPossessedGold_Parms
		{
			bool _Successed;
			int32 _goldNum;
		};
		static void NewProp__Successed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Successed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__goldNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELUnlockableItemManagerBase_OnDownloadPossessedGold_Statics::NewProp__Successed_SetBit(void* Obj)
	{
		((ELUnlockableItemManagerBase_eventOnDownloadPossessedGold_Parms*)Obj)->_Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_OnDownloadPossessedGold_Statics::NewProp__Successed = { "_Successed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELUnlockableItemManagerBase_eventOnDownloadPossessedGold_Parms), &Z_Construct_UFunction_UELUnlockableItemManagerBase_OnDownloadPossessedGold_Statics::NewProp__Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_OnDownloadPossessedGold_Statics::NewProp__goldNum = { "_goldNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventOnDownloadPossessedGold_Parms, _goldNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_OnDownloadPossessedGold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_OnDownloadPossessedGold_Statics::NewProp__Successed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_OnDownloadPossessedGold_Statics::NewProp__goldNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_OnDownloadPossessedGold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_OnDownloadPossessedGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "OnDownloadPossessedGold", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventOnDownloadPossessedGold_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_OnDownloadPossessedGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_OnDownloadPossessedGold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_OnDownloadPossessedGold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_OnDownloadPossessedGold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_OnDownloadPossessedGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_OnDownloadPossessedGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_OnUploadPossessedGold_Statics
	{
		struct ELUnlockableItemManagerBase_eventOnUploadPossessedGold_Parms
		{
			bool _Successed;
		};
		static void NewProp__Successed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Successed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELUnlockableItemManagerBase_OnUploadPossessedGold_Statics::NewProp__Successed_SetBit(void* Obj)
	{
		((ELUnlockableItemManagerBase_eventOnUploadPossessedGold_Parms*)Obj)->_Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_OnUploadPossessedGold_Statics::NewProp__Successed = { "_Successed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELUnlockableItemManagerBase_eventOnUploadPossessedGold_Parms), &Z_Construct_UFunction_UELUnlockableItemManagerBase_OnUploadPossessedGold_Statics::NewProp__Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_OnUploadPossessedGold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_OnUploadPossessedGold_Statics::NewProp__Successed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_OnUploadPossessedGold_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_OnUploadPossessedGold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "OnUploadPossessedGold", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventOnUploadPossessedGold_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_OnUploadPossessedGold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_OnUploadPossessedGold_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_OnUploadPossessedGold_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_OnUploadPossessedGold_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_OnUploadPossessedGold()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_OnUploadPossessedGold_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics
	{
		struct ELUnlockableItemManagerBase_eventRequestInstalledDlcItemCheck_Parms
		{
			TArray<FText> CheckDlcItemNames;
			FScriptDelegate OnResultDelegate;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CheckDlcItemNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckDlcItemNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CheckDlcItemNames;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResultDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics::NewProp_CheckDlcItemNames_Inner = { "CheckDlcItemNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics::NewProp_CheckDlcItemNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics::NewProp_CheckDlcItemNames = { "CheckDlcItemNames", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventRequestInstalledDlcItemCheck_Parms, CheckDlcItemNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics::NewProp_CheckDlcItemNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics::NewProp_CheckDlcItemNames_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics::NewProp_OnResultDelegate = { "OnResultDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventRequestInstalledDlcItemCheck_Parms, OnResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_CheckInstalledDlcItemCompleteDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics::NewProp_CheckDlcItemNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics::NewProp_CheckDlcItemNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics::NewProp_OnResultDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "RequestInstalledDlcItemCheck", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventRequestInstalledDlcItemCheck_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestQueryEntitlements_Statics
	{
		struct ELUnlockableItemManagerBase_eventRequestQueryEntitlements_Parms
		{
			FScriptDelegate _completeDelegate;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp__completeDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestQueryEntitlements_Statics::NewProp__completeDelegate = { "_completeDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventRequestQueryEntitlements_Parms, _completeDelegate), Z_Construct_UDelegateFunction_ABP_200508_QueryEntitlementCompleteDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestQueryEntitlements_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELUnlockableItemManagerBase_eventRequestQueryEntitlements_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestQueryEntitlements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELUnlockableItemManagerBase_eventRequestQueryEntitlements_Parms), &Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestQueryEntitlements_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestQueryEntitlements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestQueryEntitlements_Statics::NewProp__completeDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestQueryEntitlements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestQueryEntitlements_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestQueryEntitlements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "RequestQueryEntitlements", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventRequestQueryEntitlements_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestQueryEntitlements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestQueryEntitlements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestQueryEntitlements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestQueryEntitlements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestQueryEntitlements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestQueryEntitlements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestUnlockableItemPurchase_Statics
	{
		struct ELUnlockableItemManagerBase_eventRequestUnlockableItemPurchase_Parms
		{
			TArray<int32> _targetItemIdList;
			FScriptDelegate OnResultDelegate;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetItemIdList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetItemIdList;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResultDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestUnlockableItemPurchase_Statics::NewProp__targetItemIdList_Inner = { "_targetItemIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestUnlockableItemPurchase_Statics::NewProp__targetItemIdList = { "_targetItemIdList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventRequestUnlockableItemPurchase_Parms, _targetItemIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestUnlockableItemPurchase_Statics::NewProp_OnResultDelegate = { "OnResultDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventRequestUnlockableItemPurchase_Parms, OnResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_ItemPurchaseCompleteDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestUnlockableItemPurchase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestUnlockableItemPurchase_Statics::NewProp__targetItemIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestUnlockableItemPurchase_Statics::NewProp__targetItemIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestUnlockableItemPurchase_Statics::NewProp_OnResultDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestUnlockableItemPurchase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestUnlockableItemPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "RequestUnlockableItemPurchase", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventRequestUnlockableItemPurchase_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestUnlockableItemPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestUnlockableItemPurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestUnlockableItemPurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestUnlockableItemPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestUnlockableItemPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestUnlockableItemPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_SetCurrentAEW_GOLD_Statics
	{
		struct ELUnlockableItemManagerBase_eventSetCurrentAEW_GOLD_Parms
		{
			int32 _newNum;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__newNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_SetCurrentAEW_GOLD_Statics::NewProp__newNum = { "_newNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventSetCurrentAEW_GOLD_Parms, _newNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_SetCurrentAEW_GOLD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_SetCurrentAEW_GOLD_Statics::NewProp__newNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_SetCurrentAEW_GOLD_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_SetCurrentAEW_GOLD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "SetCurrentAEW_GOLD", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventSetCurrentAEW_GOLD_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_SetCurrentAEW_GOLD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_SetCurrentAEW_GOLD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_SetCurrentAEW_GOLD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_SetCurrentAEW_GOLD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_SetCurrentAEW_GOLD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_SetCurrentAEW_GOLD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_SetupUnlockableItemDataTable_Statics
	{
		struct ELUnlockableItemManagerBase_eventSetupUnlockableItemDataTable_Parms
		{
			TSoftObjectPtr<UDataTable> _itemDT;
			UObject* _pWorldContextObject;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__itemDT;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_SetupUnlockableItemDataTable_Statics::NewProp__itemDT = { "_itemDT", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventSetupUnlockableItemDataTable_Parms, _itemDT), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_SetupUnlockableItemDataTable_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventSetupUnlockableItemDataTable_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_SetupUnlockableItemDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_SetupUnlockableItemDataTable_Statics::NewProp__itemDT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_SetupUnlockableItemDataTable_Statics::NewProp__pWorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_SetupUnlockableItemDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_SetupUnlockableItemDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "SetupUnlockableItemDataTable", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventSetupUnlockableItemDataTable_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_SetupUnlockableItemDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_SetupUnlockableItemDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_SetupUnlockableItemDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_SetupUnlockableItemDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_SetupUnlockableItemDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_SetupUnlockableItemDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_SortUnlockItemParamMap_Statics
	{
		struct ELUnlockableItemManagerBase_eventSortUnlockItemParamMap_Parms
		{
			TMap<int32,int32> _SortedMap;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__SortedMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__SortedMap_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__SortedMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_SortUnlockItemParamMap_Statics::NewProp__SortedMap_ValueProp = { "_SortedMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_SortUnlockItemParamMap_Statics::NewProp__SortedMap_Key_KeyProp = { "_SortedMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_SortUnlockItemParamMap_Statics::NewProp__SortedMap = { "_SortedMap", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventSortUnlockItemParamMap_Parms, _SortedMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_SortUnlockItemParamMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_SortUnlockItemParamMap_Statics::NewProp__SortedMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_SortUnlockItemParamMap_Statics::NewProp__SortedMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_SortUnlockItemParamMap_Statics::NewProp__SortedMap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_SortUnlockItemParamMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_SortUnlockItemParamMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "SortUnlockItemParamMap", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventSortUnlockItemParamMap_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_SortUnlockItemParamMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_SortUnlockItemParamMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_SortUnlockItemParamMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_SortUnlockItemParamMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_SortUnlockItemParamMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_SortUnlockItemParamMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItem_Statics
	{
		struct ELUnlockableItemManagerBase_eventUnlockingItem_Parms
		{
			int32 _targetId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItem_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventUnlockingItem_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItem_Statics::NewProp__targetId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "UnlockingItem", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventUnlockingItem_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItemList_Statics
	{
		struct ELUnlockableItemManagerBase_eventUnlockingItemList_Parms
		{
			TArray<int32> _targetIdList;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetIdList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetIdList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItemList_Statics::NewProp__targetIdList_Inner = { "_targetIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItemList_Statics::NewProp__targetIdList = { "_targetIdList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELUnlockableItemManagerBase_eventUnlockingItemList_Parms, _targetIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItemList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItemList_Statics::NewProp__targetIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItemList_Statics::NewProp__targetIdList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItemList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItemList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELUnlockableItemManagerBase, nullptr, "UnlockingItemList", nullptr, nullptr, sizeof(ELUnlockableItemManagerBase_eventUnlockingItemList_Parms), Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItemList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItemList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItemList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItemList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItemList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItemList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELUnlockableItemManagerBase_NoRegister()
	{
		return UELUnlockableItemManagerBase::StaticClass();
	}
	struct Z_Construct_UClass_UELUnlockableItemManagerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoQueryEntitlementsCompleteTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AutoQueryEntitlementsCompleteTimer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_UnlockableItemParamList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_UnlockableItemParamList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_UnlockableItemParamList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_RequestPurchaseItemIdList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RequestPurchaseItemIdList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_RequestPurchaseItemIdList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ConsumeGoldCoinItemList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ConsumeGoldCoinItemList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ConsumeGoldCoinItemList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ptrGoldCoinPossessManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_m_ptrGoldCoinPossessManager;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ItemInfoMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_ItemInfoMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ItemInfoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_ItemInfoMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_BadgeIdSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BadgeIdSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_m_BadgeIdSet;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_m_CheckInstalledDlcItemNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CheckInstalledDlcItemNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_CheckInstalledDlcItemNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_CheckEntitlementedDlc, "CheckEntitlementedDlc" }, // 1832655583
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_GetAllUnlockableItemSaveData, "GetAllUnlockableItemSaveData" }, // 4058544711
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_CASH, "GetCurrentAEW_CASH" }, // 2829676240
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_GetCurrentAEW_GOLD, "GetCurrentAEW_GOLD" }, // 3344514471
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromAll, "GetHotItemListFromAll" }, // 3551479035
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromCategory, "GetHotItemListFromCategory" }, // 2177853703
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_GetHotItemListFromID, "GetHotItemListFromID" }, // 3306853050
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_GetPurchaseLastResult, "GetPurchaseLastResult" }, // 1076847133
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnavailableDlcData, "GetUnavailableDlcData" }, // 4287367619
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromFromCategory, "GetUnlockableItemInfoFromFromCategory" }, // 1414272427
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromID, "GetUnlockableItemInfoFromID" }, // 3678984616
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemInfoFromIdList, "GetUnlockableItemInfoFromIdList" }, // 544450613
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemList, "GetUnlockableItemList" }, // 3043671548
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromCategory, "GetUnlockableItemListFromCategory" }, // 723210424
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemListFromID, "GetUnlockableItemListFromID" }, // 1239463597
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemMapFromID, "GetUnlockableItemMapFromID" }, // 2689839387
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromID, "GetUnlockableItemSaveDataFromID" }, // 1857210900
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_GetUnlockableItemSaveDataFromIdList, "GetUnlockableItemSaveDataFromIdList" }, // 902392801
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_IsUpdatedUnlockData, "IsUpdatedUnlockData" }, // 2368929365
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItem, "LockingItem" }, // 555708314
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_LockingItemList, "LockingItemList" }, // 720931745
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_OnAutoQueryEntitlementsComplete, "OnAutoQueryEntitlementsComplete" }, // 2013030583
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_OnCheckedQueryEntitlements, "OnCheckedQueryEntitlements" }, // 1352846504
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_OnConsumeGold, "OnConsumeGold" }, // 2437524482
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_OnDownloadPossessedGold, "OnDownloadPossessedGold" }, // 3879238446
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_OnUploadPossessedGold, "OnUploadPossessedGold" }, // 2624577023
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestInstalledDlcItemCheck, "RequestInstalledDlcItemCheck" }, // 3499153225
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestQueryEntitlements, "RequestQueryEntitlements" }, // 809482035
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_RequestUnlockableItemPurchase, "RequestUnlockableItemPurchase" }, // 1279753641
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_SetCurrentAEW_GOLD, "SetCurrentAEW_GOLD" }, // 1944224669
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_SetupUnlockableItemDataTable, "SetupUnlockableItemDataTable" }, // 1274207843
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_SortUnlockItemParamMap, "SortUnlockItemParamMap" }, // 374121439
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItem, "UnlockingItem" }, // 3241391651
		{ &Z_Construct_UFunction_UELUnlockableItemManagerBase_UnlockingItemList, "UnlockingItemList" }, // 1076345843
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELUnlockableItemManagerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_AutoQueryEntitlementsCompleteTimer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUnlockableItemManagerBase" },
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_AutoQueryEntitlementsCompleteTimer = { "AutoQueryEntitlementsCompleteTimer", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELUnlockableItemManagerBase, AutoQueryEntitlementsCompleteTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_AutoQueryEntitlementsCompleteTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_AutoQueryEntitlementsCompleteTimer_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_UnlockableItemParamList_Inner = { "m_UnlockableItemParamList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUnlockableItemParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_UnlockableItemParamList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUnlockableItemManagerBase" },
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_UnlockableItemParamList = { "m_UnlockableItemParamList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELUnlockableItemManagerBase, m_UnlockableItemParamList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_UnlockableItemParamList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_UnlockableItemParamList_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_RequestPurchaseItemIdList_Inner = { "m_RequestPurchaseItemIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_RequestPurchaseItemIdList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUnlockableItemManagerBase" },
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_RequestPurchaseItemIdList = { "m_RequestPurchaseItemIdList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELUnlockableItemManagerBase, m_RequestPurchaseItemIdList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_RequestPurchaseItemIdList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_RequestPurchaseItemIdList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ConsumeGoldCoinItemList_Inner = { "m_ConsumeGoldCoinItemList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUnlockableItemParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ConsumeGoldCoinItemList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUnlockableItemManagerBase" },
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ConsumeGoldCoinItemList = { "m_ConsumeGoldCoinItemList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELUnlockableItemManagerBase, m_ConsumeGoldCoinItemList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ConsumeGoldCoinItemList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ConsumeGoldCoinItemList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ptrGoldCoinPossessManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUnlockableItemManagerBase" },
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ptrGoldCoinPossessManager = { "m_ptrGoldCoinPossessManager", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELUnlockableItemManagerBase, m_ptrGoldCoinPossessManager), Z_Construct_UClass_UELGoldCoinPossessManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ptrGoldCoinPossessManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ptrGoldCoinPossessManager_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ItemInfoMap_ValueProp = { "m_ItemInfoMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FELRefUnlockableItemInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ItemInfoMap_Key_KeyProp = { "m_ItemInfoMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ItemInfoMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUnlockableItemManagerBase" },
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ItemInfoMap = { "m_ItemInfoMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELUnlockableItemManagerBase, m_ItemInfoMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ItemInfoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ItemInfoMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_BadgeIdSet_ElementProp = { "m_BadgeIdSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_BadgeIdSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUnlockableItemManagerBase" },
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_BadgeIdSet = { "m_BadgeIdSet", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELUnlockableItemManagerBase, m_BadgeIdSet), METADATA_PARAMS(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_BadgeIdSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_BadgeIdSet_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_CheckInstalledDlcItemNames_Inner = { "m_CheckInstalledDlcItemNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_CheckInstalledDlcItemNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELUnlockableItemManagerBase" },
		{ "ModuleRelativePath", "Public/ELUnlockableItemManagerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_CheckInstalledDlcItemNames = { "m_CheckInstalledDlcItemNames", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELUnlockableItemManagerBase, m_CheckInstalledDlcItemNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_CheckInstalledDlcItemNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_CheckInstalledDlcItemNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_AutoQueryEntitlementsCompleteTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_UnlockableItemParamList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_UnlockableItemParamList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_RequestPurchaseItemIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_RequestPurchaseItemIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ConsumeGoldCoinItemList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ConsumeGoldCoinItemList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ptrGoldCoinPossessManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ItemInfoMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ItemInfoMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_ItemInfoMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_BadgeIdSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_BadgeIdSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_CheckInstalledDlcItemNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::NewProp_m_CheckInstalledDlcItemNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELUnlockableItemManagerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::ClassParams = {
		&UELUnlockableItemManagerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELUnlockableItemManagerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELUnlockableItemManagerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELUnlockableItemManagerBase, 3403353193);
	template<> ABP_200508_API UClass* StaticClass<UELUnlockableItemManagerBase>()
	{
		return UELUnlockableItemManagerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELUnlockableItemManagerBase(Z_Construct_UClass_UELUnlockableItemManagerBase, &UELUnlockableItemManagerBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELUnlockableItemManagerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELUnlockableItemManagerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
