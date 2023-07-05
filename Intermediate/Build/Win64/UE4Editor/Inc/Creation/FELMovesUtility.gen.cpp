// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/FELMovesUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFELMovesUtility() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UFELMovesUtility_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UFELMovesUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher_Part();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFELMovesUtility::execConvertArray)
	{
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out__Moves);
		P_GET_TARRAY_REF(int32,Z_Param_Out__OutArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesUtility::ConvertArray(Z_Param_Out__Moves,Z_Param_Out__OutArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesUtility::execGetRateScale)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_AnimationSequence);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RateScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesUtility::GetRateScale(Z_Param_AnimationSequence,Z_Param_Out_RateScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesUtility::execSaveMovesData)
	{
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out__Moves);
		P_GET_PROPERTY(FStrProperty,Z_Param_RowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesUtility::SaveMovesData(Z_Param_Out__Moves,Z_Param_RowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesUtility::execSaveMovesDataTable)
	{
		P_GET_OBJECT(UDataTable,Z_Param_UpdateTable);
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out__Moves);
		P_GET_PROPERTY(FStrProperty,Z_Param_RowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesUtility::SaveMovesDataTable(Z_Param_UpdateTable,Z_Param_Out__Moves,Z_Param_RowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesUtility::execSetFinisherValue)
	{
		P_GET_STRUCT_REF(FELMoves_Finisher,Z_Param_Out__Finisher);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FELMoves_Finisher_Part,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesUtility::SetFinisherValue(Z_Param_Out__Finisher,Z_Param_Index,Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesUtility::execSetValue)
	{
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out__Moves);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesUtility::SetValue(Z_Param_Out__Moves,Z_Param_Index,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFELMovesUtility::execSortPlayerStartArray)
	{
		P_GET_TARRAY_REF(APlayerStart*,Z_Param_Out_PlayerStartArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFELMovesUtility::SortPlayerStartArray(Z_Param_Out_PlayerStartArray);
		P_NATIVE_END;
	}
	void UFELMovesUtility::StaticRegisterNativesUFELMovesUtility()
	{
		UClass* Class = UFELMovesUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertArray", &UFELMovesUtility::execConvertArray },
			{ "GetRateScale", &UFELMovesUtility::execGetRateScale },
			{ "SaveMovesData", &UFELMovesUtility::execSaveMovesData },
			{ "SaveMovesDataTable", &UFELMovesUtility::execSaveMovesDataTable },
			{ "SetFinisherValue", &UFELMovesUtility::execSetFinisherValue },
			{ "SetValue", &UFELMovesUtility::execSetValue },
			{ "SortPlayerStartArray", &UFELMovesUtility::execSortPlayerStartArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFELMovesUtility_ConvertArray_Statics
	{
		struct FELMovesUtility_eventConvertArray_Parms
		{
			FELMoves _Moves;
			TArray<int32> _OutArray;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Moves;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__OutArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__OutArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesUtility_ConvertArray_Statics::NewProp__Moves = { "_Moves", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesUtility_eventConvertArray_Parms, _Moves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesUtility_ConvertArray_Statics::NewProp__OutArray_Inner = { "_OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFELMovesUtility_ConvertArray_Statics::NewProp__OutArray = { "_OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesUtility_eventConvertArray_Parms, _OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesUtility_ConvertArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_ConvertArray_Statics::NewProp__Moves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_ConvertArray_Statics::NewProp__OutArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_ConvertArray_Statics::NewProp__OutArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesUtility_ConvertArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesUtility_ConvertArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesUtility, nullptr, "ConvertArray", nullptr, nullptr, sizeof(FELMovesUtility_eventConvertArray_Parms), Z_Construct_UFunction_UFELMovesUtility_ConvertArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_ConvertArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesUtility_ConvertArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_ConvertArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesUtility_ConvertArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesUtility_ConvertArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesUtility_GetRateScale_Statics
	{
		struct FELMovesUtility_eventGetRateScale_Parms
		{
			const UAnimMontage* AnimationSequence;
			float RateScale;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationSequence;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RateScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesUtility_GetRateScale_Statics::NewProp_AnimationSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFELMovesUtility_GetRateScale_Statics::NewProp_AnimationSequence = { "AnimationSequence", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesUtility_eventGetRateScale_Parms, AnimationSequence), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesUtility_GetRateScale_Statics::NewProp_AnimationSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_GetRateScale_Statics::NewProp_AnimationSequence_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFELMovesUtility_GetRateScale_Statics::NewProp_RateScale = { "RateScale", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesUtility_eventGetRateScale_Parms, RateScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesUtility_GetRateScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_GetRateScale_Statics::NewProp_AnimationSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_GetRateScale_Statics::NewProp_RateScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesUtility_GetRateScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesUtility_GetRateScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesUtility, nullptr, "GetRateScale", nullptr, nullptr, sizeof(FELMovesUtility_eventGetRateScale_Parms), Z_Construct_UFunction_UFELMovesUtility_GetRateScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_GetRateScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesUtility_GetRateScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_GetRateScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesUtility_GetRateScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesUtility_GetRateScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics
	{
		struct FELMovesUtility_eventSaveMovesData_Parms
		{
			FELMoves _Moves;
			FString RowName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Moves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Moves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::NewProp__Moves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::NewProp__Moves = { "_Moves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesUtility_eventSaveMovesData_Parms, _Moves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::NewProp__Moves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::NewProp__Moves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesUtility_eventSaveMovesData_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::NewProp__Moves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::NewProp_RowName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesUtility, nullptr, "SaveMovesData", nullptr, nullptr, sizeof(FELMovesUtility_eventSaveMovesData_Parms), Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesUtility_SaveMovesData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesUtility_SaveMovesData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics
	{
		struct FELMovesUtility_eventSaveMovesDataTable_Parms
		{
			UDataTable* UpdateTable;
			FELMoves _Moves;
			FString RowName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdateTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Moves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Moves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::NewProp_UpdateTable = { "UpdateTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesUtility_eventSaveMovesDataTable_Parms, UpdateTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::NewProp__Moves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::NewProp__Moves = { "_Moves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesUtility_eventSaveMovesDataTable_Parms, _Moves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::NewProp__Moves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::NewProp__Moves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesUtility_eventSaveMovesDataTable_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::NewProp_UpdateTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::NewProp__Moves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::NewProp_RowName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesUtility, nullptr, "SaveMovesDataTable", nullptr, nullptr, sizeof(FELMovesUtility_eventSaveMovesDataTable_Parms), Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics
	{
		struct FELMovesUtility_eventSetFinisherValue_Parms
		{
			FELMoves_Finisher _Finisher;
			int32 Index;
			FELMoves_Finisher_Part Data;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Finisher;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics::NewProp__Finisher = { "_Finisher", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesUtility_eventSetFinisherValue_Parms, _Finisher), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesUtility_eventSetFinisherValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesUtility_eventSetFinisherValue_Parms, Data), Z_Construct_UScriptStruct_FELMoves_Finisher_Part, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics::NewProp__Finisher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesUtility, nullptr, "SetFinisherValue", nullptr, nullptr, sizeof(FELMovesUtility_eventSetFinisherValue_Parms), Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesUtility_SetValue_Statics
	{
		struct FELMovesUtility_eventSetValue_Parms
		{
			FELMoves _Moves;
			int32 Index;
			int32 Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Moves;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFELMovesUtility_SetValue_Statics::NewProp__Moves = { "_Moves", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesUtility_eventSetValue_Parms, _Moves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesUtility_SetValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesUtility_eventSetValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFELMovesUtility_SetValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesUtility_eventSetValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesUtility_SetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_SetValue_Statics::NewProp__Moves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_SetValue_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_SetValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesUtility_SetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesUtility_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesUtility, nullptr, "SetValue", nullptr, nullptr, sizeof(FELMovesUtility_eventSetValue_Parms), Z_Construct_UFunction_UFELMovesUtility_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesUtility_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesUtility_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesUtility_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFELMovesUtility_SortPlayerStartArray_Statics
	{
		struct FELMovesUtility_eventSortPlayerStartArray_Parms
		{
			TArray<APlayerStart*> PlayerStartArray;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStartArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerStartArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFELMovesUtility_SortPlayerStartArray_Statics::NewProp_PlayerStartArray_Inner = { "PlayerStartArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFELMovesUtility_SortPlayerStartArray_Statics::NewProp_PlayerStartArray = { "PlayerStartArray", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesUtility_eventSortPlayerStartArray_Parms, PlayerStartArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFELMovesUtility_SortPlayerStartArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_SortPlayerStartArray_Statics::NewProp_PlayerStartArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFELMovesUtility_SortPlayerStartArray_Statics::NewProp_PlayerStartArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFELMovesUtility_SortPlayerStartArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FELMovesUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFELMovesUtility_SortPlayerStartArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFELMovesUtility, nullptr, "SortPlayerStartArray", nullptr, nullptr, sizeof(FELMovesUtility_eventSortPlayerStartArray_Parms), Z_Construct_UFunction_UFELMovesUtility_SortPlayerStartArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_SortPlayerStartArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFELMovesUtility_SortPlayerStartArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFELMovesUtility_SortPlayerStartArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFELMovesUtility_SortPlayerStartArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFELMovesUtility_SortPlayerStartArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFELMovesUtility_NoRegister()
	{
		return UFELMovesUtility::StaticClass();
	}
	struct Z_Construct_UClass_UFELMovesUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFELMovesUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFELMovesUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFELMovesUtility_ConvertArray, "ConvertArray" }, // 2547102725
		{ &Z_Construct_UFunction_UFELMovesUtility_GetRateScale, "GetRateScale" }, // 1960922671
		{ &Z_Construct_UFunction_UFELMovesUtility_SaveMovesData, "SaveMovesData" }, // 1150038409
		{ &Z_Construct_UFunction_UFELMovesUtility_SaveMovesDataTable, "SaveMovesDataTable" }, // 1357373958
		{ &Z_Construct_UFunction_UFELMovesUtility_SetFinisherValue, "SetFinisherValue" }, // 2597931773
		{ &Z_Construct_UFunction_UFELMovesUtility_SetValue, "SetValue" }, // 2175622595
		{ &Z_Construct_UFunction_UFELMovesUtility_SortPlayerStartArray, "SortPlayerStartArray" }, // 3946998135
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFELMovesUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FELMovesUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FELMovesUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFELMovesUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFELMovesUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFELMovesUtility_Statics::ClassParams = {
		&UFELMovesUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFELMovesUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFELMovesUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFELMovesUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFELMovesUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFELMovesUtility, 373941413);
	template<> CREATION_API UClass* StaticClass<UFELMovesUtility>()
	{
		return UFELMovesUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFELMovesUtility(Z_Construct_UClass_UFELMovesUtility, &UFELMovesUtility::StaticClass, TEXT("/Script/Creation"), TEXT("UFELMovesUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFELMovesUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
