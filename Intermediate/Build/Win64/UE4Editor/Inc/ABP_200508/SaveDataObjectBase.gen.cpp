// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveDataObjectBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataObjectBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObjectBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObjectBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELSaveDataHeader();
	ABP_200508_API UClass* Z_Construct_UClass_USaveGame_RawData_NoRegister();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELSaveGameBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USaveDataObjectBase::execDispose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Dispose();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObjectBase::execGetHeader)
	{
		P_GET_STRUCT_REF(FELSaveDataHeader,Z_Param_Out__stHeader);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHeader(Z_Param_Out__stHeader);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObjectBase::execGetProductUserID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetProductUserID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObjectBase::execGetRawDataSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRawDataSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObjectBase::execIsReadOnly)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReadOnly();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObjectBase::execIsUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUpdated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObjectBase::execIsValidData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObjectBase::execIsValidRawData)
	{
		P_GET_OBJECT(USaveGame_RawData,Z_Param__pcRawData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidRawData(Z_Param__pcRawData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObjectBase::execIsValidType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObjectBase::execSetProductUserID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProductUserID(Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	void USaveDataObjectBase::StaticRegisterNativesUSaveDataObjectBase()
	{
		UClass* Class = USaveDataObjectBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Dispose", &USaveDataObjectBase::execDispose },
			{ "GetHeader", &USaveDataObjectBase::execGetHeader },
			{ "GetProductUserID", &USaveDataObjectBase::execGetProductUserID },
			{ "GetRawDataSize", &USaveDataObjectBase::execGetRawDataSize },
			{ "IsReadOnly", &USaveDataObjectBase::execIsReadOnly },
			{ "IsUpdated", &USaveDataObjectBase::execIsUpdated },
			{ "IsValidData", &USaveDataObjectBase::execIsValidData },
			{ "IsValidRawData", &USaveDataObjectBase::execIsValidRawData },
			{ "IsValidType", &USaveDataObjectBase::execIsValidType },
			{ "SetProductUserID", &USaveDataObjectBase::execSetProductUserID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveDataObjectBase_Dispose_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObjectBase_Dispose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObjectBase_Dispose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObjectBase, nullptr, "Dispose", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObjectBase_Dispose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_Dispose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObjectBase_Dispose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObjectBase_Dispose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObjectBase_GetHeader_Statics
	{
		struct SaveDataObjectBase_eventGetHeader_Parms
		{
			FELSaveDataHeader _stHeader;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stHeader;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObjectBase_GetHeader_Statics::NewProp__stHeader = { "_stHeader", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObjectBase_eventGetHeader_Parms, _stHeader), Z_Construct_UScriptStruct_FELSaveDataHeader, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObjectBase_GetHeader_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObjectBase_eventGetHeader_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObjectBase_GetHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObjectBase_eventGetHeader_Parms), &Z_Construct_UFunction_USaveDataObjectBase_GetHeader_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObjectBase_GetHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObjectBase_GetHeader_Statics::NewProp__stHeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObjectBase_GetHeader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObjectBase_GetHeader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObjectBase_GetHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObjectBase, nullptr, "GetHeader", nullptr, nullptr, sizeof(SaveDataObjectBase_eventGetHeader_Parms), Z_Construct_UFunction_USaveDataObjectBase_GetHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_GetHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObjectBase_GetHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_GetHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObjectBase_GetHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObjectBase_GetHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObjectBase_GetProductUserID_Statics
	{
		struct SaveDataObjectBase_eventGetProductUserID_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataObjectBase_GetProductUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObjectBase_eventGetProductUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObjectBase_GetProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObjectBase_GetProductUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObjectBase_GetProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObjectBase_GetProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObjectBase, nullptr, "GetProductUserID", nullptr, nullptr, sizeof(SaveDataObjectBase_eventGetProductUserID_Parms), Z_Construct_UFunction_USaveDataObjectBase_GetProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_GetProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObjectBase_GetProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_GetProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObjectBase_GetProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObjectBase_GetProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObjectBase_GetRawDataSize_Statics
	{
		struct SaveDataObjectBase_eventGetRawDataSize_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObjectBase_GetRawDataSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObjectBase_eventGetRawDataSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObjectBase_GetRawDataSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObjectBase_GetRawDataSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObjectBase_GetRawDataSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObjectBase_GetRawDataSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObjectBase, nullptr, "GetRawDataSize", nullptr, nullptr, sizeof(SaveDataObjectBase_eventGetRawDataSize_Parms), Z_Construct_UFunction_USaveDataObjectBase_GetRawDataSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_GetRawDataSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObjectBase_GetRawDataSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_GetRawDataSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObjectBase_GetRawDataSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObjectBase_GetRawDataSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObjectBase_IsReadOnly_Statics
	{
		struct SaveDataObjectBase_eventIsReadOnly_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObjectBase_IsReadOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObjectBase_eventIsReadOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObjectBase_IsReadOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObjectBase_eventIsReadOnly_Parms), &Z_Construct_UFunction_USaveDataObjectBase_IsReadOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObjectBase_IsReadOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObjectBase_IsReadOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObjectBase_IsReadOnly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObjectBase_IsReadOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObjectBase, nullptr, "IsReadOnly", nullptr, nullptr, sizeof(SaveDataObjectBase_eventIsReadOnly_Parms), Z_Construct_UFunction_USaveDataObjectBase_IsReadOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_IsReadOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObjectBase_IsReadOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_IsReadOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObjectBase_IsReadOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObjectBase_IsReadOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObjectBase_IsUpdated_Statics
	{
		struct SaveDataObjectBase_eventIsUpdated_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObjectBase_IsUpdated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObjectBase_eventIsUpdated_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObjectBase_IsUpdated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObjectBase_eventIsUpdated_Parms), &Z_Construct_UFunction_USaveDataObjectBase_IsUpdated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObjectBase_IsUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObjectBase_IsUpdated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObjectBase_IsUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObjectBase_IsUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObjectBase, nullptr, "IsUpdated", nullptr, nullptr, sizeof(SaveDataObjectBase_eventIsUpdated_Parms), Z_Construct_UFunction_USaveDataObjectBase_IsUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_IsUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObjectBase_IsUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_IsUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObjectBase_IsUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObjectBase_IsUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObjectBase_IsValidData_Statics
	{
		struct SaveDataObjectBase_eventIsValidData_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObjectBase_IsValidData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObjectBase_eventIsValidData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObjectBase_IsValidData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObjectBase_eventIsValidData_Parms), &Z_Construct_UFunction_USaveDataObjectBase_IsValidData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObjectBase_IsValidData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObjectBase_IsValidData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObjectBase_IsValidData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObjectBase_IsValidData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObjectBase, nullptr, "IsValidData", nullptr, nullptr, sizeof(SaveDataObjectBase_eventIsValidData_Parms), Z_Construct_UFunction_USaveDataObjectBase_IsValidData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_IsValidData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObjectBase_IsValidData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_IsValidData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObjectBase_IsValidData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObjectBase_IsValidData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics
	{
		struct SaveDataObjectBase_eventIsValidRawData_Parms
		{
			const USaveGame_RawData* _pcRawData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pcRawData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcRawData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics::NewProp__pcRawData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics::NewProp__pcRawData = { "_pcRawData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObjectBase_eventIsValidRawData_Parms, _pcRawData), Z_Construct_UClass_USaveGame_RawData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics::NewProp__pcRawData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics::NewProp__pcRawData_MetaData)) };
	void Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObjectBase_eventIsValidRawData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObjectBase_eventIsValidRawData_Parms), &Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics::NewProp__pcRawData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObjectBase, nullptr, "IsValidRawData", nullptr, nullptr, sizeof(SaveDataObjectBase_eventIsValidRawData_Parms), Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObjectBase_IsValidType_Statics
	{
		struct SaveDataObjectBase_eventIsValidType_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObjectBase_IsValidType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObjectBase_eventIsValidType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObjectBase_IsValidType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObjectBase_eventIsValidType_Parms), &Z_Construct_UFunction_USaveDataObjectBase_IsValidType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObjectBase_IsValidType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObjectBase_IsValidType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObjectBase_IsValidType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObjectBase_IsValidType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObjectBase, nullptr, "IsValidType", nullptr, nullptr, sizeof(SaveDataObjectBase_eventIsValidType_Parms), Z_Construct_UFunction_USaveDataObjectBase_IsValidType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_IsValidType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObjectBase_IsValidType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_IsValidType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObjectBase_IsValidType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObjectBase_IsValidType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObjectBase_SetProductUserID_Statics
	{
		struct SaveDataObjectBase_eventSetProductUserID_Parms
		{
			FString _strProductUserID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObjectBase_SetProductUserID_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveDataObjectBase_SetProductUserID_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObjectBase_eventSetProductUserID_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_USaveDataObjectBase_SetProductUserID_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_SetProductUserID_Statics::NewProp__strProductUserID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObjectBase_SetProductUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObjectBase_SetProductUserID_Statics::NewProp__strProductUserID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObjectBase_SetProductUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObjectBase_SetProductUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObjectBase, nullptr, "SetProductUserID", nullptr, nullptr, sizeof(SaveDataObjectBase_eventSetProductUserID_Parms), Z_Construct_UFunction_USaveDataObjectBase_SetProductUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_SetProductUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObjectBase_SetProductUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObjectBase_SetProductUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObjectBase_SetProductUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObjectBase_SetProductUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveDataObjectBase_NoRegister()
	{
		return USaveDataObjectBase::StaticClass();
	}
	struct Z_Construct_UClass_USaveDataObjectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pcSaveGameBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pcSaveGameBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveDataObjectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveDataObjectBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveDataObjectBase_Dispose, "Dispose" }, // 3643303411
		{ &Z_Construct_UFunction_USaveDataObjectBase_GetHeader, "GetHeader" }, // 507892276
		{ &Z_Construct_UFunction_USaveDataObjectBase_GetProductUserID, "GetProductUserID" }, // 2948002447
		{ &Z_Construct_UFunction_USaveDataObjectBase_GetRawDataSize, "GetRawDataSize" }, // 3622318471
		{ &Z_Construct_UFunction_USaveDataObjectBase_IsReadOnly, "IsReadOnly" }, // 147733736
		{ &Z_Construct_UFunction_USaveDataObjectBase_IsUpdated, "IsUpdated" }, // 1879922173
		{ &Z_Construct_UFunction_USaveDataObjectBase_IsValidData, "IsValidData" }, // 2146949404
		{ &Z_Construct_UFunction_USaveDataObjectBase_IsValidRawData, "IsValidRawData" }, // 157421443
		{ &Z_Construct_UFunction_USaveDataObjectBase_IsValidType, "IsValidType" }, // 1058010559
		{ &Z_Construct_UFunction_USaveDataObjectBase_SetProductUserID, "SetProductUserID" }, // 447170510
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataObjectBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveDataObjectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveDataObjectBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataObjectBase_Statics::NewProp_m_pcSaveGameBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveDataObjectBase" },
		{ "ModuleRelativePath", "Public/SaveDataObjectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveDataObjectBase_Statics::NewProp_m_pcSaveGameBase = { "m_pcSaveGameBase", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveDataObjectBase, m_pcSaveGameBase), Z_Construct_UClass_UELSaveGameBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USaveDataObjectBase_Statics::NewProp_m_pcSaveGameBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataObjectBase_Statics::NewProp_m_pcSaveGameBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveDataObjectBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveDataObjectBase_Statics::NewProp_m_pcSaveGameBase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveDataObjectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveDataObjectBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveDataObjectBase_Statics::ClassParams = {
		&USaveDataObjectBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveDataObjectBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataObjectBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveDataObjectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataObjectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveDataObjectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveDataObjectBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveDataObjectBase, 1604314788);
	template<> ABP_200508_API UClass* StaticClass<USaveDataObjectBase>()
	{
		return USaveDataObjectBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveDataObjectBase(Z_Construct_UClass_USaveDataObjectBase, &USaveDataObjectBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveDataObjectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDataObjectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
