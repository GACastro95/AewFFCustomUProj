// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/StringUtil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringUtil() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UStringUtil_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UStringUtil();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	DEFINE_FUNCTION(UStringUtil::execCompare)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_A);
		P_GET_PROPERTY(FStrProperty,Z_Param_B);
		P_GET_UBOOL(Z_Param_bSensitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UStringUtil::Compare(Z_Param_A,Z_Param_B,Z_Param_bSensitive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStringUtil::execConvHiraganaToKatakana)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_From);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UStringUtil::ConvHiraganaToKatakana(Z_Param_From);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStringUtil::execExcludeAsiaString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Str);
		P_GET_UBOOL_REF(Z_Param_Out_isChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UStringUtil::ExcludeAsiaString(Z_Param_Str,Z_Param_Out_isChanged);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStringUtil::execSplitByCamel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InStr);
		P_GET_TARRAY_REF(FString,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStringUtil::SplitByCamel(Z_Param_InStr,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStringUtil::execStrcmp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LStr);
		P_GET_PROPERTY(FStrProperty,Z_Param_RStr);
		P_GET_UBOOL(Z_Param_IsCaseSensitive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UStringUtil::Strcmp(Z_Param_LStr,Z_Param_RStr,Z_Param_IsCaseSensitive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStringUtil::execToASCIIOnly)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Str);
		P_GET_UBOOL_REF(Z_Param_Out_isChanged);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UStringUtil::ToASCIIOnly(Z_Param_Str,Z_Param_Out_isChanged);
		P_NATIVE_END;
	}
	void UStringUtil::StaticRegisterNativesUStringUtil()
	{
		UClass* Class = UStringUtil::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Compare", &UStringUtil::execCompare },
			{ "ConvHiraganaToKatakana", &UStringUtil::execConvHiraganaToKatakana },
			{ "ExcludeAsiaString", &UStringUtil::execExcludeAsiaString },
			{ "SplitByCamel", &UStringUtil::execSplitByCamel },
			{ "Strcmp", &UStringUtil::execStrcmp },
			{ "ToASCIIOnly", &UStringUtil::execToASCIIOnly },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStringUtil_Compare_Statics
	{
		struct StringUtil_eventCompare_Parms
		{
			FString A;
			FString B;
			bool bSensitive;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSensitive_MetaData[];
#endif
		static void NewProp_bSensitive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSensitive;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringUtil_eventCompare_Parms, A), METADATA_PARAMS(Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringUtil_eventCompare_Parms, B), METADATA_PARAMS(Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_bSensitive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_bSensitive_SetBit(void* Obj)
	{
		((StringUtil_eventCompare_Parms*)Obj)->bSensitive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_bSensitive = { "bSensitive", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StringUtil_eventCompare_Parms), &Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_bSensitive_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_bSensitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_bSensitive_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringUtil_eventCompare_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringUtil_Compare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_bSensitive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_Compare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringUtil_Compare_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StringUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringUtil_Compare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringUtil, nullptr, "Compare", nullptr, nullptr, sizeof(StringUtil_eventCompare_Parms), Z_Construct_UFunction_UStringUtil_Compare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_Compare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStringUtil_Compare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_Compare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStringUtil_Compare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStringUtil_Compare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana_Statics
	{
		struct StringUtil_eventConvHiraganaToKatakana_Parms
		{
			FString From;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_From;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana_Statics::NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringUtil_eventConvHiraganaToKatakana_Parms, From), METADATA_PARAMS(Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana_Statics::NewProp_From_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringUtil_eventConvHiraganaToKatakana_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana_Statics::NewProp_From,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StringUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringUtil, nullptr, "ConvHiraganaToKatakana", nullptr, nullptr, sizeof(StringUtil_eventConvHiraganaToKatakana_Parms), Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics
	{
		struct StringUtil_eventExcludeAsiaString_Parms
		{
			FString Str;
			bool isChanged;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Str_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Str;
		static void NewProp_isChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isChanged;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::NewProp_Str_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringUtil_eventExcludeAsiaString_Parms, Str), METADATA_PARAMS(Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::NewProp_Str_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::NewProp_Str_MetaData)) };
	void Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::NewProp_isChanged_SetBit(void* Obj)
	{
		((StringUtil_eventExcludeAsiaString_Parms*)Obj)->isChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::NewProp_isChanged = { "isChanged", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StringUtil_eventExcludeAsiaString_Parms), &Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::NewProp_isChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringUtil_eventExcludeAsiaString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::NewProp_Str,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::NewProp_isChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StringUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringUtil, nullptr, "ExcludeAsiaString", nullptr, nullptr, sizeof(StringUtil_eventExcludeAsiaString_Parms), Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStringUtil_ExcludeAsiaString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStringUtil_ExcludeAsiaString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics
	{
		struct StringUtil_eventSplitByCamel_Parms
		{
			FString InStr;
			TArray<FString> Out;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InStr;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Out_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics::NewProp_InStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics::NewProp_InStr = { "InStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringUtil_eventSplitByCamel_Parms, InStr), METADATA_PARAMS(Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics::NewProp_InStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics::NewProp_InStr_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics::NewProp_Out_Inner = { "Out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringUtil_eventSplitByCamel_Parms, Out), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics::NewProp_InStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics::NewProp_Out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StringUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringUtil, nullptr, "SplitByCamel", nullptr, nullptr, sizeof(StringUtil_eventSplitByCamel_Parms), Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStringUtil_SplitByCamel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStringUtil_SplitByCamel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStringUtil_Strcmp_Statics
	{
		struct StringUtil_eventStrcmp_Parms
		{
			FString LStr;
			FString RStr;
			bool IsCaseSensitive;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LStr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RStr;
		static void NewProp_IsCaseSensitive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCaseSensitive;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringUtil_Strcmp_Statics::NewProp_LStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringUtil_Strcmp_Statics::NewProp_LStr = { "LStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringUtil_eventStrcmp_Parms, LStr), METADATA_PARAMS(Z_Construct_UFunction_UStringUtil_Strcmp_Statics::NewProp_LStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_Strcmp_Statics::NewProp_LStr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringUtil_Strcmp_Statics::NewProp_RStr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringUtil_Strcmp_Statics::NewProp_RStr = { "RStr", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringUtil_eventStrcmp_Parms, RStr), METADATA_PARAMS(Z_Construct_UFunction_UStringUtil_Strcmp_Statics::NewProp_RStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_Strcmp_Statics::NewProp_RStr_MetaData)) };
	void Z_Construct_UFunction_UStringUtil_Strcmp_Statics::NewProp_IsCaseSensitive_SetBit(void* Obj)
	{
		((StringUtil_eventStrcmp_Parms*)Obj)->IsCaseSensitive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStringUtil_Strcmp_Statics::NewProp_IsCaseSensitive = { "IsCaseSensitive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StringUtil_eventStrcmp_Parms), &Z_Construct_UFunction_UStringUtil_Strcmp_Statics::NewProp_IsCaseSensitive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStringUtil_Strcmp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringUtil_eventStrcmp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringUtil_Strcmp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_Strcmp_Statics::NewProp_LStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_Strcmp_Statics::NewProp_RStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_Strcmp_Statics::NewProp_IsCaseSensitive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_Strcmp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringUtil_Strcmp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StringUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringUtil_Strcmp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringUtil, nullptr, "Strcmp", nullptr, nullptr, sizeof(StringUtil_eventStrcmp_Parms), Z_Construct_UFunction_UStringUtil_Strcmp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_Strcmp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStringUtil_Strcmp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_Strcmp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStringUtil_Strcmp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStringUtil_Strcmp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics
	{
		struct StringUtil_eventToASCIIOnly_Parms
		{
			FString Str;
			bool isChanged;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Str_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Str;
		static void NewProp_isChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isChanged;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::NewProp_Str_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringUtil_eventToASCIIOnly_Parms, Str), METADATA_PARAMS(Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::NewProp_Str_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::NewProp_Str_MetaData)) };
	void Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::NewProp_isChanged_SetBit(void* Obj)
	{
		((StringUtil_eventToASCIIOnly_Parms*)Obj)->isChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::NewProp_isChanged = { "isChanged", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StringUtil_eventToASCIIOnly_Parms), &Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::NewProp_isChanged_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StringUtil_eventToASCIIOnly_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::NewProp_Str,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::NewProp_isChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StringUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringUtil, nullptr, "ToASCIIOnly", nullptr, nullptr, sizeof(StringUtil_eventToASCIIOnly_Parms), Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStringUtil_ToASCIIOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStringUtil_ToASCIIOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStringUtil_NoRegister()
	{
		return UStringUtil::StaticClass();
	}
	struct Z_Construct_UClass_UStringUtil_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStringUtil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStringUtil_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStringUtil_Compare, "Compare" }, // 3297766940
		{ &Z_Construct_UFunction_UStringUtil_ConvHiraganaToKatakana, "ConvHiraganaToKatakana" }, // 3045219678
		{ &Z_Construct_UFunction_UStringUtil_ExcludeAsiaString, "ExcludeAsiaString" }, // 2445180696
		{ &Z_Construct_UFunction_UStringUtil_SplitByCamel, "SplitByCamel" }, // 723143205
		{ &Z_Construct_UFunction_UStringUtil_Strcmp, "Strcmp" }, // 2800429926
		{ &Z_Construct_UFunction_UStringUtil_ToASCIIOnly, "ToASCIIOnly" }, // 348619212
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStringUtil_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StringUtil.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StringUtil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStringUtil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStringUtil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStringUtil_Statics::ClassParams = {
		&UStringUtil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStringUtil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStringUtil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStringUtil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStringUtil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStringUtil, 2030609814);
	template<> ELITE_CORE_API UClass* StaticClass<UStringUtil>()
	{
		return UStringUtil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStringUtil(Z_Construct_UClass_UStringUtil, &UStringUtil::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UStringUtil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStringUtil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
