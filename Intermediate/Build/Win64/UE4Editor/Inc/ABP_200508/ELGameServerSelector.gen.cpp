// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGameServerSelector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGameServerSelector() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELGameServerSelector_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGameServerSelector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2ErrorType();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase_NoRegister();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FSSServerEndpoint();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FSSModeServerParam();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2ClientSetupParam();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnPingCheckFinishedDispatcher__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELGameServerSelector::execGetServerId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetServerId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameServerSelector::execGetServerNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetServerNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameServerSelector::execOnYGS2Response)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param_ErrorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_RequestBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnYGS2Response(EYGS2ErrorType(Z_Param_ErrorType),Z_Param_RequestBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameServerSelector::execOverrideSSModeEndpointParam)
	{
		P_GET_TARRAY_REF(FSSServerEndpoint,Z_Param_Out_outServerData);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SubKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OverrideSSModeEndpointParam(Z_Param_Out_outServerData,Z_Param_Key,Z_Param_SubKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameServerSelector::execOverrideSSModeServerEnvData)
	{
		P_GET_STRUCT_REF(FSSModeServerParam,Z_Param_Out_outServerData);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SubKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OverrideSSModeServerEnvData(Z_Param_Out_outServerData,Z_Param_Key,Z_Param_SubKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameServerSelector::execOverrideYGS2ClientSetupParam)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AreaName);
		P_GET_STRUCT_REF(FYGS2ClientSetupParam,Z_Param_Out_OutSetupParam);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SubKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetOnlineVersion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OverrideYGS2ClientSetupParam(Z_Param_Out_AreaName,Z_Param_Out_OutSetupParam,Z_Param_Index,Z_Param_Key,Z_Param_SubKey,Z_Param_TargetOnlineVersion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameServerSelector::execRequestCheckServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestCheckServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELGameServerSelector::execSetupServers)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_SubKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupServers(Z_Param_Data,Z_Param_Key,Z_Param_SubKey);
		P_NATIVE_END;
	}
	void UELGameServerSelector::StaticRegisterNativesUELGameServerSelector()
	{
		UClass* Class = UELGameServerSelector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetServerId", &UELGameServerSelector::execGetServerId },
			{ "GetServerNum", &UELGameServerSelector::execGetServerNum },
			{ "OnYGS2Response", &UELGameServerSelector::execOnYGS2Response },
			{ "OverrideSSModeEndpointParam", &UELGameServerSelector::execOverrideSSModeEndpointParam },
			{ "OverrideSSModeServerEnvData", &UELGameServerSelector::execOverrideSSModeServerEnvData },
			{ "OverrideYGS2ClientSetupParam", &UELGameServerSelector::execOverrideYGS2ClientSetupParam },
			{ "RequestCheckServer", &UELGameServerSelector::execRequestCheckServer },
			{ "SetupServers", &UELGameServerSelector::execSetupServers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELGameServerSelector_GetServerId_Statics
	{
		struct ELGameServerSelector_eventGetServerId_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameServerSelector_GetServerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventGetServerId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameServerSelector_GetServerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_GetServerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_GetServerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameServerSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameServerSelector_GetServerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameServerSelector, nullptr, "GetServerId", nullptr, nullptr, sizeof(ELGameServerSelector_eventGetServerId_Parms), Z_Construct_UFunction_UELGameServerSelector_GetServerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_GetServerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_GetServerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_GetServerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameServerSelector_GetServerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameServerSelector_GetServerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameServerSelector_GetServerNum_Statics
	{
		struct ELGameServerSelector_eventGetServerNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELGameServerSelector_GetServerNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventGetServerNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameServerSelector_GetServerNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_GetServerNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_GetServerNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameServerSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameServerSelector_GetServerNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameServerSelector, nullptr, "GetServerNum", nullptr, nullptr, sizeof(ELGameServerSelector_eventGetServerNum_Parms), Z_Construct_UFunction_UELGameServerSelector_GetServerNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_GetServerNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_GetServerNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_GetServerNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameServerSelector_GetServerNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameServerSelector_GetServerNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameServerSelector_OnYGS2Response_Statics
	{
		struct ELGameServerSelector_eventOnYGS2Response_Parms
		{
			EYGS2ErrorType ErrorType;
			UYGS2RequestBase* RequestBase;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ErrorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequestBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELGameServerSelector_OnYGS2Response_Statics::NewProp_ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELGameServerSelector_OnYGS2Response_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventOnYGS2Response_Parms, ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGameServerSelector_OnYGS2Response_Statics::NewProp_RequestBase = { "RequestBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventOnYGS2Response_Parms, RequestBase), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameServerSelector_OnYGS2Response_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OnYGS2Response_Statics::NewProp_ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OnYGS2Response_Statics::NewProp_ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OnYGS2Response_Statics::NewProp_RequestBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_OnYGS2Response_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameServerSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameServerSelector_OnYGS2Response_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameServerSelector, nullptr, "OnYGS2Response", nullptr, nullptr, sizeof(ELGameServerSelector_eventOnYGS2Response_Parms), Z_Construct_UFunction_UELGameServerSelector_OnYGS2Response_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_OnYGS2Response_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_OnYGS2Response_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_OnYGS2Response_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameServerSelector_OnYGS2Response()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameServerSelector_OnYGS2Response_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics
	{
		struct ELGameServerSelector_eventOverrideSSModeEndpointParam_Parms
		{
			TArray<FSSServerEndpoint> outServerData;
			FString Key;
			FString SubKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outServerData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outServerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_outServerData_Inner = { "outServerData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSServerEndpoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_outServerData = { "outServerData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventOverrideSSModeEndpointParam_Parms, outServerData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventOverrideSSModeEndpointParam_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_SubKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_SubKey = { "SubKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventOverrideSSModeEndpointParam_Parms, SubKey), METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_SubKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_SubKey_MetaData)) };
	void Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELGameServerSelector_eventOverrideSSModeEndpointParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELGameServerSelector_eventOverrideSSModeEndpointParam_Parms), &Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_outServerData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_outServerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_SubKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameServerSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameServerSelector, nullptr, "OverrideSSModeEndpointParam", nullptr, nullptr, sizeof(ELGameServerSelector_eventOverrideSSModeEndpointParam_Parms), Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics
	{
		struct ELGameServerSelector_eventOverrideSSModeServerEnvData_Parms
		{
			FSSModeServerParam outServerData;
			FString Key;
			FString SubKey;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_outServerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::NewProp_outServerData = { "outServerData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventOverrideSSModeServerEnvData_Parms, outServerData), Z_Construct_UScriptStruct_FSSModeServerParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventOverrideSSModeServerEnvData_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::NewProp_SubKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::NewProp_SubKey = { "SubKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventOverrideSSModeServerEnvData_Parms, SubKey), METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::NewProp_SubKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::NewProp_SubKey_MetaData)) };
	void Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELGameServerSelector_eventOverrideSSModeServerEnvData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELGameServerSelector_eventOverrideSSModeServerEnvData_Parms), &Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::NewProp_outServerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::NewProp_SubKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameServerSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameServerSelector, nullptr, "OverrideSSModeServerEnvData", nullptr, nullptr, sizeof(ELGameServerSelector_eventOverrideSSModeServerEnvData_Parms), Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics
	{
		struct ELGameServerSelector_eventOverrideYGS2ClientSetupParam_Parms
		{
			FString AreaName;
			FYGS2ClientSetupParam OutSetupParam;
			int32 Index;
			FString Key;
			FString SubKey;
			FString TargetOnlineVersion;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AreaName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutSetupParam;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetOnlineVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetOnlineVersion;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_AreaName = { "AreaName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventOverrideYGS2ClientSetupParam_Parms, AreaName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_OutSetupParam = { "OutSetupParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventOverrideYGS2ClientSetupParam_Parms, OutSetupParam), Z_Construct_UScriptStruct_FYGS2ClientSetupParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventOverrideYGS2ClientSetupParam_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventOverrideYGS2ClientSetupParam_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_SubKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_SubKey = { "SubKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventOverrideYGS2ClientSetupParam_Parms, SubKey), METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_SubKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_SubKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_TargetOnlineVersion_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_TargetOnlineVersion = { "TargetOnlineVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventOverrideYGS2ClientSetupParam_Parms, TargetOnlineVersion), METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_TargetOnlineVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_TargetOnlineVersion_MetaData)) };
	void Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELGameServerSelector_eventOverrideYGS2ClientSetupParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELGameServerSelector_eventOverrideYGS2ClientSetupParam_Parms), &Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_AreaName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_OutSetupParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_SubKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_TargetOnlineVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameServerSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameServerSelector, nullptr, "OverrideYGS2ClientSetupParam", nullptr, nullptr, sizeof(ELGameServerSelector_eventOverrideYGS2ClientSetupParam_Parms), Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameServerSelector_RequestCheckServer_Statics
	{
		struct ELGameServerSelector_eventRequestCheckServer_Parms
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
	void Z_Construct_UFunction_UELGameServerSelector_RequestCheckServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELGameServerSelector_eventRequestCheckServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELGameServerSelector_RequestCheckServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELGameServerSelector_eventRequestCheckServer_Parms), &Z_Construct_UFunction_UELGameServerSelector_RequestCheckServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameServerSelector_RequestCheckServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_RequestCheckServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_RequestCheckServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameServerSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameServerSelector_RequestCheckServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameServerSelector, nullptr, "RequestCheckServer", nullptr, nullptr, sizeof(ELGameServerSelector_eventRequestCheckServer_Parms), Z_Construct_UFunction_UELGameServerSelector_RequestCheckServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_RequestCheckServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_RequestCheckServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_RequestCheckServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameServerSelector_RequestCheckServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameServerSelector_RequestCheckServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics
	{
		struct ELGameServerSelector_eventSetupServers_Parms
		{
			FString Data;
			FString Key;
			FString SubKey;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventSetupServers_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventSetupServers_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_SubKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_SubKey = { "SubKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGameServerSelector_eventSetupServers_Parms, SubKey), METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_SubKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_SubKey_MetaData)) };
	void Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELGameServerSelector_eventSetupServers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELGameServerSelector_eventSetupServers_Parms), &Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_SubKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGameServerSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGameServerSelector, nullptr, "SetupServers", nullptr, nullptr, sizeof(ELGameServerSelector_eventSetupServers_Parms), Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGameServerSelector_SetupServers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGameServerSelector_SetupServers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELGameServerSelector_NoRegister()
	{
		return UELGameServerSelector::StaticClass();
	}
	struct Z_Construct_UClass_UELGameServerSelector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPingCheckFinishedDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPingCheckFinishedDispatcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELGameServerSelector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELGameServerSelector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELGameServerSelector_GetServerId, "GetServerId" }, // 139612658
		{ &Z_Construct_UFunction_UELGameServerSelector_GetServerNum, "GetServerNum" }, // 2220728431
		{ &Z_Construct_UFunction_UELGameServerSelector_OnYGS2Response, "OnYGS2Response" }, // 919029246
		{ &Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeEndpointParam, "OverrideSSModeEndpointParam" }, // 632206889
		{ &Z_Construct_UFunction_UELGameServerSelector_OverrideSSModeServerEnvData, "OverrideSSModeServerEnvData" }, // 1800491075
		{ &Z_Construct_UFunction_UELGameServerSelector_OverrideYGS2ClientSetupParam, "OverrideYGS2ClientSetupParam" }, // 1893902052
		{ &Z_Construct_UFunction_UELGameServerSelector_RequestCheckServer, "RequestCheckServer" }, // 2485935610
		{ &Z_Construct_UFunction_UELGameServerSelector_SetupServers, "SetupServers" }, // 2431612974
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameServerSelector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGameServerSelector.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGameServerSelector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGameServerSelector_Statics::NewProp_OnPingCheckFinishedDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGameServerSelector" },
		{ "ModuleRelativePath", "Public/ELGameServerSelector.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELGameServerSelector_Statics::NewProp_OnPingCheckFinishedDispatcher = { "OnPingCheckFinishedDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGameServerSelector, OnPingCheckFinishedDispatcher), Z_Construct_UDelegateFunction_ABP_200508_OnPingCheckFinishedDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELGameServerSelector_Statics::NewProp_OnPingCheckFinishedDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerSelector_Statics::NewProp_OnPingCheckFinishedDispatcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELGameServerSelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGameServerSelector_Statics::NewProp_OnPingCheckFinishedDispatcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELGameServerSelector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELGameServerSelector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELGameServerSelector_Statics::ClassParams = {
		&UELGameServerSelector::StaticClass,
		"OnlineServer",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELGameServerSelector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerSelector_Statics::PropPointers),
		0,
		0x009000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UELGameServerSelector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELGameServerSelector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELGameServerSelector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELGameServerSelector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELGameServerSelector, 3917178654);
	template<> ABP_200508_API UClass* StaticClass<UELGameServerSelector>()
	{
		return UELGameServerSelector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELGameServerSelector(Z_Construct_UClass_UELGameServerSelector, &UELGameServerSelector::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELGameServerSelector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELGameServerSelector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
