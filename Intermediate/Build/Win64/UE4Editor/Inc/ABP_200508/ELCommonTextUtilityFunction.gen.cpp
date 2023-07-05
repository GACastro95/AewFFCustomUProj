// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCommonTextUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCommonTextUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCommonTextUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCommonTextUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMatchScoreRankingsType();
// End Cross Module References
	DEFINE_FUNCTION(UELCommonTextUtilityFunction::execGetBackText)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELCommonTextUtilityFunction::GetBackText(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCommonTextUtilityFunction::execGetCommonTextFromKey)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELCommonTextUtilityFunction::GetCommonTextFromKey(Z_Param__pWorldContextObject,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCommonTextUtilityFunction::execGetMonthText)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetMonth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELCommonTextUtilityFunction::GetMonthText(Z_Param__pWorldContextObject,Z_Param_TargetMonth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCommonTextUtilityFunction::execGetNoneText)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELCommonTextUtilityFunction::GetNoneText(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCommonTextUtilityFunction::execGetOkText)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELCommonTextUtilityFunction::GetOkText(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCommonTextUtilityFunction::execGetScoreRankingText)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_ENUM(EMatchScoreRankingsType,Z_Param_TargetType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELCommonTextUtilityFunction::GetScoreRankingText(Z_Param__pWorldContextObject,EMatchScoreRankingsType(Z_Param_TargetType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCommonTextUtilityFunction::execGetTextEntryBase)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UELCommonTextUtilityFunction::GetTextEntryBase(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	void UELCommonTextUtilityFunction::StaticRegisterNativesUELCommonTextUtilityFunction()
	{
		UClass* Class = UELCommonTextUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBackText", &UELCommonTextUtilityFunction::execGetBackText },
			{ "GetCommonTextFromKey", &UELCommonTextUtilityFunction::execGetCommonTextFromKey },
			{ "GetMonthText", &UELCommonTextUtilityFunction::execGetMonthText },
			{ "GetNoneText", &UELCommonTextUtilityFunction::execGetNoneText },
			{ "GetOkText", &UELCommonTextUtilityFunction::execGetOkText },
			{ "GetScoreRankingText", &UELCommonTextUtilityFunction::execGetScoreRankingText },
			{ "GetTextEntryBase", &UELCommonTextUtilityFunction::execGetTextEntryBase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCommonTextUtilityFunction_GetBackText_Statics
	{
		struct ELCommonTextUtilityFunction_eventGetBackText_Parms
		{
			UObject* _pWorldContextObject;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetBackText_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommonTextUtilityFunction_eventGetBackText_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetBackText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommonTextUtilityFunction_eventGetBackText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCommonTextUtilityFunction_GetBackText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetBackText_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetBackText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCommonTextUtilityFunction_GetBackText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCommonTextUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetBackText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCommonTextUtilityFunction, nullptr, "GetBackText", nullptr, nullptr, sizeof(ELCommonTextUtilityFunction_eventGetBackText_Parms), Z_Construct_UFunction_UELCommonTextUtilityFunction_GetBackText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetBackText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetBackText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetBackText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCommonTextUtilityFunction_GetBackText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCommonTextUtilityFunction_GetBackText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics
	{
		struct ELCommonTextUtilityFunction_eventGetCommonTextFromKey_Parms
		{
			UObject* _pWorldContextObject;
			FString Key;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommonTextUtilityFunction_eventGetCommonTextFromKey_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommonTextUtilityFunction_eventGetCommonTextFromKey_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommonTextUtilityFunction_eventGetCommonTextFromKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCommonTextUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCommonTextUtilityFunction, nullptr, "GetCommonTextFromKey", nullptr, nullptr, sizeof(ELCommonTextUtilityFunction_eventGetCommonTextFromKey_Parms), Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCommonTextUtilityFunction_GetMonthText_Statics
	{
		struct ELCommonTextUtilityFunction_eventGetMonthText_Parms
		{
			UObject* _pWorldContextObject;
			int32 TargetMonth;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetMonth;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetMonthText_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommonTextUtilityFunction_eventGetMonthText_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetMonthText_Statics::NewProp_TargetMonth = { "TargetMonth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommonTextUtilityFunction_eventGetMonthText_Parms, TargetMonth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetMonthText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommonTextUtilityFunction_eventGetMonthText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCommonTextUtilityFunction_GetMonthText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetMonthText_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetMonthText_Statics::NewProp_TargetMonth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetMonthText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCommonTextUtilityFunction_GetMonthText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCommonTextUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetMonthText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCommonTextUtilityFunction, nullptr, "GetMonthText", nullptr, nullptr, sizeof(ELCommonTextUtilityFunction_eventGetMonthText_Parms), Z_Construct_UFunction_UELCommonTextUtilityFunction_GetMonthText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetMonthText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetMonthText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetMonthText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCommonTextUtilityFunction_GetMonthText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCommonTextUtilityFunction_GetMonthText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCommonTextUtilityFunction_GetNoneText_Statics
	{
		struct ELCommonTextUtilityFunction_eventGetNoneText_Parms
		{
			UObject* _pWorldContextObject;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetNoneText_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommonTextUtilityFunction_eventGetNoneText_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetNoneText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommonTextUtilityFunction_eventGetNoneText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCommonTextUtilityFunction_GetNoneText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetNoneText_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetNoneText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCommonTextUtilityFunction_GetNoneText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCommonTextUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetNoneText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCommonTextUtilityFunction, nullptr, "GetNoneText", nullptr, nullptr, sizeof(ELCommonTextUtilityFunction_eventGetNoneText_Parms), Z_Construct_UFunction_UELCommonTextUtilityFunction_GetNoneText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetNoneText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetNoneText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetNoneText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCommonTextUtilityFunction_GetNoneText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCommonTextUtilityFunction_GetNoneText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCommonTextUtilityFunction_GetOkText_Statics
	{
		struct ELCommonTextUtilityFunction_eventGetOkText_Parms
		{
			UObject* _pWorldContextObject;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetOkText_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommonTextUtilityFunction_eventGetOkText_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetOkText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommonTextUtilityFunction_eventGetOkText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCommonTextUtilityFunction_GetOkText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetOkText_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetOkText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCommonTextUtilityFunction_GetOkText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCommonTextUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetOkText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCommonTextUtilityFunction, nullptr, "GetOkText", nullptr, nullptr, sizeof(ELCommonTextUtilityFunction_eventGetOkText_Parms), Z_Construct_UFunction_UELCommonTextUtilityFunction_GetOkText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetOkText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetOkText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetOkText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCommonTextUtilityFunction_GetOkText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCommonTextUtilityFunction_GetOkText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText_Statics
	{
		struct ELCommonTextUtilityFunction_eventGetScoreRankingText_Parms
		{
			UObject* _pWorldContextObject;
			EMatchScoreRankingsType TargetType;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TargetType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TargetType;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommonTextUtilityFunction_eventGetScoreRankingText_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText_Statics::NewProp_TargetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText_Statics::NewProp_TargetType = { "TargetType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommonTextUtilityFunction_eventGetScoreRankingText_Parms, TargetType), Z_Construct_UEnum_ABP_200508_EMatchScoreRankingsType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommonTextUtilityFunction_eventGetScoreRankingText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText_Statics::NewProp_TargetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText_Statics::NewProp_TargetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCommonTextUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCommonTextUtilityFunction, nullptr, "GetScoreRankingText", nullptr, nullptr, sizeof(ELCommonTextUtilityFunction_eventGetScoreRankingText_Parms), Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCommonTextUtilityFunction_GetTextEntryBase_Statics
	{
		struct ELCommonTextUtilityFunction_eventGetTextEntryBase_Parms
		{
			UObject* _pWorldContextObject;
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetTextEntryBase_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommonTextUtilityFunction_eventGetTextEntryBase_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetTextEntryBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCommonTextUtilityFunction_eventGetTextEntryBase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCommonTextUtilityFunction_GetTextEntryBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetTextEntryBase_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCommonTextUtilityFunction_GetTextEntryBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCommonTextUtilityFunction_GetTextEntryBase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCommonTextUtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCommonTextUtilityFunction_GetTextEntryBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCommonTextUtilityFunction, nullptr, "GetTextEntryBase", nullptr, nullptr, sizeof(ELCommonTextUtilityFunction_eventGetTextEntryBase_Parms), Z_Construct_UFunction_UELCommonTextUtilityFunction_GetTextEntryBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetTextEntryBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetTextEntryBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCommonTextUtilityFunction_GetTextEntryBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCommonTextUtilityFunction_GetTextEntryBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCommonTextUtilityFunction_GetTextEntryBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCommonTextUtilityFunction_NoRegister()
	{
		return UELCommonTextUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELCommonTextUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCommonTextUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCommonTextUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCommonTextUtilityFunction_GetBackText, "GetBackText" }, // 3376225473
		{ &Z_Construct_UFunction_UELCommonTextUtilityFunction_GetCommonTextFromKey, "GetCommonTextFromKey" }, // 2054582514
		{ &Z_Construct_UFunction_UELCommonTextUtilityFunction_GetMonthText, "GetMonthText" }, // 2156842920
		{ &Z_Construct_UFunction_UELCommonTextUtilityFunction_GetNoneText, "GetNoneText" }, // 3746164431
		{ &Z_Construct_UFunction_UELCommonTextUtilityFunction_GetOkText, "GetOkText" }, // 3898549974
		{ &Z_Construct_UFunction_UELCommonTextUtilityFunction_GetScoreRankingText, "GetScoreRankingText" }, // 232527816
		{ &Z_Construct_UFunction_UELCommonTextUtilityFunction_GetTextEntryBase, "GetTextEntryBase" }, // 1151786607
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCommonTextUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCommonTextUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCommonTextUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCommonTextUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCommonTextUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCommonTextUtilityFunction_Statics::ClassParams = {
		&UELCommonTextUtilityFunction::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCommonTextUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCommonTextUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCommonTextUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCommonTextUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCommonTextUtilityFunction, 1756199056);
	template<> ABP_200508_API UClass* StaticClass<UELCommonTextUtilityFunction>()
	{
		return UELCommonTextUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCommonTextUtilityFunction(Z_Construct_UClass_UELCommonTextUtilityFunction, &UELCommonTextUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCommonTextUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCommonTextUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
