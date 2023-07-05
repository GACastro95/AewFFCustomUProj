// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELMovesAdjust.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesAdjust() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELMovesAdjust_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELMovesAdjust();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerMoves();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELMovesAdjust::execAdjustELMoves)
	{
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out__Result);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out__WrestlerMoves);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out__TemplateMoves);
		P_GET_TSET_REF(int32,Z_Param_Out__UnlockIDList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AdjustELMoves(Z_Param_Out__Result,Z_Param_Out__WrestlerMoves,Z_Param_Out__TemplateMoves,Z_Param_Out__UnlockIDList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovesAdjust::execAdjustELMoves_Finisher)
	{
		P_GET_STRUCT_REF(FELMoves_Finisher,Z_Param_Out__Result);
		P_GET_STRUCT_REF(FELMoves_Finisher,Z_Param_Out__WrestlerMoves);
		P_GET_STRUCT_REF(FELMoves_Finisher,Z_Param_Out__TemplateMoves);
		P_GET_TSET_REF(int32,Z_Param_Out__UnlockIDList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AdjustELMoves_Finisher(Z_Param_Out__Result,Z_Param_Out__WrestlerMoves,Z_Param_Out__TemplateMoves,Z_Param_Out__UnlockIDList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELMovesAdjust::execAdjustWrestlerMoves)
	{
		P_GET_STRUCT_REF(FWrestlerMoves,Z_Param_Out__Result);
		P_GET_STRUCT_REF(FWrestlerMoves,Z_Param_Out__WrestlerMoves);
		P_GET_STRUCT_REF(FWrestlerMoves,Z_Param_Out__TemplateMoves);
		P_GET_TSET_REF(int32,Z_Param_Out__UnlockIDList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AdjustWrestlerMoves(Z_Param_Out__Result,Z_Param_Out__WrestlerMoves,Z_Param_Out__TemplateMoves,Z_Param_Out__UnlockIDList);
		P_NATIVE_END;
	}
	void UELMovesAdjust::StaticRegisterNativesUELMovesAdjust()
	{
		UClass* Class = UELMovesAdjust::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustELMoves", &UELMovesAdjust::execAdjustELMoves },
			{ "AdjustELMoves_Finisher", &UELMovesAdjust::execAdjustELMoves_Finisher },
			{ "AdjustWrestlerMoves", &UELMovesAdjust::execAdjustWrestlerMoves },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics
	{
		struct ELMovesAdjust_eventAdjustELMoves_Parms
		{
			FELMoves _Result;
			FELMoves _WrestlerMoves;
			FELMoves _TemplateMoves;
			TSet<int32> _UnlockIDList;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__WrestlerMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__WrestlerMoves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__TemplateMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__TemplateMoves;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__UnlockIDList_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__UnlockIDList_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__UnlockIDList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__Result = { "_Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesAdjust_eventAdjustELMoves_Parms, _Result), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__WrestlerMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__WrestlerMoves = { "_WrestlerMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesAdjust_eventAdjustELMoves_Parms, _WrestlerMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__WrestlerMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__WrestlerMoves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__TemplateMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__TemplateMoves = { "_TemplateMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesAdjust_eventAdjustELMoves_Parms, _TemplateMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__TemplateMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__TemplateMoves_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__UnlockIDList_ElementProp = { "_UnlockIDList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__UnlockIDList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__UnlockIDList = { "_UnlockIDList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesAdjust_eventAdjustELMoves_Parms, _UnlockIDList), METADATA_PARAMS(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__UnlockIDList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__UnlockIDList_MetaData)) };
	void Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovesAdjust_eventAdjustELMoves_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovesAdjust_eventAdjustELMoves_Parms), &Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__WrestlerMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__TemplateMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__UnlockIDList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp__UnlockIDList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovesAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovesAdjust, nullptr, "AdjustELMoves", nullptr, nullptr, sizeof(ELMovesAdjust_eventAdjustELMoves_Parms), Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics
	{
		struct ELMovesAdjust_eventAdjustELMoves_Finisher_Parms
		{
			FELMoves_Finisher _Result;
			FELMoves_Finisher _WrestlerMoves;
			FELMoves_Finisher _TemplateMoves;
			TSet<int32> _UnlockIDList;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__WrestlerMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__WrestlerMoves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__TemplateMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__TemplateMoves;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__UnlockIDList_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__UnlockIDList_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__UnlockIDList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__Result = { "_Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesAdjust_eventAdjustELMoves_Finisher_Parms, _Result), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__WrestlerMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__WrestlerMoves = { "_WrestlerMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesAdjust_eventAdjustELMoves_Finisher_Parms, _WrestlerMoves), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__WrestlerMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__WrestlerMoves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__TemplateMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__TemplateMoves = { "_TemplateMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesAdjust_eventAdjustELMoves_Finisher_Parms, _TemplateMoves), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__TemplateMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__TemplateMoves_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__UnlockIDList_ElementProp = { "_UnlockIDList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__UnlockIDList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__UnlockIDList = { "_UnlockIDList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesAdjust_eventAdjustELMoves_Finisher_Parms, _UnlockIDList), METADATA_PARAMS(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__UnlockIDList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__UnlockIDList_MetaData)) };
	void Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovesAdjust_eventAdjustELMoves_Finisher_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovesAdjust_eventAdjustELMoves_Finisher_Parms), &Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__WrestlerMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__TemplateMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__UnlockIDList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp__UnlockIDList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovesAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovesAdjust, nullptr, "AdjustELMoves_Finisher", nullptr, nullptr, sizeof(ELMovesAdjust_eventAdjustELMoves_Finisher_Parms), Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics
	{
		struct ELMovesAdjust_eventAdjustWrestlerMoves_Parms
		{
			FWrestlerMoves _Result;
			FWrestlerMoves _WrestlerMoves;
			FWrestlerMoves _TemplateMoves;
			TSet<int32> _UnlockIDList;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Result;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__WrestlerMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__WrestlerMoves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__TemplateMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__TemplateMoves;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__UnlockIDList_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__UnlockIDList_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp__UnlockIDList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__Result = { "_Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesAdjust_eventAdjustWrestlerMoves_Parms, _Result), Z_Construct_UScriptStruct_FWrestlerMoves, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__WrestlerMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__WrestlerMoves = { "_WrestlerMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesAdjust_eventAdjustWrestlerMoves_Parms, _WrestlerMoves), Z_Construct_UScriptStruct_FWrestlerMoves, METADATA_PARAMS(Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__WrestlerMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__WrestlerMoves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__TemplateMoves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__TemplateMoves = { "_TemplateMoves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesAdjust_eventAdjustWrestlerMoves_Parms, _TemplateMoves), Z_Construct_UScriptStruct_FWrestlerMoves, METADATA_PARAMS(Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__TemplateMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__TemplateMoves_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__UnlockIDList_ElementProp = { "_UnlockIDList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__UnlockIDList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__UnlockIDList = { "_UnlockIDList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELMovesAdjust_eventAdjustWrestlerMoves_Parms, _UnlockIDList), METADATA_PARAMS(Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__UnlockIDList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__UnlockIDList_MetaData)) };
	void Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELMovesAdjust_eventAdjustWrestlerMoves_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELMovesAdjust_eventAdjustWrestlerMoves_Parms), &Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__WrestlerMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__TemplateMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__UnlockIDList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp__UnlockIDList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELMovesAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELMovesAdjust, nullptr, "AdjustWrestlerMoves", nullptr, nullptr, sizeof(ELMovesAdjust_eventAdjustWrestlerMoves_Parms), Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELMovesAdjust_NoRegister()
	{
		return UELMovesAdjust::StaticClass();
	}
	struct Z_Construct_UClass_UELMovesAdjust_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesSituationDT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovesSituationDT;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELMovesAdjust_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELMovesAdjust_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves, "AdjustELMoves" }, // 4021758275
		{ &Z_Construct_UFunction_UELMovesAdjust_AdjustELMoves_Finisher, "AdjustELMoves_Finisher" }, // 2111246873
		{ &Z_Construct_UFunction_UELMovesAdjust_AdjustWrestlerMoves, "AdjustWrestlerMoves" }, // 1484125779
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMovesAdjust_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELMovesAdjust.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELMovesAdjust.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELMovesAdjust_Statics::NewProp_MovesSituationDT_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesAdjust" },
		{ "ModuleRelativePath", "Public/ELMovesAdjust.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELMovesAdjust_Statics::NewProp_MovesSituationDT = { "MovesSituationDT", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELMovesAdjust, MovesSituationDT), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELMovesAdjust_Statics::NewProp_MovesSituationDT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELMovesAdjust_Statics::NewProp_MovesSituationDT_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELMovesAdjust_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELMovesAdjust_Statics::NewProp_MovesSituationDT,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELMovesAdjust_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELMovesAdjust>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELMovesAdjust_Statics::ClassParams = {
		&UELMovesAdjust::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELMovesAdjust_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELMovesAdjust_Statics::PropPointers),
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UELMovesAdjust_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELMovesAdjust_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELMovesAdjust()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELMovesAdjust_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELMovesAdjust, 2702512018);
	template<> ELITE_API UClass* StaticClass<UELMovesAdjust>()
	{
		return UELMovesAdjust::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELMovesAdjust(Z_Construct_UClass_UELMovesAdjust, &UELMovesAdjust::StaticClass, TEXT("/Script/ELITE"), TEXT("UELMovesAdjust"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELMovesAdjust);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
