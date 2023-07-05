// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MovesSituationFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovesSituationFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UMovesSituationFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UMovesSituationFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FMovesSituation();
// End Cross Module References
	DEFINE_FUNCTION(UMovesSituationFunction::execGetDataTableIndex)
	{
		P_GET_OBJECT(UDataTable,Z_Param__Table);
		P_GET_STRUCT_REF(FMovesSituation,Z_Param_Out__key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMovesSituationFunction::GetDataTableIndex(Z_Param__Table,Z_Param_Out__key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituationFunction::execGetSortedMovesSituationArray)
	{
		P_GET_TARRAY_REF(FMovesSituation,Z_Param_Out_outDataArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituationFunction::GetSortedMovesSituationArray(Z_Param_Out_outDataArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituationFunction::execSearchDataArray)
	{
		P_GET_TARRAY_REF(FMovesSituation,Z_Param_Out_OutKeys);
		P_GET_TARRAY_REF(FMovesSituation,Z_Param_Out_SortedMovesSituetionArray);
		P_GET_TARRAY(int32,Z_Param_inCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituationFunction::SearchDataArray(Z_Param_Out_OutKeys,Z_Param_Out_SortedMovesSituetionArray,Z_Param_inCategory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituationFunction::execSearchSpecialDataArray)
	{
		P_GET_TARRAY_REF(FMovesSituation,Z_Param_Out_OutKeys);
		P_GET_TARRAY_REF(FMovesSituation,Z_Param_Out_SortedMovesSituetionArray);
		P_GET_UBOOL(Z_Param_bIsFinisher);
		P_GET_UBOOL(Z_Param_bIsTeamFinisher);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituationFunction::SearchSpecialDataArray(Z_Param_Out_OutKeys,Z_Param_Out_SortedMovesSituetionArray,Z_Param_bIsFinisher,Z_Param_bIsTeamFinisher);
		P_NATIVE_END;
	}
	void UMovesSituationFunction::StaticRegisterNativesUMovesSituationFunction()
	{
		UClass* Class = UMovesSituationFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDataTableIndex", &UMovesSituationFunction::execGetDataTableIndex },
			{ "GetSortedMovesSituationArray", &UMovesSituationFunction::execGetSortedMovesSituationArray },
			{ "SearchDataArray", &UMovesSituationFunction::execSearchDataArray },
			{ "SearchSpecialDataArray", &UMovesSituationFunction::execSearchSpecialDataArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics
	{
		struct MovesSituationFunction_eventGetDataTableIndex_Parms
		{
			const UDataTable* _Table;
			FMovesSituation _key;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Table_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Table;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::NewProp__Table_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::NewProp__Table = { "_Table", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationFunction_eventGetDataTableIndex_Parms, _Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::NewProp__Table_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::NewProp__Table_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::NewProp__key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::NewProp__key = { "_key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationFunction_eventGetDataTableIndex_Parms, _key), Z_Construct_UScriptStruct_FMovesSituation, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::NewProp__key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::NewProp__key_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationFunction_eventGetDataTableIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::NewProp__Table,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::NewProp__key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituationFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationFunction, nullptr, "GetDataTableIndex", nullptr, nullptr, sizeof(MovesSituationFunction_eventGetDataTableIndex_Parms), Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituationFunction_GetSortedMovesSituationArray_Statics
	{
		struct MovesSituationFunction_eventGetSortedMovesSituationArray_Parms
		{
			TArray<FMovesSituation> outDataArray;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outDataArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outDataArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituationFunction_GetSortedMovesSituationArray_Statics::NewProp_outDataArray_Inner = { "outDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovesSituation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesSituationFunction_GetSortedMovesSituationArray_Statics::NewProp_outDataArray = { "outDataArray", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationFunction_eventGetSortedMovesSituationArray_Parms, outDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationFunction_GetSortedMovesSituationArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationFunction_GetSortedMovesSituationArray_Statics::NewProp_outDataArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationFunction_GetSortedMovesSituationArray_Statics::NewProp_outDataArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationFunction_GetSortedMovesSituationArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituationFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationFunction_GetSortedMovesSituationArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationFunction, nullptr, "GetSortedMovesSituationArray", nullptr, nullptr, sizeof(MovesSituationFunction_eventGetSortedMovesSituationArray_Parms), Z_Construct_UFunction_UMovesSituationFunction_GetSortedMovesSituationArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationFunction_GetSortedMovesSituationArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationFunction_GetSortedMovesSituationArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationFunction_GetSortedMovesSituationArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationFunction_GetSortedMovesSituationArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationFunction_GetSortedMovesSituationArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics
	{
		struct MovesSituationFunction_eventSearchDataArray_Parms
		{
			TArray<FMovesSituation> OutKeys;
			TArray<FMovesSituation> SortedMovesSituetionArray;
			TArray<int32> inCategory;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutKeys_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutKeys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SortedMovesSituetionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortedMovesSituetionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SortedMovesSituetionArray;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inCategory_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_inCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::NewProp_OutKeys_Inner = { "OutKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovesSituation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::NewProp_OutKeys = { "OutKeys", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationFunction_eventSearchDataArray_Parms, OutKeys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::NewProp_SortedMovesSituetionArray_Inner = { "SortedMovesSituetionArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovesSituation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::NewProp_SortedMovesSituetionArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::NewProp_SortedMovesSituetionArray = { "SortedMovesSituetionArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationFunction_eventSearchDataArray_Parms, SortedMovesSituetionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::NewProp_SortedMovesSituetionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::NewProp_SortedMovesSituetionArray_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::NewProp_inCategory_Inner = { "inCategory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::NewProp_inCategory = { "inCategory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationFunction_eventSearchDataArray_Parms, inCategory), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::NewProp_OutKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::NewProp_OutKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::NewProp_SortedMovesSituetionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::NewProp_SortedMovesSituetionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::NewProp_inCategory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::NewProp_inCategory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituationFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationFunction, nullptr, "SearchDataArray", nullptr, nullptr, sizeof(MovesSituationFunction_eventSearchDataArray_Parms), Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics
	{
		struct MovesSituationFunction_eventSearchSpecialDataArray_Parms
		{
			TArray<FMovesSituation> OutKeys;
			TArray<FMovesSituation> SortedMovesSituetionArray;
			bool bIsFinisher;
			bool bIsTeamFinisher;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutKeys_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutKeys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SortedMovesSituetionArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortedMovesSituetionArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SortedMovesSituetionArray;
		static void NewProp_bIsFinisher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFinisher;
		static void NewProp_bIsTeamFinisher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTeamFinisher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_OutKeys_Inner = { "OutKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovesSituation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_OutKeys = { "OutKeys", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationFunction_eventSearchSpecialDataArray_Parms, OutKeys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_SortedMovesSituetionArray_Inner = { "SortedMovesSituetionArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovesSituation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_SortedMovesSituetionArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_SortedMovesSituetionArray = { "SortedMovesSituetionArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituationFunction_eventSearchSpecialDataArray_Parms, SortedMovesSituetionArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_SortedMovesSituetionArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_SortedMovesSituetionArray_MetaData)) };
	void Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_bIsFinisher_SetBit(void* Obj)
	{
		((MovesSituationFunction_eventSearchSpecialDataArray_Parms*)Obj)->bIsFinisher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_bIsFinisher = { "bIsFinisher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovesSituationFunction_eventSearchSpecialDataArray_Parms), &Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_bIsFinisher_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_bIsTeamFinisher_SetBit(void* Obj)
	{
		((MovesSituationFunction_eventSearchSpecialDataArray_Parms*)Obj)->bIsTeamFinisher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_bIsTeamFinisher = { "bIsTeamFinisher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MovesSituationFunction_eventSearchSpecialDataArray_Parms), &Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_bIsTeamFinisher_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_OutKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_OutKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_SortedMovesSituetionArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_SortedMovesSituetionArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_bIsFinisher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::NewProp_bIsTeamFinisher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituationFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituationFunction, nullptr, "SearchSpecialDataArray", nullptr, nullptr, sizeof(MovesSituationFunction_eventSearchSpecialDataArray_Parms), Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovesSituationFunction_NoRegister()
	{
		return UMovesSituationFunction::StaticClass();
	}
	struct Z_Construct_UClass_UMovesSituationFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovesSituationFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovesSituationFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovesSituationFunction_GetDataTableIndex, "GetDataTableIndex" }, // 2519694698
		{ &Z_Construct_UFunction_UMovesSituationFunction_GetSortedMovesSituationArray, "GetSortedMovesSituationArray" }, // 3502763897
		{ &Z_Construct_UFunction_UMovesSituationFunction_SearchDataArray, "SearchDataArray" }, // 3163887194
		{ &Z_Construct_UFunction_UMovesSituationFunction_SearchSpecialDataArray, "SearchSpecialDataArray" }, // 3822505030
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovesSituationFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MovesSituationFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovesSituationFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovesSituationFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovesSituationFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovesSituationFunction_Statics::ClassParams = {
		&UMovesSituationFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovesSituationFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovesSituationFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovesSituationFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovesSituationFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovesSituationFunction, 2588320302);
	template<> ABP_200508_API UClass* StaticClass<UMovesSituationFunction>()
	{
		return UMovesSituationFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovesSituationFunction(Z_Construct_UClass_UMovesSituationFunction, &UMovesSituationFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UMovesSituationFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovesSituationFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
