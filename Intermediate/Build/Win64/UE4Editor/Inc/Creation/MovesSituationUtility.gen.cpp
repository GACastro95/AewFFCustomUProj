// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/MovesSituationUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovesSituationUtility() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UMovesSituationUtility_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UMovesSituationUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FMovesSituation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher_Part();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesDataTable_Type();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesTag_AttackIndex();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesTag_DamagePartIndex();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesTag_FunctionIndex();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesTag_MovesIndex();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FMovesOutputData();
// End Cross Module References
	DEFINE_FUNCTION(UMovesSituationUtility::execFindSituationDataName)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_GET_OBJECT(UDataTable,Z_Param_UpdateTable);
		P_GET_PROPERTY(FIntProperty,Z_Param_DT_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituationUtility::FindSituationDataName(Z_Param_Out_OutIndex,Z_Param_UpdateTable,Z_Param_DT_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituationUtility::execGetAttackTagArray)
	{
		P_GET_TARRAY_REF(bool,Z_Param_Out__OutAttackTagArray);
		P_GET_STRUCT_REF(FMovesSituation,Z_Param_Out__MovesSituation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituationUtility::GetAttackTagArray(Z_Param_Out__OutAttackTagArray,Z_Param_Out__MovesSituation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituationUtility::execGetDamagePartTagArray)
	{
		P_GET_TARRAY_REF(bool,Z_Param_Out__OutDamagePartTagArray);
		P_GET_STRUCT_REF(FMovesSituation,Z_Param_Out__MovesSituation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituationUtility::GetDamagePartTagArray(Z_Param_Out__OutDamagePartTagArray,Z_Param_Out__MovesSituation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituationUtility::execGetEnableFinisherList)
	{
		P_GET_TMAP_REF(UObject*,UObject*,Z_Param_Out__outList);
		P_GET_TMAP_REF(UObject*,UObject*,Z_Param_Out__BaseList);
		P_GET_STRUCT_REF(FELMoves_Finisher,Z_Param_Out_FinisherData);
		P_GET_STRUCT_REF(FELMoves_Finisher_Part,Z_Param_Out_CurrentFinisher);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituationUtility::GetEnableFinisherList(Z_Param_Out__outList,Z_Param_Out__BaseList,Z_Param_Out_FinisherData,Z_Param_Out_CurrentFinisher);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituationUtility::execGetFunctionTagArray)
	{
		P_GET_TARRAY_REF(bool,Z_Param_Out__OutFunctionTagArray);
		P_GET_STRUCT_REF(FMovesSituation,Z_Param_Out__MovesSituation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituationUtility::GetFunctionTagArray(Z_Param_Out__OutFunctionTagArray,Z_Param_Out__MovesSituation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituationUtility::execGetMovesTagArray)
	{
		P_GET_TARRAY_REF(bool,Z_Param_Out__OutMovesTagArray);
		P_GET_STRUCT_REF(FMovesSituation,Z_Param_Out__MovesSituation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituationUtility::GetMovesTagArray(Z_Param_Out__OutMovesTagArray,Z_Param_Out__MovesSituation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituationUtility::execGetSituationMovesName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outName);
		P_GET_ENUM(EMovesDataTable_Type,Z_Param_TableType);
		P_GET_PROPERTY(FIntProperty,Z_Param_DT_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituationUtility::GetSituationMovesName(Z_Param_Out_outName,EMovesDataTable_Type(Z_Param_TableType),Z_Param_DT_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituationUtility::execIsAttackTagArray)
	{
		P_GET_TARRAY_REF(bool,Z_Param_Out__OutAttackTagArray);
		P_GET_ENUM(EMovesTag_AttackIndex,Z_Param__AttackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovesSituationUtility::IsAttackTagArray(Z_Param_Out__OutAttackTagArray,EMovesTag_AttackIndex(Z_Param__AttackIndex));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituationUtility::execIsDamagePartTagArray)
	{
		P_GET_TARRAY_REF(bool,Z_Param_Out__OutDamagePartTagArray);
		P_GET_ENUM(EMovesTag_DamagePartIndex,Z_Param__DamagePartIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovesSituationUtility::IsDamagePartTagArray(Z_Param_Out__OutDamagePartTagArray,EMovesTag_DamagePartIndex(Z_Param__DamagePartIndex));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituationUtility::execIsFunctionTagArray)
	{
		P_GET_TARRAY_REF(bool,Z_Param_Out__OutFunctionTagArray);
		P_GET_ENUM(EMovesTag_FunctionIndex,Z_Param__FunctionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovesSituationUtility::IsFunctionTagArray(Z_Param_Out__OutFunctionTagArray,EMovesTag_FunctionIndex(Z_Param__FunctionIndex));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituationUtility::execIsMovesTagArray)
	{
		P_GET_TARRAY_REF(bool,Z_Param_Out__OutMovesTagArray);
		P_GET_ENUM(EMovesTag_MovesIndex,Z_Param__MovesIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMovesSituationUtility::IsMovesTagArray(Z_Param_Out__OutMovesTagArray,EMovesTag_MovesIndex(Z_Param__MovesIndex));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituationUtility::execOutPutDataArray)
	{
		P_GET_TARRAY_REF(FMovesOutputData,Z_Param_Out_OutputData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituationUtility::OutPutDataArray(Z_Param_Out_OutputData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituationUtility::execSaveMovesSituationData)
	{
		P_GET_OBJECT(UDataTable,Z_Param_UpdateTable);
		P_GET_STRUCT_REF(FMovesSituation,Z_Param_Out__MovesSituation);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituationUtility::SaveMovesSituationData(Z_Param_UpdateTable,Z_Param_Out__MovesSituation,Z_Param_Out_RowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituationUtility::execSearchDataArray_DataTable)
	{
		P_GET_TARRAY_REF(FMovesSituation,Z_Param_Out_OutKeys);
		P_GET_OBJECT(UDataTable,Z_Param_inSituationTable);
		P_GET_OBJECT(UDataTable,Z_Param_inTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituationUtility::SearchDataArray_DataTable(Z_Param_Out_OutKeys,Z_Param_inSituationTable,Z_Param_inTable);
		P_NATIVE_END;
	}
	void UMovesSituationUtility::StaticRegisterNativesUMovesSituationUtility()
	{
		UClass* Class = UMovesSituationUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindSituationDataName", &UMovesSituationUtility::execFindSituationDataName },
			{ "GetAttackTagArray", &UMovesSituationUtility::execGetAttackTagArray },
			{ "GetDamagePartTagArray", &UMovesSituationUtility::execGetDamagePartTagArray },
			{ "GetEnableFinisherList", &UMovesSituationUtility::execGetEnableFinisherList },
			{ "GetFunctionTagArray", &UMovesSituationUtility::execGetFunctionTagArray },
			{ "GetMovesTagArray", &UMovesSituationUtility::execGetMovesTagArray },
			{ "GetSituationMovesName", &UMovesSituationUtility::execGetSituationMovesName },
			{ "IsAttackTagArray", &UMovesSituationUtility::execIsAttackTagArray },
			{ "IsDamagePartTagArray", &UMovesSituationUtility::execIsDamagePartTagArray },
			{ "IsFunctionTagArray", &UMovesSituationUtility::execIsFunctionTagArray },
			{ "IsMovesTagArray", &UMovesSituationUtility::execIsMovesTagArray },
			{ "OutPutDataArray", &UMovesSituationUtility::execOutPutDataArray },
			{ "SaveMovesSituationData", &UMovesSituationUtility::execSaveMovesSituationData },
			{ "SearchDataArray_DataTable", &UMovesSituationUtility::execSearchDataArray_DataTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics
	{
		struct MovesSituationUtility_eventFindSituationDataName_Parms
		{
			int32 OutIndex;
			const UDataTable* UpdateTable;
			int32 DT_ID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdateTable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DT_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventFindSituationDataName_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics::NewProp_UpdateTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics::NewProp_UpdateTable = { "UpdateTable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventFindSituationDataName_Parms, UpdateTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics::NewProp_UpdateTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics::NewProp_UpdateTable_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics::NewProp_DT_ID = { "DT_ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventFindSituationDataName_Parms, DT_ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics::NewProp_OutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics::NewProp_UpdateTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics::NewProp_DT_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituationUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationUtility, nullptr, "FindSituationDataName", nullptr, nullptr, sizeof(MovesSituationUtility_eventFindSituationDataName_Parms), Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics
	{
		struct MovesSituationUtility_eventGetAttackTagArray_Parms
		{
			TArray<bool> _OutAttackTagArray;
			FMovesSituation _MovesSituation;
		};
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__OutAttackTagArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__OutAttackTagArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__MovesSituation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__MovesSituation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics::NewProp__OutAttackTagArray_Inner = { "_OutAttackTagArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics::NewProp__OutAttackTagArray = { "_OutAttackTagArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventGetAttackTagArray_Parms, _OutAttackTagArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics::NewProp__MovesSituation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics::NewProp__MovesSituation = { "_MovesSituation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventGetAttackTagArray_Parms, _MovesSituation), Z_Construct_UScriptStruct_FMovesSituation, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics::NewProp__MovesSituation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics::NewProp__MovesSituation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics::NewProp__OutAttackTagArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics::NewProp__OutAttackTagArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics::NewProp__MovesSituation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituationUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationUtility, nullptr, "GetAttackTagArray", nullptr, nullptr, sizeof(MovesSituationUtility_eventGetAttackTagArray_Parms), Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics
	{
		struct MovesSituationUtility_eventGetDamagePartTagArray_Parms
		{
			TArray<bool> _OutDamagePartTagArray;
			FMovesSituation _MovesSituation;
		};
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__OutDamagePartTagArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__OutDamagePartTagArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__MovesSituation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__MovesSituation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics::NewProp__OutDamagePartTagArray_Inner = { "_OutDamagePartTagArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics::NewProp__OutDamagePartTagArray = { "_OutDamagePartTagArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventGetDamagePartTagArray_Parms, _OutDamagePartTagArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics::NewProp__MovesSituation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics::NewProp__MovesSituation = { "_MovesSituation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventGetDamagePartTagArray_Parms, _MovesSituation), Z_Construct_UScriptStruct_FMovesSituation, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics::NewProp__MovesSituation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics::NewProp__MovesSituation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics::NewProp__OutDamagePartTagArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics::NewProp__OutDamagePartTagArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics::NewProp__MovesSituation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituationUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationUtility, nullptr, "GetDamagePartTagArray", nullptr, nullptr, sizeof(MovesSituationUtility_eventGetDamagePartTagArray_Parms), Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics
	{
		struct MovesSituationUtility_eventGetEnableFinisherList_Parms
		{
			TMap<UObject*,UObject*> _outList;
			TMap<UObject*,UObject*> _BaseList;
			FELMoves_Finisher FinisherData;
			FELMoves_Finisher_Part CurrentFinisher;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outList_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outList_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__outList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__BaseList_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__BaseList_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__BaseList_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__BaseList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinisherData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FinisherData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFinisher_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentFinisher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp__outList_ValueProp = { "_outList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp__outList_Key_KeyProp = { "_outList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp__outList = { "_outList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventGetEnableFinisherList_Parms, _outList), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp__BaseList_ValueProp = { "_BaseList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp__BaseList_Key_KeyProp = { "_BaseList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp__BaseList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp__BaseList = { "_BaseList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventGetEnableFinisherList_Parms, _BaseList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp__BaseList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp__BaseList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp_FinisherData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp_FinisherData = { "FinisherData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventGetEnableFinisherList_Parms, FinisherData), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp_FinisherData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp_FinisherData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp_CurrentFinisher_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp_CurrentFinisher = { "CurrentFinisher", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventGetEnableFinisherList_Parms, CurrentFinisher), Z_Construct_UScriptStruct_FELMoves_Finisher_Part, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp_CurrentFinisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp_CurrentFinisher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp__outList_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp__outList_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp__outList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp__BaseList_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp__BaseList_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp__BaseList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp_FinisherData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::NewProp_CurrentFinisher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// peek:  these types don't seem compatible with Tmap.  Will stub for now.\n//static void GetEnableFinisherList(TMap<FELMoves_Finisher_Part, FMovesSituation>& _outList, const TMap<FELMoves_Finisher_Part, FMovesSituation>& _BaseList, const FELMoves_Finisher& FinisherData, const FELMoves_Finisher_Part& CurrentFinisher);\n" },
		{ "ModuleRelativePath", "Public/MovesSituationUtility.h" },
		{ "ToolTip", "peek:  these types don't seem compatible with Tmap.  Will stub for now.\nstatic void GetEnableFinisherList(TMap<FELMoves_Finisher_Part, FMovesSituation>& _outList, const TMap<FELMoves_Finisher_Part, FMovesSituation>& _BaseList, const FELMoves_Finisher& FinisherData, const FELMoves_Finisher_Part& CurrentFinisher);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationUtility, nullptr, "GetEnableFinisherList", nullptr, nullptr, sizeof(MovesSituationUtility_eventGetEnableFinisherList_Parms), Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics
	{
		struct MovesSituationUtility_eventGetFunctionTagArray_Parms
		{
			TArray<bool> _OutFunctionTagArray;
			FMovesSituation _MovesSituation;
		};
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__OutFunctionTagArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__OutFunctionTagArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__MovesSituation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__MovesSituation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics::NewProp__OutFunctionTagArray_Inner = { "_OutFunctionTagArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics::NewProp__OutFunctionTagArray = { "_OutFunctionTagArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventGetFunctionTagArray_Parms, _OutFunctionTagArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics::NewProp__MovesSituation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics::NewProp__MovesSituation = { "_MovesSituation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventGetFunctionTagArray_Parms, _MovesSituation), Z_Construct_UScriptStruct_FMovesSituation, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics::NewProp__MovesSituation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics::NewProp__MovesSituation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics::NewProp__OutFunctionTagArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics::NewProp__OutFunctionTagArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics::NewProp__MovesSituation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituationUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationUtility, nullptr, "GetFunctionTagArray", nullptr, nullptr, sizeof(MovesSituationUtility_eventGetFunctionTagArray_Parms), Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics
	{
		struct MovesSituationUtility_eventGetMovesTagArray_Parms
		{
			TArray<bool> _OutMovesTagArray;
			FMovesSituation _MovesSituation;
		};
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__OutMovesTagArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__OutMovesTagArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__MovesSituation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__MovesSituation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics::NewProp__OutMovesTagArray_Inner = { "_OutMovesTagArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics::NewProp__OutMovesTagArray = { "_OutMovesTagArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventGetMovesTagArray_Parms, _OutMovesTagArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics::NewProp__MovesSituation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics::NewProp__MovesSituation = { "_MovesSituation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventGetMovesTagArray_Parms, _MovesSituation), Z_Construct_UScriptStruct_FMovesSituation, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics::NewProp__MovesSituation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics::NewProp__MovesSituation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics::NewProp__OutMovesTagArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics::NewProp__OutMovesTagArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics::NewProp__MovesSituation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituationUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationUtility, nullptr, "GetMovesTagArray", nullptr, nullptr, sizeof(MovesSituationUtility_eventGetMovesTagArray_Parms), Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName_Statics
	{
		struct MovesSituationUtility_eventGetSituationMovesName_Parms
		{
			FString outName;
			EMovesDataTable_Type TableType;
			int32 DT_ID;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TableType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TableType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DT_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName_Statics::NewProp_outName = { "outName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventGetSituationMovesName_Parms, outName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName_Statics::NewProp_TableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName_Statics::NewProp_TableType = { "TableType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventGetSituationMovesName_Parms, TableType), Z_Construct_UEnum_Creation_EMovesDataTable_Type, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName_Statics::NewProp_DT_ID = { "DT_ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventGetSituationMovesName_Parms, DT_ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName_Statics::NewProp_outName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName_Statics::NewProp_TableType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName_Statics::NewProp_TableType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName_Statics::NewProp_DT_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituationUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationUtility, nullptr, "GetSituationMovesName", nullptr, nullptr, sizeof(MovesSituationUtility_eventGetSituationMovesName_Parms), Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics
	{
		struct MovesSituationUtility_eventIsAttackTagArray_Parms
		{
			TArray<bool> _OutAttackTagArray;
			EMovesTag_AttackIndex _AttackIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__OutAttackTagArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__OutAttackTagArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__OutAttackTagArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__AttackIndex_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__AttackIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::NewProp__OutAttackTagArray_Inner = { "_OutAttackTagArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::NewProp__OutAttackTagArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::NewProp__OutAttackTagArray = { "_OutAttackTagArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventIsAttackTagArray_Parms, _OutAttackTagArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::NewProp__OutAttackTagArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::NewProp__OutAttackTagArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::NewProp__AttackIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::NewProp__AttackIndex = { "_AttackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventIsAttackTagArray_Parms, _AttackIndex), Z_Construct_UEnum_Creation_EMovesTag_AttackIndex, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovesSituationUtility_eventIsAttackTagArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovesSituationUtility_eventIsAttackTagArray_Parms), &Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::NewProp__OutAttackTagArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::NewProp__OutAttackTagArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::NewProp__AttackIndex_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::NewProp__AttackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituationUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationUtility, nullptr, "IsAttackTagArray", nullptr, nullptr, sizeof(MovesSituationUtility_eventIsAttackTagArray_Parms), Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics
	{
		struct MovesSituationUtility_eventIsDamagePartTagArray_Parms
		{
			TArray<bool> _OutDamagePartTagArray;
			EMovesTag_DamagePartIndex _DamagePartIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__OutDamagePartTagArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__OutDamagePartTagArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__OutDamagePartTagArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__DamagePartIndex_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__DamagePartIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::NewProp__OutDamagePartTagArray_Inner = { "_OutDamagePartTagArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::NewProp__OutDamagePartTagArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::NewProp__OutDamagePartTagArray = { "_OutDamagePartTagArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventIsDamagePartTagArray_Parms, _OutDamagePartTagArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::NewProp__OutDamagePartTagArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::NewProp__OutDamagePartTagArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::NewProp__DamagePartIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::NewProp__DamagePartIndex = { "_DamagePartIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventIsDamagePartTagArray_Parms, _DamagePartIndex), Z_Construct_UEnum_Creation_EMovesTag_DamagePartIndex, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovesSituationUtility_eventIsDamagePartTagArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovesSituationUtility_eventIsDamagePartTagArray_Parms), &Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::NewProp__OutDamagePartTagArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::NewProp__OutDamagePartTagArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::NewProp__DamagePartIndex_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::NewProp__DamagePartIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituationUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationUtility, nullptr, "IsDamagePartTagArray", nullptr, nullptr, sizeof(MovesSituationUtility_eventIsDamagePartTagArray_Parms), Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics
	{
		struct MovesSituationUtility_eventIsFunctionTagArray_Parms
		{
			TArray<bool> _OutFunctionTagArray;
			EMovesTag_FunctionIndex _FunctionIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__OutFunctionTagArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__OutFunctionTagArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__OutFunctionTagArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__FunctionIndex_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__FunctionIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::NewProp__OutFunctionTagArray_Inner = { "_OutFunctionTagArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::NewProp__OutFunctionTagArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::NewProp__OutFunctionTagArray = { "_OutFunctionTagArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventIsFunctionTagArray_Parms, _OutFunctionTagArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::NewProp__OutFunctionTagArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::NewProp__OutFunctionTagArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::NewProp__FunctionIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::NewProp__FunctionIndex = { "_FunctionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventIsFunctionTagArray_Parms, _FunctionIndex), Z_Construct_UEnum_Creation_EMovesTag_FunctionIndex, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovesSituationUtility_eventIsFunctionTagArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovesSituationUtility_eventIsFunctionTagArray_Parms), &Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::NewProp__OutFunctionTagArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::NewProp__OutFunctionTagArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::NewProp__FunctionIndex_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::NewProp__FunctionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituationUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationUtility, nullptr, "IsFunctionTagArray", nullptr, nullptr, sizeof(MovesSituationUtility_eventIsFunctionTagArray_Parms), Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics
	{
		struct MovesSituationUtility_eventIsMovesTagArray_Parms
		{
			TArray<bool> _OutMovesTagArray;
			EMovesTag_MovesIndex _MovesIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__OutMovesTagArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__OutMovesTagArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__OutMovesTagArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__MovesIndex_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__MovesIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::NewProp__OutMovesTagArray_Inner = { "_OutMovesTagArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::NewProp__OutMovesTagArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::NewProp__OutMovesTagArray = { "_OutMovesTagArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventIsMovesTagArray_Parms, _OutMovesTagArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::NewProp__OutMovesTagArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::NewProp__OutMovesTagArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::NewProp__MovesIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::NewProp__MovesIndex = { "_MovesIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventIsMovesTagArray_Parms, _MovesIndex), Z_Construct_UEnum_Creation_EMovesTag_MovesIndex, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovesSituationUtility_eventIsMovesTagArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovesSituationUtility_eventIsMovesTagArray_Parms), &Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::NewProp__OutMovesTagArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::NewProp__OutMovesTagArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::NewProp__MovesIndex_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::NewProp__MovesIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituationUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationUtility, nullptr, "IsMovesTagArray", nullptr, nullptr, sizeof(MovesSituationUtility_eventIsMovesTagArray_Parms), Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituationUtility_OutPutDataArray_Statics
	{
		struct MovesSituationUtility_eventOutPutDataArray_Parms
		{
			TArray<FMovesOutputData> OutputData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituationUtility_OutPutDataArray_Statics::NewProp_OutputData_Inner = { "OutputData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovesOutputData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesSituationUtility_OutPutDataArray_Statics::NewProp_OutputData = { "OutputData", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventOutPutDataArray_Parms, OutputData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationUtility_OutPutDataArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_OutPutDataArray_Statics::NewProp_OutputData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_OutPutDataArray_Statics::NewProp_OutputData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_OutPutDataArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituationUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationUtility_OutPutDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationUtility, nullptr, "OutPutDataArray", nullptr, nullptr, sizeof(MovesSituationUtility_eventOutPutDataArray_Parms), Z_Construct_UFunction_UMovesSituationUtility_OutPutDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_OutPutDataArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_OutPutDataArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_OutPutDataArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationUtility_OutPutDataArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationUtility_OutPutDataArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics
	{
		struct MovesSituationUtility_eventSaveMovesSituationData_Parms
		{
			UDataTable* UpdateTable;
			FMovesSituation _MovesSituation;
			FName RowName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpdateTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__MovesSituation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__MovesSituation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::NewProp_UpdateTable = { "UpdateTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventSaveMovesSituationData_Parms, UpdateTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::NewProp__MovesSituation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::NewProp__MovesSituation = { "_MovesSituation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventSaveMovesSituationData_Parms, _MovesSituation), Z_Construct_UScriptStruct_FMovesSituation, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::NewProp__MovesSituation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::NewProp__MovesSituation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventSaveMovesSituationData_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::NewProp_UpdateTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::NewProp__MovesSituation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::NewProp_RowName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituationUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationUtility, nullptr, "SaveMovesSituationData", nullptr, nullptr, sizeof(MovesSituationUtility_eventSaveMovesSituationData_Parms), Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable_Statics
	{
		struct MovesSituationUtility_eventSearchDataArray_DataTable_Parms
		{
			TArray<FMovesSituation> OutKeys;
			UDataTable* inSituationTable;
			UDataTable* inTable;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutKeys_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutKeys;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inSituationTable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable_Statics::NewProp_OutKeys_Inner = { "OutKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovesSituation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable_Statics::NewProp_OutKeys = { "OutKeys", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventSearchDataArray_DataTable_Parms, OutKeys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable_Statics::NewProp_inSituationTable = { "inSituationTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventSearchDataArray_DataTable_Parms, inSituationTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable_Statics::NewProp_inTable = { "inTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationUtility_eventSearchDataArray_DataTable_Parms, inTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable_Statics::NewProp_OutKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable_Statics::NewProp_OutKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable_Statics::NewProp_inSituationTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable_Statics::NewProp_inTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituationUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationUtility, nullptr, "SearchDataArray_DataTable", nullptr, nullptr, sizeof(MovesSituationUtility_eventSearchDataArray_DataTable_Parms), Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovesSituationUtility_NoRegister()
	{
		return UMovesSituationUtility::StaticClass();
	}
	struct Z_Construct_UClass_UMovesSituationUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovesSituationUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovesSituationUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovesSituationUtility_FindSituationDataName, "FindSituationDataName" }, // 3661015479
		{ &Z_Construct_UFunction_UMovesSituationUtility_GetAttackTagArray, "GetAttackTagArray" }, // 4266726131
		{ &Z_Construct_UFunction_UMovesSituationUtility_GetDamagePartTagArray, "GetDamagePartTagArray" }, // 3053889747
		{ &Z_Construct_UFunction_UMovesSituationUtility_GetEnableFinisherList, "GetEnableFinisherList" }, // 1471140177
		{ &Z_Construct_UFunction_UMovesSituationUtility_GetFunctionTagArray, "GetFunctionTagArray" }, // 3079921105
		{ &Z_Construct_UFunction_UMovesSituationUtility_GetMovesTagArray, "GetMovesTagArray" }, // 915653740
		{ &Z_Construct_UFunction_UMovesSituationUtility_GetSituationMovesName, "GetSituationMovesName" }, // 2909169883
		{ &Z_Construct_UFunction_UMovesSituationUtility_IsAttackTagArray, "IsAttackTagArray" }, // 3303340920
		{ &Z_Construct_UFunction_UMovesSituationUtility_IsDamagePartTagArray, "IsDamagePartTagArray" }, // 573982701
		{ &Z_Construct_UFunction_UMovesSituationUtility_IsFunctionTagArray, "IsFunctionTagArray" }, // 3710314049
		{ &Z_Construct_UFunction_UMovesSituationUtility_IsMovesTagArray, "IsMovesTagArray" }, // 544673531
		{ &Z_Construct_UFunction_UMovesSituationUtility_OutPutDataArray, "OutPutDataArray" }, // 2812919209
		{ &Z_Construct_UFunction_UMovesSituationUtility_SaveMovesSituationData, "SaveMovesSituationData" }, // 289438782
		{ &Z_Construct_UFunction_UMovesSituationUtility_SearchDataArray_DataTable, "SearchDataArray_DataTable" }, // 4133351529
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovesSituationUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MovesSituationUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovesSituationUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovesSituationUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovesSituationUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovesSituationUtility_Statics::ClassParams = {
		&UMovesSituationUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovesSituationUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovesSituationUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovesSituationUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovesSituationUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovesSituationUtility, 2790466945);
	template<> CREATION_API UClass* StaticClass<UMovesSituationUtility>()
	{
		return UMovesSituationUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovesSituationUtility(Z_Construct_UClass_UMovesSituationUtility, &UMovesSituationUtility::StaticClass, TEXT("/Script/Creation"), TEXT("UMovesSituationUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovesSituationUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
