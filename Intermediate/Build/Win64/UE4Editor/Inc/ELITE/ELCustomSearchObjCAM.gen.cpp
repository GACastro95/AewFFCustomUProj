// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELCustomSearchObjCAM.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCustomSearchObjCAM() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_UELCustomSearchObjCAM_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_UELCustomSearchObjCAM();
	ELITE_API UClass* Z_Construct_UClass_UELCustomSearchObjBase();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EELCustomSearch();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FELCustomSearchMovesData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELCustomSearchObjCAM::execGetMenuCategory)
	{
		P_GET_OBJECT(UDataTable,Z_Param__CategoryTable);
		P_GET_TSET_REF(EELCustomSearch,Z_Param_Out_CustomSearchSet);
		P_GET_TARRAY_REF(int32,Z_Param_Out__outCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMenuCategory(Z_Param__CategoryTable,Z_Param_Out_CustomSearchSet,Z_Param_Out__outCategory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCustomSearchObjCAM::execGetMenuData)
	{
		P_GET_OBJECT(UDataTable,Z_Param__MenuTable);
		P_GET_OBJECT(UDataTable,Z_Param__MenuDetailTable);
		P_GET_TARRAY_REF(int32,Z_Param_Out__InCategory);
		P_GET_TARRAY_REF(int32,Z_Param_Out__outCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMenuData(Z_Param__MenuTable,Z_Param__MenuDetailTable,Z_Param_Out__InCategory,Z_Param_Out__outCategory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCustomSearchObjCAM::execSearchMoves)
	{
		P_GET_TARRAY_REF(FELCustomSearchMovesData,Z_Param_Out__MovesData);
		P_GET_TSET_REF(EELCustomSearch,Z_Param_Out_CustomSearchSet);
		P_GET_TARRAY_REF(int32,Z_Param_Out__CategoryList);
		P_GET_TARRAY_REF(FELCustomSearchMovesData,Z_Param_Out_outData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SearchMoves(Z_Param_Out__MovesData,Z_Param_Out_CustomSearchSet,Z_Param_Out__CategoryList,Z_Param_Out_outData);
		P_NATIVE_END;
	}
	void UELCustomSearchObjCAM::StaticRegisterNativesUELCustomSearchObjCAM()
	{
		UClass* Class = UELCustomSearchObjCAM::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMenuCategory", &UELCustomSearchObjCAM::execGetMenuCategory },
			{ "GetMenuData", &UELCustomSearchObjCAM::execGetMenuData },
			{ "SearchMoves", &UELCustomSearchObjCAM::execSearchMoves },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics
	{
		struct ELCustomSearchObjCAM_eventGetMenuCategory_Parms
		{
			const UDataTable* _CategoryTable;
			TSet<EELCustomSearch> CustomSearchSet;
			TArray<int32> _outCategory;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__CategoryTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CategoryTable;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomSearchSet_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CustomSearchSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSearchSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_CustomSearchSet;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__outCategory_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp__CategoryTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp__CategoryTable = { "_CategoryTable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCustomSearchObjCAM_eventGetMenuCategory_Parms, _CategoryTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp__CategoryTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp__CategoryTable_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp_CustomSearchSet_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp_CustomSearchSet_ElementProp = { "CustomSearchSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_EELCustomSearch, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp_CustomSearchSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp_CustomSearchSet = { "CustomSearchSet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCustomSearchObjCAM_eventGetMenuCategory_Parms, CustomSearchSet), METADATA_PARAMS(Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp_CustomSearchSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp_CustomSearchSet_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp__outCategory_Inner = { "_outCategory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp__outCategory = { "_outCategory", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCustomSearchObjCAM_eventGetMenuCategory_Parms, _outCategory), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp__CategoryTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp_CustomSearchSet_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp_CustomSearchSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp_CustomSearchSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp__outCategory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::NewProp__outCategory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCustomSearchObjCAM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCustomSearchObjCAM, nullptr, "GetMenuCategory", nullptr, nullptr, sizeof(ELCustomSearchObjCAM_eventGetMenuCategory_Parms), Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics
	{
		struct ELCustomSearchObjCAM_eventGetMenuData_Parms
		{
			const UDataTable* _MenuTable;
			const UDataTable* _MenuDetailTable;
			TArray<int32> _InCategory;
			TArray<int32> _outCategory;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__MenuTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__MenuTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__MenuDetailTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__MenuDetailTable;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__InCategory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__InCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__InCategory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__outCategory_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__outCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__MenuTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__MenuTable = { "_MenuTable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCustomSearchObjCAM_eventGetMenuData_Parms, _MenuTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__MenuTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__MenuTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__MenuDetailTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__MenuDetailTable = { "_MenuDetailTable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCustomSearchObjCAM_eventGetMenuData_Parms, _MenuDetailTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__MenuDetailTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__MenuDetailTable_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__InCategory_Inner = { "_InCategory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__InCategory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__InCategory = { "_InCategory", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCustomSearchObjCAM_eventGetMenuData_Parms, _InCategory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__InCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__InCategory_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__outCategory_Inner = { "_outCategory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__outCategory = { "_outCategory", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCustomSearchObjCAM_eventGetMenuData_Parms, _outCategory), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__MenuTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__MenuDetailTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__InCategory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__InCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__outCategory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::NewProp__outCategory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCustomSearchObjCAM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCustomSearchObjCAM, nullptr, "GetMenuData", nullptr, nullptr, sizeof(ELCustomSearchObjCAM_eventGetMenuData_Parms), Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics
	{
		struct ELCustomSearchObjCAM_eventSearchMoves_Parms
		{
			TArray<FELCustomSearchMovesData> _MovesData;
			TSet<EELCustomSearch> CustomSearchSet;
			TArray<int32> _CategoryList;
			TArray<FELCustomSearchMovesData> outData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__MovesData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__MovesData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__MovesData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomSearchSet_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CustomSearchSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSearchSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_CustomSearchSet;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__CategoryList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__CategoryList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__CategoryList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp__MovesData_Inner = { "_MovesData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELCustomSearchMovesData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp__MovesData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp__MovesData = { "_MovesData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCustomSearchObjCAM_eventSearchMoves_Parms, _MovesData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp__MovesData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp__MovesData_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp_CustomSearchSet_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp_CustomSearchSet_ElementProp = { "CustomSearchSet", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_EELCustomSearch, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp_CustomSearchSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp_CustomSearchSet = { "CustomSearchSet", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCustomSearchObjCAM_eventSearchMoves_Parms, CustomSearchSet), METADATA_PARAMS(Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp_CustomSearchSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp_CustomSearchSet_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp__CategoryList_Inner = { "_CategoryList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp__CategoryList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp__CategoryList = { "_CategoryList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCustomSearchObjCAM_eventSearchMoves_Parms, _CategoryList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp__CategoryList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp__CategoryList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp_outData_Inner = { "outData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELCustomSearchMovesData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp_outData = { "outData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCustomSearchObjCAM_eventSearchMoves_Parms, outData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp__MovesData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp__MovesData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp_CustomSearchSet_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp_CustomSearchSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp_CustomSearchSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp__CategoryList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp__CategoryList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp_outData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::NewProp_outData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCustomSearchObjCAM.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCustomSearchObjCAM, nullptr, "SearchMoves", nullptr, nullptr, sizeof(ELCustomSearchObjCAM_eventSearchMoves_Parms), Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCustomSearchObjCAM_NoRegister()
	{
		return UELCustomSearchObjCAM::StaticClass();
	}
	struct Z_Construct_UClass_UELCustomSearchObjCAM_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_ItemInfoMap_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_ItemInfoMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ItemInfoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_ItemInfoMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCustomSearchObjCAM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCustomSearchObjBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCustomSearchObjCAM_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuCategory, "GetMenuCategory" }, // 1251624123
		{ &Z_Construct_UFunction_UELCustomSearchObjCAM_GetMenuData, "GetMenuData" }, // 3290664956
		{ &Z_Construct_UFunction_UELCustomSearchObjCAM_SearchMoves, "SearchMoves" }, // 425373408
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCustomSearchObjCAM_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCustomSearchObjCAM.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCustomSearchObjCAM.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCustomSearchObjCAM_Statics::NewProp_m_ItemInfoMap_ValueProp = { "m_ItemInfoMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCustomSearchObjCAM_Statics::NewProp_m_ItemInfoMap_Key_KeyProp = { "m_ItemInfoMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCustomSearchObjCAM_Statics::NewProp_m_ItemInfoMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchObjCAM" },
		{ "ModuleRelativePath", "Public/ELCustomSearchObjCAM.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELCustomSearchObjCAM_Statics::NewProp_m_ItemInfoMap = { "m_ItemInfoMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCustomSearchObjCAM, m_ItemInfoMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCustomSearchObjCAM_Statics::NewProp_m_ItemInfoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCustomSearchObjCAM_Statics::NewProp_m_ItemInfoMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCustomSearchObjCAM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCustomSearchObjCAM_Statics::NewProp_m_ItemInfoMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCustomSearchObjCAM_Statics::NewProp_m_ItemInfoMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCustomSearchObjCAM_Statics::NewProp_m_ItemInfoMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCustomSearchObjCAM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCustomSearchObjCAM>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCustomSearchObjCAM_Statics::ClassParams = {
		&UELCustomSearchObjCAM::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELCustomSearchObjCAM_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCustomSearchObjCAM_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCustomSearchObjCAM_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCustomSearchObjCAM_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCustomSearchObjCAM()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCustomSearchObjCAM_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCustomSearchObjCAM, 2851295641);
	template<> ELITE_API UClass* StaticClass<UELCustomSearchObjCAM>()
	{
		return UELCustomSearchObjCAM::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCustomSearchObjCAM(Z_Construct_UClass_UELCustomSearchObjCAM, &UELCustomSearchObjCAM::StaticClass, TEXT("/Script/ELITE"), TEXT("UELCustomSearchObjCAM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCustomSearchObjCAM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
