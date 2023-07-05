// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_PurchaseHistory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_PurchaseHistory() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_PurchaseHistory_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_PurchaseHistory();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_PurchaseHistory::execGetAEWGoldAdd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAEWGoldAdd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_PurchaseHistory::execGetPurchaseHistoryResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FYGS2Response_PurchaseHistory*)Z_Param__Result=P_THIS->GetPurchaseHistoryResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_PurchaseHistory::execRecords)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FYGS2Record_PurchaseHistory>*)Z_Param__Result=P_THIS->Records();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_PurchaseHistory::execSetFindMode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strPlatform);
		P_GET_PROPERTY(FStrProperty,Z_Param__strTransactionID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFindMode(Z_Param__strPlatform,Z_Param__strTransactionID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_PurchaseHistory::execSetListMode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sOffset);
		P_GET_PROPERTY(FIntProperty,Z_Param__sLimit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetListMode(Z_Param__sOffset,Z_Param__sLimit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_PurchaseHistory::execSetPurchaseData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strPlatform);
		P_GET_PROPERTY(FStrProperty,Z_Param__strTransactionID);
		P_GET_PROPERTY(FStrProperty,Z_Param__strShopItemID);
		P_GET_PROPERTY(FIntProperty,Z_Param__sGoldAdd);
		P_GET_PROPERTY(FIntProperty,Z_Param__sGoldBefore);
		P_GET_PROPERTY(FIntProperty,Z_Param__sGoldAfter);
		P_GET_PROPERTY(FIntProperty,Z_Param__sCurrencyValue);
		P_GET_PROPERTY(FStrProperty,Z_Param__strCurrencyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPurchaseData(Z_Param__strPlatform,Z_Param__strTransactionID,Z_Param__strShopItemID,Z_Param__sGoldAdd,Z_Param__sGoldBefore,Z_Param__sGoldAfter,Z_Param__sCurrencyValue,Z_Param__strCurrencyType);
		P_NATIVE_END;
	}
	void UYGS2Req_PurchaseHistory::StaticRegisterNativesUYGS2Req_PurchaseHistory()
	{
		UClass* Class = UYGS2Req_PurchaseHistory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAEWGoldAdd", &UYGS2Req_PurchaseHistory::execGetAEWGoldAdd },
			{ "GetPurchaseHistoryResult", &UYGS2Req_PurchaseHistory::execGetPurchaseHistoryResult },
			{ "Records", &UYGS2Req_PurchaseHistory::execRecords },
			{ "SetFindMode", &UYGS2Req_PurchaseHistory::execSetFindMode },
			{ "SetListMode", &UYGS2Req_PurchaseHistory::execSetListMode },
			{ "SetPurchaseData", &UYGS2Req_PurchaseHistory::execSetPurchaseData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetAEWGoldAdd_Statics
	{
		struct YGS2Req_PurchaseHistory_eventGetAEWGoldAdd_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetAEWGoldAdd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_PurchaseHistory_eventGetAEWGoldAdd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetAEWGoldAdd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetAEWGoldAdd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetAEWGoldAdd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetAEWGoldAdd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_PurchaseHistory, nullptr, "GetAEWGoldAdd", nullptr, nullptr, sizeof(YGS2Req_PurchaseHistory_eventGetAEWGoldAdd_Parms), Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetAEWGoldAdd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetAEWGoldAdd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetAEWGoldAdd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetAEWGoldAdd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetAEWGoldAdd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetAEWGoldAdd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetPurchaseHistoryResult_Statics
	{
		struct YGS2Req_PurchaseHistory_eventGetPurchaseHistoryResult_Parms
		{
			FYGS2Response_PurchaseHistory ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetPurchaseHistoryResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_PurchaseHistory_eventGetPurchaseHistoryResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FYGS2Response_PurchaseHistory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetPurchaseHistoryResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetPurchaseHistoryResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetPurchaseHistoryResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetPurchaseHistoryResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_PurchaseHistory, nullptr, "GetPurchaseHistoryResult", nullptr, nullptr, sizeof(YGS2Req_PurchaseHistory_eventGetPurchaseHistoryResult_Parms), Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetPurchaseHistoryResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetPurchaseHistoryResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetPurchaseHistoryResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetPurchaseHistoryResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetPurchaseHistoryResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetPurchaseHistoryResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_PurchaseHistory_Records_Statics
	{
		struct YGS2Req_PurchaseHistory_eventRecords_Parms
		{
			TArray<FYGS2Record_PurchaseHistory> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_Records_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FYGS2Record_PurchaseHistory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_Records_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_PurchaseHistory_eventRecords_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_PurchaseHistory_Records_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_PurchaseHistory_Records_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_PurchaseHistory_Records_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_PurchaseHistory_Records_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_Records_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_PurchaseHistory, nullptr, "Records", nullptr, nullptr, sizeof(YGS2Req_PurchaseHistory_eventRecords_Parms), Z_Construct_UFunction_UYGS2Req_PurchaseHistory_Records_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_Records_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_Records_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_Records_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_PurchaseHistory_Records()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_PurchaseHistory_Records_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics
	{
		struct YGS2Req_PurchaseHistory_eventSetFindMode_Parms
		{
			FString _strPlatform;
			FString _strTransactionID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strTransactionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strTransactionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::NewProp__strPlatform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::NewProp__strPlatform = { "_strPlatform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_PurchaseHistory_eventSetFindMode_Parms, _strPlatform), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::NewProp__strPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::NewProp__strPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::NewProp__strTransactionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::NewProp__strTransactionID = { "_strTransactionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_PurchaseHistory_eventSetFindMode_Parms, _strTransactionID), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::NewProp__strTransactionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::NewProp__strTransactionID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::NewProp__strPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::NewProp__strTransactionID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_PurchaseHistory, nullptr, "SetFindMode", nullptr, nullptr, sizeof(YGS2Req_PurchaseHistory_eventSetFindMode_Parms), Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetListMode_Statics
	{
		struct YGS2Req_PurchaseHistory_eventSetListMode_Parms
		{
			int32 _sOffset;
			int32 _sLimit;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sOffset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetListMode_Statics::NewProp__sOffset = { "_sOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_PurchaseHistory_eventSetListMode_Parms, _sOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetListMode_Statics::NewProp__sLimit = { "_sLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_PurchaseHistory_eventSetListMode_Parms, _sLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetListMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetListMode_Statics::NewProp__sOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetListMode_Statics::NewProp__sLimit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetListMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetListMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_PurchaseHistory, nullptr, "SetListMode", nullptr, nullptr, sizeof(YGS2Req_PurchaseHistory_eventSetListMode_Parms), Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetListMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetListMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetListMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetListMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetListMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetListMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics
	{
		struct YGS2Req_PurchaseHistory_eventSetPurchaseData_Parms
		{
			FString _strPlatform;
			FString _strTransactionID;
			FString _strShopItemID;
			int32 _sGoldAdd;
			int32 _sGoldBefore;
			int32 _sGoldAfter;
			int32 _sCurrencyValue;
			FString _strCurrencyType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strTransactionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strTransactionID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strShopItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strShopItemID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sGoldAdd;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sGoldBefore;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sGoldAfter;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sCurrencyValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strCurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strCurrencyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strPlatform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strPlatform = { "_strPlatform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_PurchaseHistory_eventSetPurchaseData_Parms, _strPlatform), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strTransactionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strTransactionID = { "_strTransactionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_PurchaseHistory_eventSetPurchaseData_Parms, _strTransactionID), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strTransactionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strTransactionID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strShopItemID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strShopItemID = { "_strShopItemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_PurchaseHistory_eventSetPurchaseData_Parms, _strShopItemID), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strShopItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strShopItemID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__sGoldAdd = { "_sGoldAdd", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_PurchaseHistory_eventSetPurchaseData_Parms, _sGoldAdd), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__sGoldBefore = { "_sGoldBefore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_PurchaseHistory_eventSetPurchaseData_Parms, _sGoldBefore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__sGoldAfter = { "_sGoldAfter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_PurchaseHistory_eventSetPurchaseData_Parms, _sGoldAfter), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__sCurrencyValue = { "_sCurrencyValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_PurchaseHistory_eventSetPurchaseData_Parms, _sCurrencyValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strCurrencyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strCurrencyType = { "_strCurrencyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_PurchaseHistory_eventSetPurchaseData_Parms, _strCurrencyType), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strCurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strCurrencyType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strTransactionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strShopItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__sGoldAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__sGoldBefore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__sGoldAfter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__sCurrencyValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::NewProp__strCurrencyType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_PurchaseHistory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_PurchaseHistory, nullptr, "SetPurchaseData", nullptr, nullptr, sizeof(YGS2Req_PurchaseHistory_eventSetPurchaseData_Parms), Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_PurchaseHistory_NoRegister()
	{
		return UYGS2Req_PurchaseHistory::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_PurchaseHistory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_PurchaseHistory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_PurchaseHistory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetAEWGoldAdd, "GetAEWGoldAdd" }, // 2099209089
		{ &Z_Construct_UFunction_UYGS2Req_PurchaseHistory_GetPurchaseHistoryResult, "GetPurchaseHistoryResult" }, // 296238534
		{ &Z_Construct_UFunction_UYGS2Req_PurchaseHistory_Records, "Records" }, // 3728238258
		{ &Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetFindMode, "SetFindMode" }, // 2989332900
		{ &Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetListMode, "SetListMode" }, // 157848067
		{ &Z_Construct_UFunction_UYGS2Req_PurchaseHistory_SetPurchaseData, "SetPurchaseData" }, // 3653503977
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_PurchaseHistory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_PurchaseHistory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_PurchaseHistory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_PurchaseHistory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_PurchaseHistory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_PurchaseHistory_Statics::ClassParams = {
		&UYGS2Req_PurchaseHistory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_PurchaseHistory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_PurchaseHistory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_PurchaseHistory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_PurchaseHistory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_PurchaseHistory, 3200385696);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_PurchaseHistory>()
	{
		return UYGS2Req_PurchaseHistory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_PurchaseHistory(Z_Construct_UClass_UYGS2Req_PurchaseHistory, &UYGS2Req_PurchaseHistory::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_PurchaseHistory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_PurchaseHistory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
