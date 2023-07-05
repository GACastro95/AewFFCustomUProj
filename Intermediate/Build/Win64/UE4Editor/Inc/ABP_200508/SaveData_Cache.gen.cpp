// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_Cache.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_Cache() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_Cache_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_Cache();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_AccessorBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USaveData_Cache::execClearAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_Cache::execFind)
	{
		P_GET_OBJECT_REF(USaveData_AccessorBase,Z_Param_Out__pcAccessor);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Find(Z_Param_Out__pcAccessor,Z_Param__strRegKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_Cache::execRegist)
	{
		P_GET_OBJECT(USaveData_AccessorBase,Z_Param__pcAccessor);
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Regist(Z_Param__pcAccessor,Z_Param__strRegKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_Cache::execUnregist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strRegKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Unregist(Z_Param__strRegKey);
		P_NATIVE_END;
	}
	void USaveData_Cache::StaticRegisterNativesUSaveData_Cache()
	{
		UClass* Class = USaveData_Cache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAll", &USaveData_Cache::execClearAll },
			{ "Find", &USaveData_Cache::execFind },
			{ "Regist", &USaveData_Cache::execRegist },
			{ "Unregist", &USaveData_Cache::execUnregist },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveData_Cache_ClearAll_Statics
	{
		struct SaveData_Cache_eventClearAll_Parms
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
	void Z_Construct_UFunction_USaveData_Cache_ClearAll_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_Cache_eventClearAll_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_Cache_ClearAll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_Cache_eventClearAll_Parms), &Z_Construct_UFunction_USaveData_Cache_ClearAll_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_Cache_ClearAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_Cache_ClearAll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_Cache_ClearAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_Cache.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_Cache_ClearAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_Cache, nullptr, "ClearAll", nullptr, nullptr, sizeof(SaveData_Cache_eventClearAll_Parms), Z_Construct_UFunction_USaveData_Cache_ClearAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_Cache_ClearAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_Cache_ClearAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_Cache_ClearAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_Cache_ClearAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_Cache_ClearAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_Cache_Find_Statics
	{
		struct SaveData_Cache_eventFind_Parms
		{
			USaveData_AccessorBase* _pcAccessor;
			FString _strRegKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcAccessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_Cache_Find_Statics::NewProp__pcAccessor = { "_pcAccessor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_Cache_eventFind_Parms, _pcAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_Cache_Find_Statics::NewProp__strRegKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_Cache_Find_Statics::NewProp__strRegKey = { "_strRegKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_Cache_eventFind_Parms, _strRegKey), METADATA_PARAMS(Z_Construct_UFunction_USaveData_Cache_Find_Statics::NewProp__strRegKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_Cache_Find_Statics::NewProp__strRegKey_MetaData)) };
	void Z_Construct_UFunction_USaveData_Cache_Find_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_Cache_eventFind_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_Cache_Find_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_Cache_eventFind_Parms), &Z_Construct_UFunction_USaveData_Cache_Find_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_Cache_Find_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_Cache_Find_Statics::NewProp__pcAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_Cache_Find_Statics::NewProp__strRegKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_Cache_Find_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_Cache_Find_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_Cache.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_Cache_Find_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_Cache, nullptr, "Find", nullptr, nullptr, sizeof(SaveData_Cache_eventFind_Parms), Z_Construct_UFunction_USaveData_Cache_Find_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_Cache_Find_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_Cache_Find_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_Cache_Find_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_Cache_Find()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_Cache_Find_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_Cache_Regist_Statics
	{
		struct SaveData_Cache_eventRegist_Parms
		{
			USaveData_AccessorBase* _pcAccessor;
			FString _strRegKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcAccessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_Cache_Regist_Statics::NewProp__pcAccessor = { "_pcAccessor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_Cache_eventRegist_Parms, _pcAccessor), Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_Cache_Regist_Statics::NewProp__strRegKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_Cache_Regist_Statics::NewProp__strRegKey = { "_strRegKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_Cache_eventRegist_Parms, _strRegKey), METADATA_PARAMS(Z_Construct_UFunction_USaveData_Cache_Regist_Statics::NewProp__strRegKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_Cache_Regist_Statics::NewProp__strRegKey_MetaData)) };
	void Z_Construct_UFunction_USaveData_Cache_Regist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_Cache_eventRegist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_Cache_Regist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_Cache_eventRegist_Parms), &Z_Construct_UFunction_USaveData_Cache_Regist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_Cache_Regist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_Cache_Regist_Statics::NewProp__pcAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_Cache_Regist_Statics::NewProp__strRegKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_Cache_Regist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_Cache_Regist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_Cache.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_Cache_Regist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_Cache, nullptr, "Regist", nullptr, nullptr, sizeof(SaveData_Cache_eventRegist_Parms), Z_Construct_UFunction_USaveData_Cache_Regist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_Cache_Regist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_Cache_Regist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_Cache_Regist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_Cache_Regist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_Cache_Regist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_Cache_Unregist_Statics
	{
		struct SaveData_Cache_eventUnregist_Parms
		{
			FString _strRegKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strRegKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strRegKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_Cache_Unregist_Statics::NewProp__strRegKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveData_Cache_Unregist_Statics::NewProp__strRegKey = { "_strRegKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_Cache_eventUnregist_Parms, _strRegKey), METADATA_PARAMS(Z_Construct_UFunction_USaveData_Cache_Unregist_Statics::NewProp__strRegKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_Cache_Unregist_Statics::NewProp__strRegKey_MetaData)) };
	void Z_Construct_UFunction_USaveData_Cache_Unregist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_Cache_eventUnregist_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_Cache_Unregist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_Cache_eventUnregist_Parms), &Z_Construct_UFunction_USaveData_Cache_Unregist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_Cache_Unregist_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_Cache_Unregist_Statics::NewProp__strRegKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_Cache_Unregist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_Cache_Unregist_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_Cache.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_Cache_Unregist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_Cache, nullptr, "Unregist", nullptr, nullptr, sizeof(SaveData_Cache_eventUnregist_Parms), Z_Construct_UFunction_USaveData_Cache_Unregist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_Cache_Unregist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_Cache_Unregist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_Cache_Unregist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_Cache_Unregist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_Cache_Unregist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveData_Cache_NoRegister()
	{
		return USaveData_Cache::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_Cache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cAccessores_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cAccessores_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cAccessores_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cAccessores;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_Cache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveData_Cache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveData_Cache_ClearAll, "ClearAll" }, // 163027780
		{ &Z_Construct_UFunction_USaveData_Cache_Find, "Find" }, // 715557560
		{ &Z_Construct_UFunction_USaveData_Cache_Regist, "Regist" }, // 1895643267
		{ &Z_Construct_UFunction_USaveData_Cache_Unregist, "Unregist" }, // 1902252443
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_Cache_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_Cache.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_Cache.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveData_Cache_Statics::NewProp_m_cAccessores_ValueProp = { "m_cAccessores", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USaveData_AccessorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveData_Cache_Statics::NewProp_m_cAccessores_Key_KeyProp = { "m_cAccessores_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_Cache_Statics::NewProp_m_cAccessores_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SaveData_Cache" },
		{ "ModuleRelativePath", "Public/SaveData_Cache.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_USaveData_Cache_Statics::NewProp_m_cAccessores = { "m_cAccessores", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveData_Cache, m_cAccessores), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveData_Cache_Statics::NewProp_m_cAccessores_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_Cache_Statics::NewProp_m_cAccessores_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveData_Cache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_Cache_Statics::NewProp_m_cAccessores_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_Cache_Statics::NewProp_m_cAccessores_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveData_Cache_Statics::NewProp_m_cAccessores,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_Cache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_Cache>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_Cache_Statics::ClassParams = {
		&USaveData_Cache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveData_Cache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_Cache_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_Cache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_Cache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_Cache()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_Cache_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_Cache, 990679723);
	template<> ABP_200508_API UClass* StaticClass<USaveData_Cache>()
	{
		return USaveData_Cache::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_Cache(Z_Construct_UClass_USaveData_Cache, &USaveData_Cache::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_Cache"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_Cache);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
