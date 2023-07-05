// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveDataObject_UGC_Wrestler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataObject_UGC_Wrestler() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_UGC_Wrestler_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_UGC_Wrestler();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObjectBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_UMyWrestlerDataObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USaveDataObject_UGC_Wrestler::execGetFileIndexesForUpdate)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutFileIndexes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USaveDataObject_UGC_Wrestler::GetFileIndexesForUpdate(Z_Param_Out_OutFileIndexes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Wrestler::execGetUGCWrestlerFileIndex)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutSaveFileIndex);
		P_GET_UBOOL(Z_Param_IsEditWrestler);
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_MyWrestlerDataObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USaveDataObject_UGC_Wrestler::GetUGCWrestlerFileIndex(Z_Param_Out_OutSaveFileIndex,Z_Param_IsEditWrestler,Z_Param_MyWrestlerDataObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Wrestler::execGetUGCWrestlerFileIndexAll)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutFileIndexes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USaveDataObject_UGC_Wrestler::GetUGCWrestlerFileIndexAll(Z_Param_Out_OutFileIndexes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Wrestler::execReadDataToMyWrestler)
	{
		P_GET_OBJECT(UObject,Z_Param_MyWrestler);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadDataToMyWrestler(Z_Param_MyWrestler);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Wrestler::execWriteDataAllScoutWrestler)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SaveFileIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WriteDataAllScoutWrestler(Z_Param_SaveFileIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_UGC_Wrestler::execWriteDataFromMyWrestler)
	{
		P_GET_OBJECT(UObject,Z_Param_MyWrestler);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WriteDataFromMyWrestler(Z_Param_MyWrestler);
		P_NATIVE_END;
	}
	void USaveDataObject_UGC_Wrestler::StaticRegisterNativesUSaveDataObject_UGC_Wrestler()
	{
		UClass* Class = USaveDataObject_UGC_Wrestler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFileIndexesForUpdate", &USaveDataObject_UGC_Wrestler::execGetFileIndexesForUpdate },
			{ "GetUGCWrestlerFileIndex", &USaveDataObject_UGC_Wrestler::execGetUGCWrestlerFileIndex },
			{ "GetUGCWrestlerFileIndexAll", &USaveDataObject_UGC_Wrestler::execGetUGCWrestlerFileIndexAll },
			{ "ReadDataToMyWrestler", &USaveDataObject_UGC_Wrestler::execReadDataToMyWrestler },
			{ "WriteDataAllScoutWrestler", &USaveDataObject_UGC_Wrestler::execWriteDataAllScoutWrestler },
			{ "WriteDataFromMyWrestler", &USaveDataObject_UGC_Wrestler::execWriteDataFromMyWrestler },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate_Statics
	{
		struct SaveDataObject_UGC_Wrestler_eventGetFileIndexesForUpdate_Parms
		{
			TArray<int32> OutFileIndexes;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutFileIndexes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFileIndexes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate_Statics::NewProp_OutFileIndexes_Inner = { "OutFileIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate_Statics::NewProp_OutFileIndexes = { "OutFileIndexes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Wrestler_eventGetFileIndexesForUpdate_Parms, OutFileIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_UGC_Wrestler_eventGetFileIndexesForUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_UGC_Wrestler_eventGetFileIndexesForUpdate_Parms), &Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate_Statics::NewProp_OutFileIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate_Statics::NewProp_OutFileIndexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Wrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Wrestler, nullptr, "GetFileIndexesForUpdate", nullptr, nullptr, sizeof(SaveDataObject_UGC_Wrestler_eventGetFileIndexesForUpdate_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics
	{
		struct SaveDataObject_UGC_Wrestler_eventGetUGCWrestlerFileIndex_Parms
		{
			int32 OutSaveFileIndex;
			bool IsEditWrestler;
			const UMyWrestlerDataObject* MyWrestlerDataObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutSaveFileIndex;
		static void NewProp_IsEditWrestler_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEditWrestler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyWrestlerDataObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyWrestlerDataObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::NewProp_OutSaveFileIndex = { "OutSaveFileIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Wrestler_eventGetUGCWrestlerFileIndex_Parms, OutSaveFileIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::NewProp_IsEditWrestler_SetBit(void* Obj)
	{
		((SaveDataObject_UGC_Wrestler_eventGetUGCWrestlerFileIndex_Parms*)Obj)->IsEditWrestler = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::NewProp_IsEditWrestler = { "IsEditWrestler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_UGC_Wrestler_eventGetUGCWrestlerFileIndex_Parms), &Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::NewProp_IsEditWrestler_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::NewProp_MyWrestlerDataObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::NewProp_MyWrestlerDataObject = { "MyWrestlerDataObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Wrestler_eventGetUGCWrestlerFileIndex_Parms, MyWrestlerDataObject), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::NewProp_MyWrestlerDataObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::NewProp_MyWrestlerDataObject_MetaData)) };
	void Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_UGC_Wrestler_eventGetUGCWrestlerFileIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_UGC_Wrestler_eventGetUGCWrestlerFileIndex_Parms), &Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::NewProp_OutSaveFileIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::NewProp_IsEditWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::NewProp_MyWrestlerDataObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Wrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Wrestler, nullptr, "GetUGCWrestlerFileIndex", nullptr, nullptr, sizeof(SaveDataObject_UGC_Wrestler_eventGetUGCWrestlerFileIndex_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll_Statics
	{
		struct SaveDataObject_UGC_Wrestler_eventGetUGCWrestlerFileIndexAll_Parms
		{
			TArray<int32> OutFileIndexes;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutFileIndexes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFileIndexes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll_Statics::NewProp_OutFileIndexes_Inner = { "OutFileIndexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll_Statics::NewProp_OutFileIndexes = { "OutFileIndexes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Wrestler_eventGetUGCWrestlerFileIndexAll_Parms, OutFileIndexes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_UGC_Wrestler_eventGetUGCWrestlerFileIndexAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_UGC_Wrestler_eventGetUGCWrestlerFileIndexAll_Parms), &Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll_Statics::NewProp_OutFileIndexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll_Statics::NewProp_OutFileIndexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Wrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Wrestler, nullptr, "GetUGCWrestlerFileIndexAll", nullptr, nullptr, sizeof(SaveDataObject_UGC_Wrestler_eventGetUGCWrestlerFileIndexAll_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_ReadDataToMyWrestler_Statics
	{
		struct SaveDataObject_UGC_Wrestler_eventReadDataToMyWrestler_Parms
		{
			UObject* MyWrestler;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyWrestler;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_ReadDataToMyWrestler_Statics::NewProp_MyWrestler = { "MyWrestler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Wrestler_eventReadDataToMyWrestler_Parms, MyWrestler), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_ReadDataToMyWrestler_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_UGC_Wrestler_eventReadDataToMyWrestler_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_ReadDataToMyWrestler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_UGC_Wrestler_eventReadDataToMyWrestler_Parms), &Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_ReadDataToMyWrestler_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_ReadDataToMyWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_ReadDataToMyWrestler_Statics::NewProp_MyWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_ReadDataToMyWrestler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_ReadDataToMyWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Wrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_ReadDataToMyWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Wrestler, nullptr, "ReadDataToMyWrestler", nullptr, nullptr, sizeof(SaveDataObject_UGC_Wrestler_eventReadDataToMyWrestler_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_ReadDataToMyWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_ReadDataToMyWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_ReadDataToMyWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_ReadDataToMyWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_ReadDataToMyWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_ReadDataToMyWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataAllScoutWrestler_Statics
	{
		struct SaveDataObject_UGC_Wrestler_eventWriteDataAllScoutWrestler_Parms
		{
			int32 SaveFileIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SaveFileIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataAllScoutWrestler_Statics::NewProp_SaveFileIndex = { "SaveFileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Wrestler_eventWriteDataAllScoutWrestler_Parms, SaveFileIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataAllScoutWrestler_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_UGC_Wrestler_eventWriteDataAllScoutWrestler_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataAllScoutWrestler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_UGC_Wrestler_eventWriteDataAllScoutWrestler_Parms), &Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataAllScoutWrestler_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataAllScoutWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataAllScoutWrestler_Statics::NewProp_SaveFileIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataAllScoutWrestler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataAllScoutWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Wrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataAllScoutWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Wrestler, nullptr, "WriteDataAllScoutWrestler", nullptr, nullptr, sizeof(SaveDataObject_UGC_Wrestler_eventWriteDataAllScoutWrestler_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataAllScoutWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataAllScoutWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataAllScoutWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataAllScoutWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataAllScoutWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataAllScoutWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataFromMyWrestler_Statics
	{
		struct SaveDataObject_UGC_Wrestler_eventWriteDataFromMyWrestler_Parms
		{
			UObject* MyWrestler;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyWrestler;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataFromMyWrestler_Statics::NewProp_MyWrestler = { "MyWrestler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_UGC_Wrestler_eventWriteDataFromMyWrestler_Parms, MyWrestler), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataFromMyWrestler_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_UGC_Wrestler_eventWriteDataFromMyWrestler_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataFromMyWrestler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_UGC_Wrestler_eventWriteDataFromMyWrestler_Parms), &Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataFromMyWrestler_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataFromMyWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataFromMyWrestler_Statics::NewProp_MyWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataFromMyWrestler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataFromMyWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Wrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataFromMyWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_UGC_Wrestler, nullptr, "WriteDataFromMyWrestler", nullptr, nullptr, sizeof(SaveDataObject_UGC_Wrestler_eventWriteDataFromMyWrestler_Parms), Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataFromMyWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataFromMyWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataFromMyWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataFromMyWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataFromMyWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataFromMyWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveDataObject_UGC_Wrestler_NoRegister()
	{
		return USaveDataObject_UGC_Wrestler::StaticClass();
	}
	struct Z_Construct_UClass_USaveDataObject_UGC_Wrestler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveDataObject_UGC_Wrestler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveDataObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveDataObject_UGC_Wrestler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetFileIndexesForUpdate, "GetFileIndexesForUpdate" }, // 3792841535
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndex, "GetUGCWrestlerFileIndex" }, // 2997971571
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_GetUGCWrestlerFileIndexAll, "GetUGCWrestlerFileIndexAll" }, // 3809269870
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_ReadDataToMyWrestler, "ReadDataToMyWrestler" }, // 2784364336
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataAllScoutWrestler, "WriteDataAllScoutWrestler" }, // 1346760223
		{ &Z_Construct_UFunction_USaveDataObject_UGC_Wrestler_WriteDataFromMyWrestler, "WriteDataFromMyWrestler" }, // 2028610861
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataObject_UGC_Wrestler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveDataObject_UGC_Wrestler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveDataObject_UGC_Wrestler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveDataObject_UGC_Wrestler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveDataObject_UGC_Wrestler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveDataObject_UGC_Wrestler_Statics::ClassParams = {
		&USaveDataObject_UGC_Wrestler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USaveDataObject_UGC_Wrestler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataObject_UGC_Wrestler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveDataObject_UGC_Wrestler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveDataObject_UGC_Wrestler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveDataObject_UGC_Wrestler, 521318790);
	template<> ABP_200508_API UClass* StaticClass<USaveDataObject_UGC_Wrestler>()
	{
		return USaveDataObject_UGC_Wrestler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveDataObject_UGC_Wrestler(Z_Construct_UClass_USaveDataObject_UGC_Wrestler, &USaveDataObject_UGC_Wrestler::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveDataObject_UGC_Wrestler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDataObject_UGC_Wrestler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
