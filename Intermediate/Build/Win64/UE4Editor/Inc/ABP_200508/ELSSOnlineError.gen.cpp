// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSOnlineError.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSOnlineError() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSOnlineError_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSOnlineError();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSPlatformNetworkData();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELApplicationStatus();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetworkConnectionStatus();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELServerType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetworkStatus();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetworkType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSRequestResultType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSOnlineErrorType();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2ErrorType();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase_NoRegister();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_NetworkErrorCorrespondEvent__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_NetworkErrorAddedEvent__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_PlatformNetworkErrorEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELSSOnlineError::execAddErrDialogData)
	{
		P_GET_STRUCT_REF(FSSPlatformNetworkData,Z_Param_Out_dat);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_tmpID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddErrDialogData(Z_Param_Out_dat,Z_Param_Out_tmpID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execApplicationStatusChanged)
	{
		P_GET_ENUM(EELApplicationStatus,Z_Param_AppStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplicationStatusChanged(EELApplicationStatus(Z_Param_AppStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execClearReservedDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearReservedDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execEndErrDialogData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_tmpID);
		P_GET_UBOOL(Z_Param_retDialog);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EndErrDialogData(Z_Param_tmpID,Z_Param_retDialog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execErrorProcessEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ErrorProcessEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execFilteringNetworkError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FilteringNetworkError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execGetAllNetworkErrorText)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_outErrorType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAllNetworkErrorText(Z_Param_Out_outErrorType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execGetErrDialogData)
	{
		P_GET_STRUCT_REF(FSSPlatformNetworkData,Z_Param_Out_dat);
		P_GET_PROPERTY(FStrProperty,Z_Param_tmpID);
		P_GET_UBOOL(Z_Param_isClear);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetErrDialogData(Z_Param_Out_dat,Z_Param_tmpID,Z_Param_isClear);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execIsErrorProcessStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsErrorProcessStop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execIsNetworkErrorEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNetworkErrorEnable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execIsReservedDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReservedDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execNetworkConnectionStatusChange)
	{
		P_GET_ENUM(EELNetworkConnectionStatus,Z_Param_NewNetworkConnectionStatus);
		P_GET_ENUM(EELServerType,Z_Param_ServerType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetworkConnectionStatusChange(EELNetworkConnectionStatus(Z_Param_NewNetworkConnectionStatus),EELServerType(Z_Param_ServerType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execNetworkErrorReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetworkErrorReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execNetworkStatusChanged)
	{
		P_GET_ENUM(EELNetworkStatus,Z_Param_NetworkStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetworkStatusChanged(EELNetworkStatus(Z_Param_NetworkStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execNetworkTypeChanged)
	{
		P_GET_ENUM(EELNetworkType,Z_Param_NetworkType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetworkTypeChanged(EELNetworkType(Z_Param_NetworkType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execOpenReservedDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenReservedDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execReserveErrorDialog)
	{
		P_GET_STRUCT_REF(FSSPlatformNetworkData,Z_Param_Out_inErrorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReserveErrorDialog(Z_Param_Out_inErrorData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execReset)
	{
		P_GET_UBOOL(Z_Param_excludedNetworkErrorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset(Z_Param_excludedNetworkErrorData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execSetDialogReserveMode)
	{
		P_GET_UBOOL(Z_Param_IsOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDialogReserveMode(Z_Param_IsOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execSSMode_RequestResult)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_responseCode);
		P_GET_PROPERTY(FStrProperty,Z_Param_responseData);
		P_GET_PROPERTY(FStrProperty,Z_Param_apiUniqueID);
		P_GET_ENUM(eSSRequestResultType,Z_Param_resultType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SSMode_RequestResult(Z_Param_responseCode,Z_Param_responseData,Z_Param_apiUniqueID,eSSRequestResultType(Z_Param_resultType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execStartErrorCorrespond)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartErrorCorrespond();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execStartErrorEvent)
	{
		P_GET_STRUCT_REF(FSSPlatformNetworkData,Z_Param_Out_errData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartErrorEvent(Z_Param_Out_errData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execStartPlatformErrorEvent)
	{
		P_GET_ENUM(ESSOnlineErrorType,Z_Param_callType);
		P_GET_UBOOL(Z_Param_setupErrorData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPlatformErrorEvent(ESSOnlineErrorType(Z_Param_callType),Z_Param_setupErrorData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execStartUniqueErrorEvent)
	{
		P_GET_ENUM(ESSOnlineErrorType,Z_Param_callType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartUniqueErrorEvent(ESSOnlineErrorType(Z_Param_callType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execStartup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Startup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSOnlineError::execYGS2API_RequestResult)
	{
		P_GET_ENUM(EYGS2ErrorType,Z_Param_ErrorType);
		P_GET_OBJECT(UYGS2RequestBase,Z_Param_Request);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->YGS2API_RequestResult(EYGS2ErrorType(Z_Param_ErrorType),Z_Param_Request);
		P_NATIVE_END;
	}
	void UELSSOnlineError::StaticRegisterNativesUELSSOnlineError()
	{
		UClass* Class = UELSSOnlineError::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddErrDialogData", &UELSSOnlineError::execAddErrDialogData },
			{ "ApplicationStatusChanged", &UELSSOnlineError::execApplicationStatusChanged },
			{ "ClearReservedDialog", &UELSSOnlineError::execClearReservedDialog },
			{ "EndErrDialogData", &UELSSOnlineError::execEndErrDialogData },
			{ "ErrorProcessEnd", &UELSSOnlineError::execErrorProcessEnd },
			{ "FilteringNetworkError", &UELSSOnlineError::execFilteringNetworkError },
			{ "GetAllNetworkErrorText", &UELSSOnlineError::execGetAllNetworkErrorText },
			{ "GetErrDialogData", &UELSSOnlineError::execGetErrDialogData },
			{ "Init", &UELSSOnlineError::execInit },
			{ "IsErrorProcessStop", &UELSSOnlineError::execIsErrorProcessStop },
			{ "IsNetworkErrorEnable", &UELSSOnlineError::execIsNetworkErrorEnable },
			{ "IsReservedDialog", &UELSSOnlineError::execIsReservedDialog },
			{ "NetworkConnectionStatusChange", &UELSSOnlineError::execNetworkConnectionStatusChange },
			{ "NetworkErrorReset", &UELSSOnlineError::execNetworkErrorReset },
			{ "NetworkStatusChanged", &UELSSOnlineError::execNetworkStatusChanged },
			{ "NetworkTypeChanged", &UELSSOnlineError::execNetworkTypeChanged },
			{ "OpenReservedDialog", &UELSSOnlineError::execOpenReservedDialog },
			{ "Release", &UELSSOnlineError::execRelease },
			{ "ReserveErrorDialog", &UELSSOnlineError::execReserveErrorDialog },
			{ "Reset", &UELSSOnlineError::execReset },
			{ "SetDialogReserveMode", &UELSSOnlineError::execSetDialogReserveMode },
			{ "SSMode_RequestResult", &UELSSOnlineError::execSSMode_RequestResult },
			{ "StartErrorCorrespond", &UELSSOnlineError::execStartErrorCorrespond },
			{ "StartErrorEvent", &UELSSOnlineError::execStartErrorEvent },
			{ "StartPlatformErrorEvent", &UELSSOnlineError::execStartPlatformErrorEvent },
			{ "StartUniqueErrorEvent", &UELSSOnlineError::execStartUniqueErrorEvent },
			{ "Startup", &UELSSOnlineError::execStartup },
			{ "Stop", &UELSSOnlineError::execStop },
			{ "Update", &UELSSOnlineError::execUpdate },
			{ "YGS2API_RequestResult", &UELSSOnlineError::execYGS2API_RequestResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics
	{
		struct ELSSOnlineError_eventAddErrDialogData_Parms
		{
			FSSPlatformNetworkData dat;
			FString tmpID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dat;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tmpID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::NewProp_dat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::NewProp_dat = { "dat", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventAddErrDialogData_Parms, dat), Z_Construct_UScriptStruct_FSSPlatformNetworkData, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::NewProp_dat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::NewProp_dat_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::NewProp_tmpID = { "tmpID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventAddErrDialogData_Parms, tmpID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOnlineError_eventAddErrDialogData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineError_eventAddErrDialogData_Parms), &Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::NewProp_dat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::NewProp_tmpID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "AddErrDialogData", nullptr, nullptr, sizeof(ELSSOnlineError_eventAddErrDialogData_Parms), Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_ApplicationStatusChanged_Statics
	{
		struct ELSSOnlineError_eventApplicationStatusChanged_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSOnlineError_ApplicationStatusChanged_Statics::NewProp_AppStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSOnlineError_ApplicationStatusChanged_Statics::NewProp_AppStatus = { "AppStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventApplicationStatusChanged_Parms, AppStatus), Z_Construct_UEnum_ABP_200508_EELApplicationStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_ApplicationStatusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_ApplicationStatusChanged_Statics::NewProp_AppStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_ApplicationStatusChanged_Statics::NewProp_AppStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_ApplicationStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_ApplicationStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "ApplicationStatusChanged", nullptr, nullptr, sizeof(ELSSOnlineError_eventApplicationStatusChanged_Parms), Z_Construct_UFunction_UELSSOnlineError_ApplicationStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_ApplicationStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_ApplicationStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_ApplicationStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_ApplicationStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_ApplicationStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_ClearReservedDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_ClearReservedDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_ClearReservedDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "ClearReservedDialog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_ClearReservedDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_ClearReservedDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_ClearReservedDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_ClearReservedDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics
	{
		struct ELSSOnlineError_eventEndErrDialogData_Parms
		{
			FString tmpID;
			bool retDialog;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tmpID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tmpID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_retDialog_MetaData[];
#endif
		static void NewProp_retDialog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_retDialog;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::NewProp_tmpID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::NewProp_tmpID = { "tmpID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventEndErrDialogData_Parms, tmpID), METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::NewProp_tmpID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::NewProp_tmpID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::NewProp_retDialog_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::NewProp_retDialog_SetBit(void* Obj)
	{
		((ELSSOnlineError_eventEndErrDialogData_Parms*)Obj)->retDialog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::NewProp_retDialog = { "retDialog", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineError_eventEndErrDialogData_Parms), &Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::NewProp_retDialog_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::NewProp_retDialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::NewProp_retDialog_MetaData)) };
	void Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOnlineError_eventEndErrDialogData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineError_eventEndErrDialogData_Parms), &Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::NewProp_tmpID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::NewProp_retDialog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "EndErrDialogData", nullptr, nullptr, sizeof(ELSSOnlineError_eventEndErrDialogData_Parms), Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_ErrorProcessEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_ErrorProcessEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_ErrorProcessEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "ErrorProcessEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_ErrorProcessEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_ErrorProcessEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_ErrorProcessEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_ErrorProcessEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_FilteringNetworkError_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_FilteringNetworkError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_FilteringNetworkError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "FilteringNetworkError", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_FilteringNetworkError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_FilteringNetworkError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_FilteringNetworkError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_FilteringNetworkError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_GetAllNetworkErrorText_Statics
	{
		struct ELSSOnlineError_eventGetAllNetworkErrorText_Parms
		{
			int32 outErrorType;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_outErrorType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSOnlineError_GetAllNetworkErrorText_Statics::NewProp_outErrorType = { "outErrorType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventGetAllNetworkErrorText_Parms, outErrorType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSOnlineError_GetAllNetworkErrorText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventGetAllNetworkErrorText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_GetAllNetworkErrorText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_GetAllNetworkErrorText_Statics::NewProp_outErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_GetAllNetworkErrorText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_GetAllNetworkErrorText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_GetAllNetworkErrorText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "GetAllNetworkErrorText", nullptr, nullptr, sizeof(ELSSOnlineError_eventGetAllNetworkErrorText_Parms), Z_Construct_UFunction_UELSSOnlineError_GetAllNetworkErrorText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_GetAllNetworkErrorText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_GetAllNetworkErrorText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_GetAllNetworkErrorText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_GetAllNetworkErrorText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_GetAllNetworkErrorText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics
	{
		struct ELSSOnlineError_eventGetErrDialogData_Parms
		{
			FSSPlatformNetworkData dat;
			FString tmpID;
			bool isClear;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tmpID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tmpID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isClear_MetaData[];
#endif
		static void NewProp_isClear_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isClear;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_dat = { "dat", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventGetErrDialogData_Parms, dat), Z_Construct_UScriptStruct_FSSPlatformNetworkData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_tmpID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_tmpID = { "tmpID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventGetErrDialogData_Parms, tmpID), METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_tmpID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_tmpID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_isClear_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_isClear_SetBit(void* Obj)
	{
		((ELSSOnlineError_eventGetErrDialogData_Parms*)Obj)->isClear = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_isClear = { "isClear", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineError_eventGetErrDialogData_Parms), &Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_isClear_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_isClear_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_isClear_MetaData)) };
	void Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOnlineError_eventGetErrDialogData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineError_eventGetErrDialogData_Parms), &Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_dat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_tmpID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_isClear,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "GetErrDialogData", nullptr, nullptr, sizeof(ELSSOnlineError_eventGetErrDialogData_Parms), Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_IsErrorProcessStop_Statics
	{
		struct ELSSOnlineError_eventIsErrorProcessStop_Parms
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
	void Z_Construct_UFunction_UELSSOnlineError_IsErrorProcessStop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOnlineError_eventIsErrorProcessStop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSOnlineError_IsErrorProcessStop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineError_eventIsErrorProcessStop_Parms), &Z_Construct_UFunction_UELSSOnlineError_IsErrorProcessStop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_IsErrorProcessStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_IsErrorProcessStop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_IsErrorProcessStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_IsErrorProcessStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "IsErrorProcessStop", nullptr, nullptr, sizeof(ELSSOnlineError_eventIsErrorProcessStop_Parms), Z_Construct_UFunction_UELSSOnlineError_IsErrorProcessStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_IsErrorProcessStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_IsErrorProcessStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_IsErrorProcessStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_IsErrorProcessStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_IsErrorProcessStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_IsNetworkErrorEnable_Statics
	{
		struct ELSSOnlineError_eventIsNetworkErrorEnable_Parms
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
	void Z_Construct_UFunction_UELSSOnlineError_IsNetworkErrorEnable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOnlineError_eventIsNetworkErrorEnable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSOnlineError_IsNetworkErrorEnable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineError_eventIsNetworkErrorEnable_Parms), &Z_Construct_UFunction_UELSSOnlineError_IsNetworkErrorEnable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_IsNetworkErrorEnable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_IsNetworkErrorEnable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_IsNetworkErrorEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_IsNetworkErrorEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "IsNetworkErrorEnable", nullptr, nullptr, sizeof(ELSSOnlineError_eventIsNetworkErrorEnable_Parms), Z_Construct_UFunction_UELSSOnlineError_IsNetworkErrorEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_IsNetworkErrorEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_IsNetworkErrorEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_IsNetworkErrorEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_IsNetworkErrorEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_IsNetworkErrorEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_IsReservedDialog_Statics
	{
		struct ELSSOnlineError_eventIsReservedDialog_Parms
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
	void Z_Construct_UFunction_UELSSOnlineError_IsReservedDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOnlineError_eventIsReservedDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSOnlineError_IsReservedDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineError_eventIsReservedDialog_Parms), &Z_Construct_UFunction_UELSSOnlineError_IsReservedDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_IsReservedDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_IsReservedDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_IsReservedDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_IsReservedDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "IsReservedDialog", nullptr, nullptr, sizeof(ELSSOnlineError_eventIsReservedDialog_Parms), Z_Construct_UFunction_UELSSOnlineError_IsReservedDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_IsReservedDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_IsReservedDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_IsReservedDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_IsReservedDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_IsReservedDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange_Statics
	{
		struct ELSSOnlineError_eventNetworkConnectionStatusChange_Parms
		{
			EELNetworkConnectionStatus NewNetworkConnectionStatus;
			EELServerType ServerType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewNetworkConnectionStatus_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewNetworkConnectionStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ServerType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ServerType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange_Statics::NewProp_NewNetworkConnectionStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange_Statics::NewProp_NewNetworkConnectionStatus = { "NewNetworkConnectionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventNetworkConnectionStatusChange_Parms, NewNetworkConnectionStatus), Z_Construct_UEnum_ABP_200508_EELNetworkConnectionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange_Statics::NewProp_ServerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange_Statics::NewProp_ServerType = { "ServerType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventNetworkConnectionStatusChange_Parms, ServerType), Z_Construct_UEnum_ABP_200508_EELServerType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange_Statics::NewProp_NewNetworkConnectionStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange_Statics::NewProp_NewNetworkConnectionStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange_Statics::NewProp_ServerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange_Statics::NewProp_ServerType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "NetworkConnectionStatusChange", nullptr, nullptr, sizeof(ELSSOnlineError_eventNetworkConnectionStatusChange_Parms), Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_NetworkErrorReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_NetworkErrorReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_NetworkErrorReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "NetworkErrorReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_NetworkErrorReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_NetworkErrorReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_NetworkErrorReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_NetworkErrorReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_NetworkStatusChanged_Statics
	{
		struct ELSSOnlineError_eventNetworkStatusChanged_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSOnlineError_NetworkStatusChanged_Statics::NewProp_NetworkStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSOnlineError_NetworkStatusChanged_Statics::NewProp_NetworkStatus = { "NetworkStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventNetworkStatusChanged_Parms, NetworkStatus), Z_Construct_UEnum_ABP_200508_EELNetworkStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_NetworkStatusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_NetworkStatusChanged_Statics::NewProp_NetworkStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_NetworkStatusChanged_Statics::NewProp_NetworkStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_NetworkStatusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_NetworkStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "NetworkStatusChanged", nullptr, nullptr, sizeof(ELSSOnlineError_eventNetworkStatusChanged_Parms), Z_Construct_UFunction_UELSSOnlineError_NetworkStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_NetworkStatusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_NetworkStatusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_NetworkStatusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_NetworkStatusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_NetworkStatusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_NetworkTypeChanged_Statics
	{
		struct ELSSOnlineError_eventNetworkTypeChanged_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSOnlineError_NetworkTypeChanged_Statics::NewProp_NetworkType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSOnlineError_NetworkTypeChanged_Statics::NewProp_NetworkType = { "NetworkType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventNetworkTypeChanged_Parms, NetworkType), Z_Construct_UEnum_ABP_200508_EELNetworkType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_NetworkTypeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_NetworkTypeChanged_Statics::NewProp_NetworkType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_NetworkTypeChanged_Statics::NewProp_NetworkType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_NetworkTypeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_NetworkTypeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "NetworkTypeChanged", nullptr, nullptr, sizeof(ELSSOnlineError_eventNetworkTypeChanged_Parms), Z_Construct_UFunction_UELSSOnlineError_NetworkTypeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_NetworkTypeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_NetworkTypeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_NetworkTypeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_NetworkTypeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_NetworkTypeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_OpenReservedDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_OpenReservedDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_OpenReservedDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "OpenReservedDialog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_OpenReservedDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_OpenReservedDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_OpenReservedDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_OpenReservedDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_Release_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_Release_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "Release", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_ReserveErrorDialog_Statics
	{
		struct ELSSOnlineError_eventReserveErrorDialog_Parms
		{
			FSSPlatformNetworkData inErrorData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inErrorData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inErrorData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_ReserveErrorDialog_Statics::NewProp_inErrorData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSOnlineError_ReserveErrorDialog_Statics::NewProp_inErrorData = { "inErrorData", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventReserveErrorDialog_Parms, inErrorData), Z_Construct_UScriptStruct_FSSPlatformNetworkData, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_ReserveErrorDialog_Statics::NewProp_inErrorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_ReserveErrorDialog_Statics::NewProp_inErrorData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_ReserveErrorDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_ReserveErrorDialog_Statics::NewProp_inErrorData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_ReserveErrorDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_ReserveErrorDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "ReserveErrorDialog", nullptr, nullptr, sizeof(ELSSOnlineError_eventReserveErrorDialog_Parms), Z_Construct_UFunction_UELSSOnlineError_ReserveErrorDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_ReserveErrorDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_ReserveErrorDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_ReserveErrorDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_ReserveErrorDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_ReserveErrorDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_Reset_Statics
	{
		struct ELSSOnlineError_eventReset_Parms
		{
			bool excludedNetworkErrorData;
		};
		static void NewProp_excludedNetworkErrorData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_excludedNetworkErrorData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSOnlineError_Reset_Statics::NewProp_excludedNetworkErrorData_SetBit(void* Obj)
	{
		((ELSSOnlineError_eventReset_Parms*)Obj)->excludedNetworkErrorData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSOnlineError_Reset_Statics::NewProp_excludedNetworkErrorData = { "excludedNetworkErrorData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineError_eventReset_Parms), &Z_Construct_UFunction_UELSSOnlineError_Reset_Statics::NewProp_excludedNetworkErrorData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_Reset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_Reset_Statics::NewProp_excludedNetworkErrorData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "Reset", nullptr, nullptr, sizeof(ELSSOnlineError_eventReset_Parms), Z_Construct_UFunction_UELSSOnlineError_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_Reset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_SetDialogReserveMode_Statics
	{
		struct ELSSOnlineError_eventSetDialogReserveMode_Parms
		{
			bool IsOn;
		};
		static void NewProp_IsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSOnlineError_SetDialogReserveMode_Statics::NewProp_IsOn_SetBit(void* Obj)
	{
		((ELSSOnlineError_eventSetDialogReserveMode_Parms*)Obj)->IsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSOnlineError_SetDialogReserveMode_Statics::NewProp_IsOn = { "IsOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineError_eventSetDialogReserveMode_Parms), &Z_Construct_UFunction_UELSSOnlineError_SetDialogReserveMode_Statics::NewProp_IsOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_SetDialogReserveMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_SetDialogReserveMode_Statics::NewProp_IsOn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_SetDialogReserveMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_SetDialogReserveMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "SetDialogReserveMode", nullptr, nullptr, sizeof(ELSSOnlineError_eventSetDialogReserveMode_Parms), Z_Construct_UFunction_UELSSOnlineError_SetDialogReserveMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_SetDialogReserveMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_SetDialogReserveMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_SetDialogReserveMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_SetDialogReserveMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_SetDialogReserveMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics
	{
		struct ELSSOnlineError_eventSSMode_RequestResult_Parms
		{
			int32 responseCode;
			FString responseData;
			FString apiUniqueID;
			eSSRequestResultType resultType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_responseCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_responseCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_responseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_responseData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_apiUniqueID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_apiUniqueID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_resultType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_resultType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_responseCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_responseCode = { "responseCode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventSSMode_RequestResult_Parms, responseCode), METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_responseCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_responseCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_responseData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_responseData = { "responseData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventSSMode_RequestResult_Parms, responseData), METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_responseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_responseData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_apiUniqueID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_apiUniqueID = { "apiUniqueID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventSSMode_RequestResult_Parms, apiUniqueID), METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_apiUniqueID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_apiUniqueID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_resultType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_resultType = { "resultType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventSSMode_RequestResult_Parms, resultType), Z_Construct_UEnum_ABP_200508_eSSRequestResultType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_responseCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_responseData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_apiUniqueID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_resultType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::NewProp_resultType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "SSMode_RequestResult", nullptr, nullptr, sizeof(ELSSOnlineError_eventSSMode_RequestResult_Parms), Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_StartErrorCorrespond_Statics
	{
		struct ELSSOnlineError_eventStartErrorCorrespond_Parms
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
	void Z_Construct_UFunction_UELSSOnlineError_StartErrorCorrespond_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSOnlineError_eventStartErrorCorrespond_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSOnlineError_StartErrorCorrespond_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineError_eventStartErrorCorrespond_Parms), &Z_Construct_UFunction_UELSSOnlineError_StartErrorCorrespond_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_StartErrorCorrespond_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_StartErrorCorrespond_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_StartErrorCorrespond_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_StartErrorCorrespond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "StartErrorCorrespond", nullptr, nullptr, sizeof(ELSSOnlineError_eventStartErrorCorrespond_Parms), Z_Construct_UFunction_UELSSOnlineError_StartErrorCorrespond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_StartErrorCorrespond_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_StartErrorCorrespond_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_StartErrorCorrespond_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_StartErrorCorrespond()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_StartErrorCorrespond_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_StartErrorEvent_Statics
	{
		struct ELSSOnlineError_eventStartErrorEvent_Parms
		{
			FSSPlatformNetworkData errData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_errData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELSSOnlineError_StartErrorEvent_Statics::NewProp_errData = { "errData", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventStartErrorEvent_Parms, errData), Z_Construct_UScriptStruct_FSSPlatformNetworkData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_StartErrorEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_StartErrorEvent_Statics::NewProp_errData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_StartErrorEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_StartErrorEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "StartErrorEvent", nullptr, nullptr, sizeof(ELSSOnlineError_eventStartErrorEvent_Parms), Z_Construct_UFunction_UELSSOnlineError_StartErrorEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_StartErrorEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_StartErrorEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_StartErrorEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_StartErrorEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_StartErrorEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics
	{
		struct ELSSOnlineError_eventStartPlatformErrorEvent_Parms
		{
			ESSOnlineErrorType callType;
			bool setupErrorData;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_callType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_callType;
		static void NewProp_setupErrorData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_setupErrorData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::NewProp_callType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::NewProp_callType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::NewProp_callType = { "callType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventStartPlatformErrorEvent_Parms, callType), Z_Construct_UEnum_ABP_200508_ESSOnlineErrorType, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::NewProp_callType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::NewProp_callType_MetaData)) };
	void Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::NewProp_setupErrorData_SetBit(void* Obj)
	{
		((ELSSOnlineError_eventStartPlatformErrorEvent_Parms*)Obj)->setupErrorData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::NewProp_setupErrorData = { "setupErrorData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSOnlineError_eventStartPlatformErrorEvent_Parms), &Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::NewProp_setupErrorData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::NewProp_callType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::NewProp_callType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::NewProp_setupErrorData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "StartPlatformErrorEvent", nullptr, nullptr, sizeof(ELSSOnlineError_eventStartPlatformErrorEvent_Parms), Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent_Statics
	{
		struct ELSSOnlineError_eventStartUniqueErrorEvent_Parms
		{
			ESSOnlineErrorType callType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_callType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_callType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent_Statics::NewProp_callType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent_Statics::NewProp_callType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent_Statics::NewProp_callType = { "callType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventStartUniqueErrorEvent_Parms, callType), Z_Construct_UEnum_ABP_200508_ESSOnlineErrorType, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent_Statics::NewProp_callType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent_Statics::NewProp_callType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent_Statics::NewProp_callType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent_Statics::NewProp_callType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "StartUniqueErrorEvent", nullptr, nullptr, sizeof(ELSSOnlineError_eventStartUniqueErrorEvent_Parms), Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_Startup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_Startup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_Startup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "Startup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_Startup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_Startup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_Startup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_Startup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_Stop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_Update_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "Update", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSOnlineError_YGS2API_RequestResult_Statics
	{
		struct ELSSOnlineError_eventYGS2API_RequestResult_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSOnlineError_YGS2API_RequestResult_Statics::NewProp_ErrorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSOnlineError_YGS2API_RequestResult_Statics::NewProp_ErrorType = { "ErrorType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventYGS2API_RequestResult_Parms, ErrorType), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSOnlineError_YGS2API_RequestResult_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSOnlineError_eventYGS2API_RequestResult_Parms, Request), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSOnlineError_YGS2API_RequestResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_YGS2API_RequestResult_Statics::NewProp_ErrorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_YGS2API_RequestResult_Statics::NewProp_ErrorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSOnlineError_YGS2API_RequestResult_Statics::NewProp_Request,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSOnlineError_YGS2API_RequestResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSOnlineError_YGS2API_RequestResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSOnlineError, nullptr, "YGS2API_RequestResult", nullptr, nullptr, sizeof(ELSSOnlineError_eventYGS2API_RequestResult_Parms), Z_Construct_UFunction_UELSSOnlineError_YGS2API_RequestResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_YGS2API_RequestResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSOnlineError_YGS2API_RequestResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSOnlineError_YGS2API_RequestResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSOnlineError_YGS2API_RequestResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSOnlineError_YGS2API_RequestResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSOnlineError_NoRegister()
	{
		return UELSSOnlineError::StaticClass();
	}
	struct Z_Construct_UClass_UELSSOnlineError_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSNetworkErrorCorrespondEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SSNetworkErrorCorrespondEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSNetworkErrorAddedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SSNetworkErrorAddedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSNetworkErrorToPlatform_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SSNetworkErrorToPlatform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_networkData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_networkData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DialogReservedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DialogReservedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isErrorProcess_MetaData[];
#endif
		static void NewProp_isErrorProcess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isErrorProcess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableNetworkStatus_MetaData[];
#endif
		static void NewProp_EnableNetworkStatus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableNetworkStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentNetworkStatus_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentNetworkStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentNetworkStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NetworkConnectionStatus_ValueProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NetworkConnectionStatus_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NetworkConnectionStatus_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NetworkConnectionStatus_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkConnectionStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_NetworkConnectionStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSOnlineError_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSOnlineError_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSOnlineError_AddErrDialogData, "AddErrDialogData" }, // 3573621267
		{ &Z_Construct_UFunction_UELSSOnlineError_ApplicationStatusChanged, "ApplicationStatusChanged" }, // 2772645082
		{ &Z_Construct_UFunction_UELSSOnlineError_ClearReservedDialog, "ClearReservedDialog" }, // 2271983489
		{ &Z_Construct_UFunction_UELSSOnlineError_EndErrDialogData, "EndErrDialogData" }, // 1495449549
		{ &Z_Construct_UFunction_UELSSOnlineError_ErrorProcessEnd, "ErrorProcessEnd" }, // 4177054198
		{ &Z_Construct_UFunction_UELSSOnlineError_FilteringNetworkError, "FilteringNetworkError" }, // 3708395851
		{ &Z_Construct_UFunction_UELSSOnlineError_GetAllNetworkErrorText, "GetAllNetworkErrorText" }, // 4063319069
		{ &Z_Construct_UFunction_UELSSOnlineError_GetErrDialogData, "GetErrDialogData" }, // 1600758135
		{ &Z_Construct_UFunction_UELSSOnlineError_Init, "Init" }, // 3251641090
		{ &Z_Construct_UFunction_UELSSOnlineError_IsErrorProcessStop, "IsErrorProcessStop" }, // 1472255297
		{ &Z_Construct_UFunction_UELSSOnlineError_IsNetworkErrorEnable, "IsNetworkErrorEnable" }, // 3527993935
		{ &Z_Construct_UFunction_UELSSOnlineError_IsReservedDialog, "IsReservedDialog" }, // 3410527895
		{ &Z_Construct_UFunction_UELSSOnlineError_NetworkConnectionStatusChange, "NetworkConnectionStatusChange" }, // 1954331129
		{ &Z_Construct_UFunction_UELSSOnlineError_NetworkErrorReset, "NetworkErrorReset" }, // 4258458713
		{ &Z_Construct_UFunction_UELSSOnlineError_NetworkStatusChanged, "NetworkStatusChanged" }, // 3460658960
		{ &Z_Construct_UFunction_UELSSOnlineError_NetworkTypeChanged, "NetworkTypeChanged" }, // 840513953
		{ &Z_Construct_UFunction_UELSSOnlineError_OpenReservedDialog, "OpenReservedDialog" }, // 1893708699
		{ &Z_Construct_UFunction_UELSSOnlineError_Release, "Release" }, // 2961650801
		{ &Z_Construct_UFunction_UELSSOnlineError_ReserveErrorDialog, "ReserveErrorDialog" }, // 71046112
		{ &Z_Construct_UFunction_UELSSOnlineError_Reset, "Reset" }, // 2173658752
		{ &Z_Construct_UFunction_UELSSOnlineError_SetDialogReserveMode, "SetDialogReserveMode" }, // 2633211734
		{ &Z_Construct_UFunction_UELSSOnlineError_SSMode_RequestResult, "SSMode_RequestResult" }, // 2414945414
		{ &Z_Construct_UFunction_UELSSOnlineError_StartErrorCorrespond, "StartErrorCorrespond" }, // 3112864341
		{ &Z_Construct_UFunction_UELSSOnlineError_StartErrorEvent, "StartErrorEvent" }, // 847333697
		{ &Z_Construct_UFunction_UELSSOnlineError_StartPlatformErrorEvent, "StartPlatformErrorEvent" }, // 195581391
		{ &Z_Construct_UFunction_UELSSOnlineError_StartUniqueErrorEvent, "StartUniqueErrorEvent" }, // 713110848
		{ &Z_Construct_UFunction_UELSSOnlineError_Startup, "Startup" }, // 2946562649
		{ &Z_Construct_UFunction_UELSSOnlineError_Stop, "Stop" }, // 1647771057
		{ &Z_Construct_UFunction_UELSSOnlineError_Update, "Update" }, // 9217257
		{ &Z_Construct_UFunction_UELSSOnlineError_YGS2API_RequestResult, "YGS2API_RequestResult" }, // 648492253
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOnlineError_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSOnlineError.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_SSNetworkErrorCorrespondEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineError" },
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_SSNetworkErrorCorrespondEvent = { "SSNetworkErrorCorrespondEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSOnlineError, SSNetworkErrorCorrespondEvent), Z_Construct_UDelegateFunction_ABP_200508_NetworkErrorCorrespondEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_SSNetworkErrorCorrespondEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_SSNetworkErrorCorrespondEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_SSNetworkErrorAddedEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineError" },
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_SSNetworkErrorAddedEvent = { "SSNetworkErrorAddedEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSOnlineError, SSNetworkErrorAddedEvent), Z_Construct_UDelegateFunction_ABP_200508_NetworkErrorAddedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_SSNetworkErrorAddedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_SSNetworkErrorAddedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_SSNetworkErrorToPlatform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineError" },
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_SSNetworkErrorToPlatform = { "SSNetworkErrorToPlatform", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSOnlineError, SSNetworkErrorToPlatform), Z_Construct_UDelegateFunction_ABP_200508_PlatformNetworkErrorEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_SSNetworkErrorToPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_SSNetworkErrorToPlatform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_networkData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineError" },
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_networkData = { "networkData", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSOnlineError, networkData), Z_Construct_UScriptStruct_FSSPlatformNetworkData, METADATA_PARAMS(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_networkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_networkData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_DialogReservedData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineError" },
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_DialogReservedData = { "DialogReservedData", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSOnlineError, DialogReservedData), Z_Construct_UScriptStruct_FSSPlatformNetworkData, METADATA_PARAMS(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_DialogReservedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_DialogReservedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_isErrorProcess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineError" },
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	void Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_isErrorProcess_SetBit(void* Obj)
	{
		((UELSSOnlineError*)Obj)->isErrorProcess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_isErrorProcess = { "isErrorProcess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSOnlineError), &Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_isErrorProcess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_isErrorProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_isErrorProcess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_EnableNetworkStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineError" },
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	void Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_EnableNetworkStatus_SetBit(void* Obj)
	{
		((UELSSOnlineError*)Obj)->EnableNetworkStatus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_EnableNetworkStatus = { "EnableNetworkStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELSSOnlineError), &Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_EnableNetworkStatus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_EnableNetworkStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_EnableNetworkStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_CurrentNetworkStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_CurrentNetworkStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineError" },
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_CurrentNetworkStatus = { "CurrentNetworkStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSOnlineError, CurrentNetworkStatus), Z_Construct_UEnum_ABP_200508_EELNetworkStatus, METADATA_PARAMS(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_CurrentNetworkStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_CurrentNetworkStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_NetworkConnectionStatus_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_NetworkConnectionStatus_ValueProp = { "NetworkConnectionStatus", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UEnum_ABP_200508_EELNetworkConnectionStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_NetworkConnectionStatus_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_NetworkConnectionStatus_Key_KeyProp = { "NetworkConnectionStatus_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_EELServerType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_NetworkConnectionStatus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSOnlineError" },
		{ "ModuleRelativePath", "Public/ELSSOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_NetworkConnectionStatus = { "NetworkConnectionStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSOnlineError, NetworkConnectionStatus), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_NetworkConnectionStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_NetworkConnectionStatus_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSOnlineError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_SSNetworkErrorCorrespondEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_SSNetworkErrorAddedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_SSNetworkErrorToPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_networkData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_DialogReservedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_isErrorProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_EnableNetworkStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_CurrentNetworkStatus_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_CurrentNetworkStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_NetworkConnectionStatus_ValueProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_NetworkConnectionStatus_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_NetworkConnectionStatus_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_NetworkConnectionStatus_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSOnlineError_Statics::NewProp_NetworkConnectionStatus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSOnlineError_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSOnlineError>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSOnlineError_Statics::ClassParams = {
		&UELSSOnlineError::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSOnlineError_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineError_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSOnlineError_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSOnlineError_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSOnlineError()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSOnlineError_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSOnlineError, 2621461115);
	template<> ABP_200508_API UClass* StaticClass<UELSSOnlineError>()
	{
		return UELSSOnlineError::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSOnlineError(Z_Construct_UClass_UELSSOnlineError, &UELSSOnlineError::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSOnlineError"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSOnlineError);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
