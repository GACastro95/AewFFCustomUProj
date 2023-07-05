// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/AttireTypeUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttireTypeUtilityFunction() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UAttireTypeUtilityFunction_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UAttireTypeUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EAttireType();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditCondition();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EAttireCondition();
// End Cross Module References
	DEFINE_FUNCTION(UAttireTypeUtilityFunction::execEditCondition_Evaluate)
	{
		P_GET_ENUM_REF(EAttireType,Z_Param_Out_Value);
		P_GET_STRUCT_REF(FEditCondition,Z_Param_Out_Condition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAttireTypeUtilityFunction::EditCondition_Evaluate((EAttireType&)(Z_Param_Out_Value),Z_Param_Out_Condition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttireTypeUtilityFunction::execEvaluate)
	{
		P_GET_ENUM_REF(EAttireType,Z_Param_Out_Value);
		P_GET_ENUM_REF(EAttireCondition,Z_Param_Out_Condition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAttireTypeUtilityFunction::Evaluate((EAttireType&)(Z_Param_Out_Value),(EAttireCondition&)(Z_Param_Out_Condition));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttireTypeUtilityFunction::execEvaluateBit)
	{
		P_GET_ENUM_REF(EAttireType,Z_Param_Out_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_ConditionFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAttireTypeUtilityFunction::EvaluateBit((EAttireType&)(Z_Param_Out_Value),Z_Param_ConditionFlags);
		P_NATIVE_END;
	}
	void UAttireTypeUtilityFunction::StaticRegisterNativesUAttireTypeUtilityFunction()
	{
		UClass* Class = UAttireTypeUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditCondition_Evaluate", &UAttireTypeUtilityFunction::execEditCondition_Evaluate },
			{ "Evaluate", &UAttireTypeUtilityFunction::execEvaluate },
			{ "EvaluateBit", &UAttireTypeUtilityFunction::execEvaluateBit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics
	{
		struct AttireTypeUtilityFunction_eventEditCondition_Evaluate_Parms
		{
			EAttireType Value;
			FEditCondition Condition;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Condition;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttireTypeUtilityFunction_eventEditCondition_Evaluate_Parms, Value), Z_Construct_UEnum_ELITE_Core_EAttireType, METADATA_PARAMS(Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::NewProp_Condition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttireTypeUtilityFunction_eventEditCondition_Evaluate_Parms, Condition), Z_Construct_UScriptStruct_FEditCondition, METADATA_PARAMS(Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::NewProp_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::NewProp_Condition_MetaData)) };
	void Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttireTypeUtilityFunction_eventEditCondition_Evaluate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttireTypeUtilityFunction_eventEditCondition_Evaluate_Parms), &Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::NewProp_Value_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::NewProp_Condition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttireTypeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttireTypeUtilityFunction, nullptr, "EditCondition_Evaluate", nullptr, nullptr, sizeof(AttireTypeUtilityFunction_eventEditCondition_Evaluate_Parms), Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics
	{
		struct AttireTypeUtilityFunction_eventEvaluate_Parms
		{
			EAttireType Value;
			EAttireCondition Condition;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Condition_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Condition;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttireTypeUtilityFunction_eventEvaluate_Parms, Value), Z_Construct_UEnum_ELITE_Core_EAttireType, METADATA_PARAMS(Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_Condition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_Condition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttireTypeUtilityFunction_eventEvaluate_Parms, Condition), Z_Construct_UEnum_ELITE_Core_EAttireCondition, METADATA_PARAMS(Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_Condition_MetaData)) };
	void Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttireTypeUtilityFunction_eventEvaluate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttireTypeUtilityFunction_eventEvaluate_Parms), &Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_Value_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_Condition_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_Condition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttireTypeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttireTypeUtilityFunction, nullptr, "Evaluate", nullptr, nullptr, sizeof(AttireTypeUtilityFunction_eventEvaluate_Parms), Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics
	{
		struct AttireTypeUtilityFunction_eventEvaluateBit_Parms
		{
			EAttireType Value;
			int32 ConditionFlags;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConditionFlags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttireTypeUtilityFunction_eventEvaluateBit_Parms, Value), Z_Construct_UEnum_ELITE_Core_EAttireType, METADATA_PARAMS(Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::NewProp_ConditionFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::NewProp_ConditionFlags = { "ConditionFlags", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AttireTypeUtilityFunction_eventEvaluateBit_Parms, ConditionFlags), METADATA_PARAMS(Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::NewProp_ConditionFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::NewProp_ConditionFlags_MetaData)) };
	void Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AttireTypeUtilityFunction_eventEvaluateBit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AttireTypeUtilityFunction_eventEvaluateBit_Parms), &Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::NewProp_Value_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::NewProp_ConditionFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttireTypeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttireTypeUtilityFunction, nullptr, "EvaluateBit", nullptr, nullptr, sizeof(AttireTypeUtilityFunction_eventEvaluateBit_Parms), Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAttireTypeUtilityFunction_NoRegister()
	{
		return UAttireTypeUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UAttireTypeUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttireTypeUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttireTypeUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttireTypeUtilityFunction_EditCondition_Evaluate, "EditCondition_Evaluate" }, // 722488174
		{ &Z_Construct_UFunction_UAttireTypeUtilityFunction_Evaluate, "Evaluate" }, // 56914120
		{ &Z_Construct_UFunction_UAttireTypeUtilityFunction_EvaluateBit, "EvaluateBit" }, // 4155104159
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttireTypeUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AttireTypeUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AttireTypeUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttireTypeUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttireTypeUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttireTypeUtilityFunction_Statics::ClassParams = {
		&UAttireTypeUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAttireTypeUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttireTypeUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttireTypeUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttireTypeUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttireTypeUtilityFunction, 1292340240);
	template<> ELITE_CORE_API UClass* StaticClass<UAttireTypeUtilityFunction>()
	{
		return UAttireTypeUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttireTypeUtilityFunction(Z_Construct_UClass_UAttireTypeUtilityFunction, &UAttireTypeUtilityFunction::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UAttireTypeUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttireTypeUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
