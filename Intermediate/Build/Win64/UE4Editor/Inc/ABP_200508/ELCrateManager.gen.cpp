// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCrateManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCrateManager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCrateManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCrateManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCrateItemStateParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCrateItemParam();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_CrateEjectingCompleteDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FEmissionItemParam();
// End Cross Module References
	DEFINE_FUNCTION(UELCrateManager::execGetAllEjectItemParamList)
	{
		P_GET_TARRAY_REF(FCrateItemStateParam,Z_Param_Out__outList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllEjectItemParamList(Z_Param_Out__outList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCrateManager::execGetEjectedItemsRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetEjectedItemsRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCrateManager::execGetRemainCrateItemNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRemainCrateItemNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCrateManager::execOnUnlockableItemPurchased)
	{
		P_GET_UBOOL(Z_Param_Successed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnlockableItemPurchased(Z_Param_Successed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCrateManager::execOnUpdatePossessedItem)
	{
		P_GET_UBOOL(Z_Param_Successed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdatePossessedItem(Z_Param_Successed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCrateManager::execSetupCrateDataTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupCrateDataTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCrateManager::execStartEjectingItems)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__ejectCountNum);
		P_GET_TARRAY_REF(FCrateItemParam,Z_Param_Out__resultItemList);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_OnResultDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartEjectingItems(Z_Param__ejectCountNum,Z_Param_Out__resultItemList,FCrateEjectingCompleteDelegate(Z_Param_OnResultDelegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCrateManager::execUpdateEjectedItemData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateEjectedItemData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCrateManager::execUpdateRandomSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateRandomSeed();
		P_NATIVE_END;
	}
	void UELCrateManager::StaticRegisterNativesUELCrateManager()
	{
		UClass* Class = UELCrateManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllEjectItemParamList", &UELCrateManager::execGetAllEjectItemParamList },
			{ "GetEjectedItemsRate", &UELCrateManager::execGetEjectedItemsRate },
			{ "GetRemainCrateItemNum", &UELCrateManager::execGetRemainCrateItemNum },
			{ "OnUnlockableItemPurchased", &UELCrateManager::execOnUnlockableItemPurchased },
			{ "OnUpdatePossessedItem", &UELCrateManager::execOnUpdatePossessedItem },
			{ "SetupCrateDataTable", &UELCrateManager::execSetupCrateDataTable },
			{ "StartEjectingItems", &UELCrateManager::execStartEjectingItems },
			{ "UpdateEjectedItemData", &UELCrateManager::execUpdateEjectedItemData },
			{ "UpdateRandomSeed", &UELCrateManager::execUpdateRandomSeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCrateManager_GetAllEjectItemParamList_Statics
	{
		struct ELCrateManager_eventGetAllEjectItemParamList_Parms
		{
			TArray<FCrateItemStateParam> _outList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__outList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCrateManager_GetAllEjectItemParamList_Statics::NewProp__outList_Inner = { "_outList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCrateItemStateParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCrateManager_GetAllEjectItemParamList_Statics::NewProp__outList = { "_outList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCrateManager_eventGetAllEjectItemParamList_Parms, _outList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCrateManager_GetAllEjectItemParamList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCrateManager_GetAllEjectItemParamList_Statics::NewProp__outList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCrateManager_GetAllEjectItemParamList_Statics::NewProp__outList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCrateManager_GetAllEjectItemParamList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCrateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCrateManager_GetAllEjectItemParamList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCrateManager, nullptr, "GetAllEjectItemParamList", nullptr, nullptr, sizeof(ELCrateManager_eventGetAllEjectItemParamList_Parms), Z_Construct_UFunction_UELCrateManager_GetAllEjectItemParamList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCrateManager_GetAllEjectItemParamList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCrateManager_GetAllEjectItemParamList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCrateManager_GetAllEjectItemParamList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCrateManager_GetAllEjectItemParamList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCrateManager_GetAllEjectItemParamList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCrateManager_GetEjectedItemsRate_Statics
	{
		struct ELCrateManager_eventGetEjectedItemsRate_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCrateManager_GetEjectedItemsRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCrateManager_eventGetEjectedItemsRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCrateManager_GetEjectedItemsRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCrateManager_GetEjectedItemsRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCrateManager_GetEjectedItemsRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCrateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCrateManager_GetEjectedItemsRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCrateManager, nullptr, "GetEjectedItemsRate", nullptr, nullptr, sizeof(ELCrateManager_eventGetEjectedItemsRate_Parms), Z_Construct_UFunction_UELCrateManager_GetEjectedItemsRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCrateManager_GetEjectedItemsRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCrateManager_GetEjectedItemsRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCrateManager_GetEjectedItemsRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCrateManager_GetEjectedItemsRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCrateManager_GetEjectedItemsRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCrateManager_GetRemainCrateItemNum_Statics
	{
		struct ELCrateManager_eventGetRemainCrateItemNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCrateManager_GetRemainCrateItemNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCrateManager_eventGetRemainCrateItemNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCrateManager_GetRemainCrateItemNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCrateManager_GetRemainCrateItemNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCrateManager_GetRemainCrateItemNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCrateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCrateManager_GetRemainCrateItemNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCrateManager, nullptr, "GetRemainCrateItemNum", nullptr, nullptr, sizeof(ELCrateManager_eventGetRemainCrateItemNum_Parms), Z_Construct_UFunction_UELCrateManager_GetRemainCrateItemNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCrateManager_GetRemainCrateItemNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCrateManager_GetRemainCrateItemNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCrateManager_GetRemainCrateItemNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCrateManager_GetRemainCrateItemNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCrateManager_GetRemainCrateItemNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCrateManager_OnUnlockableItemPurchased_Statics
	{
		struct ELCrateManager_eventOnUnlockableItemPurchased_Parms
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
	void Z_Construct_UFunction_UELCrateManager_OnUnlockableItemPurchased_Statics::NewProp_Successed_SetBit(void* Obj)
	{
		((ELCrateManager_eventOnUnlockableItemPurchased_Parms*)Obj)->Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCrateManager_OnUnlockableItemPurchased_Statics::NewProp_Successed = { "Successed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCrateManager_eventOnUnlockableItemPurchased_Parms), &Z_Construct_UFunction_UELCrateManager_OnUnlockableItemPurchased_Statics::NewProp_Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCrateManager_OnUnlockableItemPurchased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCrateManager_OnUnlockableItemPurchased_Statics::NewProp_Successed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCrateManager_OnUnlockableItemPurchased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCrateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCrateManager_OnUnlockableItemPurchased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCrateManager, nullptr, "OnUnlockableItemPurchased", nullptr, nullptr, sizeof(ELCrateManager_eventOnUnlockableItemPurchased_Parms), Z_Construct_UFunction_UELCrateManager_OnUnlockableItemPurchased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCrateManager_OnUnlockableItemPurchased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCrateManager_OnUnlockableItemPurchased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCrateManager_OnUnlockableItemPurchased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCrateManager_OnUnlockableItemPurchased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCrateManager_OnUnlockableItemPurchased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCrateManager_OnUpdatePossessedItem_Statics
	{
		struct ELCrateManager_eventOnUpdatePossessedItem_Parms
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
	void Z_Construct_UFunction_UELCrateManager_OnUpdatePossessedItem_Statics::NewProp_Successed_SetBit(void* Obj)
	{
		((ELCrateManager_eventOnUpdatePossessedItem_Parms*)Obj)->Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCrateManager_OnUpdatePossessedItem_Statics::NewProp_Successed = { "Successed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCrateManager_eventOnUpdatePossessedItem_Parms), &Z_Construct_UFunction_UELCrateManager_OnUpdatePossessedItem_Statics::NewProp_Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCrateManager_OnUpdatePossessedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCrateManager_OnUpdatePossessedItem_Statics::NewProp_Successed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCrateManager_OnUpdatePossessedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCrateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCrateManager_OnUpdatePossessedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCrateManager, nullptr, "OnUpdatePossessedItem", nullptr, nullptr, sizeof(ELCrateManager_eventOnUpdatePossessedItem_Parms), Z_Construct_UFunction_UELCrateManager_OnUpdatePossessedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCrateManager_OnUpdatePossessedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCrateManager_OnUpdatePossessedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCrateManager_OnUpdatePossessedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCrateManager_OnUpdatePossessedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCrateManager_OnUpdatePossessedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCrateManager_SetupCrateDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCrateManager_SetupCrateDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCrateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCrateManager_SetupCrateDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCrateManager, nullptr, "SetupCrateDataTable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCrateManager_SetupCrateDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCrateManager_SetupCrateDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCrateManager_SetupCrateDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCrateManager_SetupCrateDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics
	{
		struct ELCrateManager_eventStartEjectingItems_Parms
		{
			int32 _ejectCountNum;
			TArray<FCrateItemParam> _resultItemList;
			FScriptDelegate OnResultDelegate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ejectCountNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__ejectCountNum;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__resultItemList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__resultItemList;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnResultDelegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::NewProp__ejectCountNum_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::NewProp__ejectCountNum = { "_ejectCountNum", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCrateManager_eventStartEjectingItems_Parms, _ejectCountNum), METADATA_PARAMS(Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::NewProp__ejectCountNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::NewProp__ejectCountNum_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::NewProp__resultItemList_Inner = { "_resultItemList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCrateItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::NewProp__resultItemList = { "_resultItemList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCrateManager_eventStartEjectingItems_Parms, _resultItemList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::NewProp_OnResultDelegate = { "OnResultDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCrateManager_eventStartEjectingItems_Parms, OnResultDelegate), Z_Construct_UDelegateFunction_ABP_200508_CrateEjectingCompleteDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCrateManager_eventStartEjectingItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCrateManager_eventStartEjectingItems_Parms), &Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::NewProp__ejectCountNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::NewProp__resultItemList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::NewProp__resultItemList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::NewProp_OnResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCrateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCrateManager, nullptr, "StartEjectingItems", nullptr, nullptr, sizeof(ELCrateManager_eventStartEjectingItems_Parms), Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCrateManager_StartEjectingItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCrateManager_StartEjectingItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCrateManager_UpdateEjectedItemData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCrateManager_UpdateEjectedItemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCrateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCrateManager_UpdateEjectedItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCrateManager, nullptr, "UpdateEjectedItemData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCrateManager_UpdateEjectedItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCrateManager_UpdateEjectedItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCrateManager_UpdateEjectedItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCrateManager_UpdateEjectedItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCrateManager_UpdateRandomSeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCrateManager_UpdateRandomSeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCrateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCrateManager_UpdateRandomSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCrateManager, nullptr, "UpdateRandomSeed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCrateManager_UpdateRandomSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCrateManager_UpdateRandomSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCrateManager_UpdateRandomSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCrateManager_UpdateRandomSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCrateManager_NoRegister()
	{
		return UELCrateManager::StaticClass();
	}
	struct Z_Construct_UClass_UELCrateManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CrateItemDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_CrateItemDataTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_CrateItemStateMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_CrateItemStateMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CrateItemStateMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_CrateItemStateMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_CrateEmissionItemMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_CrateEmissionItemMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CrateEmissionItemMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_CrateEmissionItemMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_CrateEjectedItemList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CrateEjectedItemList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_CrateEjectedItemList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_DebugForceEjectItemList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DebugForceEjectItemList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_DebugForceEjectItemList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCrateManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCrateManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCrateManager_GetAllEjectItemParamList, "GetAllEjectItemParamList" }, // 2872846506
		{ &Z_Construct_UFunction_UELCrateManager_GetEjectedItemsRate, "GetEjectedItemsRate" }, // 4219779160
		{ &Z_Construct_UFunction_UELCrateManager_GetRemainCrateItemNum, "GetRemainCrateItemNum" }, // 3374364433
		{ &Z_Construct_UFunction_UELCrateManager_OnUnlockableItemPurchased, "OnUnlockableItemPurchased" }, // 164781104
		{ &Z_Construct_UFunction_UELCrateManager_OnUpdatePossessedItem, "OnUpdatePossessedItem" }, // 4145883534
		{ &Z_Construct_UFunction_UELCrateManager_SetupCrateDataTable, "SetupCrateDataTable" }, // 2299252361
		{ &Z_Construct_UFunction_UELCrateManager_StartEjectingItems, "StartEjectingItems" }, // 584957896
		{ &Z_Construct_UFunction_UELCrateManager_UpdateEjectedItemData, "UpdateEjectedItemData" }, // 1841632300
		{ &Z_Construct_UFunction_UELCrateManager_UpdateRandomSeed, "UpdateRandomSeed" }, // 4125862807
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCrateManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCrateManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCrateManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateItemDataTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCrateManager" },
		{ "ModuleRelativePath", "Public/ELCrateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateItemDataTable = { "m_CrateItemDataTable", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCrateManager, m_CrateItemDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateItemDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateItemDataTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateItemStateMap_ValueProp = { "m_CrateItemStateMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCrateItemStateParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateItemStateMap_Key_KeyProp = { "m_CrateItemStateMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateItemStateMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCrateManager" },
		{ "ModuleRelativePath", "Public/ELCrateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateItemStateMap = { "m_CrateItemStateMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCrateManager, m_CrateItemStateMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateItemStateMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateItemStateMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateEmissionItemMap_ValueProp = { "m_CrateEmissionItemMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEmissionItemParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateEmissionItemMap_Key_KeyProp = { "m_CrateEmissionItemMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateEmissionItemMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCrateManager" },
		{ "ModuleRelativePath", "Public/ELCrateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateEmissionItemMap = { "m_CrateEmissionItemMap", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCrateManager, m_CrateEmissionItemMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateEmissionItemMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateEmissionItemMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateEjectedItemList_Inner = { "m_CrateEjectedItemList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCrateItemStateParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateEjectedItemList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCrateManager" },
		{ "ModuleRelativePath", "Public/ELCrateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateEjectedItemList = { "m_CrateEjectedItemList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCrateManager, m_CrateEjectedItemList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateEjectedItemList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateEjectedItemList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_DebugForceEjectItemList_Inner = { "m_DebugForceEjectItemList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCrateItemStateParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_DebugForceEjectItemList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCrateManager" },
		{ "ModuleRelativePath", "Public/ELCrateManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_DebugForceEjectItemList = { "m_DebugForceEjectItemList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCrateManager, m_DebugForceEjectItemList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_DebugForceEjectItemList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_DebugForceEjectItemList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCrateManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateItemDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateItemStateMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateItemStateMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateItemStateMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateEmissionItemMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateEmissionItemMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateEmissionItemMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateEjectedItemList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_CrateEjectedItemList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_DebugForceEjectItemList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCrateManager_Statics::NewProp_m_DebugForceEjectItemList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCrateManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCrateManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCrateManager_Statics::ClassParams = {
		&UELCrateManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELCrateManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCrateManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCrateManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCrateManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCrateManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCrateManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCrateManager, 278123329);
	template<> ABP_200508_API UClass* StaticClass<UELCrateManager>()
	{
		return UELCrateManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCrateManager(Z_Construct_UClass_UELCrateManager, &UELCrateManager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCrateManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCrateManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
