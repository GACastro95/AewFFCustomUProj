// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELPossessedItemManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELPossessedItemManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELPossessedItemManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELPossessedItemManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FAddPossessItemQuantity();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_UpdateItemQuantityCompleteDelegate__DelegateSignature();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPossessedItemParam();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPossessedItemSaveData();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPossessedItemConsumeTarget();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPossessedItemExtendTarget();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPossessedItemType();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELRefPossessedItemInfo();
// End Cross Module References
	DEFINE_FUNCTION(UELPossessedItemManager::execAddItemQuantity)
	{
		P_GET_TARRAY(FAddPossessItemQuantity,Z_Param__addItem);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemQuantity(Z_Param__addItem,FUpdateItemQuantityCompleteDelegate(Z_Param_OnResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPossessedItemManager::execGetAllItemParam)
	{
		P_GET_TARRAY_REF(FPossessedItemParam,Z_Param_Out__outResultList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllItemParam(Z_Param_Out__outResultList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPossessedItemManager::execGetAllItemSaveData)
	{
		P_GET_TARRAY_REF(FPossessedItemSaveData,Z_Param_Out__outResultList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllItemSaveData(Z_Param_Out__outResultList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPossessedItemManager::execGetConsumeItemParamFromTarget)
	{
		P_GET_STRUCT_REF(FPossessedItemParam,Z_Param_Out__outResultList);
		P_GET_ENUM(EPossessedItemConsumeTarget,Z_Param__targetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetConsumeItemParamFromTarget(Z_Param_Out__outResultList,EPossessedItemConsumeTarget(Z_Param__targetType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPossessedItemManager::execGetExtendItemParamFromTarget)
	{
		P_GET_TARRAY_REF(FPossessedItemParam,Z_Param_Out__outResultList);
		P_GET_ENUM(EPossessedItemExtendTarget,Z_Param__targetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetExtendItemParamFromTarget(Z_Param_Out__outResultList,EPossessedItemExtendTarget(Z_Param__targetType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPossessedItemManager::execGetItemParamFromID)
	{
		P_GET_TARRAY_REF(FPossessedItemParam,Z_Param_Out__outResultList);
		P_GET_TARRAY(int32,Z_Param__targetIdList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetItemParamFromID(Z_Param_Out__outResultList,Z_Param__targetIdList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPossessedItemManager::execGetItemParamFromItemType)
	{
		P_GET_TARRAY_REF(FPossessedItemParam,Z_Param_Out__outResultList);
		P_GET_ENUM(EPossessedItemType,Z_Param__targetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetItemParamFromItemType(Z_Param_Out__outResultList,EPossessedItemType(Z_Param__targetType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPossessedItemManager::execGetPossessedItemInfoFromID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetItemId);
		P_GET_STRUCT_REF(FPossessedItemParam,Z_Param_Out_ItemParam);
		P_GET_STRUCT_REF(FPossessedItemSaveData,Z_Param_Out_ItemSaveData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPossessedItemInfoFromID(Z_Param__targetItemId,Z_Param_Out_ItemParam,Z_Param_Out_ItemSaveData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPossessedItemManager::execGetPossessedItemInfoFromIdList)
	{
		P_GET_TARRAY(int32,Z_Param__targetItemIdList);
		P_GET_TARRAY_REF(FPossessedItemParam,Z_Param_Out_ItemParamList);
		P_GET_TARRAY_REF(FPossessedItemSaveData,Z_Param_Out_ItemSaveDataList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPossessedItemInfoFromIdList(Z_Param__targetItemIdList,Z_Param_Out_ItemParamList,Z_Param_Out_ItemSaveDataList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPossessedItemManager::execGetPossessedItemSaveDataFromID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetItemId);
		P_GET_STRUCT_REF(FPossessedItemSaveData,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPossessedItemSaveDataFromID(Z_Param__targetItemId,Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPossessedItemManager::execGetPossessedItemSaveDataFromIdList)
	{
		P_GET_TARRAY(int32,Z_Param__targetItemIdList);
		P_GET_TARRAY_REF(FPossessedItemSaveData,Z_Param_Out_ResultList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPossessedItemSaveDataFromIdList(Z_Param__targetItemIdList,Z_Param_Out_ResultList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELPossessedItemManager::execSetupPossessedItemDataTable)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UDataTable>,Z_Param__itemDT);
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupPossessedItemDataTable(Z_Param__itemDT,Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	void UELPossessedItemManager::StaticRegisterNativesUELPossessedItemManager()
	{
		UClass* Class = UELPossessedItemManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddItemQuantity", &UELPossessedItemManager::execAddItemQuantity },
			{ "GetAllItemParam", &UELPossessedItemManager::execGetAllItemParam },
			{ "GetAllItemSaveData", &UELPossessedItemManager::execGetAllItemSaveData },
			{ "GetConsumeItemParamFromTarget", &UELPossessedItemManager::execGetConsumeItemParamFromTarget },
			{ "GetExtendItemParamFromTarget", &UELPossessedItemManager::execGetExtendItemParamFromTarget },
			{ "GetItemParamFromID", &UELPossessedItemManager::execGetItemParamFromID },
			{ "GetItemParamFromItemType", &UELPossessedItemManager::execGetItemParamFromItemType },
			{ "GetPossessedItemInfoFromID", &UELPossessedItemManager::execGetPossessedItemInfoFromID },
			{ "GetPossessedItemInfoFromIdList", &UELPossessedItemManager::execGetPossessedItemInfoFromIdList },
			{ "GetPossessedItemSaveDataFromID", &UELPossessedItemManager::execGetPossessedItemSaveDataFromID },
			{ "GetPossessedItemSaveDataFromIdList", &UELPossessedItemManager::execGetPossessedItemSaveDataFromIdList },
			{ "SetupPossessedItemDataTable", &UELPossessedItemManager::execSetupPossessedItemDataTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELPossessedItemManager_AddItemQuantity_Statics
	{
		struct ELPossessedItemManager_eventAddItemQuantity_Parms
		{
			TArray<FAddPossessItemQuantity> _addItem;
			FScriptDelegate OnResultDelegate;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__addItem_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__addItem;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResultDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPossessedItemManager_AddItemQuantity_Statics::NewProp__addItem_Inner = { "_addItem", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAddPossessItemQuantity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPossessedItemManager_AddItemQuantity_Statics::NewProp__addItem = { "_addItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventAddItemQuantity_Parms, _addItem), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELPossessedItemManager_AddItemQuantity_Statics::NewProp_OnResultDelegate = { "OnResultDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventAddItemQuantity_Parms, OnResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_UpdateItemQuantityCompleteDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPossessedItemManager_AddItemQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_AddItemQuantity_Statics::NewProp__addItem_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_AddItemQuantity_Statics::NewProp__addItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_AddItemQuantity_Statics::NewProp_OnResultDelegate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPossessedItemManager_AddItemQuantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPossessedItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPossessedItemManager_AddItemQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPossessedItemManager, nullptr, "AddItemQuantity", nullptr, nullptr, sizeof(ELPossessedItemManager_eventAddItemQuantity_Parms), Z_Construct_UFunction_UELPossessedItemManager_AddItemQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_AddItemQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPossessedItemManager_AddItemQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_AddItemQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPossessedItemManager_AddItemQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPossessedItemManager_AddItemQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPossessedItemManager_GetAllItemParam_Statics
	{
		struct ELPossessedItemManager_eventGetAllItemParam_Parms
		{
			TArray<FPossessedItemParam> _outResultList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outResultList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outResultList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetAllItemParam_Statics::NewProp__outResultList_Inner = { "_outResultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetAllItemParam_Statics::NewProp__outResultList = { "_outResultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetAllItemParam_Parms, _outResultList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPossessedItemManager_GetAllItemParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetAllItemParam_Statics::NewProp__outResultList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetAllItemParam_Statics::NewProp__outResultList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPossessedItemManager_GetAllItemParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPossessedItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPossessedItemManager_GetAllItemParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPossessedItemManager, nullptr, "GetAllItemParam", nullptr, nullptr, sizeof(ELPossessedItemManager_eventGetAllItemParam_Parms), Z_Construct_UFunction_UELPossessedItemManager_GetAllItemParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetAllItemParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPossessedItemManager_GetAllItemParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetAllItemParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPossessedItemManager_GetAllItemParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPossessedItemManager_GetAllItemParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPossessedItemManager_GetAllItemSaveData_Statics
	{
		struct ELPossessedItemManager_eventGetAllItemSaveData_Parms
		{
			TArray<FPossessedItemSaveData> _outResultList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outResultList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outResultList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetAllItemSaveData_Statics::NewProp__outResultList_Inner = { "_outResultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetAllItemSaveData_Statics::NewProp__outResultList = { "_outResultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetAllItemSaveData_Parms, _outResultList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPossessedItemManager_GetAllItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetAllItemSaveData_Statics::NewProp__outResultList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetAllItemSaveData_Statics::NewProp__outResultList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPossessedItemManager_GetAllItemSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPossessedItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPossessedItemManager_GetAllItemSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPossessedItemManager, nullptr, "GetAllItemSaveData", nullptr, nullptr, sizeof(ELPossessedItemManager_eventGetAllItemSaveData_Parms), Z_Construct_UFunction_UELPossessedItemManager_GetAllItemSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetAllItemSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPossessedItemManager_GetAllItemSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetAllItemSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPossessedItemManager_GetAllItemSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPossessedItemManager_GetAllItemSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPossessedItemManager_GetConsumeItemParamFromTarget_Statics
	{
		struct ELPossessedItemManager_eventGetConsumeItemParamFromTarget_Parms
		{
			FPossessedItemParam _outResultList;
			EPossessedItemConsumeTarget _targetType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outResultList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__targetType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__targetType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetConsumeItemParamFromTarget_Statics::NewProp__outResultList = { "_outResultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetConsumeItemParamFromTarget_Parms, _outResultList), Z_Construct_UScriptStruct_FPossessedItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetConsumeItemParamFromTarget_Statics::NewProp__targetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetConsumeItemParamFromTarget_Statics::NewProp__targetType = { "_targetType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetConsumeItemParamFromTarget_Parms, _targetType), Z_Construct_UEnum_ELITE_Game_EPossessedItemConsumeTarget, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPossessedItemManager_GetConsumeItemParamFromTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetConsumeItemParamFromTarget_Statics::NewProp__outResultList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetConsumeItemParamFromTarget_Statics::NewProp__targetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetConsumeItemParamFromTarget_Statics::NewProp__targetType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPossessedItemManager_GetConsumeItemParamFromTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPossessedItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPossessedItemManager_GetConsumeItemParamFromTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPossessedItemManager, nullptr, "GetConsumeItemParamFromTarget", nullptr, nullptr, sizeof(ELPossessedItemManager_eventGetConsumeItemParamFromTarget_Parms), Z_Construct_UFunction_UELPossessedItemManager_GetConsumeItemParamFromTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetConsumeItemParamFromTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPossessedItemManager_GetConsumeItemParamFromTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetConsumeItemParamFromTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPossessedItemManager_GetConsumeItemParamFromTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPossessedItemManager_GetConsumeItemParamFromTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget_Statics
	{
		struct ELPossessedItemManager_eventGetExtendItemParamFromTarget_Parms
		{
			TArray<FPossessedItemParam> _outResultList;
			EPossessedItemExtendTarget _targetType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outResultList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outResultList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__targetType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__targetType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget_Statics::NewProp__outResultList_Inner = { "_outResultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget_Statics::NewProp__outResultList = { "_outResultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetExtendItemParamFromTarget_Parms, _outResultList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget_Statics::NewProp__targetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget_Statics::NewProp__targetType = { "_targetType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetExtendItemParamFromTarget_Parms, _targetType), Z_Construct_UEnum_ELITE_Game_EPossessedItemExtendTarget, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget_Statics::NewProp__outResultList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget_Statics::NewProp__outResultList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget_Statics::NewProp__targetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget_Statics::NewProp__targetType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPossessedItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPossessedItemManager, nullptr, "GetExtendItemParamFromTarget", nullptr, nullptr, sizeof(ELPossessedItemManager_eventGetExtendItemParamFromTarget_Parms), Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID_Statics
	{
		struct ELPossessedItemManager_eventGetItemParamFromID_Parms
		{
			TArray<FPossessedItemParam> _outResultList;
			TArray<int32> _targetIdList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outResultList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outResultList;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetIdList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__targetIdList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID_Statics::NewProp__outResultList_Inner = { "_outResultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID_Statics::NewProp__outResultList = { "_outResultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetItemParamFromID_Parms, _outResultList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID_Statics::NewProp__targetIdList_Inner = { "_targetIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID_Statics::NewProp__targetIdList = { "_targetIdList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetItemParamFromID_Parms, _targetIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID_Statics::NewProp__outResultList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID_Statics::NewProp__outResultList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID_Statics::NewProp__targetIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID_Statics::NewProp__targetIdList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPossessedItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPossessedItemManager, nullptr, "GetItemParamFromID", nullptr, nullptr, sizeof(ELPossessedItemManager_eventGetItemParamFromID_Parms), Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType_Statics
	{
		struct ELPossessedItemManager_eventGetItemParamFromItemType_Parms
		{
			TArray<FPossessedItemParam> _outResultList;
			EPossessedItemType _targetType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outResultList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outResultList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__targetType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__targetType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType_Statics::NewProp__outResultList_Inner = { "_outResultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType_Statics::NewProp__outResultList = { "_outResultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetItemParamFromItemType_Parms, _outResultList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType_Statics::NewProp__targetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType_Statics::NewProp__targetType = { "_targetType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetItemParamFromItemType_Parms, _targetType), Z_Construct_UEnum_ELITE_Game_EPossessedItemType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType_Statics::NewProp__outResultList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType_Statics::NewProp__outResultList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType_Statics::NewProp__targetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType_Statics::NewProp__targetType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPossessedItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPossessedItemManager, nullptr, "GetItemParamFromItemType", nullptr, nullptr, sizeof(ELPossessedItemManager_eventGetItemParamFromItemType_Parms), Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromID_Statics
	{
		struct ELPossessedItemManager_eventGetPossessedItemInfoFromID_Parms
		{
			int32 _targetItemId;
			FPossessedItemParam ItemParam;
			FPossessedItemSaveData ItemSaveData;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromID_Statics::NewProp__targetItemId = { "_targetItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetPossessedItemInfoFromID_Parms, _targetItemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromID_Statics::NewProp_ItemParam = { "ItemParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetPossessedItemInfoFromID_Parms, ItemParam), Z_Construct_UScriptStruct_FPossessedItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromID_Statics::NewProp_ItemSaveData = { "ItemSaveData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetPossessedItemInfoFromID_Parms, ItemSaveData), Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromID_Statics::NewProp__targetItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromID_Statics::NewProp_ItemParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromID_Statics::NewProp_ItemSaveData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPossessedItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPossessedItemManager, nullptr, "GetPossessedItemInfoFromID", nullptr, nullptr, sizeof(ELPossessedItemManager_eventGetPossessedItemInfoFromID_Parms), Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics
	{
		struct ELPossessedItemManager_eventGetPossessedItemInfoFromIdList_Parms
		{
			TArray<int32> _targetItemIdList;
			TArray<FPossessedItemParam> ItemParamList;
			TArray<FPossessedItemSaveData> ItemSaveDataList;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::NewProp__targetItemIdList_Inner = { "_targetItemIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::NewProp__targetItemIdList = { "_targetItemIdList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetPossessedItemInfoFromIdList_Parms, _targetItemIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::NewProp_ItemParamList_Inner = { "ItemParamList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::NewProp_ItemParamList = { "ItemParamList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetPossessedItemInfoFromIdList_Parms, ItemParamList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::NewProp_ItemSaveDataList_Inner = { "ItemSaveDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::NewProp_ItemSaveDataList = { "ItemSaveDataList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetPossessedItemInfoFromIdList_Parms, ItemSaveDataList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::NewProp__targetItemIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::NewProp__targetItemIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::NewProp_ItemParamList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::NewProp_ItemParamList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::NewProp_ItemSaveDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::NewProp_ItemSaveDataList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPossessedItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPossessedItemManager, nullptr, "GetPossessedItemInfoFromIdList", nullptr, nullptr, sizeof(ELPossessedItemManager_eventGetPossessedItemInfoFromIdList_Parms), Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromID_Statics
	{
		struct ELPossessedItemManager_eventGetPossessedItemSaveDataFromID_Parms
		{
			int32 _targetItemId;
			FPossessedItemSaveData Result;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetItemId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromID_Statics::NewProp__targetItemId = { "_targetItemId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetPossessedItemSaveDataFromID_Parms, _targetItemId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromID_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetPossessedItemSaveDataFromID_Parms, Result), Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromID_Statics::NewProp__targetItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromID_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPossessedItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPossessedItemManager, nullptr, "GetPossessedItemSaveDataFromID", nullptr, nullptr, sizeof(ELPossessedItemManager_eventGetPossessedItemSaveDataFromID_Parms), Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList_Statics
	{
		struct ELPossessedItemManager_eventGetPossessedItemSaveDataFromIdList_Parms
		{
			TArray<int32> _targetItemIdList;
			TArray<FPossessedItemSaveData> ResultList;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList_Statics::NewProp__targetItemIdList_Inner = { "_targetItemIdList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList_Statics::NewProp__targetItemIdList = { "_targetItemIdList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetPossessedItemSaveDataFromIdList_Parms, _targetItemIdList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList_Statics::NewProp_ResultList_Inner = { "ResultList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList_Statics::NewProp_ResultList = { "ResultList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventGetPossessedItemSaveDataFromIdList_Parms, ResultList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList_Statics::NewProp__targetItemIdList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList_Statics::NewProp__targetItemIdList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList_Statics::NewProp_ResultList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList_Statics::NewProp_ResultList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPossessedItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPossessedItemManager, nullptr, "GetPossessedItemSaveDataFromIdList", nullptr, nullptr, sizeof(ELPossessedItemManager_eventGetPossessedItemSaveDataFromIdList_Parms), Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELPossessedItemManager_SetupPossessedItemDataTable_Statics
	{
		struct ELPossessedItemManager_eventSetupPossessedItemDataTable_Parms
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
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UELPossessedItemManager_SetupPossessedItemDataTable_Statics::NewProp__itemDT = { "_itemDT", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventSetupPossessedItemDataTable_Parms, _itemDT), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELPossessedItemManager_SetupPossessedItemDataTable_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELPossessedItemManager_eventSetupPossessedItemDataTable_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELPossessedItemManager_SetupPossessedItemDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_SetupPossessedItemDataTable_Statics::NewProp__itemDT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELPossessedItemManager_SetupPossessedItemDataTable_Statics::NewProp__pWorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELPossessedItemManager_SetupPossessedItemDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELPossessedItemManager.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELPossessedItemManager_SetupPossessedItemDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELPossessedItemManager, nullptr, "SetupPossessedItemDataTable", nullptr, nullptr, sizeof(ELPossessedItemManager_eventSetupPossessedItemDataTable_Parms), Z_Construct_UFunction_UELPossessedItemManager_SetupPossessedItemDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_SetupPossessedItemDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELPossessedItemManager_SetupPossessedItemDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELPossessedItemManager_SetupPossessedItemDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELPossessedItemManager_SetupPossessedItemDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELPossessedItemManager_SetupPossessedItemDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELPossessedItemManager_NoRegister()
	{
		return UELPossessedItemManager::StaticClass();
	}
	struct Z_Construct_UClass_UELPossessedItemManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ItemParamList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ItemParamList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ItemParamList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_UpdateItemQuantityCompleteDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_m_UpdateItemQuantityCompleteDelegate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ReserveUpdateItemQuantitData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ReserveUpdateItemQuantitData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ReserveUpdateItemQuantitData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ItemInfoMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_ItemInfoMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ItemInfoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_ItemInfoMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELPossessedItemManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELPossessedItemManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELPossessedItemManager_AddItemQuantity, "AddItemQuantity" }, // 391513501
		{ &Z_Construct_UFunction_UELPossessedItemManager_GetAllItemParam, "GetAllItemParam" }, // 1505183381
		{ &Z_Construct_UFunction_UELPossessedItemManager_GetAllItemSaveData, "GetAllItemSaveData" }, // 2632368475
		{ &Z_Construct_UFunction_UELPossessedItemManager_GetConsumeItemParamFromTarget, "GetConsumeItemParamFromTarget" }, // 2494199604
		{ &Z_Construct_UFunction_UELPossessedItemManager_GetExtendItemParamFromTarget, "GetExtendItemParamFromTarget" }, // 3270703012
		{ &Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromID, "GetItemParamFromID" }, // 2154799280
		{ &Z_Construct_UFunction_UELPossessedItemManager_GetItemParamFromItemType, "GetItemParamFromItemType" }, // 13297094
		{ &Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromID, "GetPossessedItemInfoFromID" }, // 2824651410
		{ &Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemInfoFromIdList, "GetPossessedItemInfoFromIdList" }, // 4278789741
		{ &Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromID, "GetPossessedItemSaveDataFromID" }, // 2220260337
		{ &Z_Construct_UFunction_UELPossessedItemManager_GetPossessedItemSaveDataFromIdList, "GetPossessedItemSaveDataFromIdList" }, // 463212904
		{ &Z_Construct_UFunction_UELPossessedItemManager_SetupPossessedItemDataTable, "SetupPossessedItemDataTable" }, // 783130144
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPossessedItemManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELPossessedItemManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELPossessedItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ItemParamList_Inner = { "m_ItemParamList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ItemParamList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPossessedItemManager" },
		{ "ModuleRelativePath", "Public/ELPossessedItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ItemParamList = { "m_ItemParamList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPossessedItemManager, m_ItemParamList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ItemParamList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ItemParamList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_UpdateItemQuantityCompleteDelegate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPossessedItemManager" },
		{ "ModuleRelativePath", "Public/ELPossessedItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_UpdateItemQuantityCompleteDelegate = { "m_UpdateItemQuantityCompleteDelegate", nullptr, (EPropertyFlags)0x0040000000080005, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPossessedItemManager, m_UpdateItemQuantityCompleteDelegate), Z_Construct_UDelegateFunction_ABP_200508_UpdateItemQuantityCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_UpdateItemQuantityCompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_UpdateItemQuantityCompleteDelegate_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ReserveUpdateItemQuantitData_Inner = { "m_ReserveUpdateItemQuantitData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPossessedItemSaveData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ReserveUpdateItemQuantitData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPossessedItemManager" },
		{ "ModuleRelativePath", "Public/ELPossessedItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ReserveUpdateItemQuantitData = { "m_ReserveUpdateItemQuantitData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPossessedItemManager, m_ReserveUpdateItemQuantitData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ReserveUpdateItemQuantitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ReserveUpdateItemQuantitData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ItemInfoMap_ValueProp = { "m_ItemInfoMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FELRefPossessedItemInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ItemInfoMap_Key_KeyProp = { "m_ItemInfoMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ItemInfoMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPossessedItemManager" },
		{ "ModuleRelativePath", "Public/ELPossessedItemManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ItemInfoMap = { "m_ItemInfoMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELPossessedItemManager, m_ItemInfoMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ItemInfoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ItemInfoMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELPossessedItemManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ItemParamList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ItemParamList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_UpdateItemQuantityCompleteDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ReserveUpdateItemQuantitData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ReserveUpdateItemQuantitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ItemInfoMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ItemInfoMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELPossessedItemManager_Statics::NewProp_m_ItemInfoMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELPossessedItemManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELPossessedItemManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELPossessedItemManager_Statics::ClassParams = {
		&UELPossessedItemManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELPossessedItemManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELPossessedItemManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELPossessedItemManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELPossessedItemManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELPossessedItemManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELPossessedItemManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELPossessedItemManager, 2336345723);
	template<> ABP_200508_API UClass* StaticClass<UELPossessedItemManager>()
	{
		return UELPossessedItemManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELPossessedItemManager(Z_Construct_UClass_UELPossessedItemManager, &UELPossessedItemManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELPossessedItemManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELPossessedItemManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
