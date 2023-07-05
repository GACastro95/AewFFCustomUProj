// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELShockCounter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELShockCounter() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELShockCounter_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELShockCounter();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStShockCounterParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStPinMiniGameMash();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStMiniGameMashBonus();
// End Cross Module References
	DEFINE_FUNCTION(UELShockCounter::execClearRepeatLimit_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearRepeatLimit_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShockCounter::execGetShockCounterValue_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetShockCounterValue_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShockCounter::execIsChangeGroggyState_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChangeGroggyState_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShockCounter::execIsRise_N)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRise_N();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShockCounter::execSetCounterValue_N)
	{
		P_GET_UBOOL(Z_Param_bEx);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCounterValue_N(Z_Param_bEx,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELShockCounter::execSubCounterValue_N)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubCounterValue_N(Z_Param_Value);
		P_NATIVE_END;
	}
	void UELShockCounter::StaticRegisterNativesUELShockCounter()
	{
		UClass* Class = UELShockCounter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearRepeatLimit_N", &UELShockCounter::execClearRepeatLimit_N },
			{ "GetShockCounterValue_N", &UELShockCounter::execGetShockCounterValue_N },
			{ "IsChangeGroggyState_N", &UELShockCounter::execIsChangeGroggyState_N },
			{ "IsRise_N", &UELShockCounter::execIsRise_N },
			{ "SetCounterValue_N", &UELShockCounter::execSetCounterValue_N },
			{ "SubCounterValue_N", &UELShockCounter::execSubCounterValue_N },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELShockCounter_ClearRepeatLimit_N_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShockCounter_ClearRepeatLimit_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShockCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShockCounter_ClearRepeatLimit_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShockCounter, nullptr, "ClearRepeatLimit_N", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShockCounter_ClearRepeatLimit_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShockCounter_ClearRepeatLimit_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShockCounter_ClearRepeatLimit_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShockCounter_ClearRepeatLimit_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShockCounter_GetShockCounterValue_N_Statics
	{
		struct ELShockCounter_eventGetShockCounterValue_N_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELShockCounter_GetShockCounterValue_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShockCounter_eventGetShockCounterValue_N_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShockCounter_GetShockCounterValue_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShockCounter_GetShockCounterValue_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShockCounter_GetShockCounterValue_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShockCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShockCounter_GetShockCounterValue_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShockCounter, nullptr, "GetShockCounterValue_N", nullptr, nullptr, sizeof(ELShockCounter_eventGetShockCounterValue_N_Parms), Z_Construct_UFunction_UELShockCounter_GetShockCounterValue_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShockCounter_GetShockCounterValue_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShockCounter_GetShockCounterValue_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShockCounter_GetShockCounterValue_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShockCounter_GetShockCounterValue_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShockCounter_GetShockCounterValue_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShockCounter_IsChangeGroggyState_N_Statics
	{
		struct ELShockCounter_eventIsChangeGroggyState_N_Parms
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
	void Z_Construct_UFunction_UELShockCounter_IsChangeGroggyState_N_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELShockCounter_eventIsChangeGroggyState_N_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELShockCounter_IsChangeGroggyState_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELShockCounter_eventIsChangeGroggyState_N_Parms), &Z_Construct_UFunction_UELShockCounter_IsChangeGroggyState_N_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShockCounter_IsChangeGroggyState_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShockCounter_IsChangeGroggyState_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShockCounter_IsChangeGroggyState_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShockCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShockCounter_IsChangeGroggyState_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShockCounter, nullptr, "IsChangeGroggyState_N", nullptr, nullptr, sizeof(ELShockCounter_eventIsChangeGroggyState_N_Parms), Z_Construct_UFunction_UELShockCounter_IsChangeGroggyState_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShockCounter_IsChangeGroggyState_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShockCounter_IsChangeGroggyState_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShockCounter_IsChangeGroggyState_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShockCounter_IsChangeGroggyState_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShockCounter_IsChangeGroggyState_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShockCounter_IsRise_N_Statics
	{
		struct ELShockCounter_eventIsRise_N_Parms
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
	void Z_Construct_UFunction_UELShockCounter_IsRise_N_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELShockCounter_eventIsRise_N_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELShockCounter_IsRise_N_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELShockCounter_eventIsRise_N_Parms), &Z_Construct_UFunction_UELShockCounter_IsRise_N_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShockCounter_IsRise_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShockCounter_IsRise_N_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShockCounter_IsRise_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShockCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShockCounter_IsRise_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShockCounter, nullptr, "IsRise_N", nullptr, nullptr, sizeof(ELShockCounter_eventIsRise_N_Parms), Z_Construct_UFunction_UELShockCounter_IsRise_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShockCounter_IsRise_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShockCounter_IsRise_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShockCounter_IsRise_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShockCounter_IsRise_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShockCounter_IsRise_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShockCounter_SetCounterValue_N_Statics
	{
		struct ELShockCounter_eventSetCounterValue_N_Parms
		{
			bool bEx;
			float Value;
		};
		static void NewProp_bEx_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEx;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELShockCounter_SetCounterValue_N_Statics::NewProp_bEx_SetBit(void* Obj)
	{
		((ELShockCounter_eventSetCounterValue_N_Parms*)Obj)->bEx = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELShockCounter_SetCounterValue_N_Statics::NewProp_bEx = { "bEx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELShockCounter_eventSetCounterValue_N_Parms), &Z_Construct_UFunction_UELShockCounter_SetCounterValue_N_Statics::NewProp_bEx_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELShockCounter_SetCounterValue_N_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShockCounter_eventSetCounterValue_N_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShockCounter_SetCounterValue_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShockCounter_SetCounterValue_N_Statics::NewProp_bEx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShockCounter_SetCounterValue_N_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShockCounter_SetCounterValue_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShockCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShockCounter_SetCounterValue_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShockCounter, nullptr, "SetCounterValue_N", nullptr, nullptr, sizeof(ELShockCounter_eventSetCounterValue_N_Parms), Z_Construct_UFunction_UELShockCounter_SetCounterValue_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShockCounter_SetCounterValue_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShockCounter_SetCounterValue_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShockCounter_SetCounterValue_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShockCounter_SetCounterValue_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShockCounter_SetCounterValue_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELShockCounter_SubCounterValue_N_Statics
	{
		struct ELShockCounter_eventSubCounterValue_N_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELShockCounter_SubCounterValue_N_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELShockCounter_eventSubCounterValue_N_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELShockCounter_SubCounterValue_N_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELShockCounter_SubCounterValue_N_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELShockCounter_SubCounterValue_N_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELShockCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELShockCounter_SubCounterValue_N_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELShockCounter, nullptr, "SubCounterValue_N", nullptr, nullptr, sizeof(ELShockCounter_eventSubCounterValue_N_Parms), Z_Construct_UFunction_UELShockCounter_SubCounterValue_N_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShockCounter_SubCounterValue_N_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELShockCounter_SubCounterValue_N_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELShockCounter_SubCounterValue_N_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELShockCounter_SubCounterValue_N()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELShockCounter_SubCounterValue_N_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELShockCounter_NoRegister()
	{
		return UELShockCounter::StaticClass();
	}
	struct Z_Construct_UClass_UELShockCounter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShockCounterParam_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShockCounterParam_N;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MiniGameMashParam_N_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniGameMashParam_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MiniGameMashParam_N;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MiniGameMashBonusParam_N_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniGameMashBonusParam_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MiniGameMashBonusParam_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CounterValue_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CounterValue_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalDownSecond_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditionalDownSecond_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingDownSec_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RingDownSec_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArenaDownSec_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArenaDownSec_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MashBonusSecond_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MashBonusSecond_N;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MashBonusTotalSubSec_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MashBonusTotalSubSec_N;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELShockCounter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELShockCounter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELShockCounter_ClearRepeatLimit_N, "ClearRepeatLimit_N" }, // 2639331219
		{ &Z_Construct_UFunction_UELShockCounter_GetShockCounterValue_N, "GetShockCounterValue_N" }, // 3901300785
		{ &Z_Construct_UFunction_UELShockCounter_IsChangeGroggyState_N, "IsChangeGroggyState_N" }, // 1720869006
		{ &Z_Construct_UFunction_UELShockCounter_IsRise_N, "IsRise_N" }, // 3997439871
		{ &Z_Construct_UFunction_UELShockCounter_SetCounterValue_N, "SetCounterValue_N" }, // 48273295
		{ &Z_Construct_UFunction_UELShockCounter_SubCounterValue_N, "SubCounterValue_N" }, // 1669427237
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShockCounter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ELShockCounter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELShockCounter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShockCounter_Statics::NewProp_ShockCounterParam_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELShockCounter" },
		{ "ModuleRelativePath", "Public/ELShockCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELShockCounter_Statics::NewProp_ShockCounterParam_N = { "ShockCounterParam_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELShockCounter, ShockCounterParam_N), Z_Construct_UScriptStruct_FStShockCounterParam, METADATA_PARAMS(Z_Construct_UClass_UELShockCounter_Statics::NewProp_ShockCounterParam_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELShockCounter_Statics::NewProp_ShockCounterParam_N_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELShockCounter_Statics::NewProp_MiniGameMashParam_N_Inner = { "MiniGameMashParam_N", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStPinMiniGameMash, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShockCounter_Statics::NewProp_MiniGameMashParam_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELShockCounter" },
		{ "ModuleRelativePath", "Public/ELShockCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELShockCounter_Statics::NewProp_MiniGameMashParam_N = { "MiniGameMashParam_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELShockCounter, MiniGameMashParam_N), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELShockCounter_Statics::NewProp_MiniGameMashParam_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELShockCounter_Statics::NewProp_MiniGameMashParam_N_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELShockCounter_Statics::NewProp_MiniGameMashBonusParam_N_Inner = { "MiniGameMashBonusParam_N", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStMiniGameMashBonus, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShockCounter_Statics::NewProp_MiniGameMashBonusParam_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELShockCounter" },
		{ "ModuleRelativePath", "Public/ELShockCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELShockCounter_Statics::NewProp_MiniGameMashBonusParam_N = { "MiniGameMashBonusParam_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELShockCounter, MiniGameMashBonusParam_N), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELShockCounter_Statics::NewProp_MiniGameMashBonusParam_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELShockCounter_Statics::NewProp_MiniGameMashBonusParam_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShockCounter_Statics::NewProp_CounterValue_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELShockCounter" },
		{ "ModuleRelativePath", "Public/ELShockCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELShockCounter_Statics::NewProp_CounterValue_N = { "CounterValue_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELShockCounter, CounterValue_N), METADATA_PARAMS(Z_Construct_UClass_UELShockCounter_Statics::NewProp_CounterValue_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELShockCounter_Statics::NewProp_CounterValue_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShockCounter_Statics::NewProp_AdditionalDownSecond_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELShockCounter" },
		{ "ModuleRelativePath", "Public/ELShockCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELShockCounter_Statics::NewProp_AdditionalDownSecond_N = { "AdditionalDownSecond_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELShockCounter, AdditionalDownSecond_N), METADATA_PARAMS(Z_Construct_UClass_UELShockCounter_Statics::NewProp_AdditionalDownSecond_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELShockCounter_Statics::NewProp_AdditionalDownSecond_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShockCounter_Statics::NewProp_RingDownSec_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELShockCounter" },
		{ "ModuleRelativePath", "Public/ELShockCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELShockCounter_Statics::NewProp_RingDownSec_N = { "RingDownSec_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELShockCounter, RingDownSec_N), METADATA_PARAMS(Z_Construct_UClass_UELShockCounter_Statics::NewProp_RingDownSec_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELShockCounter_Statics::NewProp_RingDownSec_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShockCounter_Statics::NewProp_ArenaDownSec_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELShockCounter" },
		{ "ModuleRelativePath", "Public/ELShockCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELShockCounter_Statics::NewProp_ArenaDownSec_N = { "ArenaDownSec_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELShockCounter, ArenaDownSec_N), METADATA_PARAMS(Z_Construct_UClass_UELShockCounter_Statics::NewProp_ArenaDownSec_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELShockCounter_Statics::NewProp_ArenaDownSec_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShockCounter_Statics::NewProp_MashBonusSecond_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELShockCounter" },
		{ "ModuleRelativePath", "Public/ELShockCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELShockCounter_Statics::NewProp_MashBonusSecond_N = { "MashBonusSecond_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELShockCounter, MashBonusSecond_N), METADATA_PARAMS(Z_Construct_UClass_UELShockCounter_Statics::NewProp_MashBonusSecond_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELShockCounter_Statics::NewProp_MashBonusSecond_N_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELShockCounter_Statics::NewProp_MashBonusTotalSubSec_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELShockCounter" },
		{ "ModuleRelativePath", "Public/ELShockCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELShockCounter_Statics::NewProp_MashBonusTotalSubSec_N = { "MashBonusTotalSubSec_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELShockCounter, MashBonusTotalSubSec_N), METADATA_PARAMS(Z_Construct_UClass_UELShockCounter_Statics::NewProp_MashBonusTotalSubSec_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELShockCounter_Statics::NewProp_MashBonusTotalSubSec_N_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELShockCounter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShockCounter_Statics::NewProp_ShockCounterParam_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShockCounter_Statics::NewProp_MiniGameMashParam_N_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShockCounter_Statics::NewProp_MiniGameMashParam_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShockCounter_Statics::NewProp_MiniGameMashBonusParam_N_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShockCounter_Statics::NewProp_MiniGameMashBonusParam_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShockCounter_Statics::NewProp_CounterValue_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShockCounter_Statics::NewProp_AdditionalDownSecond_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShockCounter_Statics::NewProp_RingDownSec_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShockCounter_Statics::NewProp_ArenaDownSec_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShockCounter_Statics::NewProp_MashBonusSecond_N,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELShockCounter_Statics::NewProp_MashBonusTotalSubSec_N,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELShockCounter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELShockCounter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELShockCounter_Statics::ClassParams = {
		&UELShockCounter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELShockCounter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELShockCounter_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UELShockCounter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELShockCounter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELShockCounter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELShockCounter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELShockCounter, 2952288979);
	template<> ABP_200508_API UClass* StaticClass<UELShockCounter>()
	{
		return UELShockCounter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELShockCounter(Z_Construct_UClass_UELShockCounter, &UELShockCounter::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELShockCounter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELShockCounter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
