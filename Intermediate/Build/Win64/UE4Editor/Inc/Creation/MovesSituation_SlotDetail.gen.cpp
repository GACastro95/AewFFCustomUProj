// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/MovesSituation_SlotDetail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovesSituation_SlotDetail() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UMovesSituation_SlotDetail_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UMovesSituation_SlotDetail();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EFinisher_RS_Direction();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FMovesSituation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail();
// End Cross Module References
	DEFINE_FUNCTION(UMovesSituation_SlotDetail::execConvertFinisherType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituation_SlotDetail::ConvertFinisherType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituation_SlotDetail::execConvertMovesData)
	{
		P_GET_STRUCT_REF(FELMoves,Z_Param_Out__Moves);
		P_GET_STRUCT_REF(FELMoves_Finisher,Z_Param_Out_Finisher);
		P_GET_ENUM(EFinisher_RS_Direction,Z_Param_RSDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituation_SlotDetail::ConvertMovesData(Z_Param_Out__Moves,Z_Param_Out_Finisher,EFinisher_RS_Direction(Z_Param_RSDir));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituation_SlotDetail::execConvertMovesSlotNo)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__SlotNo);
		P_GET_PROPERTY(FStrProperty,Z_Param__CategoryName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituation_SlotDetail::ConvertMovesSlotNo(Z_Param_Out__SlotNo,Z_Param__CategoryName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituation_SlotDetail::execFixFinisherType)
	{
		P_GET_STRUCT_REF(FELMoves_Finisher,Z_Param_Out_Finisher);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituation_SlotDetail::FixFinisherType(Z_Param_Out_Finisher);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesSituation_SlotDetail::execGetSlotDetailArray)
	{
		P_GET_STRUCT_REF(FMovesSituation,Z_Param_Out__Moves);
		P_GET_TARRAY_REF(FELMovesSituation_SlotDetail,Z_Param_Out__SlotDetailArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesSituation_SlotDetail::GetSlotDetailArray(Z_Param_Out__Moves,Z_Param_Out__SlotDetailArray);
		P_NATIVE_END;
	}
	void UMovesSituation_SlotDetail::StaticRegisterNativesUMovesSituation_SlotDetail()
	{
		UClass* Class = UMovesSituation_SlotDetail::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertFinisherType", &UMovesSituation_SlotDetail::execConvertFinisherType },
			{ "ConvertMovesData", &UMovesSituation_SlotDetail::execConvertMovesData },
			{ "ConvertMovesSlotNo", &UMovesSituation_SlotDetail::execConvertMovesSlotNo },
			{ "FixFinisherType", &UMovesSituation_SlotDetail::execFixFinisherType },
			{ "GetSlotDetailArray", &UMovesSituation_SlotDetail::execGetSlotDetailArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertFinisherType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertFinisherType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituation_SlotDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertFinisherType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituation_SlotDetail, nullptr, "ConvertFinisherType", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertFinisherType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertFinisherType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertFinisherType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertFinisherType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics
	{
		struct MovesSituation_SlotDetail_eventConvertMovesData_Parms
		{
			FELMoves _Moves;
			FELMoves_Finisher Finisher;
			EFinisher_RS_Direction RSDir;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Moves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Finisher_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Finisher;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RSDir_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RSDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::NewProp__Moves = { "_Moves", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituation_SlotDetail_eventConvertMovesData_Parms, _Moves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::NewProp_Finisher_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::NewProp_Finisher = { "Finisher", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituation_SlotDetail_eventConvertMovesData_Parms, Finisher), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::NewProp_Finisher_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::NewProp_Finisher_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::NewProp_RSDir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::NewProp_RSDir = { "RSDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituation_SlotDetail_eventConvertMovesData_Parms, RSDir), Z_Construct_UEnum_Creation_EFinisher_RS_Direction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::NewProp__Moves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::NewProp_Finisher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::NewProp_RSDir_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::NewProp_RSDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituation_SlotDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituation_SlotDetail, nullptr, "ConvertMovesData", nullptr, nullptr, sizeof(MovesSituation_SlotDetail_eventConvertMovesData_Parms), Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo_Statics
	{
		struct MovesSituation_SlotDetail_eventConvertMovesSlotNo_Parms
		{
			int32 _SlotNo;
			FString _CategoryName;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__SlotNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__CategoryName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__CategoryName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo_Statics::NewProp__SlotNo = { "_SlotNo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituation_SlotDetail_eventConvertMovesSlotNo_Parms, _SlotNo), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo_Statics::NewProp__CategoryName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo_Statics::NewProp__CategoryName = { "_CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituation_SlotDetail_eventConvertMovesSlotNo_Parms, _CategoryName), METADATA_PARAMS(Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo_Statics::NewProp__CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo_Statics::NewProp__CategoryName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo_Statics::NewProp__SlotNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo_Statics::NewProp__CategoryName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituation_SlotDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituation_SlotDetail, nullptr, "ConvertMovesSlotNo", nullptr, nullptr, sizeof(MovesSituation_SlotDetail_eventConvertMovesSlotNo_Parms), Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituation_SlotDetail_FixFinisherType_Statics
	{
		struct MovesSituation_SlotDetail_eventFixFinisherType_Parms
		{
			FELMoves_Finisher Finisher;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Finisher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituation_SlotDetail_FixFinisherType_Statics::NewProp_Finisher = { "Finisher", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituation_SlotDetail_eventFixFinisherType_Parms, Finisher), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituation_SlotDetail_FixFinisherType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituation_SlotDetail_FixFinisherType_Statics::NewProp_Finisher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituation_SlotDetail_FixFinisherType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituation_SlotDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituation_SlotDetail_FixFinisherType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituation_SlotDetail, nullptr, "FixFinisherType", nullptr, nullptr, sizeof(MovesSituation_SlotDetail_eventFixFinisherType_Parms), Z_Construct_UFunction_UMovesSituation_SlotDetail_FixFinisherType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituation_SlotDetail_FixFinisherType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituation_SlotDetail_FixFinisherType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituation_SlotDetail_FixFinisherType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituation_SlotDetail_FixFinisherType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituation_SlotDetail_FixFinisherType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics
	{
		struct MovesSituation_SlotDetail_eventGetSlotDetailArray_Parms
		{
			FMovesSituation _Moves;
			TArray<FELMovesSituation_SlotDetail> _SlotDetailArray;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Moves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Moves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__SlotDetailArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__SlotDetailArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics::NewProp__Moves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics::NewProp__Moves = { "_Moves", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituation_SlotDetail_eventGetSlotDetailArray_Parms, _Moves), Z_Construct_UScriptStruct_FMovesSituation, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics::NewProp__Moves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics::NewProp__Moves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics::NewProp__SlotDetailArray_Inner = { "_SlotDetailArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELMovesSituation_SlotDetail, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics::NewProp__SlotDetailArray = { "_SlotDetailArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesSituation_SlotDetail_eventGetSlotDetailArray_Parms, _SlotDetailArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics::NewProp__Moves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics::NewProp__SlotDetailArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics::NewProp__SlotDetailArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesSituation_SlotDetail.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesSituation_SlotDetail, nullptr, "GetSlotDetailArray", nullptr, nullptr, sizeof(MovesSituation_SlotDetail_eventGetSlotDetailArray_Parms), Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovesSituation_SlotDetail_NoRegister()
	{
		return UMovesSituation_SlotDetail::StaticClass();
	}
	struct Z_Construct_UClass_UMovesSituation_SlotDetail_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovesSituation_SlotDetail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovesSituation_SlotDetail_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertFinisherType, "ConvertFinisherType" }, // 398815254
		{ &Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesData, "ConvertMovesData" }, // 1663644848
		{ &Z_Construct_UFunction_UMovesSituation_SlotDetail_ConvertMovesSlotNo, "ConvertMovesSlotNo" }, // 2230196040
		{ &Z_Construct_UFunction_UMovesSituation_SlotDetail_FixFinisherType, "FixFinisherType" }, // 2471323048
		{ &Z_Construct_UFunction_UMovesSituation_SlotDetail_GetSlotDetailArray, "GetSlotDetailArray" }, // 1819602458
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovesSituation_SlotDetail_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MovesSituation_SlotDetail.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovesSituation_SlotDetail.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovesSituation_SlotDetail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovesSituation_SlotDetail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovesSituation_SlotDetail_Statics::ClassParams = {
		&UMovesSituation_SlotDetail::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovesSituation_SlotDetail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovesSituation_SlotDetail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovesSituation_SlotDetail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovesSituation_SlotDetail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovesSituation_SlotDetail, 2561497075);
	template<> CREATION_API UClass* StaticClass<UMovesSituation_SlotDetail>()
	{
		return UMovesSituation_SlotDetail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovesSituation_SlotDetail(Z_Construct_UClass_UMovesSituation_SlotDetail, &UMovesSituation_SlotDetail::StaticClass, TEXT("/Script/Creation"), TEXT("UMovesSituation_SlotDetail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovesSituation_SlotDetail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
