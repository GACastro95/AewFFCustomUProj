// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/MovesPlayerStart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovesPlayerStart() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UMovesPlayerStart_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UMovesPlayerStart();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UClass* Z_Construct_UClass_AELMovesPlayerPosition_NoRegister();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesState();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EMovesCategory();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FMovesMovesCategory();
// End Cross Module References
	DEFINE_FUNCTION(UMovesPlayerStart::execGetMovesCheckPlayerStartData)
	{
		P_GET_TARRAY_REF(AELMovesPlayerPosition*,Z_Param_Out__outList);
		P_GET_TARRAY_REF(AELMovesPlayerPosition*,Z_Param_Out__Array);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_TARRAY_REF(EMovesState,Z_Param_Out_MyMovesState);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesPlayerStart::GetMovesCheckPlayerStartData(Z_Param_Out__outList,Z_Param_Out__Array,Z_Param_Index,Z_Param_Out_MyMovesState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesPlayerStart::execGetMovesPlayerStartArray)
	{
		P_GET_TARRAY_REF(AELMovesPlayerPosition*,Z_Param_Out__outList);
		P_GET_TARRAY_REF(AELMovesPlayerPosition*,Z_Param_Out__Array);
		P_GET_ENUM(EMovesCategory,Z_Param_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesPlayerStart::GetMovesPlayerStartArray(Z_Param_Out__outList,Z_Param_Out__Array,EMovesCategory(Z_Param_Category));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovesPlayerStart::execGetMovesPlayerStartData)
	{
		P_GET_TARRAY_REF(AELMovesPlayerPosition*,Z_Param_Out__outList);
		P_GET_TARRAY_REF(AELMovesPlayerPosition*,Z_Param_Out__Array);
		P_GET_STRUCT_REF(FMovesMovesCategory,Z_Param_Out_Category);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMovesPlayerStart::GetMovesPlayerStartData(Z_Param_Out__outList,Z_Param_Out__Array,Z_Param_Out_Category);
		P_NATIVE_END;
	}
	void UMovesPlayerStart::StaticRegisterNativesUMovesPlayerStart()
	{
		UClass* Class = UMovesPlayerStart::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMovesCheckPlayerStartData", &UMovesPlayerStart::execGetMovesCheckPlayerStartData },
			{ "GetMovesPlayerStartArray", &UMovesPlayerStart::execGetMovesPlayerStartArray },
			{ "GetMovesPlayerStartData", &UMovesPlayerStart::execGetMovesPlayerStartData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics
	{
		struct MovesPlayerStart_eventGetMovesCheckPlayerStartData_Parms
		{
			TArray<AELMovesPlayerPosition*> _outList;
			TArray<AELMovesPlayerPosition*> _Array;
			int32 Index;
			TArray<EMovesState> MyMovesState;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__Array;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MyMovesState_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MyMovesState_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMovesState_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MyMovesState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp__outList_Inner = { "_outList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELMovesPlayerPosition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp__outList = { "_outList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesPlayerStart_eventGetMovesCheckPlayerStartData_Parms, _outList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp__Array_Inner = { "_Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELMovesPlayerPosition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp__Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp__Array = { "_Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesPlayerStart_eventGetMovesCheckPlayerStartData_Parms, _Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp__Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp__Array_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesPlayerStart_eventGetMovesCheckPlayerStartData_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp_MyMovesState_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp_MyMovesState_Inner = { "MyMovesState", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Creation_EMovesState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp_MyMovesState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp_MyMovesState = { "MyMovesState", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesPlayerStart_eventGetMovesCheckPlayerStartData_Parms, MyMovesState), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp_MyMovesState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp_MyMovesState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp__outList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp__outList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp__Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp__Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp_MyMovesState_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp_MyMovesState_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::NewProp_MyMovesState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesPlayerStart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesPlayerStart, nullptr, "GetMovesCheckPlayerStartData", nullptr, nullptr, sizeof(MovesPlayerStart_eventGetMovesCheckPlayerStartData_Parms), Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics
	{
		struct MovesPlayerStart_eventGetMovesPlayerStartArray_Parms
		{
			TArray<AELMovesPlayerPosition*> _outList;
			TArray<AELMovesPlayerPosition*> _Array;
			EMovesCategory Category;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__Array;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::NewProp__outList_Inner = { "_outList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELMovesPlayerPosition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::NewProp__outList = { "_outList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesPlayerStart_eventGetMovesPlayerStartArray_Parms, _outList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::NewProp__Array_Inner = { "_Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELMovesPlayerPosition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::NewProp__Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::NewProp__Array = { "_Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesPlayerStart_eventGetMovesPlayerStartArray_Parms, _Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::NewProp__Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::NewProp__Array_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesPlayerStart_eventGetMovesPlayerStartArray_Parms, Category), Z_Construct_UEnum_Creation_EMovesCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::NewProp__outList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::NewProp__outList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::NewProp__Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::NewProp__Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::NewProp_Category_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::NewProp_Category,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesPlayerStart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesPlayerStart, nullptr, "GetMovesPlayerStartArray", nullptr, nullptr, sizeof(MovesPlayerStart_eventGetMovesPlayerStartArray_Parms), Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics
	{
		struct MovesPlayerStart_eventGetMovesPlayerStartData_Parms
		{
			TArray<AELMovesPlayerPosition*> _outList;
			TArray<AELMovesPlayerPosition*> _Array;
			FMovesMovesCategory Category;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Array_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__Array;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::NewProp__outList_Inner = { "_outList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELMovesPlayerPosition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::NewProp__outList = { "_outList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesPlayerStart_eventGetMovesPlayerStartData_Parms, _outList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::NewProp__Array_Inner = { "_Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AELMovesPlayerPosition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::NewProp__Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::NewProp__Array = { "_Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesPlayerStart_eventGetMovesPlayerStartData_Parms, _Array), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::NewProp__Array_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::NewProp__Array_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MovesPlayerStart_eventGetMovesPlayerStartData_Parms, Category), Z_Construct_UScriptStruct_FMovesMovesCategory, METADATA_PARAMS(Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::NewProp__outList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::NewProp__outList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::NewProp__Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::NewProp__Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::NewProp_Category,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovesPlayerStart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovesPlayerStart, nullptr, "GetMovesPlayerStartData", nullptr, nullptr, sizeof(MovesPlayerStart_eventGetMovesPlayerStartData_Parms), Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMovesPlayerStart_NoRegister()
	{
		return UMovesPlayerStart::StaticClass();
	}
	struct Z_Construct_UClass_UMovesPlayerStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovesPlayerStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovesPlayerStart_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovesPlayerStart_GetMovesCheckPlayerStartData, "GetMovesCheckPlayerStartData" }, // 1764739747
		{ &Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartArray, "GetMovesPlayerStartArray" }, // 1433710381
		{ &Z_Construct_UFunction_UMovesPlayerStart_GetMovesPlayerStartData, "GetMovesPlayerStartData" }, // 701220412
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovesPlayerStart_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MovesPlayerStart.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MovesPlayerStart.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovesPlayerStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovesPlayerStart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovesPlayerStart_Statics::ClassParams = {
		&UMovesPlayerStart::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMovesPlayerStart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovesPlayerStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovesPlayerStart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovesPlayerStart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovesPlayerStart, 3908542582);
	template<> CREATION_API UClass* StaticClass<UMovesPlayerStart>()
	{
		return UMovesPlayerStart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovesPlayerStart(Z_Construct_UClass_UMovesPlayerStart, &UMovesPlayerStart::StaticClass, TEXT("/Script/Creation"), TEXT("UMovesPlayerStart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovesPlayerStart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
