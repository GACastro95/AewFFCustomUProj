// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Req_UserStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Req_UserStats() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_UserStats_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2Req_UserStats();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2Req_UserStats::execGetKind)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetKind();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_UserStats::execGetLastListNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLastListNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_UserStats::execGetProductUserID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetProductUserID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_UserStats::execGetStructID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStructID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_UserStats::execGetUpdateItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetUpdateItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_UserStats::execRecords)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->Records();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_UserStats::execSetGetCondition)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_GET_PROPERTY(FStrProperty,Z_Param__strKind);
		P_GET_TARRAY_REF(FString,Z_Param_Out__cTargets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGetCondition(Z_Param__strProductUserID,Z_Param__strKind,Z_Param_Out__cTargets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_UserStats::execSetRemoveKeys)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strKind);
		P_GET_TARRAY_REF(FString,Z_Param_Out__cRemoveKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRemoveKeys(Z_Param__strKind,Z_Param_Out__cRemoveKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2Req_UserStats::execSetUpdateItems)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strKind);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out__cUpdateItems);
		P_GET_PROPERTY(FStrProperty,Z_Param__strStructID);
		P_GET_UBOOL(Z_Param__bSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpdateItems(Z_Param__strKind,Z_Param_Out__cUpdateItems,Z_Param__strStructID,Z_Param__bSave);
		P_NATIVE_END;
	}
	void UYGS2Req_UserStats::StaticRegisterNativesUYGS2Req_UserStats()
	{
		UClass* Class = UYGS2Req_UserStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetKind", &UYGS2Req_UserStats::execGetKind },
			{ "GetLastListNum", &UYGS2Req_UserStats::execGetLastListNum },
			{ "GetProductUserID", &UYGS2Req_UserStats::execGetProductUserID },
			{ "GetStructID", &UYGS2Req_UserStats::execGetStructID },
			{ "GetUpdateItems", &UYGS2Req_UserStats::execGetUpdateItems },
			{ "Records", &UYGS2Req_UserStats::execRecords },
			{ "SetGetCondition", &UYGS2Req_UserStats::execSetGetCondition },
			{ "SetRemoveKeys", &UYGS2Req_UserStats::execSetRemoveKeys },
			{ "SetUpdateItems", &UYGS2Req_UserStats::execSetUpdateItems },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2Req_UserStats_GetKind_Statics
	{
		struct YGS2Req_UserStats_eventGetKind_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_GetKind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_UserStats_eventGetKind_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_UserStats_GetKind_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_GetKind_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_UserStats_GetKind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_UserStats_GetKind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_UserStats, nullptr, "GetKind", nullptr, nullptr, sizeof(YGS2Req_UserStats_eventGetKind_Parms), Z_Construct_UFunction_UYGS2Req_UserStats_GetKind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_GetKind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_UserStats_GetKind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_GetKind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_UserStats_GetKind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_UserStats_GetKind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_UserStats_GetLastListNum_Statics
	{
		struct YGS2Req_UserStats_eventGetLastListNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_GetLastListNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_UserStats_eventGetLastListNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_UserStats_GetLastListNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_GetLastListNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_UserStats_GetLastListNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_UserStats_GetLastListNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_UserStats, nullptr, "GetLastListNum", nullptr, nullptr, sizeof(YGS2Req_UserStats_eventGetLastListNum_Parms), Z_Construct_UFunction_UYGS2Req_UserStats_GetLastListNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_GetLastListNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_UserStats_GetLastListNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_GetLastListNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_UserStats_GetLastListNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_UserStats_GetLastListNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_UserStats_GetProductUserID_Statics
	{
		struct YGS2Req_UserStats_eventGetProductUserID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_GetProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_UserStats_eventGetProductUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_UserStats_GetProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_GetProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_UserStats_GetProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_UserStats_GetProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_UserStats, nullptr, "GetProductUserID", nullptr, nullptr, sizeof(YGS2Req_UserStats_eventGetProductUserID_Parms), Z_Construct_UFunction_UYGS2Req_UserStats_GetProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_GetProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_UserStats_GetProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_GetProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_UserStats_GetProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_UserStats_GetProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_UserStats_GetStructID_Statics
	{
		struct YGS2Req_UserStats_eventGetStructID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_GetStructID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_UserStats_eventGetStructID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_UserStats_GetStructID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_GetStructID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_UserStats_GetStructID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_UserStats_GetStructID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_UserStats, nullptr, "GetStructID", nullptr, nullptr, sizeof(YGS2Req_UserStats_eventGetStructID_Parms), Z_Construct_UFunction_UYGS2Req_UserStats_GetStructID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_GetStructID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_UserStats_GetStructID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_GetStructID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_UserStats_GetStructID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_UserStats_GetStructID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_UserStats_GetUpdateItems_Statics
	{
		struct YGS2Req_UserStats_eventGetUpdateItems_Parms
		{
			TMap<FString,FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_GetUpdateItems_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_GetUpdateItems_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_GetUpdateItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_UserStats_eventGetUpdateItems_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_UserStats_GetUpdateItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_GetUpdateItems_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_GetUpdateItems_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_GetUpdateItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_UserStats_GetUpdateItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_UserStats_GetUpdateItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_UserStats, nullptr, "GetUpdateItems", nullptr, nullptr, sizeof(YGS2Req_UserStats_eventGetUpdateItems_Parms), Z_Construct_UFunction_UYGS2Req_UserStats_GetUpdateItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_GetUpdateItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_UserStats_GetUpdateItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_GetUpdateItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_UserStats_GetUpdateItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_UserStats_GetUpdateItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_UserStats_Records_Statics
	{
		struct YGS2Req_UserStats_eventRecords_Parms
		{
			TMap<FString,FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_Records_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_Records_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_Records_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_UserStats_eventRecords_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_UserStats_Records_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_Records_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_Records_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_Records_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_UserStats_Records_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_UserStats_Records_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_UserStats, nullptr, "Records", nullptr, nullptr, sizeof(YGS2Req_UserStats_eventRecords_Parms), Z_Construct_UFunction_UYGS2Req_UserStats_Records_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_Records_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_UserStats_Records_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_Records_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_UserStats_Records()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_UserStats_Records_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics
	{
		struct YGS2Req_UserStats_eventSetGetCondition_Parms
		{
			FString _strProductUserID;
			FString _strKind;
			TArray<FString> _cTargets;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKind_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKind;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cTargets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_UserStats_eventSetGetCondition_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::NewProp__strProductUserID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::NewProp__strKind_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::NewProp__strKind = { "_strKind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_UserStats_eventSetGetCondition_Parms, _strKind), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::NewProp__strKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::NewProp__strKind_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::NewProp__cTargets_Inner = { "_cTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::NewProp__cTargets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::NewProp__cTargets = { "_cTargets", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_UserStats_eventSetGetCondition_Parms, _cTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::NewProp__cTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::NewProp__cTargets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::NewProp__strKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::NewProp__cTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::NewProp__cTargets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_UserStats, nullptr, "SetGetCondition", nullptr, nullptr, sizeof(YGS2Req_UserStats_eventSetGetCondition_Parms), Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics
	{
		struct YGS2Req_UserStats_eventSetRemoveKeys_Parms
		{
			FString _strKind;
			TArray<FString> _cRemoveKeys;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKind_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKind;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cRemoveKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cRemoveKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cRemoveKeys;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::NewProp__strKind_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::NewProp__strKind = { "_strKind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_UserStats_eventSetRemoveKeys_Parms, _strKind), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::NewProp__strKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::NewProp__strKind_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::NewProp__cRemoveKeys_Inner = { "_cRemoveKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::NewProp__cRemoveKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::NewProp__cRemoveKeys = { "_cRemoveKeys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_UserStats_eventSetRemoveKeys_Parms, _cRemoveKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::NewProp__cRemoveKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::NewProp__cRemoveKeys_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::NewProp__strKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::NewProp__cRemoveKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::NewProp__cRemoveKeys,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_UserStats, nullptr, "SetRemoveKeys", nullptr, nullptr, sizeof(YGS2Req_UserStats_eventSetRemoveKeys_Parms), Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics
	{
		struct YGS2Req_UserStats_eventSetUpdateItems_Parms
		{
			FString _strKind;
			TMap<FString,FString> _cUpdateItems;
			FString _strStructID;
			bool _bSave;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKind_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKind;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cUpdateItems_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cUpdateItems_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cUpdateItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__cUpdateItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strStructID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strStructID;
		static void NewProp__bSave_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bSave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__strKind_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__strKind = { "_strKind", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_UserStats_eventSetUpdateItems_Parms, _strKind), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__strKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__strKind_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__cUpdateItems_ValueProp = { "_cUpdateItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__cUpdateItems_Key_KeyProp = { "_cUpdateItems_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__cUpdateItems_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__cUpdateItems = { "_cUpdateItems", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_UserStats_eventSetUpdateItems_Parms, _cUpdateItems), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__cUpdateItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__cUpdateItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__strStructID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__strStructID = { "_strStructID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2Req_UserStats_eventSetUpdateItems_Parms, _strStructID), METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__strStructID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__strStructID_MetaData)) };
	void Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__bSave_SetBit(void* Obj)
	{
		((YGS2Req_UserStats_eventSetUpdateItems_Parms*)Obj)->_bSave = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__bSave = { "_bSave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2Req_UserStats_eventSetUpdateItems_Parms), &Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__bSave_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__strKind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__cUpdateItems_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__cUpdateItems_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__cUpdateItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__strStructID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::NewProp__bSave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2Req_UserStats.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2Req_UserStats, nullptr, "SetUpdateItems", nullptr, nullptr, sizeof(YGS2Req_UserStats_eventSetUpdateItems_Parms), Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2Req_UserStats_NoRegister()
	{
		return UYGS2Req_UserStats::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2Req_UserStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2Req_UserStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UYGS2RequestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2Req_UserStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2Req_UserStats_GetKind, "GetKind" }, // 2198975024
		{ &Z_Construct_UFunction_UYGS2Req_UserStats_GetLastListNum, "GetLastListNum" }, // 235376969
		{ &Z_Construct_UFunction_UYGS2Req_UserStats_GetProductUserID, "GetProductUserID" }, // 2990049548
		{ &Z_Construct_UFunction_UYGS2Req_UserStats_GetStructID, "GetStructID" }, // 2352945699
		{ &Z_Construct_UFunction_UYGS2Req_UserStats_GetUpdateItems, "GetUpdateItems" }, // 3687649530
		{ &Z_Construct_UFunction_UYGS2Req_UserStats_Records, "Records" }, // 3157876091
		{ &Z_Construct_UFunction_UYGS2Req_UserStats_SetGetCondition, "SetGetCondition" }, // 1684671619
		{ &Z_Construct_UFunction_UYGS2Req_UserStats_SetRemoveKeys, "SetRemoveKeys" }, // 1494418264
		{ &Z_Construct_UFunction_UYGS2Req_UserStats_SetUpdateItems, "SetUpdateItems" }, // 1344298690
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2Req_UserStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2Req_UserStats.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2Req_UserStats.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2Req_UserStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2Req_UserStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2Req_UserStats_Statics::ClassParams = {
		&UYGS2Req_UserStats::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYGS2Req_UserStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2Req_UserStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2Req_UserStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2Req_UserStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2Req_UserStats, 1630366524);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2Req_UserStats>()
	{
		return UYGS2Req_UserStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2Req_UserStats(Z_Construct_UClass_UYGS2Req_UserStats, &UYGS2Req_UserStats::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2Req_UserStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2Req_UserStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
