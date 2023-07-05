// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/SaveDataAccessComponentBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataAccessComponentBase() {}
// Cross Module References
	ELITE_API UClass* Z_Construct_UClass_USaveDataAccessComponentBase_NoRegister();
	ELITE_API UClass* Z_Construct_UClass_USaveDataAccessComponentBase();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ESaveDataType();
	ELITE_API UClass* Z_Construct_UClass_UELSaveDataAccessObjectBase_NoRegister();
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FSaveDataAccessParam();
// End Cross Module References
	DEFINE_FUNCTION(USaveDataAccessComponentBase::execGetSaveDataAccessObject)
	{
		P_GET_ENUM_REF(ESaveDataType,Z_Param_Out_DataType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELSaveDataAccessObjectBase**)Z_Param__Result=P_THIS->GetSaveDataAccessObject((ESaveDataType&)(Z_Param_Out_DataType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataAccessComponentBase::execLoadProcess)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadProcess(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataAccessComponentBase::execSaveProcess)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveProcess(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataAccessComponentBase::execStartLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartLoad();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataAccessComponentBase::execStartSave)
	{
		P_GET_TARRAY_REF(ESaveDataType,Z_Param_Out_List);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSave(Z_Param_Out_List);
		P_NATIVE_END;
	}
	void USaveDataAccessComponentBase::StaticRegisterNativesUSaveDataAccessComponentBase()
	{
		UClass* Class = USaveDataAccessComponentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSaveDataAccessObject", &USaveDataAccessComponentBase::execGetSaveDataAccessObject },
			{ "LoadProcess", &USaveDataAccessComponentBase::execLoadProcess },
			{ "SaveProcess", &USaveDataAccessComponentBase::execSaveProcess },
			{ "StartLoad", &USaveDataAccessComponentBase::execStartLoad },
			{ "StartSave", &USaveDataAccessComponentBase::execStartSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics
	{
		struct SaveDataAccessComponentBase_eventGetSaveDataAccessObject_Parms
		{
			ESaveDataType DataType;
			UELSaveDataAccessObjectBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics::NewProp_DataType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataAccessComponentBase_eventGetSaveDataAccessObject_Parms, DataType), Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics::NewProp_DataType_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataAccessComponentBase_eventGetSaveDataAccessObject_Parms, ReturnValue), Z_Construct_UClass_UELSaveDataAccessObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics::NewProp_DataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataAccessComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataAccessComponentBase, nullptr, "GetSaveDataAccessObject", nullptr, nullptr, sizeof(SaveDataAccessComponentBase_eventGetSaveDataAccessObject_Parms), Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataAccessComponentBase_LoadProcess_Statics
	{
		struct SaveDataAccessComponentBase_eventLoadProcess_Parms
		{
			int32 Index;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataAccessComponentBase_LoadProcess_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataAccessComponentBase_LoadProcess_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataAccessComponentBase_eventLoadProcess_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_USaveDataAccessComponentBase_LoadProcess_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataAccessComponentBase_LoadProcess_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataAccessComponentBase_LoadProcess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataAccessComponentBase_LoadProcess_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataAccessComponentBase_LoadProcess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataAccessComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataAccessComponentBase_LoadProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataAccessComponentBase, nullptr, "LoadProcess", nullptr, nullptr, sizeof(SaveDataAccessComponentBase_eventLoadProcess_Parms), Z_Construct_UFunction_USaveDataAccessComponentBase_LoadProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataAccessComponentBase_LoadProcess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataAccessComponentBase_LoadProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataAccessComponentBase_LoadProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataAccessComponentBase_LoadProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataAccessComponentBase_LoadProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataAccessComponentBase_SaveProcess_Statics
	{
		struct SaveDataAccessComponentBase_eventSaveProcess_Parms
		{
			int32 Index;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataAccessComponentBase_SaveProcess_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataAccessComponentBase_SaveProcess_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataAccessComponentBase_eventSaveProcess_Parms, Index), METADATA_PARAMS(Z_Construct_UFunction_USaveDataAccessComponentBase_SaveProcess_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataAccessComponentBase_SaveProcess_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataAccessComponentBase_SaveProcess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataAccessComponentBase_SaveProcess_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataAccessComponentBase_SaveProcess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataAccessComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataAccessComponentBase_SaveProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataAccessComponentBase, nullptr, "SaveProcess", nullptr, nullptr, sizeof(SaveDataAccessComponentBase_eventSaveProcess_Parms), Z_Construct_UFunction_USaveDataAccessComponentBase_SaveProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataAccessComponentBase_SaveProcess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataAccessComponentBase_SaveProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataAccessComponentBase_SaveProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataAccessComponentBase_SaveProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataAccessComponentBase_SaveProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataAccessComponentBase_StartLoad_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataAccessComponentBase_StartLoad_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataAccessComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataAccessComponentBase_StartLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataAccessComponentBase, nullptr, "StartLoad", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataAccessComponentBase_StartLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataAccessComponentBase_StartLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataAccessComponentBase_StartLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataAccessComponentBase_StartLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics
	{
		struct SaveDataAccessComponentBase_eventStartSave_Parms
		{
			TArray<ESaveDataType> List;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_List_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_List_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_List_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_List;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics::NewProp_List_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics::NewProp_List_Inner = { "List", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics::NewProp_List_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataAccessComponentBase_eventStartSave_Parms, List), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics::NewProp_List_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics::NewProp_List_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics::NewProp_List_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics::NewProp_List_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics::NewProp_List,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataAccessComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataAccessComponentBase, nullptr, "StartSave", nullptr, nullptr, sizeof(SaveDataAccessComponentBase_eventStartSave_Parms), Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveDataAccessComponentBase_NoRegister()
	{
		return USaveDataAccessComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_USaveDataAccessComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBusy_MetaData[];
#endif
		static void NewProp_bBusy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBusy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JobIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_JobIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveDataAccessObjectMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SaveDataAccessObjectMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SaveDataAccessObjectMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataAccessObjectMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SaveDataAccessObjectMap;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccessDataSet_ElementProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AccessDataSet_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessDataSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_AccessDataSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSilent_MetaData[];
#endif
		static void NewProp_bSilent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSilent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateNew_MetaData[];
#endif
		static void NewProp_bCreateNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateNew;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccessDataList_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AccessDataList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccessDataList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AccessDataList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadedSaveDataType_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadedSaveDataType_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadedSaveDataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoadedSaveDataType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SaveDataTypeList_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SaveDataTypeList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveDataTypeList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SaveDataTypeList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveDataAccessComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveDataAccessComponentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveDataAccessComponentBase_GetSaveDataAccessObject, "GetSaveDataAccessObject" }, // 609994996
		{ &Z_Construct_UFunction_USaveDataAccessComponentBase_LoadProcess, "LoadProcess" }, // 1012281752
		{ &Z_Construct_UFunction_USaveDataAccessComponentBase_SaveProcess, "SaveProcess" }, // 2381644802
		{ &Z_Construct_UFunction_USaveDataAccessComponentBase_StartLoad, "StartLoad" }, // 508496358
		{ &Z_Construct_UFunction_USaveDataAccessComponentBase_StartSave, "StartSave" }, // 1356840396
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataAccessComponentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SaveDataAccessComponentBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveDataAccessComponentBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bBusy_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessComponentBase" },
		{ "ModuleRelativePath", "Public/SaveDataAccessComponentBase.h" },
	};
#endif
	void Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bBusy_SetBit(void* Obj)
	{
		((USaveDataAccessComponentBase*)Obj)->bBusy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bBusy = { "bBusy", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USaveDataAccessComponentBase), &Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bBusy_SetBit, METADATA_PARAMS(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bBusy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bBusy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_JobIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessComponentBase" },
		{ "ModuleRelativePath", "Public/SaveDataAccessComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_JobIndex = { "JobIndex", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveDataAccessComponentBase, JobIndex), METADATA_PARAMS(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_JobIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_JobIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_Params_Inner = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveDataAccessParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_Params_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessComponentBase" },
		{ "ModuleRelativePath", "Public/SaveDataAccessComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveDataAccessComponentBase, Params), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataAccessObjectMap_ValueProp = { "SaveDataAccessObjectMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UELSaveDataAccessObjectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataAccessObjectMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataAccessObjectMap_Key_KeyProp = { "SaveDataAccessObjectMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataAccessObjectMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessComponentBase" },
		{ "ModuleRelativePath", "Public/SaveDataAccessComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataAccessObjectMap = { "SaveDataAccessObjectMap", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveDataAccessComponentBase, SaveDataAccessObjectMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataAccessObjectMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataAccessObjectMap_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataSet_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataSet_ElementProp = { "AccessDataSet", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataSet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessComponentBase" },
		{ "ModuleRelativePath", "Public/SaveDataAccessComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataSet = { "AccessDataSet", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveDataAccessComponentBase, AccessDataSet), METADATA_PARAMS(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bSilent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessComponentBase" },
		{ "ModuleRelativePath", "Public/SaveDataAccessComponentBase.h" },
	};
#endif
	void Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bSilent_SetBit(void* Obj)
	{
		((USaveDataAccessComponentBase*)Obj)->bSilent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bSilent = { "bSilent", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USaveDataAccessComponentBase), &Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bSilent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bSilent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bSilent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bCreateNew_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessComponentBase" },
		{ "ModuleRelativePath", "Public/SaveDataAccessComponentBase.h" },
	};
#endif
	void Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bCreateNew_SetBit(void* Obj)
	{
		((USaveDataAccessComponentBase*)Obj)->bCreateNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bCreateNew = { "bCreateNew", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USaveDataAccessComponentBase), &Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bCreateNew_SetBit, METADATA_PARAMS(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bCreateNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bCreateNew_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataList_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataList_Inner = { "AccessDataList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessComponentBase" },
		{ "ModuleRelativePath", "Public/SaveDataAccessComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataList = { "AccessDataList", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveDataAccessComponentBase, AccessDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataList_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_LoadedSaveDataType_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_LoadedSaveDataType_Inner = { "LoadedSaveDataType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_LoadedSaveDataType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessComponentBase" },
		{ "ModuleRelativePath", "Public/SaveDataAccessComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_LoadedSaveDataType = { "LoadedSaveDataType", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveDataAccessComponentBase, LoadedSaveDataType), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_LoadedSaveDataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_LoadedSaveDataType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataTypeList_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataTypeList_Inner = { "SaveDataTypeList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ELITE_Game_ESaveDataType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataTypeList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataAccessComponentBase" },
		{ "ModuleRelativePath", "Public/SaveDataAccessComponentBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataTypeList = { "SaveDataTypeList", nullptr, (EPropertyFlags)0x0040000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveDataAccessComponentBase, SaveDataTypeList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataTypeList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataTypeList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveDataAccessComponentBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bBusy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_JobIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_Params_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataAccessObjectMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataAccessObjectMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataAccessObjectMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataAccessObjectMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataSet_ElementProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataSet_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bSilent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_bCreateNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataList_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_AccessDataList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_LoadedSaveDataType_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_LoadedSaveDataType_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_LoadedSaveDataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataTypeList_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataTypeList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataAccessComponentBase_Statics::NewProp_SaveDataTypeList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveDataAccessComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveDataAccessComponentBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveDataAccessComponentBase_Statics::ClassParams = {
		&USaveDataAccessComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveDataAccessComponentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataAccessComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveDataAccessComponentBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveDataAccessComponentBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveDataAccessComponentBase, 1945219133);
	template<> ELITE_API UClass* StaticClass<USaveDataAccessComponentBase>()
	{
		return USaveDataAccessComponentBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveDataAccessComponentBase(Z_Construct_UClass_USaveDataAccessComponentBase, &USaveDataAccessComponentBase::StaticClass, TEXT("/Script/ELITE"), TEXT("USaveDataAccessComponentBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDataAccessComponentBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
