// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YDBGSettingReader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDBGSettingReader() {}
// Cross Module References
	YDEBUG_API UClass* Z_Construct_UClass_UYDBGSettingReader_NoRegister();
	YDEBUG_API UClass* Z_Construct_UClass_UYDBGSettingReader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FDBGSettingDATA();
	YDEBUG_API UFunction* Z_Construct_UDelegateFunction_yDebug_DebugSettingValueChangedDispatcher__DelegateSignature();
	YDEBUG_API UFunction* Z_Construct_UDelegateFunction_yDebug_DebugSettingActiveFlagChangedDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UYDBGSettingReader::execCreateYDBGSettingReader)
	{
		P_GET_OBJECT_REF(UYDBGSettingReader,Z_Param_Out__pcInst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDBGSettingReader::CreateYDBGSettingReader(Z_Param_Out__pcInst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGSettingReader::execGetAllItemList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FDBGSettingDATA>*)Z_Param__Result=P_THIS->GetAllItemList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGSettingReader::execGetBool)
	{
		P_GET_UBOOL_REF(Z_Param_Out__rbValue);
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBool(Z_Param_Out__rbValue,Z_Param__strKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGSettingReader::execGetComment)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__rstrComment);
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetComment(Z_Param_Out__rstrComment,Z_Param__strKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGSettingReader::execGetFloat)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out__rfValue);
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFloat(Z_Param_Out__rfValue,Z_Param__strKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGSettingReader::execGetInt)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out__rsValue);
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInt(Z_Param_Out__rsValue,Z_Param__strKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGSettingReader::execGetString)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__rstrValue);
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetString(Z_Param_Out__rstrValue,Z_Param__strKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGSettingReader::execIsActive)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive(Z_Param__strKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGSettingReader::execLoad)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Load(Z_Param__strFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGSettingReader::execSetActive)
	{
		P_GET_UBOOL(Z_Param__bActive);
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetActive(Z_Param__bActive,Z_Param__strKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGSettingReader::execSetString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strValue);
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetString(Z_Param__strValue,Z_Param__strKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGSettingReader::execSetValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__fValue);
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetValue(Z_Param__fValue,Z_Param__strKey);
		P_NATIVE_END;
	}
	void UYDBGSettingReader::StaticRegisterNativesUYDBGSettingReader()
	{
		UClass* Class = UYDBGSettingReader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateYDBGSettingReader", &UYDBGSettingReader::execCreateYDBGSettingReader },
			{ "GetAllItemList", &UYDBGSettingReader::execGetAllItemList },
			{ "GetBool", &UYDBGSettingReader::execGetBool },
			{ "GetComment", &UYDBGSettingReader::execGetComment },
			{ "GetFloat", &UYDBGSettingReader::execGetFloat },
			{ "GetInt", &UYDBGSettingReader::execGetInt },
			{ "GetString", &UYDBGSettingReader::execGetString },
			{ "IsActive", &UYDBGSettingReader::execIsActive },
			{ "Load", &UYDBGSettingReader::execLoad },
			{ "SetActive", &UYDBGSettingReader::execSetActive },
			{ "SetString", &UYDBGSettingReader::execSetString },
			{ "SetValue", &UYDBGSettingReader::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYDBGSettingReader_CreateYDBGSettingReader_Statics
	{
		struct YDBGSettingReader_eventCreateYDBGSettingReader_Parms
		{
			UYDBGSettingReader* _pcInst;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDBGSettingReader_CreateYDBGSettingReader_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventCreateYDBGSettingReader_Parms, _pcInst), Z_Construct_UClass_UYDBGSettingReader_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYDBGSettingReader_CreateYDBGSettingReader_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGSettingReader_eventCreateYDBGSettingReader_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGSettingReader_CreateYDBGSettingReader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGSettingReader_eventCreateYDBGSettingReader_Parms), &Z_Construct_UFunction_UYDBGSettingReader_CreateYDBGSettingReader_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGSettingReader_CreateYDBGSettingReader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_CreateYDBGSettingReader_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_CreateYDBGSettingReader_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_CreateYDBGSettingReader_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGSettingReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGSettingReader_CreateYDBGSettingReader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGSettingReader, nullptr, "CreateYDBGSettingReader", nullptr, nullptr, sizeof(YDBGSettingReader_eventCreateYDBGSettingReader_Parms), Z_Construct_UFunction_UYDBGSettingReader_CreateYDBGSettingReader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_CreateYDBGSettingReader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_CreateYDBGSettingReader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_CreateYDBGSettingReader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGSettingReader_CreateYDBGSettingReader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGSettingReader_CreateYDBGSettingReader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGSettingReader_GetAllItemList_Statics
	{
		struct YDBGSettingReader_eventGetAllItemList_Parms
		{
			TMap<FString,FDBGSettingDATA> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetAllItemList_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FDBGSettingDATA, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetAllItemList_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetAllItemList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventGetAllItemList_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGSettingReader_GetAllItemList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetAllItemList_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetAllItemList_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetAllItemList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_GetAllItemList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGSettingReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGSettingReader_GetAllItemList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGSettingReader, nullptr, "GetAllItemList", nullptr, nullptr, sizeof(YDBGSettingReader_eventGetAllItemList_Parms), Z_Construct_UFunction_UYDBGSettingReader_GetAllItemList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_GetAllItemList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_GetAllItemList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_GetAllItemList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGSettingReader_GetAllItemList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGSettingReader_GetAllItemList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics
	{
		struct YDBGSettingReader_eventGetBool_Parms
		{
			bool _rbValue;
			FString _strKey;
			bool ReturnValue;
		};
		static void NewProp__rbValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__rbValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::NewProp__rbValue_SetBit(void* Obj)
	{
		((YDBGSettingReader_eventGetBool_Parms*)Obj)->_rbValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::NewProp__rbValue = { "_rbValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGSettingReader_eventGetBool_Parms), &Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::NewProp__rbValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventGetBool_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::NewProp__strKey_MetaData)) };
	void Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGSettingReader_eventGetBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGSettingReader_eventGetBool_Parms), &Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::NewProp__rbValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGSettingReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGSettingReader, nullptr, "GetBool", nullptr, nullptr, sizeof(YDBGSettingReader_eventGetBool_Parms), Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGSettingReader_GetBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGSettingReader_GetBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics
	{
		struct YDBGSettingReader_eventGetComment_Parms
		{
			FString _rstrComment;
			FString _strKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__rstrComment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::NewProp__rstrComment = { "_rstrComment", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventGetComment_Parms, _rstrComment), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventGetComment_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::NewProp__strKey_MetaData)) };
	void Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGSettingReader_eventGetComment_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGSettingReader_eventGetComment_Parms), &Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::NewProp__rstrComment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGSettingReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGSettingReader, nullptr, "GetComment", nullptr, nullptr, sizeof(YDBGSettingReader_eventGetComment_Parms), Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGSettingReader_GetComment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGSettingReader_GetComment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics
	{
		struct YDBGSettingReader_eventGetFloat_Parms
		{
			float _rfValue;
			FString _strKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rfValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::NewProp__rfValue = { "_rfValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventGetFloat_Parms, _rfValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventGetFloat_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::NewProp__strKey_MetaData)) };
	void Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGSettingReader_eventGetFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGSettingReader_eventGetFloat_Parms), &Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::NewProp__rfValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGSettingReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGSettingReader, nullptr, "GetFloat", nullptr, nullptr, sizeof(YDBGSettingReader_eventGetFloat_Parms), Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGSettingReader_GetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGSettingReader_GetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics
	{
		struct YDBGSettingReader_eventGetInt_Parms
		{
			int32 _rsValue;
			FString _strKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__rsValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::NewProp__rsValue = { "_rsValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventGetInt_Parms, _rsValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventGetInt_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::NewProp__strKey_MetaData)) };
	void Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGSettingReader_eventGetInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGSettingReader_eventGetInt_Parms), &Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::NewProp__rsValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGSettingReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGSettingReader, nullptr, "GetInt", nullptr, nullptr, sizeof(YDBGSettingReader_eventGetInt_Parms), Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGSettingReader_GetInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGSettingReader_GetInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics
	{
		struct YDBGSettingReader_eventGetString_Parms
		{
			FString _rstrValue;
			FString _strKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__rstrValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::NewProp__rstrValue = { "_rstrValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventGetString_Parms, _rstrValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventGetString_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::NewProp__strKey_MetaData)) };
	void Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGSettingReader_eventGetString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGSettingReader_eventGetString_Parms), &Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::NewProp__rstrValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGSettingReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGSettingReader, nullptr, "GetString", nullptr, nullptr, sizeof(YDBGSettingReader_eventGetString_Parms), Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGSettingReader_GetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGSettingReader_GetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics
	{
		struct YDBGSettingReader_eventIsActive_Parms
		{
			FString _strKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventIsActive_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics::NewProp__strKey_MetaData)) };
	void Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGSettingReader_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGSettingReader_eventIsActive_Parms), &Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGSettingReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGSettingReader, nullptr, "IsActive", nullptr, nullptr, sizeof(YDBGSettingReader_eventIsActive_Parms), Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGSettingReader_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGSettingReader_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGSettingReader_Load_Statics
	{
		struct YDBGSettingReader_eventLoad_Parms
		{
			FString _strFileName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strFileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_Load_Statics::NewProp__strFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGSettingReader_Load_Statics::NewProp__strFileName = { "_strFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventLoad_Parms, _strFileName), METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_Load_Statics::NewProp__strFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_Load_Statics::NewProp__strFileName_MetaData)) };
	void Z_Construct_UFunction_UYDBGSettingReader_Load_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGSettingReader_eventLoad_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGSettingReader_Load_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGSettingReader_eventLoad_Parms), &Z_Construct_UFunction_UYDBGSettingReader_Load_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGSettingReader_Load_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_Load_Statics::NewProp__strFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_Load_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_Load_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGSettingReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGSettingReader_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGSettingReader, nullptr, "Load", nullptr, nullptr, sizeof(YDBGSettingReader_eventLoad_Parms), Z_Construct_UFunction_UYDBGSettingReader_Load_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_Load_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_Load_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_Load_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGSettingReader_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGSettingReader_Load_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics
	{
		struct YDBGSettingReader_eventSetActive_Parms
		{
			bool _bActive;
			FString _strKey;
			bool ReturnValue;
		};
		static void NewProp__bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::NewProp__bActive_SetBit(void* Obj)
	{
		((YDBGSettingReader_eventSetActive_Parms*)Obj)->_bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::NewProp__bActive = { "_bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGSettingReader_eventSetActive_Parms), &Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::NewProp__bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventSetActive_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::NewProp__strKey_MetaData)) };
	void Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGSettingReader_eventSetActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGSettingReader_eventSetActive_Parms), &Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::NewProp__bActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGSettingReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGSettingReader, nullptr, "SetActive", nullptr, nullptr, sizeof(YDBGSettingReader_eventSetActive_Parms), Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGSettingReader_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGSettingReader_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics
	{
		struct YDBGSettingReader_eventSetString_Parms
		{
			FString _strValue;
			FString _strKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::NewProp__strValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::NewProp__strValue = { "_strValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventSetString_Parms, _strValue), METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::NewProp__strValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::NewProp__strValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventSetString_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::NewProp__strKey_MetaData)) };
	void Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGSettingReader_eventSetString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGSettingReader_eventSetString_Parms), &Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::NewProp__strValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGSettingReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGSettingReader, nullptr, "SetString", nullptr, nullptr, sizeof(YDBGSettingReader_eventSetString_Parms), Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGSettingReader_SetString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGSettingReader_SetString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics
	{
		struct YDBGSettingReader_eventSetValue_Parms
		{
			float _fValue;
			FString _strKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__fValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::NewProp__fValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::NewProp__fValue = { "_fValue", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventSetValue_Parms, _fValue), METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::NewProp__fValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::NewProp__fValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGSettingReader_eventSetValue_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::NewProp__strKey_MetaData)) };
	void Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGSettingReader_eventSetValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGSettingReader_eventSetValue_Parms), &Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::NewProp__fValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGSettingReader.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGSettingReader, nullptr, "SetValue", nullptr, nullptr, sizeof(YDBGSettingReader_eventSetValue_Parms), Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGSettingReader_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGSettingReader_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYDBGSettingReader_NoRegister()
	{
		return UYDBGSettingReader::StaticClass();
	}
	struct Z_Construct_UClass_UYDBGSettingReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugSettingValueChangedDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DebugSettingValueChangedDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugSettingActiveFlagChangedDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DebugSettingActiveFlagChangedDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYDBGSettingReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYDBGSettingReader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYDBGSettingReader_CreateYDBGSettingReader, "CreateYDBGSettingReader" }, // 625613366
		{ &Z_Construct_UFunction_UYDBGSettingReader_GetAllItemList, "GetAllItemList" }, // 3376543730
		{ &Z_Construct_UFunction_UYDBGSettingReader_GetBool, "GetBool" }, // 3381189154
		{ &Z_Construct_UFunction_UYDBGSettingReader_GetComment, "GetComment" }, // 2144555537
		{ &Z_Construct_UFunction_UYDBGSettingReader_GetFloat, "GetFloat" }, // 2891722623
		{ &Z_Construct_UFunction_UYDBGSettingReader_GetInt, "GetInt" }, // 190319949
		{ &Z_Construct_UFunction_UYDBGSettingReader_GetString, "GetString" }, // 3603417406
		{ &Z_Construct_UFunction_UYDBGSettingReader_IsActive, "IsActive" }, // 3554389070
		{ &Z_Construct_UFunction_UYDBGSettingReader_Load, "Load" }, // 2461532981
		{ &Z_Construct_UFunction_UYDBGSettingReader_SetActive, "SetActive" }, // 1446057196
		{ &Z_Construct_UFunction_UYDBGSettingReader_SetString, "SetString" }, // 3803239919
		{ &Z_Construct_UFunction_UYDBGSettingReader_SetValue, "SetValue" }, // 3960223260
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDBGSettingReader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YDBGSettingReader.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YDBGSettingReader.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDBGSettingReader_Statics::NewProp_DebugSettingValueChangedDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDBGSettingReader" },
		{ "ModuleRelativePath", "Public/YDBGSettingReader.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYDBGSettingReader_Statics::NewProp_DebugSettingValueChangedDispatcher = { "DebugSettingValueChangedDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYDBGSettingReader, DebugSettingValueChangedDispatcher), Z_Construct_UDelegateFunction_yDebug_DebugSettingValueChangedDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYDBGSettingReader_Statics::NewProp_DebugSettingValueChangedDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYDBGSettingReader_Statics::NewProp_DebugSettingValueChangedDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDBGSettingReader_Statics::NewProp_DebugSettingActiveFlagChangedDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YDBGSettingReader" },
		{ "ModuleRelativePath", "Public/YDBGSettingReader.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYDBGSettingReader_Statics::NewProp_DebugSettingActiveFlagChangedDispatcher = { "DebugSettingActiveFlagChangedDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYDBGSettingReader, DebugSettingActiveFlagChangedDispatcher), Z_Construct_UDelegateFunction_yDebug_DebugSettingActiveFlagChangedDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYDBGSettingReader_Statics::NewProp_DebugSettingActiveFlagChangedDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYDBGSettingReader_Statics::NewProp_DebugSettingActiveFlagChangedDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYDBGSettingReader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDBGSettingReader_Statics::NewProp_DebugSettingValueChangedDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYDBGSettingReader_Statics::NewProp_DebugSettingActiveFlagChangedDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYDBGSettingReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYDBGSettingReader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYDBGSettingReader_Statics::ClassParams = {
		&UYDBGSettingReader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYDBGSettingReader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYDBGSettingReader_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYDBGSettingReader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYDBGSettingReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYDBGSettingReader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYDBGSettingReader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYDBGSettingReader, 3796365292);
	template<> YDEBUG_API UClass* StaticClass<UYDBGSettingReader>()
	{
		return UYDBGSettingReader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYDBGSettingReader(Z_Construct_UClass_UYDBGSettingReader, &UYDBGSettingReader::StaticClass, TEXT("/Script/yDebug"), TEXT("UYDBGSettingReader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYDBGSettingReader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
