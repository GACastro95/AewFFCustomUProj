// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YDBGMail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDBGMail() {}
// Cross Module References
	YDEBUG_API UClass* Z_Construct_UClass_UYDBGMail_NoRegister();
	YDEBUG_API UClass* Z_Construct_UClass_UYDBGMail();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYDBGMailHeader();
	YDEBUG_API UScriptStruct* Z_Construct_UScriptStruct_FYDBGMailBody();
// End Cross Module References
	DEFINE_FUNCTION(UYDBGMail::execConnect)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strIP);
		P_GET_PROPERTY(FIntProperty,Z_Param__sPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Connect(Z_Param__strIP,Z_Param__sPort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGMail::execCreateYDBGMail)
	{
		P_GET_OBJECT_REF(UYDBGMail,Z_Param_Out__pcInst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDBGMail::CreateYDBGMail(Z_Param_Out__pcInst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGMail::execDisconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Disconnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGMail::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGMail::execSend)
	{
		P_GET_STRUCT_REF(FYDBGMailHeader,Z_Param_Out__stHeader);
		P_GET_STRUCT_REF(FYDBGMailBody,Z_Param_Out__stBody);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Send(Z_Param_Out__stHeader,Z_Param_Out__stBody);
		P_NATIVE_END;
	}
	void UYDBGMail::StaticRegisterNativesUYDBGMail()
	{
		UClass* Class = UYDBGMail::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UYDBGMail::execConnect },
			{ "CreateYDBGMail", &UYDBGMail::execCreateYDBGMail },
			{ "Disconnect", &UYDBGMail::execDisconnect },
			{ "IsConnected", &UYDBGMail::execIsConnected },
			{ "Send", &UYDBGMail::execSend },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYDBGMail_Connect_Statics
	{
		struct YDBGMail_eventConnect_Parms
		{
			FString _strIP;
			int32 _sPort;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strIP;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sPort;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGMail_Connect_Statics::NewProp__strIP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGMail_Connect_Statics::NewProp__strIP = { "_strIP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGMail_eventConnect_Parms, _strIP), METADATA_PARAMS(Z_Construct_UFunction_UYDBGMail_Connect_Statics::NewProp__strIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGMail_Connect_Statics::NewProp__strIP_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYDBGMail_Connect_Statics::NewProp__sPort = { "_sPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGMail_eventConnect_Parms, _sPort), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYDBGMail_Connect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGMail_eventConnect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGMail_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGMail_eventConnect_Parms), &Z_Construct_UFunction_UYDBGMail_Connect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGMail_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGMail_Connect_Statics::NewProp__strIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGMail_Connect_Statics::NewProp__sPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGMail_Connect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGMail_Connect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGMail.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGMail_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGMail, nullptr, "Connect", nullptr, nullptr, sizeof(YDBGMail_eventConnect_Parms), Z_Construct_UFunction_UYDBGMail_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGMail_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGMail_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGMail_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGMail_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGMail_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGMail_CreateYDBGMail_Statics
	{
		struct YDBGMail_eventCreateYDBGMail_Parms
		{
			UYDBGMail* _pcInst;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDBGMail_CreateYDBGMail_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGMail_eventCreateYDBGMail_Parms, _pcInst), Z_Construct_UClass_UYDBGMail_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYDBGMail_CreateYDBGMail_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGMail_eventCreateYDBGMail_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGMail_CreateYDBGMail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGMail_eventCreateYDBGMail_Parms), &Z_Construct_UFunction_UYDBGMail_CreateYDBGMail_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGMail_CreateYDBGMail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGMail_CreateYDBGMail_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGMail_CreateYDBGMail_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGMail_CreateYDBGMail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGMail.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGMail_CreateYDBGMail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGMail, nullptr, "CreateYDBGMail", nullptr, nullptr, sizeof(YDBGMail_eventCreateYDBGMail_Parms), Z_Construct_UFunction_UYDBGMail_CreateYDBGMail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGMail_CreateYDBGMail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGMail_CreateYDBGMail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGMail_CreateYDBGMail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGMail_CreateYDBGMail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGMail_CreateYDBGMail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGMail_Disconnect_Statics
	{
		struct YDBGMail_eventDisconnect_Parms
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
	void Z_Construct_UFunction_UYDBGMail_Disconnect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGMail_eventDisconnect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGMail_Disconnect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGMail_eventDisconnect_Parms), &Z_Construct_UFunction_UYDBGMail_Disconnect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGMail_Disconnect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGMail_Disconnect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGMail_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGMail.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGMail_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGMail, nullptr, "Disconnect", nullptr, nullptr, sizeof(YDBGMail_eventDisconnect_Parms), Z_Construct_UFunction_UYDBGMail_Disconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGMail_Disconnect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGMail_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGMail_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGMail_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGMail_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGMail_IsConnected_Statics
	{
		struct YDBGMail_eventIsConnected_Parms
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
	void Z_Construct_UFunction_UYDBGMail_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGMail_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGMail_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGMail_eventIsConnected_Parms), &Z_Construct_UFunction_UYDBGMail_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGMail_IsConnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGMail_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGMail_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGMail.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGMail_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGMail, nullptr, "IsConnected", nullptr, nullptr, sizeof(YDBGMail_eventIsConnected_Parms), Z_Construct_UFunction_UYDBGMail_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGMail_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGMail_IsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGMail_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGMail_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGMail_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGMail_Send_Statics
	{
		struct YDBGMail_eventSend_Parms
		{
			FYDBGMailHeader _stHeader;
			FYDBGMailBody _stBody;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stHeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stHeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stBody;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGMail_Send_Statics::NewProp__stHeader_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDBGMail_Send_Statics::NewProp__stHeader = { "_stHeader", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGMail_eventSend_Parms, _stHeader), Z_Construct_UScriptStruct_FYDBGMailHeader, METADATA_PARAMS(Z_Construct_UFunction_UYDBGMail_Send_Statics::NewProp__stHeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGMail_Send_Statics::NewProp__stHeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGMail_Send_Statics::NewProp__stBody_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYDBGMail_Send_Statics::NewProp__stBody = { "_stBody", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGMail_eventSend_Parms, _stBody), Z_Construct_UScriptStruct_FYDBGMailBody, METADATA_PARAMS(Z_Construct_UFunction_UYDBGMail_Send_Statics::NewProp__stBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGMail_Send_Statics::NewProp__stBody_MetaData)) };
	void Z_Construct_UFunction_UYDBGMail_Send_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGMail_eventSend_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGMail_Send_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGMail_eventSend_Parms), &Z_Construct_UFunction_UYDBGMail_Send_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGMail_Send_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGMail_Send_Statics::NewProp__stHeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGMail_Send_Statics::NewProp__stBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGMail_Send_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGMail_Send_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGMail.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGMail_Send_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGMail, nullptr, "Send", nullptr, nullptr, sizeof(YDBGMail_eventSend_Parms), Z_Construct_UFunction_UYDBGMail_Send_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGMail_Send_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGMail_Send_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGMail_Send_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGMail_Send()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGMail_Send_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYDBGMail_NoRegister()
	{
		return UYDBGMail::StaticClass();
	}
	struct Z_Construct_UClass_UYDBGMail_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYDBGMail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYDBGMail_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYDBGMail_Connect, "Connect" }, // 3997874623
		{ &Z_Construct_UFunction_UYDBGMail_CreateYDBGMail, "CreateYDBGMail" }, // 3368528791
		{ &Z_Construct_UFunction_UYDBGMail_Disconnect, "Disconnect" }, // 2628512835
		{ &Z_Construct_UFunction_UYDBGMail_IsConnected, "IsConnected" }, // 1008222571
		{ &Z_Construct_UFunction_UYDBGMail_Send, "Send" }, // 2544944858
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDBGMail_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YDBGMail.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YDBGMail.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYDBGMail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYDBGMail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYDBGMail_Statics::ClassParams = {
		&UYDBGMail::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYDBGMail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYDBGMail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYDBGMail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYDBGMail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYDBGMail, 2864748735);
	template<> YDEBUG_API UClass* StaticClass<UYDBGMail>()
	{
		return UYDBGMail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYDBGMail(Z_Construct_UClass_UYDBGMail, &UYDBGMail::StaticClass, TEXT("/Script/yDebug"), TEXT("UYDBGMail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYDBGMail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
