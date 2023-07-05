// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSAntiCheatClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAntiCheatClient() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAntiCheatClient_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAntiCheatClient();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSIDs();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientMode();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientViolationType();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSAntiCheatClientActionRequiredDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSAntiCheatClientAuthStatusChangedDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSAntiCheatClientPollStatusDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSAntiCheatIntegrityViolatedDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEOSAntiCheatClient::execBeginSession)
	{
		P_GET_ENUM(EEOSAntiCheatClientMode,Z_Param__enClinetMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BeginSession(EEOSAntiCheatClientMode(Z_Param__enClinetMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAntiCheatClient::execClientTickSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EEOSAntiCheatClientViolationType*)Z_Param__Result=P_THIS->ClientTickSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAntiCheatClient::execEndSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EndSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAntiCheatClient::execSetApiVersion)
	{
		P_GET_STRUCT(FEOSAntiCheatAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSAntiCheatClient::SetApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSAntiCheatClient::execSetupInternalCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupInternalCallback();
		P_NATIVE_END;
	}
	void UEOSAntiCheatClient::StaticRegisterNativesUEOSAntiCheatClient()
	{
		UClass* Class = UEOSAntiCheatClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginSession", &UEOSAntiCheatClient::execBeginSession },
			{ "ClientTickSession", &UEOSAntiCheatClient::execClientTickSession },
			{ "EndSession", &UEOSAntiCheatClient::execEndSession },
			{ "SetApiVersion", &UEOSAntiCheatClient::execSetApiVersion },
			{ "SetupInternalCallback", &UEOSAntiCheatClient::execSetupInternalCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession_Statics
	{
		struct EOSAntiCheatClient_eventBeginSession_Parms
		{
			EEOSAntiCheatClientMode _enClinetMode;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enClinetMode_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enClinetMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession_Statics::NewProp__enClinetMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession_Statics::NewProp__enClinetMode = { "_enClinetMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAntiCheatClient_eventBeginSession_Parms, _enClinetMode), Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientMode, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAntiCheatClient_eventBeginSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAntiCheatClient_eventBeginSession_Parms), &Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession_Statics::NewProp__enClinetMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession_Statics::NewProp__enClinetMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAntiCheatClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAntiCheatClient, nullptr, "BeginSession", nullptr, nullptr, sizeof(EOSAntiCheatClient_eventBeginSession_Parms), Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAntiCheatClient_ClientTickSession_Statics
	{
		struct EOSAntiCheatClient_eventClientTickSession_Parms
		{
			EEOSAntiCheatClientViolationType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSAntiCheatClient_ClientTickSession_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSAntiCheatClient_ClientTickSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAntiCheatClient_eventClientTickSession_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EEOSAntiCheatClientViolationType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAntiCheatClient_ClientTickSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatClient_ClientTickSession_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatClient_ClientTickSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAntiCheatClient_ClientTickSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAntiCheatClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAntiCheatClient_ClientTickSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAntiCheatClient, nullptr, "ClientTickSession", nullptr, nullptr, sizeof(EOSAntiCheatClient_eventClientTickSession_Parms), Z_Construct_UFunction_UEOSAntiCheatClient_ClientTickSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatClient_ClientTickSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAntiCheatClient_ClientTickSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatClient_ClientTickSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAntiCheatClient_ClientTickSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAntiCheatClient_ClientTickSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAntiCheatClient_EndSession_Statics
	{
		struct EOSAntiCheatClient_eventEndSession_Parms
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
	void Z_Construct_UFunction_UEOSAntiCheatClient_EndSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAntiCheatClient_eventEndSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAntiCheatClient_EndSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAntiCheatClient_eventEndSession_Parms), &Z_Construct_UFunction_UEOSAntiCheatClient_EndSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAntiCheatClient_EndSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatClient_EndSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAntiCheatClient_EndSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAntiCheatClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAntiCheatClient_EndSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAntiCheatClient, nullptr, "EndSession", nullptr, nullptr, sizeof(EOSAntiCheatClient_eventEndSession_Parms), Z_Construct_UFunction_UEOSAntiCheatClient_EndSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatClient_EndSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAntiCheatClient_EndSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatClient_EndSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAntiCheatClient_EndSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAntiCheatClient_EndSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAntiCheatClient_SetApiVersion_Statics
	{
		struct EOSAntiCheatClient_eventSetApiVersion_Parms
		{
			FEOSAntiCheatAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSAntiCheatClient_SetApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSAntiCheatClient_eventSetApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSAntiCheatAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAntiCheatClient_SetApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatClient_SetApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAntiCheatClient_SetApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAntiCheatClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAntiCheatClient_SetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAntiCheatClient, nullptr, "SetApiVersion", nullptr, nullptr, sizeof(EOSAntiCheatClient_eventSetApiVersion_Parms), Z_Construct_UFunction_UEOSAntiCheatClient_SetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatClient_SetApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAntiCheatClient_SetApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatClient_SetApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAntiCheatClient_SetApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAntiCheatClient_SetApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSAntiCheatClient_SetupInternalCallback_Statics
	{
		struct EOSAntiCheatClient_eventSetupInternalCallback_Parms
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
	void Z_Construct_UFunction_UEOSAntiCheatClient_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSAntiCheatClient_eventSetupInternalCallback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSAntiCheatClient_SetupInternalCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSAntiCheatClient_eventSetupInternalCallback_Parms), &Z_Construct_UFunction_UEOSAntiCheatClient_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSAntiCheatClient_SetupInternalCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSAntiCheatClient_SetupInternalCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSAntiCheatClient_SetupInternalCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSAntiCheatClient.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSAntiCheatClient_SetupInternalCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSAntiCheatClient, nullptr, "SetupInternalCallback", nullptr, nullptr, sizeof(EOSAntiCheatClient_eventSetupInternalCallback_Parms), Z_Construct_UFunction_UEOSAntiCheatClient_SetupInternalCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatClient_SetupInternalCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSAntiCheatClient_SetupInternalCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSAntiCheatClient_SetupInternalCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSAntiCheatClient_SetupInternalCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSAntiCheatClient_SetupInternalCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSAntiCheatClient_NoRegister()
	{
		return UEOSAntiCheatClient::StaticClass();
	}
	struct Z_Construct_UClass_UEOSAntiCheatClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientActionRequiredDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClientActionRequiredDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientAuthStatusChangedDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClientAuthStatusChangedDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientPollStatusDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClientPollStatusDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientViolatedDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClientViolatedDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSAntiCheatClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSIDs,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSAntiCheatClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSAntiCheatClient_BeginSession, "BeginSession" }, // 2712684205
		{ &Z_Construct_UFunction_UEOSAntiCheatClient_ClientTickSession, "ClientTickSession" }, // 2565217360
		{ &Z_Construct_UFunction_UEOSAntiCheatClient_EndSession, "EndSession" }, // 1573836345
		{ &Z_Construct_UFunction_UEOSAntiCheatClient_SetApiVersion, "SetApiVersion" }, // 335525899
		{ &Z_Construct_UFunction_UEOSAntiCheatClient_SetupInternalCallback, "SetupInternalCallback" }, // 107936018
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAntiCheatClient_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSAntiCheatClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatClient.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientActionRequiredDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAntiCheatClient" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatClient.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientActionRequiredDispatcher = { "ClientActionRequiredDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAntiCheatClient, ClientActionRequiredDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSAntiCheatClientActionRequiredDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientActionRequiredDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientActionRequiredDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientAuthStatusChangedDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAntiCheatClient" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatClient.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientAuthStatusChangedDispatcher = { "ClientAuthStatusChangedDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAntiCheatClient, ClientAuthStatusChangedDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSAntiCheatClientAuthStatusChangedDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientAuthStatusChangedDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientAuthStatusChangedDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientPollStatusDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAntiCheatClient" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatClient.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientPollStatusDispatcher = { "ClientPollStatusDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAntiCheatClient, ClientPollStatusDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSAntiCheatClientPollStatusDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientPollStatusDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientPollStatusDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientViolatedDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAntiCheatClient" },
		{ "ModuleRelativePath", "Public/EOSAntiCheatClient.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientViolatedDispatcher = { "ClientViolatedDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSAntiCheatClient, ClientViolatedDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSAntiCheatIntegrityViolatedDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientViolatedDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientViolatedDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSAntiCheatClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientActionRequiredDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientAuthStatusChangedDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientPollStatusDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSAntiCheatClient_Statics::NewProp_ClientViolatedDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSAntiCheatClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSAntiCheatClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSAntiCheatClient_Statics::ClassParams = {
		&UEOSAntiCheatClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSAntiCheatClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAntiCheatClient_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSAntiCheatClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSAntiCheatClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSAntiCheatClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSAntiCheatClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSAntiCheatClient, 2181720615);
	template<> YEOSSDK_API UClass* StaticClass<UEOSAntiCheatClient>()
	{
		return UEOSAntiCheatClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSAntiCheatClient(Z_Construct_UClass_UEOSAntiCheatClient, &UEOSAntiCheatClient::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSAntiCheatClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSAntiCheatClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
