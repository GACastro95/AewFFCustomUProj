// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_ConsumeItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_ConsumeItem() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_ConsumeItem_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_ConsumeItem();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_ConsumeItem::execGetConsumeItemResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FYGS2Response_ConsumeItem*)Z_Param__Result=P_THIS->GetConsumeItemResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_ConsumeItem::execRecords)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FYGS2Record_ConsumeItem>*)Z_Param__Result=P_THIS->Records();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_ConsumeItem::execSetConsumeItemData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sContentKind);
		P_GET_PROPERTY(FStrProperty,Z_Param__strContentID);
		P_GET_PROPERTY(FIntProperty,Z_Param__sContentNum_Sub);
		P_GET_PROPERTY(FIntProperty,Z_Param__sContentNum_Before);
		P_GET_PROPERTY(FIntProperty,Z_Param__sContentNum_After);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConsumeItemData(Z_Param__sContentKind,Z_Param__strContentID,Z_Param__sContentNum_Sub,Z_Param__sContentNum_Before,Z_Param__sContentNum_After);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_ConsumeItem::execSetFindMode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sContentKind);
		P_GET_PROPERTY(FStrProperty,Z_Param__strContentID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFindMode(Z_Param__sContentKind,Z_Param__strContentID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_ConsumeItem::execSetListMode)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sOffset);
		P_GET_PROPERTY(FIntProperty,Z_Param__sLimit);
		P_GET_PROPERTY(FIntProperty,Z_Param__sContentKind);
		P_GET_PROPERTY(FStrProperty,Z_Param__strContentID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetListMode(Z_Param__sOffset,Z_Param__sLimit,Z_Param__sContentKind,Z_Param__strContentID);
		P_NATIVE_END;
	}
	void UYGS2Req_ConsumeItem::StaticRegisterNativesUYGS2Req_ConsumeItem()
	{
		UClass* Class = UYGS2Req_ConsumeItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConsumeItemResult", &UYGS2Req_ConsumeItem::execGetConsumeItemResult },
			{ "Records", &UYGS2Req_ConsumeItem::execRecords },
			{ "SetConsumeItemData", &UYGS2Req_ConsumeItem::execSetConsumeItemData },
			{ "SetFindMode", &UYGS2Req_ConsumeItem::execSetFindMode },
			{ "SetListMode", &UYGS2Req_ConsumeItem::execSetListMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_ConsumeItem_GetConsumeItemResult_Statics
	{
		struct YGS2Req_ConsumeItem_eventGetConsumeItemResult_Parms
		{
			FYGS2Response_ConsumeItem ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_GetConsumeItemResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ConsumeItem_eventGetConsumeItemResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FYGS2Response_ConsumeItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_ConsumeItem_GetConsumeItemResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ConsumeItem_GetConsumeItemResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_ConsumeItem_GetConsumeItemResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_ConsumeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_GetConsumeItemResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_ConsumeItem, nullptr, "GetConsumeItemResult", nullptr, nullptr, sizeof(YGS2Req_ConsumeItem_eventGetConsumeItemResult_Parms), Z_Construct_UFunction_UYGS2Req_ConsumeItem_GetConsumeItemResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ConsumeItem_GetConsumeItemResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_ConsumeItem_GetConsumeItemResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ConsumeItem_GetConsumeItemResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_ConsumeItem_GetConsumeItemResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_ConsumeItem_GetConsumeItemResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_ConsumeItem_Records_Statics
	{
		struct YGS2Req_ConsumeItem_eventRecords_Parms
		{
			TArray<FYGS2Record_ConsumeItem> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_Records_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FYGS2Record_ConsumeItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_Records_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ConsumeItem_eventRecords_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_ConsumeItem_Records_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ConsumeItem_Records_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ConsumeItem_Records_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_ConsumeItem_Records_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_ConsumeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_Records_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_ConsumeItem, nullptr, "Records", nullptr, nullptr, sizeof(YGS2Req_ConsumeItem_eventRecords_Parms), Z_Construct_UFunction_UYGS2Req_ConsumeItem_Records_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ConsumeItem_Records_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_ConsumeItem_Records_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ConsumeItem_Records_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_ConsumeItem_Records()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_ConsumeItem_Records_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics
	{
		struct YGS2Req_ConsumeItem_eventSetConsumeItemData_Parms
		{
			int32 _sContentKind;
			FString _strContentID;
			int32 _sContentNum_Sub;
			int32 _sContentNum_Before;
			int32 _sContentNum_After;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sContentKind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strContentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strContentID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sContentNum_Sub;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sContentNum_Before;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sContentNum_After;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::NewProp__sContentKind = { "_sContentKind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ConsumeItem_eventSetConsumeItemData_Parms, _sContentKind), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::NewProp__strContentID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::NewProp__strContentID = { "_strContentID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ConsumeItem_eventSetConsumeItemData_Parms, _strContentID), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::NewProp__strContentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::NewProp__strContentID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::NewProp__sContentNum_Sub = { "_sContentNum_Sub", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ConsumeItem_eventSetConsumeItemData_Parms, _sContentNum_Sub), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::NewProp__sContentNum_Before = { "_sContentNum_Before", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ConsumeItem_eventSetConsumeItemData_Parms, _sContentNum_Before), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::NewProp__sContentNum_After = { "_sContentNum_After", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ConsumeItem_eventSetConsumeItemData_Parms, _sContentNum_After), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::NewProp__sContentKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::NewProp__strContentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::NewProp__sContentNum_Sub,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::NewProp__sContentNum_Before,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::NewProp__sContentNum_After,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_ConsumeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_ConsumeItem, nullptr, "SetConsumeItemData", nullptr, nullptr, sizeof(YGS2Req_ConsumeItem_eventSetConsumeItemData_Parms), Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode_Statics
	{
		struct YGS2Req_ConsumeItem_eventSetFindMode_Parms
		{
			int32 _sContentKind;
			FString _strContentID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sContentKind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strContentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strContentID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode_Statics::NewProp__sContentKind = { "_sContentKind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ConsumeItem_eventSetFindMode_Parms, _sContentKind), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode_Statics::NewProp__strContentID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode_Statics::NewProp__strContentID = { "_strContentID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ConsumeItem_eventSetFindMode_Parms, _strContentID), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode_Statics::NewProp__strContentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode_Statics::NewProp__strContentID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode_Statics::NewProp__sContentKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode_Statics::NewProp__strContentID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_ConsumeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_ConsumeItem, nullptr, "SetFindMode", nullptr, nullptr, sizeof(YGS2Req_ConsumeItem_eventSetFindMode_Parms), Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics
	{
		struct YGS2Req_ConsumeItem_eventSetListMode_Parms
		{
			int32 _sOffset;
			int32 _sLimit;
			int32 _sContentKind;
			FString _strContentID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sOffset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sLimit;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sContentKind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strContentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strContentID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::NewProp__sOffset = { "_sOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ConsumeItem_eventSetListMode_Parms, _sOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::NewProp__sLimit = { "_sLimit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ConsumeItem_eventSetListMode_Parms, _sLimit), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::NewProp__sContentKind = { "_sContentKind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ConsumeItem_eventSetListMode_Parms, _sContentKind), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::NewProp__strContentID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::NewProp__strContentID = { "_strContentID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_ConsumeItem_eventSetListMode_Parms, _strContentID), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::NewProp__strContentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::NewProp__strContentID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::NewProp__sOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::NewProp__sLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::NewProp__sContentKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::NewProp__strContentID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_ConsumeItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_ConsumeItem, nullptr, "SetListMode", nullptr, nullptr, sizeof(YGS2Req_ConsumeItem_eventSetListMode_Parms), Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_ConsumeItem_NoRegister()
	{
		return UYGS2Req_ConsumeItem::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_ConsumeItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_ConsumeItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_ConsumeItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_ConsumeItem_GetConsumeItemResult, "GetConsumeItemResult" }, // 3094875215
		{ &Z_Construct_UFunction_UYGS2Req_ConsumeItem_Records, "Records" }, // 1535557044
		{ &Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetConsumeItemData, "SetConsumeItemData" }, // 3151805961
		{ &Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetFindMode, "SetFindMode" }, // 1321386114
		{ &Z_Construct_UFunction_UYGS2Req_ConsumeItem_SetListMode, "SetListMode" }, // 1655172755
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_ConsumeItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_ConsumeItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_ConsumeItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_ConsumeItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_ConsumeItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_ConsumeItem_Statics::ClassParams = {
		&UYGS2Req_ConsumeItem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_ConsumeItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_ConsumeItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_ConsumeItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_ConsumeItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_ConsumeItem, 775407346);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_ConsumeItem>()
	{
		return UYGS2Req_ConsumeItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_ConsumeItem(Z_Construct_UClass_UYGS2Req_ConsumeItem, &UYGS2Req_ConsumeItem::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_ConsumeItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_ConsumeItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
