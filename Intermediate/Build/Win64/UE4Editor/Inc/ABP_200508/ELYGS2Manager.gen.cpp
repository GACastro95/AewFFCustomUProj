// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELYGS2Manager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELYGS2Manager() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELYGS2Manager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELYGS2Manager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELApplicationStatus();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2ClientCacheParam();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FSSModeServerParam();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FSSServerEndpoint();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetworkStatus();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetworkType();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2ErrorType();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELNetworkObserverBase_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELYGS2RequestFunction();
	ABP_200508_API UClass* Z_Construct_UClass_UELGameServerParam_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGameServerSelector_NoRegister();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2ClientSetupParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELYGS2PingCache();
// End Cross Module References
	DEFINE_FUNCTION(UELYGS2Manager::execApplicationStatusChanged)
	{
		P_GET_ENUM(EELApplicationStatus,Z_Param_AppStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplicationStatusChanged(EELApplicationStatus(Z_Param_AppStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execFindNearestServerPing)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Ping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindNearestServerPing(Z_Param_Out_Name,Z_Param_Out_Ping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execGetBaseURLByArea)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Area);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_root_url);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_api_ver);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBaseURLByArea(Z_Param_Area,Z_Param_Out_root_url,Z_Param_Out_api_ver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execGetClientCacheParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FYGS2ClientCacheParam*)Z_Param__Result=P_THIS->GetClientCacheParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execGetPingMs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPingMs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execGetSSModeServerEnvData)
	{
		P_GET_STRUCT_REF(FSSModeServerParam,Z_Param_Out_SSServerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSSModeServerEnvData(Z_Param_Out_SSServerData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execGetSSServerEndpointListData)
	{
		P_GET_TARRAY_REF(FSSServerEndpoint,Z_Param_Out_SSServerDatas);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSSServerEndpointListData(Z_Param_Out_SSServerDatas);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execGetYGS2EnvName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetYGS2EnvName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execGetYGS2Permission)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetYGS2Permission();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execGetYGS2ServerID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetYGS2ServerID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execGetYGS2ServerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetYGS2ServerName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execGetYGS2ServerVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetYGS2ServerVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execHasConnectableServerParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasConnectableServerParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execIsAuthFailed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAuthFailed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execIsBanned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBanned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execIsEndAuth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEndAuth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execIsMaintenance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMaintenance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execIsNetworkError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNetworkError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execNetworkStatusChanged)
	{
		P_GET_ENUM(EELNetworkStatus,Z_Param_NetworkStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetworkStatusChanged(EELNetworkStatus(Z_Param_NetworkStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execNetworkTypeChanged)
	{
		P_GET_ENUM(EELNetworkType,Z_Param_NetworkType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetworkTypeChanged(EELNetworkType(Z_Param_NetworkType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execOnYGS2Response)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param_ErrorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnYGS2Response(EYGS2ErrorType(Z_Param_ErrorType),Z_Param_Request);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execRequestAuth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestAuth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execRequestCancelForDebug)
	{
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_Request);
		P_GET_ENUM(EYGS2ErrorType,Z_Param_ErrorType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestCancelForDebug(Z_Param_Request,EYGS2ErrorType(Z_Param_ErrorType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execRequestGetInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestGetInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execRequestPingToAllServers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestPingToAllServers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execRequestSetDisplayNameForDebug)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSetDisplayNameForDebug();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execSetDisplayNameForDebug)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayNameForDebug);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayNameForDebug(Z_Param_DisplayNameForDebug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execSetNetworkObserver)
	{
		P_GET_OBJECT(UELNetworkObserverBase,Z_Param__pNetworkObserver);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNetworkObserver(Z_Param__pNetworkObserver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELYGS2Manager::execSetServerListData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetServerListData(Z_Param_Data);
		P_NATIVE_END;
	}
	void UELYGS2Manager::StaticRegisterNativesUELYGS2Manager()
	{
		UClass* Class = UELYGS2Manager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplicationStatusChanged", &UELYGS2Manager::execApplicationStatusChanged },
			{ "FindNearestServerPing", &UELYGS2Manager::execFindNearestServerPing },
			{ "GetBaseURLByArea", &UELYGS2Manager::execGetBaseURLByArea },
			{ "GetClientCacheParam", &UELYGS2Manager::execGetClientCacheParam },
			{ "GetPingMs", &UELYGS2Manager::execGetPingMs },
			{ "GetSSModeServerEnvData", &UELYGS2Manager::execGetSSModeServerEnvData },
			{ "GetSSServerEndpointListData", &UELYGS2Manager::execGetSSServerEndpointListData },
			{ "GetYGS2EnvName", &UELYGS2Manager::execGetYGS2EnvName },
			{ "GetYGS2Permission", &UELYGS2Manager::execGetYGS2Permission },
			{ "GetYGS2ServerID", &UELYGS2Manager::execGetYGS2ServerID },
			{ "GetYGS2ServerName", &UELYGS2Manager::execGetYGS2ServerName },
			{ "GetYGS2ServerVersion", &UELYGS2Manager::execGetYGS2ServerVersion },
			{ "HasConnectableServerParam", &UELYGS2Manager::execHasConnectableServerParam },
			{ "IsAuthFailed", &UELYGS2Manager::execIsAuthFailed },
			{ "IsBanned", &UELYGS2Manager::execIsBanned },
			{ "IsEndAuth", &UELYGS2Manager::execIsEndAuth },
			{ "IsMaintenance", &UELYGS2Manager::execIsMaintenance },
			{ "IsNetworkError", &UELYGS2Manager::execIsNetworkError },
			{ "NetworkStatusChanged", &UELYGS2Manager::execNetworkStatusChanged },
			{ "NetworkTypeChanged", &UELYGS2Manager::execNetworkTypeChanged },
			{ "OnYGS2Response", &UELYGS2Manager::execOnYGS2Response },
			{ "RequestAuth", &UELYGS2Manager::execRequestAuth },
			{ "RequestCancelForDebug", &UELYGS2Manager::execRequestCancelForDebug },
			{ "RequestGetInfo", &UELYGS2Manager::execRequestGetInfo },
			{ "RequestPingToAllServers", &UELYGS2Manager::execRequestPingToAllServers },
			{ "RequestSetDisplayNameForDebug", &UELYGS2Manager::execRequestSetDisplayNameForDebug },
			{ "SetDisplayNameForDebug", &UELYGS2Manager::execSetDisplayNameForDebug },
			{ "SetNetworkObserver", &UELYGS2Manager::execSetNetworkObserver },
			{ "SetServerListData", &UELYGS2Manager::execSetServerListData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELYGS2Manager_ApplicationStatusChanged_Statics
	{
		struct ELYGS2Manager_eventApplicationStatusChanged_Parms
		{
			EELApplicationStatus AppStatus;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AppStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AppStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELYGS2Manager_ApplicationStatusChanged_Statics::NewProp_AppStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELYGS2Manager_ApplicationStatusChanged_Statics::NewProp_AppStatus = { "AppStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventApplicationStatusChanged_Parms, AppStatus), Z_Construct_UEnum_ABP_200508_EELApplicationStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_ApplicationStatusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_ApplicationStatusChanged_Statics::NewProp_AppStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_ApplicationStatusChanged_Statics::NewProp_AppStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_ApplicationStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_ApplicationStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "ApplicationStatusChanged", nullptr, nullptr, sizeof(ELYGS2Manager_eventApplicationStatusChanged_Parms), Z_Construct_UFunction_UELYGS2Manager_ApplicationStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_ApplicationStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_ApplicationStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_ApplicationStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_ApplicationStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_ApplicationStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing_Statics
	{
		struct ELYGS2Manager_eventFindNearestServerPing_Parms
		{
			FString Name;
			float Ping;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ping;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventFindNearestServerPing_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing_Statics::NewProp_Ping = { "Ping", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventFindNearestServerPing_Parms, Ping), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELYGS2Manager_eventFindNearestServerPing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELYGS2Manager_eventFindNearestServerPing_Parms), &Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing_Statics::NewProp_Ping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "FindNearestServerPing", nullptr, nullptr, sizeof(ELYGS2Manager_eventFindNearestServerPing_Parms), Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics
	{
		struct ELYGS2Manager_eventGetBaseURLByArea_Parms
		{
			FString Area;
			FString root_url;
			int32 api_ver;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Area_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Area;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_root_url;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_api_ver;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::NewProp_Area_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventGetBaseURLByArea_Parms, Area), METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::NewProp_Area_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::NewProp_Area_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::NewProp_root_url = { "root_url", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventGetBaseURLByArea_Parms, root_url), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::NewProp_api_ver = { "api_ver", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventGetBaseURLByArea_Parms, api_ver), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELYGS2Manager_eventGetBaseURLByArea_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELYGS2Manager_eventGetBaseURLByArea_Parms), &Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::NewProp_Area,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::NewProp_root_url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::NewProp_api_ver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "GetBaseURLByArea", nullptr, nullptr, sizeof(ELYGS2Manager_eventGetBaseURLByArea_Parms), Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_GetClientCacheParam_Statics
	{
		struct ELYGS2Manager_eventGetClientCacheParam_Parms
		{
			FYGS2ClientCacheParam ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELYGS2Manager_GetClientCacheParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventGetClientCacheParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FYGS2ClientCacheParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_GetClientCacheParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_GetClientCacheParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_GetClientCacheParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_GetClientCacheParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "GetClientCacheParam", nullptr, nullptr, sizeof(ELYGS2Manager_eventGetClientCacheParam_Parms), Z_Construct_UFunction_UELYGS2Manager_GetClientCacheParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetClientCacheParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_GetClientCacheParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetClientCacheParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_GetClientCacheParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_GetClientCacheParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_GetPingMs_Statics
	{
		struct ELYGS2Manager_eventGetPingMs_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELYGS2Manager_GetPingMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventGetPingMs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_GetPingMs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_GetPingMs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_GetPingMs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_GetPingMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "GetPingMs", nullptr, nullptr, sizeof(ELYGS2Manager_eventGetPingMs_Parms), Z_Construct_UFunction_UELYGS2Manager_GetPingMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetPingMs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_GetPingMs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetPingMs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_GetPingMs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_GetPingMs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_GetSSModeServerEnvData_Statics
	{
		struct ELYGS2Manager_eventGetSSModeServerEnvData_Parms
		{
			FSSModeServerParam SSServerData;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SSServerData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELYGS2Manager_GetSSModeServerEnvData_Statics::NewProp_SSServerData = { "SSServerData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventGetSSModeServerEnvData_Parms, SSServerData), Z_Construct_UScriptStruct_FSSModeServerParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELYGS2Manager_GetSSModeServerEnvData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELYGS2Manager_eventGetSSModeServerEnvData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELYGS2Manager_GetSSModeServerEnvData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELYGS2Manager_eventGetSSModeServerEnvData_Parms), &Z_Construct_UFunction_UELYGS2Manager_GetSSModeServerEnvData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_GetSSModeServerEnvData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_GetSSModeServerEnvData_Statics::NewProp_SSServerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_GetSSModeServerEnvData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_GetSSModeServerEnvData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_GetSSModeServerEnvData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "GetSSModeServerEnvData", nullptr, nullptr, sizeof(ELYGS2Manager_eventGetSSModeServerEnvData_Parms), Z_Construct_UFunction_UELYGS2Manager_GetSSModeServerEnvData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetSSModeServerEnvData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_GetSSModeServerEnvData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetSSModeServerEnvData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_GetSSModeServerEnvData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_GetSSModeServerEnvData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData_Statics
	{
		struct ELYGS2Manager_eventGetSSServerEndpointListData_Parms
		{
			TArray<FSSServerEndpoint> SSServerDatas;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SSServerDatas_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SSServerDatas;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData_Statics::NewProp_SSServerDatas_Inner = { "SSServerDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSSServerEndpoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData_Statics::NewProp_SSServerDatas = { "SSServerDatas", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventGetSSServerEndpointListData_Parms, SSServerDatas), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELYGS2Manager_eventGetSSServerEndpointListData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELYGS2Manager_eventGetSSServerEndpointListData_Parms), &Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData_Statics::NewProp_SSServerDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData_Statics::NewProp_SSServerDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "GetSSServerEndpointListData", nullptr, nullptr, sizeof(ELYGS2Manager_eventGetSSServerEndpointListData_Parms), Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_GetYGS2EnvName_Statics
	{
		struct ELYGS2Manager_eventGetYGS2EnvName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELYGS2Manager_GetYGS2EnvName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventGetYGS2EnvName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_GetYGS2EnvName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_GetYGS2EnvName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_GetYGS2EnvName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_GetYGS2EnvName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "GetYGS2EnvName", nullptr, nullptr, sizeof(ELYGS2Manager_eventGetYGS2EnvName_Parms), Z_Construct_UFunction_UELYGS2Manager_GetYGS2EnvName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetYGS2EnvName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_GetYGS2EnvName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetYGS2EnvName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_GetYGS2EnvName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_GetYGS2EnvName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_GetYGS2Permission_Statics
	{
		struct ELYGS2Manager_eventGetYGS2Permission_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELYGS2Manager_GetYGS2Permission_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventGetYGS2Permission_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_GetYGS2Permission_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_GetYGS2Permission_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_GetYGS2Permission_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_GetYGS2Permission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "GetYGS2Permission", nullptr, nullptr, sizeof(ELYGS2Manager_eventGetYGS2Permission_Parms), Z_Construct_UFunction_UELYGS2Manager_GetYGS2Permission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetYGS2Permission_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_GetYGS2Permission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetYGS2Permission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_GetYGS2Permission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_GetYGS2Permission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerID_Statics
	{
		struct ELYGS2Manager_eventGetYGS2ServerID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventGetYGS2ServerID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "GetYGS2ServerID", nullptr, nullptr, sizeof(ELYGS2Manager_eventGetYGS2ServerID_Parms), Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerName_Statics
	{
		struct ELYGS2Manager_eventGetYGS2ServerName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventGetYGS2ServerName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "GetYGS2ServerName", nullptr, nullptr, sizeof(ELYGS2Manager_eventGetYGS2ServerName_Parms), Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerVersion_Statics
	{
		struct ELYGS2Manager_eventGetYGS2ServerVersion_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventGetYGS2ServerVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "GetYGS2ServerVersion", nullptr, nullptr, sizeof(ELYGS2Manager_eventGetYGS2ServerVersion_Parms), Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_HasConnectableServerParam_Statics
	{
		struct ELYGS2Manager_eventHasConnectableServerParam_Parms
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
	void Z_Construct_UFunction_UELYGS2Manager_HasConnectableServerParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELYGS2Manager_eventHasConnectableServerParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELYGS2Manager_HasConnectableServerParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELYGS2Manager_eventHasConnectableServerParam_Parms), &Z_Construct_UFunction_UELYGS2Manager_HasConnectableServerParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_HasConnectableServerParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_HasConnectableServerParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_HasConnectableServerParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_HasConnectableServerParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "HasConnectableServerParam", nullptr, nullptr, sizeof(ELYGS2Manager_eventHasConnectableServerParam_Parms), Z_Construct_UFunction_UELYGS2Manager_HasConnectableServerParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_HasConnectableServerParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_HasConnectableServerParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_HasConnectableServerParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_HasConnectableServerParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_HasConnectableServerParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_IsAuthFailed_Statics
	{
		struct ELYGS2Manager_eventIsAuthFailed_Parms
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
	void Z_Construct_UFunction_UELYGS2Manager_IsAuthFailed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELYGS2Manager_eventIsAuthFailed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELYGS2Manager_IsAuthFailed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELYGS2Manager_eventIsAuthFailed_Parms), &Z_Construct_UFunction_UELYGS2Manager_IsAuthFailed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_IsAuthFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_IsAuthFailed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_IsAuthFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_IsAuthFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "IsAuthFailed", nullptr, nullptr, sizeof(ELYGS2Manager_eventIsAuthFailed_Parms), Z_Construct_UFunction_UELYGS2Manager_IsAuthFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_IsAuthFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_IsAuthFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_IsAuthFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_IsAuthFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_IsAuthFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_IsBanned_Statics
	{
		struct ELYGS2Manager_eventIsBanned_Parms
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
	void Z_Construct_UFunction_UELYGS2Manager_IsBanned_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELYGS2Manager_eventIsBanned_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELYGS2Manager_IsBanned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELYGS2Manager_eventIsBanned_Parms), &Z_Construct_UFunction_UELYGS2Manager_IsBanned_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_IsBanned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_IsBanned_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_IsBanned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_IsBanned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "IsBanned", nullptr, nullptr, sizeof(ELYGS2Manager_eventIsBanned_Parms), Z_Construct_UFunction_UELYGS2Manager_IsBanned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_IsBanned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_IsBanned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_IsBanned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_IsBanned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_IsBanned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_IsEndAuth_Statics
	{
		struct ELYGS2Manager_eventIsEndAuth_Parms
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
	void Z_Construct_UFunction_UELYGS2Manager_IsEndAuth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELYGS2Manager_eventIsEndAuth_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELYGS2Manager_IsEndAuth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELYGS2Manager_eventIsEndAuth_Parms), &Z_Construct_UFunction_UELYGS2Manager_IsEndAuth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_IsEndAuth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_IsEndAuth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_IsEndAuth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_IsEndAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "IsEndAuth", nullptr, nullptr, sizeof(ELYGS2Manager_eventIsEndAuth_Parms), Z_Construct_UFunction_UELYGS2Manager_IsEndAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_IsEndAuth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_IsEndAuth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_IsEndAuth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_IsEndAuth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_IsEndAuth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_IsMaintenance_Statics
	{
		struct ELYGS2Manager_eventIsMaintenance_Parms
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
	void Z_Construct_UFunction_UELYGS2Manager_IsMaintenance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELYGS2Manager_eventIsMaintenance_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELYGS2Manager_IsMaintenance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELYGS2Manager_eventIsMaintenance_Parms), &Z_Construct_UFunction_UELYGS2Manager_IsMaintenance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_IsMaintenance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_IsMaintenance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_IsMaintenance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_IsMaintenance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "IsMaintenance", nullptr, nullptr, sizeof(ELYGS2Manager_eventIsMaintenance_Parms), Z_Construct_UFunction_UELYGS2Manager_IsMaintenance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_IsMaintenance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_IsMaintenance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_IsMaintenance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_IsMaintenance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_IsMaintenance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_IsNetworkError_Statics
	{
		struct ELYGS2Manager_eventIsNetworkError_Parms
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
	void Z_Construct_UFunction_UELYGS2Manager_IsNetworkError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELYGS2Manager_eventIsNetworkError_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELYGS2Manager_IsNetworkError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELYGS2Manager_eventIsNetworkError_Parms), &Z_Construct_UFunction_UELYGS2Manager_IsNetworkError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_IsNetworkError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_IsNetworkError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_IsNetworkError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_IsNetworkError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "IsNetworkError", nullptr, nullptr, sizeof(ELYGS2Manager_eventIsNetworkError_Parms), Z_Construct_UFunction_UELYGS2Manager_IsNetworkError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_IsNetworkError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_IsNetworkError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_IsNetworkError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_IsNetworkError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_IsNetworkError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_NetworkStatusChanged_Statics
	{
		struct ELYGS2Manager_eventNetworkStatusChanged_Parms
		{
			EELNetworkStatus NetworkStatus;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NetworkStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NetworkStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELYGS2Manager_NetworkStatusChanged_Statics::NewProp_NetworkStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELYGS2Manager_NetworkStatusChanged_Statics::NewProp_NetworkStatus = { "NetworkStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventNetworkStatusChanged_Parms, NetworkStatus), Z_Construct_UEnum_ABP_200508_EELNetworkStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_NetworkStatusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_NetworkStatusChanged_Statics::NewProp_NetworkStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_NetworkStatusChanged_Statics::NewProp_NetworkStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_NetworkStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_NetworkStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "NetworkStatusChanged", nullptr, nullptr, sizeof(ELYGS2Manager_eventNetworkStatusChanged_Parms), Z_Construct_UFunction_UELYGS2Manager_NetworkStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_NetworkStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_NetworkStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_NetworkStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_NetworkStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_NetworkStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_NetworkTypeChanged_Statics
	{
		struct ELYGS2Manager_eventNetworkTypeChanged_Parms
		{
			EELNetworkType NetworkType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NetworkType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NetworkType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELYGS2Manager_NetworkTypeChanged_Statics::NewProp_NetworkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELYGS2Manager_NetworkTypeChanged_Statics::NewProp_NetworkType = { "NetworkType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventNetworkTypeChanged_Parms, NetworkType), Z_Construct_UEnum_ABP_200508_EELNetworkType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_NetworkTypeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_NetworkTypeChanged_Statics::NewProp_NetworkType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_NetworkTypeChanged_Statics::NewProp_NetworkType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_NetworkTypeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_NetworkTypeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "NetworkTypeChanged", nullptr, nullptr, sizeof(ELYGS2Manager_eventNetworkTypeChanged_Parms), Z_Construct_UFunction_UELYGS2Manager_NetworkTypeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_NetworkTypeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_NetworkTypeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_NetworkTypeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_NetworkTypeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_NetworkTypeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_OnYGS2Response_Statics
	{
		struct ELYGS2Manager_eventOnYGS2Response_Parms
		{
			EYGS2ErrorType ErrorType;
			UYGS2RequestBase* Request;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ErrorType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELYGS2Manager_OnYGS2Response_Statics::NewProp_ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELYGS2Manager_OnYGS2Response_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventOnYGS2Response_Parms, ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELYGS2Manager_OnYGS2Response_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventOnYGS2Response_Parms, Request), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_OnYGS2Response_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_OnYGS2Response_Statics::NewProp_ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_OnYGS2Response_Statics::NewProp_ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_OnYGS2Response_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_OnYGS2Response_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_OnYGS2Response_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "OnYGS2Response", nullptr, nullptr, sizeof(ELYGS2Manager_eventOnYGS2Response_Parms), Z_Construct_UFunction_UELYGS2Manager_OnYGS2Response_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_OnYGS2Response_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_OnYGS2Response_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_OnYGS2Response_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_OnYGS2Response()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_OnYGS2Response_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_RequestAuth_Statics
	{
		struct ELYGS2Manager_eventRequestAuth_Parms
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
	void Z_Construct_UFunction_UELYGS2Manager_RequestAuth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELYGS2Manager_eventRequestAuth_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELYGS2Manager_RequestAuth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELYGS2Manager_eventRequestAuth_Parms), &Z_Construct_UFunction_UELYGS2Manager_RequestAuth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_RequestAuth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_RequestAuth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_RequestAuth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_RequestAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "RequestAuth", nullptr, nullptr, sizeof(ELYGS2Manager_eventRequestAuth_Parms), Z_Construct_UFunction_UELYGS2Manager_RequestAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_RequestAuth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_RequestAuth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_RequestAuth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_RequestAuth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_RequestAuth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_RequestCancelForDebug_Statics
	{
		struct ELYGS2Manager_eventRequestCancelForDebug_Parms
		{
			UYGS2RequestBase* Request;
			EYGS2ErrorType ErrorType;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ErrorType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ErrorType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELYGS2Manager_RequestCancelForDebug_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventRequestCancelForDebug_Parms, Request), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELYGS2Manager_RequestCancelForDebug_Statics::NewProp_ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELYGS2Manager_RequestCancelForDebug_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventRequestCancelForDebug_Parms, ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_RequestCancelForDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_RequestCancelForDebug_Statics::NewProp_Request,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_RequestCancelForDebug_Statics::NewProp_ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_RequestCancelForDebug_Statics::NewProp_ErrorType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_RequestCancelForDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_RequestCancelForDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "RequestCancelForDebug", nullptr, nullptr, sizeof(ELYGS2Manager_eventRequestCancelForDebug_Parms), Z_Construct_UFunction_UELYGS2Manager_RequestCancelForDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_RequestCancelForDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_RequestCancelForDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_RequestCancelForDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_RequestCancelForDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_RequestCancelForDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_RequestGetInfo_Statics
	{
		struct ELYGS2Manager_eventRequestGetInfo_Parms
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
	void Z_Construct_UFunction_UELYGS2Manager_RequestGetInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELYGS2Manager_eventRequestGetInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELYGS2Manager_RequestGetInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELYGS2Manager_eventRequestGetInfo_Parms), &Z_Construct_UFunction_UELYGS2Manager_RequestGetInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_RequestGetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_RequestGetInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_RequestGetInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_RequestGetInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "RequestGetInfo", nullptr, nullptr, sizeof(ELYGS2Manager_eventRequestGetInfo_Parms), Z_Construct_UFunction_UELYGS2Manager_RequestGetInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_RequestGetInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_RequestGetInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_RequestGetInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_RequestGetInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_RequestGetInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_RequestPingToAllServers_Statics
	{
		struct ELYGS2Manager_eventRequestPingToAllServers_Parms
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
	void Z_Construct_UFunction_UELYGS2Manager_RequestPingToAllServers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELYGS2Manager_eventRequestPingToAllServers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELYGS2Manager_RequestPingToAllServers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELYGS2Manager_eventRequestPingToAllServers_Parms), &Z_Construct_UFunction_UELYGS2Manager_RequestPingToAllServers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_RequestPingToAllServers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_RequestPingToAllServers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_RequestPingToAllServers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_RequestPingToAllServers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "RequestPingToAllServers", nullptr, nullptr, sizeof(ELYGS2Manager_eventRequestPingToAllServers_Parms), Z_Construct_UFunction_UELYGS2Manager_RequestPingToAllServers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_RequestPingToAllServers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_RequestPingToAllServers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_RequestPingToAllServers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_RequestPingToAllServers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_RequestPingToAllServers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_RequestSetDisplayNameForDebug_Statics
	{
		struct ELYGS2Manager_eventRequestSetDisplayNameForDebug_Parms
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
	void Z_Construct_UFunction_UELYGS2Manager_RequestSetDisplayNameForDebug_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELYGS2Manager_eventRequestSetDisplayNameForDebug_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELYGS2Manager_RequestSetDisplayNameForDebug_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELYGS2Manager_eventRequestSetDisplayNameForDebug_Parms), &Z_Construct_UFunction_UELYGS2Manager_RequestSetDisplayNameForDebug_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_RequestSetDisplayNameForDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_RequestSetDisplayNameForDebug_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_RequestSetDisplayNameForDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_RequestSetDisplayNameForDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "RequestSetDisplayNameForDebug", nullptr, nullptr, sizeof(ELYGS2Manager_eventRequestSetDisplayNameForDebug_Parms), Z_Construct_UFunction_UELYGS2Manager_RequestSetDisplayNameForDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_RequestSetDisplayNameForDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_RequestSetDisplayNameForDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_RequestSetDisplayNameForDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_RequestSetDisplayNameForDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_RequestSetDisplayNameForDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_SetDisplayNameForDebug_Statics
	{
		struct ELYGS2Manager_eventSetDisplayNameForDebug_Parms
		{
			FString DisplayNameForDebug;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayNameForDebug_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayNameForDebug;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_SetDisplayNameForDebug_Statics::NewProp_DisplayNameForDebug_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELYGS2Manager_SetDisplayNameForDebug_Statics::NewProp_DisplayNameForDebug = { "DisplayNameForDebug", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventSetDisplayNameForDebug_Parms, DisplayNameForDebug), METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_SetDisplayNameForDebug_Statics::NewProp_DisplayNameForDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_SetDisplayNameForDebug_Statics::NewProp_DisplayNameForDebug_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_SetDisplayNameForDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_SetDisplayNameForDebug_Statics::NewProp_DisplayNameForDebug,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_SetDisplayNameForDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_SetDisplayNameForDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "SetDisplayNameForDebug", nullptr, nullptr, sizeof(ELYGS2Manager_eventSetDisplayNameForDebug_Parms), Z_Construct_UFunction_UELYGS2Manager_SetDisplayNameForDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_SetDisplayNameForDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_SetDisplayNameForDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_SetDisplayNameForDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_SetDisplayNameForDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_SetDisplayNameForDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_SetNetworkObserver_Statics
	{
		struct ELYGS2Manager_eventSetNetworkObserver_Parms
		{
			UELNetworkObserverBase* _pNetworkObserver;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pNetworkObserver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELYGS2Manager_SetNetworkObserver_Statics::NewProp__pNetworkObserver = { "_pNetworkObserver", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventSetNetworkObserver_Parms, _pNetworkObserver), Z_Construct_UClass_UELNetworkObserverBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_SetNetworkObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_SetNetworkObserver_Statics::NewProp__pNetworkObserver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_SetNetworkObserver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_SetNetworkObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "SetNetworkObserver", nullptr, nullptr, sizeof(ELYGS2Manager_eventSetNetworkObserver_Parms), Z_Construct_UFunction_UELYGS2Manager_SetNetworkObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_SetNetworkObserver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_SetNetworkObserver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_SetNetworkObserver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_SetNetworkObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_SetNetworkObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics
	{
		struct ELYGS2Manager_eventSetServerListData_Parms
		{
			FString Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELYGS2Manager_eventSetServerListData_Parms, Data), METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics::NewProp_Data_MetaData)) };
	void Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELYGS2Manager_eventSetServerListData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELYGS2Manager_eventSetServerListData_Parms), &Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELYGS2Manager, nullptr, "SetServerListData", nullptr, nullptr, sizeof(ELYGS2Manager_eventSetServerListData_Parms), Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELYGS2Manager_SetServerListData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELYGS2Manager_SetServerListData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELYGS2Manager_NoRegister()
	{
		return UELYGS2Manager::StaticClass();
	}
	struct Z_Construct_UClass_UELYGS2Manager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YGS2Requests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YGS2Requests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_YGS2Requests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pServerParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pServerParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pServerSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pServerSelector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClientSetupParams_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ClientSetupParams_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientSetupParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ClientSetupParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetRegionWithPing_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentTargetRegionWithPing;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PingCaches_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PingCaches_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PingCaches_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PingCaches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pNetworkObserver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pNetworkObserver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELYGS2Manager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELYGS2Manager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELYGS2Manager_ApplicationStatusChanged, "ApplicationStatusChanged" }, // 818560022
		{ &Z_Construct_UFunction_UELYGS2Manager_FindNearestServerPing, "FindNearestServerPing" }, // 78636810
		{ &Z_Construct_UFunction_UELYGS2Manager_GetBaseURLByArea, "GetBaseURLByArea" }, // 706173819
		{ &Z_Construct_UFunction_UELYGS2Manager_GetClientCacheParam, "GetClientCacheParam" }, // 241223004
		{ &Z_Construct_UFunction_UELYGS2Manager_GetPingMs, "GetPingMs" }, // 3287841444
		{ &Z_Construct_UFunction_UELYGS2Manager_GetSSModeServerEnvData, "GetSSModeServerEnvData" }, // 3235514806
		{ &Z_Construct_UFunction_UELYGS2Manager_GetSSServerEndpointListData, "GetSSServerEndpointListData" }, // 2424876595
		{ &Z_Construct_UFunction_UELYGS2Manager_GetYGS2EnvName, "GetYGS2EnvName" }, // 2076724109
		{ &Z_Construct_UFunction_UELYGS2Manager_GetYGS2Permission, "GetYGS2Permission" }, // 838375339
		{ &Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerID, "GetYGS2ServerID" }, // 3810377641
		{ &Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerName, "GetYGS2ServerName" }, // 1997350193
		{ &Z_Construct_UFunction_UELYGS2Manager_GetYGS2ServerVersion, "GetYGS2ServerVersion" }, // 2277554506
		{ &Z_Construct_UFunction_UELYGS2Manager_HasConnectableServerParam, "HasConnectableServerParam" }, // 187717912
		{ &Z_Construct_UFunction_UELYGS2Manager_IsAuthFailed, "IsAuthFailed" }, // 3099202688
		{ &Z_Construct_UFunction_UELYGS2Manager_IsBanned, "IsBanned" }, // 2380404743
		{ &Z_Construct_UFunction_UELYGS2Manager_IsEndAuth, "IsEndAuth" }, // 2689431330
		{ &Z_Construct_UFunction_UELYGS2Manager_IsMaintenance, "IsMaintenance" }, // 2849088839
		{ &Z_Construct_UFunction_UELYGS2Manager_IsNetworkError, "IsNetworkError" }, // 4200657769
		{ &Z_Construct_UFunction_UELYGS2Manager_NetworkStatusChanged, "NetworkStatusChanged" }, // 3742984955
		{ &Z_Construct_UFunction_UELYGS2Manager_NetworkTypeChanged, "NetworkTypeChanged" }, // 1219678689
		{ &Z_Construct_UFunction_UELYGS2Manager_OnYGS2Response, "OnYGS2Response" }, // 760991641
		{ &Z_Construct_UFunction_UELYGS2Manager_RequestAuth, "RequestAuth" }, // 35233320
		{ &Z_Construct_UFunction_UELYGS2Manager_RequestCancelForDebug, "RequestCancelForDebug" }, // 1299833314
		{ &Z_Construct_UFunction_UELYGS2Manager_RequestGetInfo, "RequestGetInfo" }, // 92342705
		{ &Z_Construct_UFunction_UELYGS2Manager_RequestPingToAllServers, "RequestPingToAllServers" }, // 2612399135
		{ &Z_Construct_UFunction_UELYGS2Manager_RequestSetDisplayNameForDebug, "RequestSetDisplayNameForDebug" }, // 3224137041
		{ &Z_Construct_UFunction_UELYGS2Manager_SetDisplayNameForDebug, "SetDisplayNameForDebug" }, // 902175000
		{ &Z_Construct_UFunction_UELYGS2Manager_SetNetworkObserver, "SetNetworkObserver" }, // 4114265400
		{ &Z_Construct_UFunction_UELYGS2Manager_SetServerListData, "SetServerListData" }, // 1964740708
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELYGS2Manager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELYGS2Manager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_YGS2Requests_Inner = { "YGS2Requests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELYGS2RequestFunction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_YGS2Requests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELYGS2Manager" },
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_YGS2Requests = { "YGS2Requests", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELYGS2Manager, YGS2Requests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_YGS2Requests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_YGS2Requests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_pServerParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELYGS2Manager" },
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_pServerParam = { "pServerParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELYGS2Manager, pServerParam), Z_Construct_UClass_UELGameServerParam_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_pServerParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_pServerParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_pServerSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELYGS2Manager" },
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_pServerSelector = { "pServerSelector", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELYGS2Manager, pServerSelector), Z_Construct_UClass_UELGameServerSelector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_pServerSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_pServerSelector_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_ClientSetupParams_ValueProp = { "ClientSetupParams", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FYGS2ClientSetupParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_ClientSetupParams_Key_KeyProp = { "ClientSetupParams_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_ClientSetupParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELYGS2Manager" },
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_ClientSetupParams = { "ClientSetupParams", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELYGS2Manager, ClientSetupParams), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_ClientSetupParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_ClientSetupParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_CurrentTargetRegionWithPing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELYGS2Manager" },
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_CurrentTargetRegionWithPing = { "CurrentTargetRegionWithPing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELYGS2Manager, CurrentTargetRegionWithPing), METADATA_PARAMS(Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_CurrentTargetRegionWithPing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_CurrentTargetRegionWithPing_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_PingCaches_ValueProp = { "PingCaches", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FELYGS2PingCache, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_PingCaches_Key_KeyProp = { "PingCaches_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_PingCaches_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELYGS2Manager" },
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_PingCaches = { "PingCaches", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELYGS2Manager, PingCaches), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_PingCaches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_PingCaches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_m_pNetworkObserver_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELYGS2Manager" },
		{ "ModuleRelativePath", "Public/ELYGS2Manager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_m_pNetworkObserver = { "m_pNetworkObserver", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELYGS2Manager, m_pNetworkObserver), Z_Construct_UClass_UELNetworkObserverBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_m_pNetworkObserver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_m_pNetworkObserver_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELYGS2Manager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_YGS2Requests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_YGS2Requests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_pServerParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_pServerSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_ClientSetupParams_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_ClientSetupParams_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_ClientSetupParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_CurrentTargetRegionWithPing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_PingCaches_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_PingCaches_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_PingCaches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELYGS2Manager_Statics::NewProp_m_pNetworkObserver,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELYGS2Manager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELYGS2Manager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELYGS2Manager_Statics::ClassParams = {
		&UELYGS2Manager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELYGS2Manager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELYGS2Manager_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELYGS2Manager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELYGS2Manager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELYGS2Manager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELYGS2Manager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELYGS2Manager, 4102876437);
	template<> ABP_200508_API UClass* StaticClass<UELYGS2Manager>()
	{
		return UELYGS2Manager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELYGS2Manager(Z_Construct_UClass_UELYGS2Manager, &UELYGS2Manager::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELYGS2Manager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELYGS2Manager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
