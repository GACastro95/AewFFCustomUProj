// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/YDBGOnlineParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYDBGOnlineParam() {}
// Cross Module References
	YDEBUG_API UClass* Z_Construct_UClass_UYDBGOnlineParam_NoRegister();
	YDEBUG_API UClass* Z_Construct_UClass_UYDBGOnlineParam();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_yDebug();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UYDBGOnlineParam::execCreateYDBGOnlineParamerter)
	{
		P_GET_OBJECT_REF(UYDBGOnlineParam,Z_Param_Out__pcInst);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYDBGOnlineParam::CreateYDBGOnlineParamerter(Z_Param_Out__pcInst,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGOnlineParam::execGetAuthServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAuthServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGOnlineParam::execGetAuthUser)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAuthUser(Z_Param__sIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGOnlineParam::execGetDebugID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDebugID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGOnlineParam::execGetInstanceID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInstanceID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGOnlineParam::execGetShowDebugDefaultNo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetShowDebugDefaultNo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGOnlineParam::execGetTickBudgetInMilliseconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTickBudgetInMilliseconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGOnlineParam::execGetWorldType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWorldType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGOnlineParam::execIsEnableAutoLogin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableAutoLogin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGOnlineParam::execIsEnableLog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableLog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGOnlineParam::execIsEnableShowDebugInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnableShowDebugInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYDBGOnlineParam::execSetup)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strSettingFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Setup(Z_Param__strSettingFileName);
		P_NATIVE_END;
	}
	void UYDBGOnlineParam::StaticRegisterNativesUYDBGOnlineParam()
	{
		UClass* Class = UYDBGOnlineParam::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateYDBGOnlineParamerter", &UYDBGOnlineParam::execCreateYDBGOnlineParamerter },
			{ "GetAuthServer", &UYDBGOnlineParam::execGetAuthServer },
			{ "GetAuthUser", &UYDBGOnlineParam::execGetAuthUser },
			{ "GetDebugID", &UYDBGOnlineParam::execGetDebugID },
			{ "GetInstanceID", &UYDBGOnlineParam::execGetInstanceID },
			{ "GetShowDebugDefaultNo", &UYDBGOnlineParam::execGetShowDebugDefaultNo },
			{ "GetTickBudgetInMilliseconds", &UYDBGOnlineParam::execGetTickBudgetInMilliseconds },
			{ "GetWorldType", &UYDBGOnlineParam::execGetWorldType },
			{ "IsEnableAutoLogin", &UYDBGOnlineParam::execIsEnableAutoLogin },
			{ "IsEnableLog", &UYDBGOnlineParam::execIsEnableLog },
			{ "IsEnableShowDebugInfo", &UYDBGOnlineParam::execIsEnableShowDebugInfo },
			{ "Setup", &UYDBGOnlineParam::execSetup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter_Statics
	{
		struct YDBGOnlineParam_eventCreateYDBGOnlineParamerter_Parms
		{
			UYDBGOnlineParam* _pcInst;
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGOnlineParam_eventCreateYDBGOnlineParamerter_Parms, _pcInst), Z_Construct_UClass_UYDBGOnlineParam_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGOnlineParam_eventCreateYDBGOnlineParamerter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGOnlineParam_eventCreateYDBGOnlineParamerter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGOnlineParam_eventCreateYDBGOnlineParamerter_Parms), &Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGOnlineParam.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGOnlineParam, nullptr, "CreateYDBGOnlineParamerter", nullptr, nullptr, sizeof(YDBGOnlineParam_eventCreateYDBGOnlineParamerter_Parms), Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGOnlineParam_GetAuthServer_Statics
	{
		struct YDBGOnlineParam_eventGetAuthServer_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGOnlineParam_GetAuthServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGOnlineParam_eventGetAuthServer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGOnlineParam_GetAuthServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGOnlineParam_GetAuthServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGOnlineParam_GetAuthServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGOnlineParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGOnlineParam_GetAuthServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGOnlineParam, nullptr, "GetAuthServer", nullptr, nullptr, sizeof(YDBGOnlineParam_eventGetAuthServer_Parms), Z_Construct_UFunction_UYDBGOnlineParam_GetAuthServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_GetAuthServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGOnlineParam_GetAuthServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_GetAuthServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGOnlineParam_GetAuthServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGOnlineParam_GetAuthServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGOnlineParam_GetAuthUser_Statics
	{
		struct YDBGOnlineParam_eventGetAuthUser_Parms
		{
			int32 _sIndex;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sIndex;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYDBGOnlineParam_GetAuthUser_Statics::NewProp__sIndex = { "_sIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGOnlineParam_eventGetAuthUser_Parms, _sIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGOnlineParam_GetAuthUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGOnlineParam_eventGetAuthUser_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGOnlineParam_GetAuthUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGOnlineParam_GetAuthUser_Statics::NewProp__sIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGOnlineParam_GetAuthUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGOnlineParam_GetAuthUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGOnlineParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGOnlineParam_GetAuthUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGOnlineParam, nullptr, "GetAuthUser", nullptr, nullptr, sizeof(YDBGOnlineParam_eventGetAuthUser_Parms), Z_Construct_UFunction_UYDBGOnlineParam_GetAuthUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_GetAuthUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGOnlineParam_GetAuthUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_GetAuthUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGOnlineParam_GetAuthUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGOnlineParam_GetAuthUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGOnlineParam_GetDebugID_Statics
	{
		struct YDBGOnlineParam_eventGetDebugID_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYDBGOnlineParam_GetDebugID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGOnlineParam_eventGetDebugID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGOnlineParam_GetDebugID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGOnlineParam_GetDebugID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGOnlineParam_GetDebugID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGOnlineParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGOnlineParam_GetDebugID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGOnlineParam, nullptr, "GetDebugID", nullptr, nullptr, sizeof(YDBGOnlineParam_eventGetDebugID_Parms), Z_Construct_UFunction_UYDBGOnlineParam_GetDebugID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_GetDebugID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGOnlineParam_GetDebugID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_GetDebugID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGOnlineParam_GetDebugID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGOnlineParam_GetDebugID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGOnlineParam_GetInstanceID_Statics
	{
		struct YDBGOnlineParam_eventGetInstanceID_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYDBGOnlineParam_GetInstanceID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGOnlineParam_eventGetInstanceID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGOnlineParam_GetInstanceID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGOnlineParam_GetInstanceID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGOnlineParam_GetInstanceID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGOnlineParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGOnlineParam_GetInstanceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGOnlineParam, nullptr, "GetInstanceID", nullptr, nullptr, sizeof(YDBGOnlineParam_eventGetInstanceID_Parms), Z_Construct_UFunction_UYDBGOnlineParam_GetInstanceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_GetInstanceID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGOnlineParam_GetInstanceID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_GetInstanceID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGOnlineParam_GetInstanceID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGOnlineParam_GetInstanceID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGOnlineParam_GetShowDebugDefaultNo_Statics
	{
		struct YDBGOnlineParam_eventGetShowDebugDefaultNo_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYDBGOnlineParam_GetShowDebugDefaultNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGOnlineParam_eventGetShowDebugDefaultNo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGOnlineParam_GetShowDebugDefaultNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGOnlineParam_GetShowDebugDefaultNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGOnlineParam_GetShowDebugDefaultNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGOnlineParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGOnlineParam_GetShowDebugDefaultNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGOnlineParam, nullptr, "GetShowDebugDefaultNo", nullptr, nullptr, sizeof(YDBGOnlineParam_eventGetShowDebugDefaultNo_Parms), Z_Construct_UFunction_UYDBGOnlineParam_GetShowDebugDefaultNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_GetShowDebugDefaultNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGOnlineParam_GetShowDebugDefaultNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_GetShowDebugDefaultNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGOnlineParam_GetShowDebugDefaultNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGOnlineParam_GetShowDebugDefaultNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGOnlineParam_GetTickBudgetInMilliseconds_Statics
	{
		struct YDBGOnlineParam_eventGetTickBudgetInMilliseconds_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYDBGOnlineParam_GetTickBudgetInMilliseconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGOnlineParam_eventGetTickBudgetInMilliseconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGOnlineParam_GetTickBudgetInMilliseconds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGOnlineParam_GetTickBudgetInMilliseconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGOnlineParam_GetTickBudgetInMilliseconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGOnlineParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGOnlineParam_GetTickBudgetInMilliseconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGOnlineParam, nullptr, "GetTickBudgetInMilliseconds", nullptr, nullptr, sizeof(YDBGOnlineParam_eventGetTickBudgetInMilliseconds_Parms), Z_Construct_UFunction_UYDBGOnlineParam_GetTickBudgetInMilliseconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_GetTickBudgetInMilliseconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGOnlineParam_GetTickBudgetInMilliseconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_GetTickBudgetInMilliseconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGOnlineParam_GetTickBudgetInMilliseconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGOnlineParam_GetTickBudgetInMilliseconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGOnlineParam_GetWorldType_Statics
	{
		struct YDBGOnlineParam_eventGetWorldType_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYDBGOnlineParam_GetWorldType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGOnlineParam_eventGetWorldType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGOnlineParam_GetWorldType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGOnlineParam_GetWorldType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGOnlineParam_GetWorldType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGOnlineParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGOnlineParam_GetWorldType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGOnlineParam, nullptr, "GetWorldType", nullptr, nullptr, sizeof(YDBGOnlineParam_eventGetWorldType_Parms), Z_Construct_UFunction_UYDBGOnlineParam_GetWorldType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_GetWorldType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGOnlineParam_GetWorldType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_GetWorldType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGOnlineParam_GetWorldType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGOnlineParam_GetWorldType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGOnlineParam_IsEnableAutoLogin_Statics
	{
		struct YDBGOnlineParam_eventIsEnableAutoLogin_Parms
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
	void Z_Construct_UFunction_UYDBGOnlineParam_IsEnableAutoLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGOnlineParam_eventIsEnableAutoLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGOnlineParam_IsEnableAutoLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGOnlineParam_eventIsEnableAutoLogin_Parms), &Z_Construct_UFunction_UYDBGOnlineParam_IsEnableAutoLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGOnlineParam_IsEnableAutoLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGOnlineParam_IsEnableAutoLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGOnlineParam_IsEnableAutoLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGOnlineParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGOnlineParam_IsEnableAutoLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGOnlineParam, nullptr, "IsEnableAutoLogin", nullptr, nullptr, sizeof(YDBGOnlineParam_eventIsEnableAutoLogin_Parms), Z_Construct_UFunction_UYDBGOnlineParam_IsEnableAutoLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_IsEnableAutoLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGOnlineParam_IsEnableAutoLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_IsEnableAutoLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGOnlineParam_IsEnableAutoLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGOnlineParam_IsEnableAutoLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGOnlineParam_IsEnableLog_Statics
	{
		struct YDBGOnlineParam_eventIsEnableLog_Parms
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
	void Z_Construct_UFunction_UYDBGOnlineParam_IsEnableLog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGOnlineParam_eventIsEnableLog_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGOnlineParam_IsEnableLog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGOnlineParam_eventIsEnableLog_Parms), &Z_Construct_UFunction_UYDBGOnlineParam_IsEnableLog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGOnlineParam_IsEnableLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGOnlineParam_IsEnableLog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGOnlineParam_IsEnableLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGOnlineParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGOnlineParam_IsEnableLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGOnlineParam, nullptr, "IsEnableLog", nullptr, nullptr, sizeof(YDBGOnlineParam_eventIsEnableLog_Parms), Z_Construct_UFunction_UYDBGOnlineParam_IsEnableLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_IsEnableLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGOnlineParam_IsEnableLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_IsEnableLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGOnlineParam_IsEnableLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGOnlineParam_IsEnableLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGOnlineParam_IsEnableShowDebugInfo_Statics
	{
		struct YDBGOnlineParam_eventIsEnableShowDebugInfo_Parms
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
	void Z_Construct_UFunction_UYDBGOnlineParam_IsEnableShowDebugInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGOnlineParam_eventIsEnableShowDebugInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGOnlineParam_IsEnableShowDebugInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGOnlineParam_eventIsEnableShowDebugInfo_Parms), &Z_Construct_UFunction_UYDBGOnlineParam_IsEnableShowDebugInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGOnlineParam_IsEnableShowDebugInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGOnlineParam_IsEnableShowDebugInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGOnlineParam_IsEnableShowDebugInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGOnlineParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGOnlineParam_IsEnableShowDebugInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGOnlineParam, nullptr, "IsEnableShowDebugInfo", nullptr, nullptr, sizeof(YDBGOnlineParam_eventIsEnableShowDebugInfo_Parms), Z_Construct_UFunction_UYDBGOnlineParam_IsEnableShowDebugInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_IsEnableShowDebugInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGOnlineParam_IsEnableShowDebugInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_IsEnableShowDebugInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGOnlineParam_IsEnableShowDebugInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGOnlineParam_IsEnableShowDebugInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics
	{
		struct YDBGOnlineParam_eventSetup_Parms
		{
			FString _strSettingFileName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSettingFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSettingFileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics::NewProp__strSettingFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics::NewProp__strSettingFileName = { "_strSettingFileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YDBGOnlineParam_eventSetup_Parms, _strSettingFileName), METADATA_PARAMS(Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics::NewProp__strSettingFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics::NewProp__strSettingFileName_MetaData)) };
	void Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YDBGOnlineParam_eventSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YDBGOnlineParam_eventSetup_Parms), &Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics::NewProp__strSettingFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YDBGOnlineParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYDBGOnlineParam, nullptr, "Setup", nullptr, nullptr, sizeof(YDBGOnlineParam_eventSetup_Parms), Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYDBGOnlineParam_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYDBGOnlineParam_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYDBGOnlineParam_NoRegister()
	{
		return UYDBGOnlineParam::StaticClass();
	}
	struct Z_Construct_UClass_UYDBGOnlineParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYDBGOnlineParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_yDebug,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYDBGOnlineParam_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYDBGOnlineParam_CreateYDBGOnlineParamerter, "CreateYDBGOnlineParamerter" }, // 2766505230
		{ &Z_Construct_UFunction_UYDBGOnlineParam_GetAuthServer, "GetAuthServer" }, // 1502191370
		{ &Z_Construct_UFunction_UYDBGOnlineParam_GetAuthUser, "GetAuthUser" }, // 1083099586
		{ &Z_Construct_UFunction_UYDBGOnlineParam_GetDebugID, "GetDebugID" }, // 2001885778
		{ &Z_Construct_UFunction_UYDBGOnlineParam_GetInstanceID, "GetInstanceID" }, // 513521536
		{ &Z_Construct_UFunction_UYDBGOnlineParam_GetShowDebugDefaultNo, "GetShowDebugDefaultNo" }, // 3189195420
		{ &Z_Construct_UFunction_UYDBGOnlineParam_GetTickBudgetInMilliseconds, "GetTickBudgetInMilliseconds" }, // 3286322680
		{ &Z_Construct_UFunction_UYDBGOnlineParam_GetWorldType, "GetWorldType" }, // 4085646271
		{ &Z_Construct_UFunction_UYDBGOnlineParam_IsEnableAutoLogin, "IsEnableAutoLogin" }, // 1300050731
		{ &Z_Construct_UFunction_UYDBGOnlineParam_IsEnableLog, "IsEnableLog" }, // 2921244805
		{ &Z_Construct_UFunction_UYDBGOnlineParam_IsEnableShowDebugInfo, "IsEnableShowDebugInfo" }, // 1371038624
		{ &Z_Construct_UFunction_UYDBGOnlineParam_Setup, "Setup" }, // 682421733
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYDBGOnlineParam_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YDBGOnlineParam.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YDBGOnlineParam.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYDBGOnlineParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYDBGOnlineParam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYDBGOnlineParam_Statics::ClassParams = {
		&UYDBGOnlineParam::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYDBGOnlineParam_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYDBGOnlineParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYDBGOnlineParam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYDBGOnlineParam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYDBGOnlineParam, 4180780125);
	template<> YDEBUG_API UClass* StaticClass<UYDBGOnlineParam>()
	{
		return UYDBGOnlineParam::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYDBGOnlineParam(Z_Construct_UClass_UYDBGOnlineParam, &UYDBGOnlineParam::StaticClass, TEXT("/Script/yDebug"), TEXT("UYDBGOnlineParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYDBGOnlineParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
