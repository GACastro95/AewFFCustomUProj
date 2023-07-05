// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/MiscUtil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiscUtil() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UMiscUtil_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UMiscUtil();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGenderConditions();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
// End Cross Module References
	DEFINE_FUNCTION(UMiscUtil::execEvaluateGenderConditions)
	{
		P_GET_ENUM_REF(EGenderConditions,Z_Param_Out_Conditions);
		P_GET_ENUM(EGender,Z_Param_Gender);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMiscUtil::EvaluateGenderConditions((EGenderConditions&)(Z_Param_Out_Conditions),EGender(Z_Param_Gender));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMiscUtil::execInchToFeet)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Feet);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Inch);
		P_GET_PROPERTY(FIntProperty,Z_Param_InInch);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMiscUtil::InchToFeet(Z_Param_Out_Feet,Z_Param_Out_Inch,Z_Param_InInch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMiscUtil::execToCentimeter)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Cm);
		P_GET_PROPERTY(FIntProperty,Z_Param_InInch);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMiscUtil::ToCentimeter(Z_Param_Out_Cm,Z_Param_InInch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMiscUtil::execToCentimeterF)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Cm);
		P_GET_PROPERTY(FIntProperty,Z_Param_InInch);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMiscUtil::ToCentimeterF(Z_Param_Out_Cm,Z_Param_InInch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMiscUtil::execToInch)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Inch);
		P_GET_PROPERTY(FIntProperty,Z_Param_InCM);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMiscUtil::ToInch(Z_Param_Out_Inch,Z_Param_InCM);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMiscUtil::execToInchText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Out);
		P_GET_PROPERTY(FIntProperty,Z_Param_InInch);
		P_GET_UBOOL(Z_Param_bToFoot);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMiscUtil::ToInchText(Z_Param_Out_Out,Z_Param_InInch,Z_Param_bToFoot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMiscUtil::execToKilogramText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Out);
		P_GET_PROPERTY(FIntProperty,Z_Param_Pounds);
		P_GET_PROPERTY(FIntProperty,Z_Param_FractionalDigits);
		P_GET_PROPERTY(FIntProperty,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMiscUtil::ToKilogramText(Z_Param_Out_Out,Z_Param_Pounds,Z_Param_FractionalDigits,Z_Param_Step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMiscUtil::execToMeterText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Out);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InInch);
		P_GET_PROPERTY(FIntProperty,Z_Param_FractionalDigits);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMiscUtil::ToMeterText(Z_Param_Out_Out,Z_Param_InInch,Z_Param_FractionalDigits);
		P_NATIVE_END;
	}
	void UMiscUtil::StaticRegisterNativesUMiscUtil()
	{
		UClass* Class = UMiscUtil::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EvaluateGenderConditions", &UMiscUtil::execEvaluateGenderConditions },
			{ "InchToFeet", &UMiscUtil::execInchToFeet },
			{ "ToCentimeter", &UMiscUtil::execToCentimeter },
			{ "ToCentimeterF", &UMiscUtil::execToCentimeterF },
			{ "ToInch", &UMiscUtil::execToInch },
			{ "ToInchText", &UMiscUtil::execToInchText },
			{ "ToKilogramText", &UMiscUtil::execToKilogramText },
			{ "ToMeterText", &UMiscUtil::execToMeterText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics
	{
		struct MiscUtil_eventEvaluateGenderConditions_Parms
		{
			EGenderConditions Conditions;
			EGender Gender;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Conditions_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Conditions;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_Conditions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_Conditions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventEvaluateGenderConditions_Parms, Conditions), Z_Construct_UEnum_ELITE_Core_EGenderConditions, METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_Conditions_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_Gender_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventEvaluateGenderConditions_Parms, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_Gender_MetaData)) };
	void Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MiscUtil_eventEvaluateGenderConditions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MiscUtil_eventEvaluateGenderConditions_Parms), &Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_Conditions_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_Conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MiscUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiscUtil, nullptr, "EvaluateGenderConditions", nullptr, nullptr, sizeof(MiscUtil_eventEvaluateGenderConditions_Parms), Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics
	{
		struct MiscUtil_eventInchToFeet_Parms
		{
			int32 Feet;
			int32 Inch;
			int32 InInch;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Feet;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Inch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InInch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics::NewProp_Feet = { "Feet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventInchToFeet_Parms, Feet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics::NewProp_Inch = { "Inch", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventInchToFeet_Parms, Inch), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics::NewProp_InInch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics::NewProp_InInch = { "InInch", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventInchToFeet_Parms, InInch), METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics::NewProp_InInch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics::NewProp_InInch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics::NewProp_Feet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics::NewProp_Inch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics::NewProp_InInch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MiscUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiscUtil, nullptr, "InchToFeet", nullptr, nullptr, sizeof(MiscUtil_eventInchToFeet_Parms), Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMiscUtil_InchToFeet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMiscUtil_InchToFeet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMiscUtil_ToCentimeter_Statics
	{
		struct MiscUtil_eventToCentimeter_Parms
		{
			int32 Cm;
			int32 InInch;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Cm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InInch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMiscUtil_ToCentimeter_Statics::NewProp_Cm = { "Cm", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventToCentimeter_Parms, Cm), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_ToCentimeter_Statics::NewProp_InInch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMiscUtil_ToCentimeter_Statics::NewProp_InInch = { "InInch", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventToCentimeter_Parms, InInch), METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_ToCentimeter_Statics::NewProp_InInch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToCentimeter_Statics::NewProp_InInch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiscUtil_ToCentimeter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_ToCentimeter_Statics::NewProp_Cm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_ToCentimeter_Statics::NewProp_InInch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_ToCentimeter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MiscUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiscUtil_ToCentimeter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiscUtil, nullptr, "ToCentimeter", nullptr, nullptr, sizeof(MiscUtil_eventToCentimeter_Parms), Z_Construct_UFunction_UMiscUtil_ToCentimeter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToCentimeter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_ToCentimeter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToCentimeter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMiscUtil_ToCentimeter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMiscUtil_ToCentimeter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMiscUtil_ToCentimeterF_Statics
	{
		struct MiscUtil_eventToCentimeterF_Parms
		{
			float Cm;
			int32 InInch;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InInch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMiscUtil_ToCentimeterF_Statics::NewProp_Cm = { "Cm", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventToCentimeterF_Parms, Cm), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_ToCentimeterF_Statics::NewProp_InInch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMiscUtil_ToCentimeterF_Statics::NewProp_InInch = { "InInch", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventToCentimeterF_Parms, InInch), METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_ToCentimeterF_Statics::NewProp_InInch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToCentimeterF_Statics::NewProp_InInch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiscUtil_ToCentimeterF_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_ToCentimeterF_Statics::NewProp_Cm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_ToCentimeterF_Statics::NewProp_InInch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_ToCentimeterF_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MiscUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiscUtil_ToCentimeterF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiscUtil, nullptr, "ToCentimeterF", nullptr, nullptr, sizeof(MiscUtil_eventToCentimeterF_Parms), Z_Construct_UFunction_UMiscUtil_ToCentimeterF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToCentimeterF_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_ToCentimeterF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToCentimeterF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMiscUtil_ToCentimeterF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMiscUtil_ToCentimeterF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMiscUtil_ToInch_Statics
	{
		struct MiscUtil_eventToInch_Parms
		{
			int32 Inch;
			int32 InCM;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Inch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCM_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InCM;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMiscUtil_ToInch_Statics::NewProp_Inch = { "Inch", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventToInch_Parms, Inch), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_ToInch_Statics::NewProp_InCM_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMiscUtil_ToInch_Statics::NewProp_InCM = { "InCM", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventToInch_Parms, InCM), METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_ToInch_Statics::NewProp_InCM_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToInch_Statics::NewProp_InCM_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiscUtil_ToInch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_ToInch_Statics::NewProp_Inch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_ToInch_Statics::NewProp_InCM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_ToInch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MiscUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiscUtil_ToInch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiscUtil, nullptr, "ToInch", nullptr, nullptr, sizeof(MiscUtil_eventToInch_Parms), Z_Construct_UFunction_UMiscUtil_ToInch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToInch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_ToInch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToInch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMiscUtil_ToInch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMiscUtil_ToInch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMiscUtil_ToInchText_Statics
	{
		struct MiscUtil_eventToInchText_Parms
		{
			FText Out;
			int32 InInch;
			bool bToFoot;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Out;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InInch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bToFoot_MetaData[];
#endif
		static void NewProp_bToFoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bToFoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventToInchText_Parms, Out), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::NewProp_InInch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::NewProp_InInch = { "InInch", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventToInchText_Parms, InInch), METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::NewProp_InInch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::NewProp_InInch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::NewProp_bToFoot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::NewProp_bToFoot_SetBit(void* Obj)
	{
		((MiscUtil_eventToInchText_Parms*)Obj)->bToFoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::NewProp_bToFoot = { "bToFoot", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MiscUtil_eventToInchText_Parms), &Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::NewProp_bToFoot_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::NewProp_bToFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::NewProp_bToFoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::NewProp_InInch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::NewProp_bToFoot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MiscUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiscUtil, nullptr, "ToInchText", nullptr, nullptr, sizeof(MiscUtil_eventToInchText_Parms), Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMiscUtil_ToInchText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMiscUtil_ToInchText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics
	{
		struct MiscUtil_eventToKilogramText_Parms
		{
			FText Out;
			int32 Pounds;
			int32 FractionalDigits;
			int32 Step;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Out;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Pounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FractionalDigits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FractionalDigits;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Step;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventToKilogramText_Parms, Out), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::NewProp_Pounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::NewProp_Pounds = { "Pounds", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventToKilogramText_Parms, Pounds), METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::NewProp_Pounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::NewProp_Pounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::NewProp_FractionalDigits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::NewProp_FractionalDigits = { "FractionalDigits", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventToKilogramText_Parms, FractionalDigits), METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::NewProp_FractionalDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::NewProp_FractionalDigits_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventToKilogramText_Parms, Step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::NewProp_Pounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::NewProp_FractionalDigits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::NewProp_Step,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MiscUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiscUtil, nullptr, "ToKilogramText", nullptr, nullptr, sizeof(MiscUtil_eventToKilogramText_Parms), Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMiscUtil_ToKilogramText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMiscUtil_ToKilogramText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics
	{
		struct MiscUtil_eventToMeterText_Parms
		{
			FText Out;
			float InInch;
			int32 FractionalDigits;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Out;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InInch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InInch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FractionalDigits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FractionalDigits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventToMeterText_Parms, Out), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::NewProp_InInch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::NewProp_InInch = { "InInch", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventToMeterText_Parms, InInch), METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::NewProp_InInch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::NewProp_InInch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::NewProp_FractionalDigits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::NewProp_FractionalDigits = { "FractionalDigits", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiscUtil_eventToMeterText_Parms, FractionalDigits), METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::NewProp_FractionalDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::NewProp_FractionalDigits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::NewProp_InInch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::NewProp_FractionalDigits,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MiscUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMiscUtil, nullptr, "ToMeterText", nullptr, nullptr, sizeof(MiscUtil_eventToMeterText_Parms), Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMiscUtil_ToMeterText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMiscUtil_ToMeterText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMiscUtil_NoRegister()
	{
		return UMiscUtil::StaticClass();
	}
	struct Z_Construct_UClass_UMiscUtil_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMiscUtil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMiscUtil_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMiscUtil_EvaluateGenderConditions, "EvaluateGenderConditions" }, // 52783215
		{ &Z_Construct_UFunction_UMiscUtil_InchToFeet, "InchToFeet" }, // 1040970640
		{ &Z_Construct_UFunction_UMiscUtil_ToCentimeter, "ToCentimeter" }, // 561504388
		{ &Z_Construct_UFunction_UMiscUtil_ToCentimeterF, "ToCentimeterF" }, // 1575288456
		{ &Z_Construct_UFunction_UMiscUtil_ToInch, "ToInch" }, // 4138883351
		{ &Z_Construct_UFunction_UMiscUtil_ToInchText, "ToInchText" }, // 1666388746
		{ &Z_Construct_UFunction_UMiscUtil_ToKilogramText, "ToKilogramText" }, // 2701247693
		{ &Z_Construct_UFunction_UMiscUtil_ToMeterText, "ToMeterText" }, // 2579814881
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMiscUtil_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MiscUtil.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MiscUtil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMiscUtil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMiscUtil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMiscUtil_Statics::ClassParams = {
		&UMiscUtil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMiscUtil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMiscUtil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMiscUtil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMiscUtil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMiscUtil, 2249961745);
	template<> ELITE_CORE_API UClass* StaticClass<UMiscUtil>()
	{
		return UMiscUtil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMiscUtil(Z_Construct_UClass_UMiscUtil, &UMiscUtil::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UMiscUtil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMiscUtil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
