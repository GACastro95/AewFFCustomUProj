// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELEditItemListDataAssetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEditItemListDataAssetBase() {}
// Cross Module References
	CREATION_API UClass* Z_Construct_UClass_UELEditItemListDataAssetBase_NoRegister();
	CREATION_API UClass* Z_Construct_UClass_UELEditItemListDataAssetBase();
	ELITE_CORE_API UClass* Z_Construct_UClass_UELDataAsset();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELEditItemListDataAssetBase::execGetEditItemDataTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataTable**)Z_Param__Result=P_THIS->GetEditItemDataTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEditItemListDataAssetBase::execImportDataTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportDataTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEditItemListDataAssetBase::execImportEditItems)
	{
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ImportEditItems_Implementation(Z_Param_DataTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEditItemListDataAssetBase::execLoadDataTable)
	{
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UDataTable>,Z_Param_Out_Source);
		P_GET_OBJECT_REF(UDataTable,Z_Param_Out_DataTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadDataTable(Z_Param_Out_Source,Z_Param_Out_DataTable);
		P_NATIVE_END;
	}
	static FName NAME_UELEditItemListDataAssetBase_ImportEditItems = FName(TEXT("ImportEditItems"));
	void UELEditItemListDataAssetBase::ImportEditItems(const UDataTable* DataTable)
	{
		ELEditItemListDataAssetBase_eventImportEditItems_Parms Parms;
		Parms.DataTable=DataTable;
		ProcessEvent(FindFunctionChecked(NAME_UELEditItemListDataAssetBase_ImportEditItems),&Parms);
	}
	void UELEditItemListDataAssetBase::StaticRegisterNativesUELEditItemListDataAssetBase()
	{
		UClass* Class = UELEditItemListDataAssetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEditItemDataTable", &UELEditItemListDataAssetBase::execGetEditItemDataTable },
			{ "ImportDataTable", &UELEditItemListDataAssetBase::execImportDataTable },
			{ "ImportEditItems", &UELEditItemListDataAssetBase::execImportEditItems },
			{ "LoadDataTable", &UELEditItemListDataAssetBase::execLoadDataTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELEditItemListDataAssetBase_GetEditItemDataTable_Statics
	{
		struct ELEditItemListDataAssetBase_eventGetEditItemDataTable_Parms
		{
			UDataTable* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEditItemListDataAssetBase_GetEditItemDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEditItemListDataAssetBase_eventGetEditItemDataTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEditItemListDataAssetBase_GetEditItemDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEditItemListDataAssetBase_GetEditItemDataTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEditItemListDataAssetBase_GetEditItemDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEditItemListDataAssetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEditItemListDataAssetBase_GetEditItemDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEditItemListDataAssetBase, nullptr, "GetEditItemDataTable", nullptr, nullptr, sizeof(ELEditItemListDataAssetBase_eventGetEditItemDataTable_Parms), Z_Construct_UFunction_UELEditItemListDataAssetBase_GetEditItemDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEditItemListDataAssetBase_GetEditItemDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEditItemListDataAssetBase_GetEditItemDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEditItemListDataAssetBase_GetEditItemDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEditItemListDataAssetBase_GetEditItemDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEditItemListDataAssetBase_GetEditItemDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEditItemListDataAssetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEditItemListDataAssetBase, nullptr, "ImportDataTable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportEditItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportEditItems_Statics::NewProp_DataTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportEditItems_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEditItemListDataAssetBase_eventImportEditItems_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportEditItems_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportEditItems_Statics::NewProp_DataTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportEditItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportEditItems_Statics::NewProp_DataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportEditItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEditItemListDataAssetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportEditItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEditItemListDataAssetBase, nullptr, "ImportEditItems", nullptr, nullptr, sizeof(ELEditItemListDataAssetBase_eventImportEditItems_Parms), Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportEditItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportEditItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportEditItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportEditItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportEditItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportEditItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable_Statics
	{
		struct ELEditItemListDataAssetBase_eventLoadDataTable_Parms
		{
			TSoftObjectPtr<UDataTable> Source;
			UDataTable* DataTable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0014000008000182, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEditItemListDataAssetBase_eventLoadDataTable_Parms, Source), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable_Statics::NewProp_Source_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEditItemListDataAssetBase_eventLoadDataTable_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable_Statics::NewProp_DataTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEditItemListDataAssetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEditItemListDataAssetBase, nullptr, "LoadDataTable", nullptr, nullptr, sizeof(ELEditItemListDataAssetBase_eventLoadDataTable_Parms), Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELEditItemListDataAssetBase_NoRegister()
	{
		return UELEditItemListDataAssetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELEditItemListDataAssetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditItemListTableAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_EditItemListTableAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditItemListTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditItemListTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELEditItemListDataAssetBase_GetEditItemDataTable, "GetEditItemDataTable" }, // 1839631276
		{ &Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportDataTable, "ImportDataTable" }, // 442039616
		{ &Z_Construct_UFunction_UELEditItemListDataAssetBase_ImportEditItems, "ImportEditItems" }, // 1997855639
		{ &Z_Construct_UFunction_UELEditItemListDataAssetBase_LoadDataTable, "LoadDataTable" }, // 2712423845
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEditItemListDataAssetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEditItemListDataAssetBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::NewProp_EditItemListTableAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEditItemListDataAssetBase" },
		{ "ModuleRelativePath", "Public/ELEditItemListDataAssetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::NewProp_EditItemListTableAsset = { "EditItemListTableAsset", nullptr, (EPropertyFlags)0x0014040000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEditItemListDataAssetBase, EditItemListTableAsset), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::NewProp_EditItemListTableAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::NewProp_EditItemListTableAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::NewProp_EditItemListTable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEditItemListDataAssetBase" },
		{ "ModuleRelativePath", "Public/ELEditItemListDataAssetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::NewProp_EditItemListTable = { "EditItemListTable", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEditItemListDataAssetBase, EditItemListTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::NewProp_EditItemListTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::NewProp_EditItemListTable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::NewProp_EditItemListTableAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::NewProp_EditItemListTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEditItemListDataAssetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::ClassParams = {
		&UELEditItemListDataAssetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEditItemListDataAssetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEditItemListDataAssetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEditItemListDataAssetBase, 1749118005);
	template<> CREATION_API UClass* StaticClass<UELEditItemListDataAssetBase>()
	{
		return UELEditItemListDataAssetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEditItemListDataAssetBase(Z_Construct_UClass_UELEditItemListDataAssetBase, &UELEditItemListDataAssetBase::StaticClass, TEXT("/Script/Creation"), TEXT("UELEditItemListDataAssetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEditItemListDataAssetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
