// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELNetObjectMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELNetObjectMap() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELNetObjectMap_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELNetObjectMap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELNetworkGUID();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetObjectGuid();
// End Cross Module References
	DEFINE_FUNCTION(UELNetObjectMap::execAddObject)
	{
		P_GET_STRUCT(FELNetworkGUID,Z_Param_Guid);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddObject(Z_Param_Guid,Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetObjectMap::execAddSpecialObject)
	{
		P_GET_ENUM(EELNetObjectGuid,Z_Param_Guid);
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddSpecialObject(EELNetObjectGuid(Z_Param_Guid),Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetObjectMap::execContainsObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsObject(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetObjectMap::execGetGuid)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FELNetworkGUID*)Z_Param__Result=P_THIS->GetGuid(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetObjectMap::execGetObject)
	{
		P_GET_STRUCT(FELNetworkGUID,Z_Param_Guid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetObject(Z_Param_Guid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetObjectMap::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetObjectMap::execRemoveObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveObject(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELNetObjectMap::execRemoveObjectById)
	{
		P_GET_STRUCT(FELNetworkGUID,Z_Param_Guid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveObjectById(Z_Param_Guid);
		P_NATIVE_END;
	}
	void UELNetObjectMap::StaticRegisterNativesUELNetObjectMap()
	{
		UClass* Class = UELNetObjectMap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddObject", &UELNetObjectMap::execAddObject },
			{ "AddSpecialObject", &UELNetObjectMap::execAddSpecialObject },
			{ "ContainsObject", &UELNetObjectMap::execContainsObject },
			{ "GetGuid", &UELNetObjectMap::execGetGuid },
			{ "GetObject", &UELNetObjectMap::execGetObject },
			{ "Initialize", &UELNetObjectMap::execInitialize },
			{ "RemoveObject", &UELNetObjectMap::execRemoveObject },
			{ "RemoveObjectById", &UELNetObjectMap::execRemoveObjectById },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics
	{
		struct ELNetObjectMap_eventAddObject_Parms
		{
			FELNetworkGUID Guid;
			const UObject* Object;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetObjectMap_eventAddObject_Parms, Guid), Z_Construct_UScriptStruct_FELNetworkGUID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetObjectMap_eventAddObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::NewProp_Object_MetaData)) };
	void Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetObjectMap_eventAddObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetObjectMap_eventAddObject_Parms), &Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetObjectMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetObjectMap, nullptr, "AddObject", nullptr, nullptr, sizeof(ELNetObjectMap_eventAddObject_Parms), Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetObjectMap_AddObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetObjectMap_AddObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics
	{
		struct ELNetObjectMap_eventAddSpecialObject_Parms
		{
			EELNetObjectGuid Guid;
			const UObject* Object;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Guid_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::NewProp_Guid_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetObjectMap_eventAddSpecialObject_Parms, Guid), Z_Construct_UEnum_ABP_200508_EELNetObjectGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetObjectMap_eventAddSpecialObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::NewProp_Object_MetaData)) };
	void Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetObjectMap_eventAddSpecialObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetObjectMap_eventAddSpecialObject_Parms), &Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::NewProp_Guid_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetObjectMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetObjectMap, nullptr, "AddSpecialObject", nullptr, nullptr, sizeof(ELNetObjectMap_eventAddSpecialObject_Parms), Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics
	{
		struct ELNetObjectMap_eventContainsObject_Parms
		{
			const UObject* Object;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetObjectMap_eventContainsObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics::NewProp_Object_MetaData)) };
	void Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetObjectMap_eventContainsObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetObjectMap_eventContainsObject_Parms), &Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetObjectMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetObjectMap, nullptr, "ContainsObject", nullptr, nullptr, sizeof(ELNetObjectMap_eventContainsObject_Parms), Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetObjectMap_ContainsObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetObjectMap_ContainsObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetObjectMap_GetGuid_Statics
	{
		struct ELNetObjectMap_eventGetGuid_Parms
		{
			const UObject* Object;
			FELNetworkGUID ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetObjectMap_GetGuid_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELNetObjectMap_GetGuid_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetObjectMap_eventGetGuid_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELNetObjectMap_GetGuid_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_GetGuid_Statics::NewProp_Object_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELNetObjectMap_GetGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetObjectMap_eventGetGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FELNetworkGUID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetObjectMap_GetGuid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetObjectMap_GetGuid_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetObjectMap_GetGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetObjectMap_GetGuid_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetObjectMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetObjectMap_GetGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetObjectMap, nullptr, "GetGuid", nullptr, nullptr, sizeof(ELNetObjectMap_eventGetGuid_Parms), Z_Construct_UFunction_UELNetObjectMap_GetGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_GetGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetObjectMap_GetGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_GetGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetObjectMap_GetGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetObjectMap_GetGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetObjectMap_GetObject_Statics
	{
		struct ELNetObjectMap_eventGetObject_Parms
		{
			FELNetworkGUID Guid;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELNetObjectMap_GetObject_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetObjectMap_eventGetObject_Parms, Guid), Z_Construct_UScriptStruct_FELNetworkGUID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELNetObjectMap_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetObjectMap_eventGetObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetObjectMap_GetObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetObjectMap_GetObject_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetObjectMap_GetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetObjectMap_GetObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetObjectMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetObjectMap_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetObjectMap, nullptr, "GetObject", nullptr, nullptr, sizeof(ELNetObjectMap_eventGetObject_Parms), Z_Construct_UFunction_UELNetObjectMap_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_GetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetObjectMap_GetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_GetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetObjectMap_GetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetObjectMap_GetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetObjectMap_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetObjectMap_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetObjectMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetObjectMap_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetObjectMap, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetObjectMap_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetObjectMap_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetObjectMap_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics
	{
		struct ELNetObjectMap_eventRemoveObject_Parms
		{
			const UObject* Object;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetObjectMap_eventRemoveObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics::NewProp_Object_MetaData)) };
	void Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetObjectMap_eventRemoveObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetObjectMap_eventRemoveObject_Parms), &Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetObjectMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetObjectMap, nullptr, "RemoveObject", nullptr, nullptr, sizeof(ELNetObjectMap_eventRemoveObject_Parms), Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetObjectMap_RemoveObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetObjectMap_RemoveObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELNetObjectMap_RemoveObjectById_Statics
	{
		struct ELNetObjectMap_eventRemoveObjectById_Parms
		{
			FELNetworkGUID Guid;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELNetObjectMap_RemoveObjectById_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNetObjectMap_eventRemoveObjectById_Parms, Guid), Z_Construct_UScriptStruct_FELNetworkGUID, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELNetObjectMap_RemoveObjectById_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNetObjectMap_eventRemoveObjectById_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELNetObjectMap_RemoveObjectById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNetObjectMap_eventRemoveObjectById_Parms), &Z_Construct_UFunction_UELNetObjectMap_RemoveObjectById_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELNetObjectMap_RemoveObjectById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetObjectMap_RemoveObjectById_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELNetObjectMap_RemoveObjectById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELNetObjectMap_RemoveObjectById_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNetObjectMap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELNetObjectMap_RemoveObjectById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELNetObjectMap, nullptr, "RemoveObjectById", nullptr, nullptr, sizeof(ELNetObjectMap_eventRemoveObjectById_Parms), Z_Construct_UFunction_UELNetObjectMap_RemoveObjectById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_RemoveObjectById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELNetObjectMap_RemoveObjectById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELNetObjectMap_RemoveObjectById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELNetObjectMap_RemoveObjectById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELNetObjectMap_RemoveObjectById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELNetObjectMap_NoRegister()
	{
		return UELNetObjectMap::StaticClass();
	}
	struct Z_Construct_UClass_UELNetObjectMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ObjectLookup_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectLookup_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectLookup_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ObjectLookup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GuidLookup_ValueProp;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_GuidLookup_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuidLookup_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_GuidLookup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELNetObjectMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELNetObjectMap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELNetObjectMap_AddObject, "AddObject" }, // 4063216652
		{ &Z_Construct_UFunction_UELNetObjectMap_AddSpecialObject, "AddSpecialObject" }, // 3657413866
		{ &Z_Construct_UFunction_UELNetObjectMap_ContainsObject, "ContainsObject" }, // 2198870993
		{ &Z_Construct_UFunction_UELNetObjectMap_GetGuid, "GetGuid" }, // 892391590
		{ &Z_Construct_UFunction_UELNetObjectMap_GetObject, "GetObject" }, // 3795802072
		{ &Z_Construct_UFunction_UELNetObjectMap_Initialize, "Initialize" }, // 739084094
		{ &Z_Construct_UFunction_UELNetObjectMap_RemoveObject, "RemoveObject" }, // 2079652634
		{ &Z_Construct_UFunction_UELNetObjectMap_RemoveObjectById, "RemoveObjectById" }, // 2132984199
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetObjectMap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELNetObjectMap.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELNetObjectMap.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_ObjectLookup_ValueProp = { "ObjectLookup", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_ObjectLookup_Key_KeyProp = { "ObjectLookup_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELNetworkGUID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_ObjectLookup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetObjectMap" },
		{ "ModuleRelativePath", "Public/ELNetObjectMap.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_ObjectLookup = { "ObjectLookup", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELNetObjectMap, ObjectLookup), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_ObjectLookup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_ObjectLookup_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_GuidLookup_ValueProp = { "GuidLookup", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FELNetworkGUID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_GuidLookup_Key_KeyProp = { "GuidLookup_Key", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_GuidLookup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELNetObjectMap" },
		{ "ModuleRelativePath", "Public/ELNetObjectMap.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_GuidLookup = { "GuidLookup", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELNetObjectMap, GuidLookup), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_GuidLookup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_GuidLookup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELNetObjectMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_ObjectLookup_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_ObjectLookup_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_ObjectLookup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_GuidLookup_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_GuidLookup_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELNetObjectMap_Statics::NewProp_GuidLookup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELNetObjectMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELNetObjectMap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELNetObjectMap_Statics::ClassParams = {
		&UELNetObjectMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELNetObjectMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELNetObjectMap_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELNetObjectMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELNetObjectMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELNetObjectMap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELNetObjectMap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELNetObjectMap, 3736123444);
	template<> ABP_200508_API UClass* StaticClass<UELNetObjectMap>()
	{
		return UELNetObjectMap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELNetObjectMap(Z_Construct_UClass_UELNetObjectMap, &UELNetObjectMap::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELNetObjectMap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELNetObjectMap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
