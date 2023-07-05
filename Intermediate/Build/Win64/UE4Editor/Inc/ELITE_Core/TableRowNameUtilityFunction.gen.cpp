// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/TableRowNameUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTableRowNameUtilityFunction() {}
// Cross Module References
	ELITE_CORE_API UClass* Z_Construct_UClass_UTableRowNameUtilityFunction_NoRegister();
	ELITE_CORE_API UClass* Z_Construct_UClass_UTableRowNameUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowName();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
// End Cross Module References
	DEFINE_FUNCTION(UTableRowNameUtilityFunction::execConvertToNameSet)
	{
		P_GET_TSET_REF(FTableRowName,Z_Param_Out_TableRowNameSet);
		P_GET_TSET_REF(FName,Z_Param_Out_NameSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTableRowNameUtilityFunction::ConvertToNameSet(Z_Param_Out_TableRowNameSet,Z_Param_Out_NameSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTableRowNameUtilityFunction::execIsEqual_FName)
	{
		P_GET_STRUCT_REF(FTableRowName,Z_Param_Out_TableRowName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTableRowNameUtilityFunction::IsEqual_FName(Z_Param_Out_TableRowName,Z_Param_Out_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTableRowNameUtilityFunction::execToDataTableRowHandle)
	{
		P_GET_STRUCT_REF(FTableRowName,Z_Param_Out_TableRowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDataTableRowHandle*)Z_Param__Result=UTableRowNameUtilityFunction::ToDataTableRowHandle(Z_Param_Out_TableRowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTableRowNameUtilityFunction::execToFName)
	{
		P_GET_STRUCT_REF(FTableRowName,Z_Param_Out_TableRowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UTableRowNameUtilityFunction::ToFName(Z_Param_Out_TableRowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTableRowNameUtilityFunction::execToTableRowName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTableRowName*)Z_Param__Result=UTableRowNameUtilityFunction::ToTableRowName(Z_Param_Out_RowName);
		P_NATIVE_END;
	}
	void UTableRowNameUtilityFunction::StaticRegisterNativesUTableRowNameUtilityFunction()
	{
		UClass* Class = UTableRowNameUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertToNameSet", &UTableRowNameUtilityFunction::execConvertToNameSet },
			{ "IsEqual_FName", &UTableRowNameUtilityFunction::execIsEqual_FName },
			{ "ToDataTableRowHandle", &UTableRowNameUtilityFunction::execToDataTableRowHandle },
			{ "ToFName", &UTableRowNameUtilityFunction::execToFName },
			{ "ToTableRowName", &UTableRowNameUtilityFunction::execToTableRowName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics
	{
		struct TableRowNameUtilityFunction_eventConvertToNameSet_Parms
		{
			TSet<FTableRowName> TableRowNameSet;
			TSet<FName> NameSet;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TableRowNameSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableRowNameSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_TableRowNameSet;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NameSet_ElementProp;
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_NameSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::NewProp_TableRowNameSet_ElementProp = { "TableRowNameSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTableRowName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::NewProp_TableRowNameSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::NewProp_TableRowNameSet = { "TableRowNameSet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TableRowNameUtilityFunction_eventConvertToNameSet_Parms, TableRowNameSet), METADATA_PARAMS(Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::NewProp_TableRowNameSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::NewProp_TableRowNameSet_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::NewProp_NameSet_ElementProp = { "NameSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::NewProp_NameSet = { "NameSet", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TableRowNameUtilityFunction_eventConvertToNameSet_Parms, NameSet), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::NewProp_TableRowNameSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::NewProp_TableRowNameSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::NewProp_NameSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::NewProp_NameSet,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TableRowNameUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTableRowNameUtilityFunction, nullptr, "ConvertToNameSet", nullptr, nullptr, sizeof(TableRowNameUtilityFunction_eventConvertToNameSet_Parms), Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics
	{
		struct TableRowNameUtilityFunction_eventIsEqual_FName_Parms
		{
			FTableRowName TableRowName;
			FName Name;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TableRowName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::NewProp_TableRowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::NewProp_TableRowName = { "TableRowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TableRowNameUtilityFunction_eventIsEqual_FName_Parms, TableRowName), Z_Construct_UScriptStruct_FTableRowName, METADATA_PARAMS(Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::NewProp_TableRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::NewProp_TableRowName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TableRowNameUtilityFunction_eventIsEqual_FName_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::NewProp_Name_MetaData)) };
	void Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TableRowNameUtilityFunction_eventIsEqual_FName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TableRowNameUtilityFunction_eventIsEqual_FName_Parms), &Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::NewProp_TableRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TableRowNameUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTableRowNameUtilityFunction, nullptr, "IsEqual_FName", nullptr, nullptr, sizeof(TableRowNameUtilityFunction_eventIsEqual_FName_Parms), Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle_Statics
	{
		struct TableRowNameUtilityFunction_eventToDataTableRowHandle_Parms
		{
			FTableRowName TableRowName;
			FDataTableRowHandle ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TableRowName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle_Statics::NewProp_TableRowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle_Statics::NewProp_TableRowName = { "TableRowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TableRowNameUtilityFunction_eventToDataTableRowHandle_Parms, TableRowName), Z_Construct_UScriptStruct_FTableRowName, METADATA_PARAMS(Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle_Statics::NewProp_TableRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle_Statics::NewProp_TableRowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TableRowNameUtilityFunction_eventToDataTableRowHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle_Statics::NewProp_TableRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TableRowNameUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTableRowNameUtilityFunction, nullptr, "ToDataTableRowHandle", nullptr, nullptr, sizeof(TableRowNameUtilityFunction_eventToDataTableRowHandle_Parms), Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName_Statics
	{
		struct TableRowNameUtilityFunction_eventToFName_Parms
		{
			FTableRowName TableRowName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableRowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TableRowName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName_Statics::NewProp_TableRowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName_Statics::NewProp_TableRowName = { "TableRowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TableRowNameUtilityFunction_eventToFName_Parms, TableRowName), Z_Construct_UScriptStruct_FTableRowName, METADATA_PARAMS(Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName_Statics::NewProp_TableRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName_Statics::NewProp_TableRowName_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TableRowNameUtilityFunction_eventToFName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName_Statics::NewProp_TableRowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TableRowNameUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTableRowNameUtilityFunction, nullptr, "ToFName", nullptr, nullptr, sizeof(TableRowNameUtilityFunction_eventToFName_Parms), Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName_Statics
	{
		struct TableRowNameUtilityFunction_eventToTableRowName_Parms
		{
			FName RowName;
			FTableRowName ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName_Statics::NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TableRowNameUtilityFunction_eventToTableRowName_Parms, RowName), METADATA_PARAMS(Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName_Statics::NewProp_RowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName_Statics::NewProp_RowName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TableRowNameUtilityFunction_eventToTableRowName_Parms, ReturnValue), Z_Construct_UScriptStruct_FTableRowName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName_Statics::NewProp_RowName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TableRowNameUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTableRowNameUtilityFunction, nullptr, "ToTableRowName", nullptr, nullptr, sizeof(TableRowNameUtilityFunction_eventToTableRowName_Parms), Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTableRowNameUtilityFunction_NoRegister()
	{
		return UTableRowNameUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UTableRowNameUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTableRowNameUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTableRowNameUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTableRowNameUtilityFunction_ConvertToNameSet, "ConvertToNameSet" }, // 3854443489
		{ &Z_Construct_UFunction_UTableRowNameUtilityFunction_IsEqual_FName, "IsEqual_FName" }, // 2604555783
		{ &Z_Construct_UFunction_UTableRowNameUtilityFunction_ToDataTableRowHandle, "ToDataTableRowHandle" }, // 1174487549
		{ &Z_Construct_UFunction_UTableRowNameUtilityFunction_ToFName, "ToFName" }, // 3027748505
		{ &Z_Construct_UFunction_UTableRowNameUtilityFunction_ToTableRowName, "ToTableRowName" }, // 1808652554
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTableRowNameUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TableRowNameUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TableRowNameUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTableRowNameUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTableRowNameUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTableRowNameUtilityFunction_Statics::ClassParams = {
		&UTableRowNameUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTableRowNameUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTableRowNameUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTableRowNameUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTableRowNameUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTableRowNameUtilityFunction, 1284420192);
	template<> ELITE_CORE_API UClass* StaticClass<UTableRowNameUtilityFunction>()
	{
		return UTableRowNameUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTableRowNameUtilityFunction(Z_Construct_UClass_UTableRowNameUtilityFunction, &UTableRowNameUtilityFunction::StaticClass, TEXT("/Script/ELITE_Core"), TEXT("UTableRowNameUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTableRowNameUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
