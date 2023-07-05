// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2RequestBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2RequestBase() {}
// Cross Module References
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase_NoRegister();
	YGS2CLIENT_API UClass* Z_Construct_UClass_UYGS2RequestBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2Api();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2ErrorType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EYGS2RequestOptionType();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2ClientSetupParam();
	YGS2CLIENT_API UFunction* Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature();
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData();
	YGS2CLIENT_API UFunction* Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UYGS2RequestBase::execAddRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execClearYGS2AuthCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearYGS2AuthCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execCreateYGS2Request)
	{
		P_GET_OBJECT_REF(UYGS2RequestBase,Z_Param_Out__pcInst);
		P_GET_ENUM(EYGS2Api,Z_Param__enApi);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYGS2RequestBase::CreateYGS2Request(Z_Param_Out__pcInst,EYGS2Api(Z_Param__enApi));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execGetErrorString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetErrorString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execGetErrorType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EYGS2ErrorType*)Z_Param__Result=P_THIS->GetErrorType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execGetListTotalNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetListTotalNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execGetRequestApi)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EYGS2Api*)Z_Param__Result=P_THIS->GetRequestApi();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execGetUrl)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__rstrURL);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out__rstArguments);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetUrl(Z_Param_Out__rstrURL,Z_Param_Out__rstArguments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execGetUserData)
	{
		P_GET_OBJECT_REF(UObject,Z_Param_Out__pcUserObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUserData(Z_Param_Out__pcUserObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execGetUserID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUserID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execIsAuthorizedUser)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAuthorizedUser();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execIsBusy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBusy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execIsCanceled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCanceled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execIsEnableClientParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYGS2RequestBase::IsEnableClientParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execIsRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execIsSuccess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSuccess();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execOnBeginCreate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnBeginCreate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execOnBeginDelete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnBeginDelete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execOnBeginRead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnBeginRead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execOnBeginUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnBeginUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execOnEndCreate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnEndCreate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execOnEndDelete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnEndDelete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execOnEndRead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnEndRead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execOnEndUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnEndUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execRemRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemRef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execRequest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Request();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execRequestCreate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestCreate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execRequestDelete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDelete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execRequestRead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestRead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execRequestUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execRequestWithArgs)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out__rstArguments);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestWithArgs(Z_Param_Out__rstArguments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execSetDisableSession)
	{
		P_GET_UBOOL(Z_Param_UseDisableSession);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableSession(Z_Param_UseDisableSession);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execSetMaxRetry)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sMaxRetryNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxRetry(Z_Param__sMaxRetryNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execSetOption)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__rstrURL);
		P_GET_ENUM(EYGS2RequestOptionType,Z_Param__enOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOption(Z_Param_Out__rstrURL,EYGS2RequestOptionType(Z_Param__enOption));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execSetOptionalURLArgument)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strArgs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetOptionalURLArgument(Z_Param__strArgs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execSetSSDebugForceError)
	{
		P_GET_UBOOL(Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSSDebugForceError(Z_Param_Flag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execSetTimeout)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__uTimeOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeout(Z_Param__uTimeOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execSetUserData)
	{
		P_GET_OBJECT(UObject,Z_Param__pcUserObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUserData(Z_Param__pcUserObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execSetYGS2AppAuthKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSecret);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetYGS2AppAuthKey(Z_Param__strKey,Z_Param__strSecret);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execSetYGS2ClientSetupParam)
	{
		P_GET_STRUCT_REF(FYGS2ClientSetupParam,Z_Param_Out__stParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UYGS2RequestBase::SetYGS2ClientSetupParam(Z_Param_Out__stParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execSetYGS2EOSIDs)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strEpicAccountID);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetYGS2EOSIDs(Z_Param__strEpicAccountID,Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execSetYGS2UserAuthKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strUserId);
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSecret);
		P_GET_PROPERTY(FStrProperty,Z_Param__strAuthToken);
		P_GET_PROPERTY(FStrProperty,Z_Param__strCustomData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetYGS2UserAuthKey(Z_Param__strUserId,Z_Param__strKey,Z_Param__strSecret,Z_Param__strAuthToken,Z_Param__strCustomData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UYGS2RequestBase::execYGS2GenIDForDebug)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__uLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UYGS2RequestBase::YGS2GenIDForDebug(Z_Param__uLength);
		P_NATIVE_END;
	}
	void UYGS2RequestBase::StaticRegisterNativesUYGS2RequestBase()
	{
		UClass* Class = UYGS2RequestBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRef", &UYGS2RequestBase::execAddRef },
			{ "ClearYGS2AuthCache", &UYGS2RequestBase::execClearYGS2AuthCache },
			{ "CreateYGS2Request", &UYGS2RequestBase::execCreateYGS2Request },
			{ "GetErrorString", &UYGS2RequestBase::execGetErrorString },
			{ "GetErrorType", &UYGS2RequestBase::execGetErrorType },
			{ "GetListTotalNum", &UYGS2RequestBase::execGetListTotalNum },
			{ "GetRequestApi", &UYGS2RequestBase::execGetRequestApi },
			{ "GetUrl", &UYGS2RequestBase::execGetUrl },
			{ "GetUserData", &UYGS2RequestBase::execGetUserData },
			{ "GetUserID", &UYGS2RequestBase::execGetUserID },
			{ "IsAuthorizedUser", &UYGS2RequestBase::execIsAuthorizedUser },
			{ "IsBusy", &UYGS2RequestBase::execIsBusy },
			{ "IsCanceled", &UYGS2RequestBase::execIsCanceled },
			{ "IsEnableClientParam", &UYGS2RequestBase::execIsEnableClientParam },
			{ "IsRef", &UYGS2RequestBase::execIsRef },
			{ "IsSuccess", &UYGS2RequestBase::execIsSuccess },
			{ "OnBeginCreate", &UYGS2RequestBase::execOnBeginCreate },
			{ "OnBeginDelete", &UYGS2RequestBase::execOnBeginDelete },
			{ "OnBeginRead", &UYGS2RequestBase::execOnBeginRead },
			{ "OnBeginUpdate", &UYGS2RequestBase::execOnBeginUpdate },
			{ "OnEndCreate", &UYGS2RequestBase::execOnEndCreate },
			{ "OnEndDelete", &UYGS2RequestBase::execOnEndDelete },
			{ "OnEndRead", &UYGS2RequestBase::execOnEndRead },
			{ "OnEndUpdate", &UYGS2RequestBase::execOnEndUpdate },
			{ "RemRef", &UYGS2RequestBase::execRemRef },
			{ "Request", &UYGS2RequestBase::execRequest },
			{ "RequestCreate", &UYGS2RequestBase::execRequestCreate },
			{ "RequestDelete", &UYGS2RequestBase::execRequestDelete },
			{ "RequestRead", &UYGS2RequestBase::execRequestRead },
			{ "RequestUpdate", &UYGS2RequestBase::execRequestUpdate },
			{ "RequestWithArgs", &UYGS2RequestBase::execRequestWithArgs },
			{ "SetDisableSession", &UYGS2RequestBase::execSetDisableSession },
			{ "SetMaxRetry", &UYGS2RequestBase::execSetMaxRetry },
			{ "SetOption", &UYGS2RequestBase::execSetOption },
			{ "SetOptionalURLArgument", &UYGS2RequestBase::execSetOptionalURLArgument },
			{ "SetSSDebugForceError", &UYGS2RequestBase::execSetSSDebugForceError },
			{ "SetTimeout", &UYGS2RequestBase::execSetTimeout },
			{ "SetUserData", &UYGS2RequestBase::execSetUserData },
			{ "SetYGS2AppAuthKey", &UYGS2RequestBase::execSetYGS2AppAuthKey },
			{ "SetYGS2ClientSetupParam", &UYGS2RequestBase::execSetYGS2ClientSetupParam },
			{ "SetYGS2EOSIDs", &UYGS2RequestBase::execSetYGS2EOSIDs },
			{ "SetYGS2UserAuthKey", &UYGS2RequestBase::execSetYGS2UserAuthKey },
			{ "YGS2GenIDForDebug", &UYGS2RequestBase::execYGS2GenIDForDebug },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_AddRef_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_AddRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_AddRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "AddRef", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_AddRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_AddRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_AddRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_AddRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_ClearYGS2AuthCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_ClearYGS2AuthCache_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_ClearYGS2AuthCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "ClearYGS2AuthCache", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_ClearYGS2AuthCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_ClearYGS2AuthCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_ClearYGS2AuthCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_ClearYGS2AuthCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics
	{
		struct YGS2RequestBase_eventCreateYGS2Request_Parms
		{
			UYGS2RequestBase* _pcInst;
			EYGS2Api _enApi;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcInst;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enApi_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enApi;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::NewProp__pcInst = { "_pcInst", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventCreateYGS2Request_Parms, _pcInst), Z_Construct_UClass_UYGS2RequestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::NewProp__enApi_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::NewProp__enApi = { "_enApi", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventCreateYGS2Request_Parms, _enApi), Z_Construct_UEnum_yGS2Client_EYGS2Api, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventCreateYGS2Request_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventCreateYGS2Request_Parms), &Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::NewProp__pcInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::NewProp__enApi_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::NewProp__enApi,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "CreateYGS2Request", nullptr, nullptr, sizeof(YGS2RequestBase_eventCreateYGS2Request_Parms), Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_GetErrorString_Statics
	{
		struct YGS2RequestBase_eventGetErrorString_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_GetErrorString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventGetErrorString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_GetErrorString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_GetErrorString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_GetErrorString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_GetErrorString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "GetErrorString", nullptr, nullptr, sizeof(YGS2RequestBase_eventGetErrorString_Parms), Z_Construct_UFunction_UYGS2RequestBase_GetErrorString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_GetErrorString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_GetErrorString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_GetErrorString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_GetErrorString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_GetErrorString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_GetErrorType_Statics
	{
		struct YGS2RequestBase_eventGetErrorType_Parms
		{
			EYGS2ErrorType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYGS2RequestBase_GetErrorType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYGS2RequestBase_GetErrorType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventGetErrorType_Parms, ReturnValue), Z_Construct_UEnum_yGS2Client_EYGS2ErrorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_GetErrorType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_GetErrorType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_GetErrorType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_GetErrorType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_GetErrorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "GetErrorType", nullptr, nullptr, sizeof(YGS2RequestBase_eventGetErrorType_Parms), Z_Construct_UFunction_UYGS2RequestBase_GetErrorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_GetErrorType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_GetErrorType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_GetErrorType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_GetErrorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_GetErrorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_GetListTotalNum_Statics
	{
		struct YGS2RequestBase_eventGetListTotalNum_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2RequestBase_GetListTotalNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventGetListTotalNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_GetListTotalNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_GetListTotalNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_GetListTotalNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_GetListTotalNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "GetListTotalNum", nullptr, nullptr, sizeof(YGS2RequestBase_eventGetListTotalNum_Parms), Z_Construct_UFunction_UYGS2RequestBase_GetListTotalNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_GetListTotalNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_GetListTotalNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_GetListTotalNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_GetListTotalNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_GetListTotalNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_GetRequestApi_Statics
	{
		struct YGS2RequestBase_eventGetRequestApi_Parms
		{
			EYGS2Api ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYGS2RequestBase_GetRequestApi_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYGS2RequestBase_GetRequestApi_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventGetRequestApi_Parms, ReturnValue), Z_Construct_UEnum_yGS2Client_EYGS2Api, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_GetRequestApi_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_GetRequestApi_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_GetRequestApi_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_GetRequestApi_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_GetRequestApi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "GetRequestApi", nullptr, nullptr, sizeof(YGS2RequestBase_eventGetRequestApi_Parms), Z_Construct_UFunction_UYGS2RequestBase_GetRequestApi_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_GetRequestApi_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_GetRequestApi_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_GetRequestApi_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_GetRequestApi()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_GetRequestApi_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics
	{
		struct YGS2RequestBase_eventGetUrl_Parms
		{
			FString _rstrURL;
			TMap<FString,FString> _rstArguments;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__rstrURL;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__rstArguments_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__rstArguments_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rstArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__rstArguments;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::NewProp__rstrURL = { "_rstrURL", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventGetUrl_Parms, _rstrURL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::NewProp__rstArguments_ValueProp = { "_rstArguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::NewProp__rstArguments_Key_KeyProp = { "_rstArguments_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::NewProp__rstArguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::NewProp__rstArguments = { "_rstArguments", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventGetUrl_Parms, _rstArguments), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::NewProp__rstArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::NewProp__rstArguments_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::NewProp__rstrURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::NewProp__rstArguments_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::NewProp__rstArguments_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::NewProp__rstArguments,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "GetUrl", nullptr, nullptr, sizeof(YGS2RequestBase_eventGetUrl_Parms), Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_GetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_GetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_GetUserData_Statics
	{
		struct YGS2RequestBase_eventGetUserData_Parms
		{
			UObject* _pcUserObject;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYGS2RequestBase_GetUserData_Statics::NewProp__pcUserObject = { "_pcUserObject", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventGetUserData_Parms, _pcUserObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UYGS2RequestBase_GetUserData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventGetUserData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_GetUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventGetUserData_Parms), &Z_Construct_UFunction_UYGS2RequestBase_GetUserData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_GetUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_GetUserData_Statics::NewProp__pcUserObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_GetUserData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_GetUserData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_GetUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "GetUserData", nullptr, nullptr, sizeof(YGS2RequestBase_eventGetUserData_Parms), Z_Construct_UFunction_UYGS2RequestBase_GetUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_GetUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_GetUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_GetUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_GetUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_GetUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_GetUserID_Statics
	{
		struct YGS2RequestBase_eventGetUserID_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_GetUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventGetUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_GetUserID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_GetUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_GetUserID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_GetUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "GetUserID", nullptr, nullptr, sizeof(YGS2RequestBase_eventGetUserID_Parms), Z_Construct_UFunction_UYGS2RequestBase_GetUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_GetUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_GetUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_GetUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_GetUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_GetUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_IsAuthorizedUser_Statics
	{
		struct YGS2RequestBase_eventIsAuthorizedUser_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_IsAuthorizedUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventIsAuthorizedUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_IsAuthorizedUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventIsAuthorizedUser_Parms), &Z_Construct_UFunction_UYGS2RequestBase_IsAuthorizedUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_IsAuthorizedUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_IsAuthorizedUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_IsAuthorizedUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_IsAuthorizedUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "IsAuthorizedUser", nullptr, nullptr, sizeof(YGS2RequestBase_eventIsAuthorizedUser_Parms), Z_Construct_UFunction_UYGS2RequestBase_IsAuthorizedUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_IsAuthorizedUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_IsAuthorizedUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_IsAuthorizedUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_IsAuthorizedUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_IsAuthorizedUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_IsBusy_Statics
	{
		struct YGS2RequestBase_eventIsBusy_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_IsBusy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventIsBusy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_IsBusy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventIsBusy_Parms), &Z_Construct_UFunction_UYGS2RequestBase_IsBusy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_IsBusy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_IsBusy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_IsBusy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_IsBusy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "IsBusy", nullptr, nullptr, sizeof(YGS2RequestBase_eventIsBusy_Parms), Z_Construct_UFunction_UYGS2RequestBase_IsBusy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_IsBusy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_IsBusy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_IsBusy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_IsBusy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_IsBusy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_IsCanceled_Statics
	{
		struct YGS2RequestBase_eventIsCanceled_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_IsCanceled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventIsCanceled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_IsCanceled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventIsCanceled_Parms), &Z_Construct_UFunction_UYGS2RequestBase_IsCanceled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_IsCanceled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_IsCanceled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_IsCanceled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_IsCanceled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "IsCanceled", nullptr, nullptr, sizeof(YGS2RequestBase_eventIsCanceled_Parms), Z_Construct_UFunction_UYGS2RequestBase_IsCanceled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_IsCanceled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_IsCanceled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_IsCanceled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_IsCanceled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_IsCanceled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_IsEnableClientParam_Statics
	{
		struct YGS2RequestBase_eventIsEnableClientParam_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_IsEnableClientParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventIsEnableClientParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_IsEnableClientParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventIsEnableClientParam_Parms), &Z_Construct_UFunction_UYGS2RequestBase_IsEnableClientParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_IsEnableClientParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_IsEnableClientParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_IsEnableClientParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_IsEnableClientParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "IsEnableClientParam", nullptr, nullptr, sizeof(YGS2RequestBase_eventIsEnableClientParam_Parms), Z_Construct_UFunction_UYGS2RequestBase_IsEnableClientParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_IsEnableClientParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_IsEnableClientParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_IsEnableClientParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_IsEnableClientParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_IsEnableClientParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_IsRef_Statics
	{
		struct YGS2RequestBase_eventIsRef_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_IsRef_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventIsRef_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_IsRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventIsRef_Parms), &Z_Construct_UFunction_UYGS2RequestBase_IsRef_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_IsRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_IsRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_IsRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_IsRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "IsRef", nullptr, nullptr, sizeof(YGS2RequestBase_eventIsRef_Parms), Z_Construct_UFunction_UYGS2RequestBase_IsRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_IsRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_IsRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_IsRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_IsRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_IsRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_IsSuccess_Statics
	{
		struct YGS2RequestBase_eventIsSuccess_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_IsSuccess_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventIsSuccess_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_IsSuccess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventIsSuccess_Parms), &Z_Construct_UFunction_UYGS2RequestBase_IsSuccess_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_IsSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_IsSuccess_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_IsSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_IsSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "IsSuccess", nullptr, nullptr, sizeof(YGS2RequestBase_eventIsSuccess_Parms), Z_Construct_UFunction_UYGS2RequestBase_IsSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_IsSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_IsSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_IsSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_IsSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_IsSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_OnBeginCreate_Statics
	{
		struct YGS2RequestBase_eventOnBeginCreate_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_OnBeginCreate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventOnBeginCreate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_OnBeginCreate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventOnBeginCreate_Parms), &Z_Construct_UFunction_UYGS2RequestBase_OnBeginCreate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_OnBeginCreate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_OnBeginCreate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_OnBeginCreate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_OnBeginCreate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "OnBeginCreate", nullptr, nullptr, sizeof(YGS2RequestBase_eventOnBeginCreate_Parms), Z_Construct_UFunction_UYGS2RequestBase_OnBeginCreate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_OnBeginCreate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_OnBeginCreate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_OnBeginCreate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_OnBeginCreate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_OnBeginCreate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_OnBeginDelete_Statics
	{
		struct YGS2RequestBase_eventOnBeginDelete_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_OnBeginDelete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventOnBeginDelete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_OnBeginDelete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventOnBeginDelete_Parms), &Z_Construct_UFunction_UYGS2RequestBase_OnBeginDelete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_OnBeginDelete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_OnBeginDelete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_OnBeginDelete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_OnBeginDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "OnBeginDelete", nullptr, nullptr, sizeof(YGS2RequestBase_eventOnBeginDelete_Parms), Z_Construct_UFunction_UYGS2RequestBase_OnBeginDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_OnBeginDelete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_OnBeginDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_OnBeginDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_OnBeginDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_OnBeginDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_OnBeginRead_Statics
	{
		struct YGS2RequestBase_eventOnBeginRead_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_OnBeginRead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventOnBeginRead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_OnBeginRead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventOnBeginRead_Parms), &Z_Construct_UFunction_UYGS2RequestBase_OnBeginRead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_OnBeginRead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_OnBeginRead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_OnBeginRead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_OnBeginRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "OnBeginRead", nullptr, nullptr, sizeof(YGS2RequestBase_eventOnBeginRead_Parms), Z_Construct_UFunction_UYGS2RequestBase_OnBeginRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_OnBeginRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_OnBeginRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_OnBeginRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_OnBeginRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_OnBeginRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_OnBeginUpdate_Statics
	{
		struct YGS2RequestBase_eventOnBeginUpdate_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_OnBeginUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventOnBeginUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_OnBeginUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventOnBeginUpdate_Parms), &Z_Construct_UFunction_UYGS2RequestBase_OnBeginUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_OnBeginUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_OnBeginUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_OnBeginUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_OnBeginUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "OnBeginUpdate", nullptr, nullptr, sizeof(YGS2RequestBase_eventOnBeginUpdate_Parms), Z_Construct_UFunction_UYGS2RequestBase_OnBeginUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_OnBeginUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_OnBeginUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_OnBeginUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_OnBeginUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_OnBeginUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_OnEndCreate_Statics
	{
		struct YGS2RequestBase_eventOnEndCreate_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_OnEndCreate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventOnEndCreate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_OnEndCreate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventOnEndCreate_Parms), &Z_Construct_UFunction_UYGS2RequestBase_OnEndCreate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_OnEndCreate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_OnEndCreate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_OnEndCreate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_OnEndCreate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "OnEndCreate", nullptr, nullptr, sizeof(YGS2RequestBase_eventOnEndCreate_Parms), Z_Construct_UFunction_UYGS2RequestBase_OnEndCreate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_OnEndCreate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_OnEndCreate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_OnEndCreate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_OnEndCreate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_OnEndCreate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_OnEndDelete_Statics
	{
		struct YGS2RequestBase_eventOnEndDelete_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_OnEndDelete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventOnEndDelete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_OnEndDelete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventOnEndDelete_Parms), &Z_Construct_UFunction_UYGS2RequestBase_OnEndDelete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_OnEndDelete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_OnEndDelete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_OnEndDelete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_OnEndDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "OnEndDelete", nullptr, nullptr, sizeof(YGS2RequestBase_eventOnEndDelete_Parms), Z_Construct_UFunction_UYGS2RequestBase_OnEndDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_OnEndDelete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_OnEndDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_OnEndDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_OnEndDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_OnEndDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_OnEndRead_Statics
	{
		struct YGS2RequestBase_eventOnEndRead_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_OnEndRead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventOnEndRead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_OnEndRead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventOnEndRead_Parms), &Z_Construct_UFunction_UYGS2RequestBase_OnEndRead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_OnEndRead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_OnEndRead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_OnEndRead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_OnEndRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "OnEndRead", nullptr, nullptr, sizeof(YGS2RequestBase_eventOnEndRead_Parms), Z_Construct_UFunction_UYGS2RequestBase_OnEndRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_OnEndRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_OnEndRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_OnEndRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_OnEndRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_OnEndRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_OnEndUpdate_Statics
	{
		struct YGS2RequestBase_eventOnEndUpdate_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_OnEndUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventOnEndUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_OnEndUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventOnEndUpdate_Parms), &Z_Construct_UFunction_UYGS2RequestBase_OnEndUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_OnEndUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_OnEndUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_OnEndUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_OnEndUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "OnEndUpdate", nullptr, nullptr, sizeof(YGS2RequestBase_eventOnEndUpdate_Parms), Z_Construct_UFunction_UYGS2RequestBase_OnEndUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_OnEndUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_OnEndUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_OnEndUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_OnEndUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_OnEndUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_RemRef_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_RemRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_RemRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "RemRef", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_RemRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_RemRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_RemRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_RemRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_Request_Statics
	{
		struct YGS2RequestBase_eventRequest_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_Request_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_Request_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventRequest_Parms), &Z_Construct_UFunction_UYGS2RequestBase_Request_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_Request_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_Request_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_Request_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_Request_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "Request", nullptr, nullptr, sizeof(YGS2RequestBase_eventRequest_Parms), Z_Construct_UFunction_UYGS2RequestBase_Request_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_Request_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_Request_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_Request_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_Request()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_Request_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_RequestCreate_Statics
	{
		struct YGS2RequestBase_eventRequestCreate_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_RequestCreate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventRequestCreate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_RequestCreate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventRequestCreate_Parms), &Z_Construct_UFunction_UYGS2RequestBase_RequestCreate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_RequestCreate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_RequestCreate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_RequestCreate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_RequestCreate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "RequestCreate", nullptr, nullptr, sizeof(YGS2RequestBase_eventRequestCreate_Parms), Z_Construct_UFunction_UYGS2RequestBase_RequestCreate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_RequestCreate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_RequestCreate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_RequestCreate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_RequestCreate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_RequestCreate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_RequestDelete_Statics
	{
		struct YGS2RequestBase_eventRequestDelete_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_RequestDelete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventRequestDelete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_RequestDelete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventRequestDelete_Parms), &Z_Construct_UFunction_UYGS2RequestBase_RequestDelete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_RequestDelete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_RequestDelete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_RequestDelete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_RequestDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "RequestDelete", nullptr, nullptr, sizeof(YGS2RequestBase_eventRequestDelete_Parms), Z_Construct_UFunction_UYGS2RequestBase_RequestDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_RequestDelete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_RequestDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_RequestDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_RequestDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_RequestDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_RequestRead_Statics
	{
		struct YGS2RequestBase_eventRequestRead_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_RequestRead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventRequestRead_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_RequestRead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventRequestRead_Parms), &Z_Construct_UFunction_UYGS2RequestBase_RequestRead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_RequestRead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_RequestRead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_RequestRead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_RequestRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "RequestRead", nullptr, nullptr, sizeof(YGS2RequestBase_eventRequestRead_Parms), Z_Construct_UFunction_UYGS2RequestBase_RequestRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_RequestRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_RequestRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_RequestRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_RequestRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_RequestRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_RequestUpdate_Statics
	{
		struct YGS2RequestBase_eventRequestUpdate_Parms
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
	void Z_Construct_UFunction_UYGS2RequestBase_RequestUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventRequestUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_RequestUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventRequestUpdate_Parms), &Z_Construct_UFunction_UYGS2RequestBase_RequestUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_RequestUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_RequestUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_RequestUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_RequestUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "RequestUpdate", nullptr, nullptr, sizeof(YGS2RequestBase_eventRequestUpdate_Parms), Z_Construct_UFunction_UYGS2RequestBase_RequestUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_RequestUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_RequestUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_RequestUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_RequestUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_RequestUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics
	{
		struct YGS2RequestBase_eventRequestWithArgs_Parms
		{
			TMap<FString,FString> _rstArguments;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__rstArguments_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__rstArguments_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rstArguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__rstArguments;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::NewProp__rstArguments_ValueProp = { "_rstArguments", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::NewProp__rstArguments_Key_KeyProp = { "_rstArguments_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::NewProp__rstArguments_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::NewProp__rstArguments = { "_rstArguments", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventRequestWithArgs_Parms, _rstArguments), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::NewProp__rstArguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::NewProp__rstArguments_MetaData)) };
	void Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventRequestWithArgs_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventRequestWithArgs_Parms), &Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::NewProp__rstArguments_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::NewProp__rstArguments_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::NewProp__rstArguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "RequestWithArgs", nullptr, nullptr, sizeof(YGS2RequestBase_eventRequestWithArgs_Parms), Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_SetDisableSession_Statics
	{
		struct YGS2RequestBase_eventSetDisableSession_Parms
		{
			bool UseDisableSession;
		};
		static void NewProp_UseDisableSession_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseDisableSession;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYGS2RequestBase_SetDisableSession_Statics::NewProp_UseDisableSession_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventSetDisableSession_Parms*)Obj)->UseDisableSession = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetDisableSession_Statics::NewProp_UseDisableSession = { "UseDisableSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventSetDisableSession_Parms), &Z_Construct_UFunction_UYGS2RequestBase_SetDisableSession_Statics::NewProp_UseDisableSession_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_SetDisableSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetDisableSession_Statics::NewProp_UseDisableSession,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetDisableSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_SetDisableSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "SetDisableSession", nullptr, nullptr, sizeof(YGS2RequestBase_eventSetDisableSession_Parms), Z_Construct_UFunction_UYGS2RequestBase_SetDisableSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetDisableSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetDisableSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetDisableSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_SetDisableSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_SetDisableSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_SetMaxRetry_Statics
	{
		struct YGS2RequestBase_eventSetMaxRetry_Parms
		{
			int32 _sMaxRetryNum;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sMaxRetryNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetMaxRetry_Statics::NewProp__sMaxRetryNum = { "_sMaxRetryNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventSetMaxRetry_Parms, _sMaxRetryNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_SetMaxRetry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetMaxRetry_Statics::NewProp__sMaxRetryNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetMaxRetry_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_SetMaxRetry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "SetMaxRetry", nullptr, nullptr, sizeof(YGS2RequestBase_eventSetMaxRetry_Parms), Z_Construct_UFunction_UYGS2RequestBase_SetMaxRetry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetMaxRetry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetMaxRetry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetMaxRetry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_SetMaxRetry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_SetMaxRetry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_SetOption_Statics
	{
		struct YGS2RequestBase_eventSetOption_Parms
		{
			FString _rstrURL;
			EYGS2RequestOptionType _enOption;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__rstrURL;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enOption_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetOption_Statics::NewProp__rstrURL = { "_rstrURL", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventSetOption_Parms, _rstrURL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetOption_Statics::NewProp__enOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetOption_Statics::NewProp__enOption = { "_enOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventSetOption_Parms, _enOption), Z_Construct_UEnum_yGS2Client_EYGS2RequestOptionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_SetOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetOption_Statics::NewProp__rstrURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetOption_Statics::NewProp__enOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetOption_Statics::NewProp__enOption,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetOption_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_SetOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "SetOption", nullptr, nullptr, sizeof(YGS2RequestBase_eventSetOption_Parms), Z_Construct_UFunction_UYGS2RequestBase_SetOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_SetOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_SetOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics
	{
		struct YGS2RequestBase_eventSetOptionalURLArgument_Parms
		{
			FString _strArgs;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strArgs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strArgs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics::NewProp__strArgs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics::NewProp__strArgs = { "_strArgs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventSetOptionalURLArgument_Parms, _strArgs), METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics::NewProp__strArgs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics::NewProp__strArgs_MetaData)) };
	void Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventSetOptionalURLArgument_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventSetOptionalURLArgument_Parms), &Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics::NewProp__strArgs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "SetOptionalURLArgument", nullptr, nullptr, sizeof(YGS2RequestBase_eventSetOptionalURLArgument_Parms), Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_SetSSDebugForceError_Statics
	{
		struct YGS2RequestBase_eventSetSSDebugForceError_Parms
		{
			bool Flag;
		};
		static void NewProp_Flag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UYGS2RequestBase_SetSSDebugForceError_Statics::NewProp_Flag_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventSetSSDebugForceError_Parms*)Obj)->Flag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetSSDebugForceError_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventSetSSDebugForceError_Parms), &Z_Construct_UFunction_UYGS2RequestBase_SetSSDebugForceError_Statics::NewProp_Flag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_SetSSDebugForceError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetSSDebugForceError_Statics::NewProp_Flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetSSDebugForceError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_SetSSDebugForceError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "SetSSDebugForceError", nullptr, nullptr, sizeof(YGS2RequestBase_eventSetSSDebugForceError_Parms), Z_Construct_UFunction_UYGS2RequestBase_SetSSDebugForceError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetSSDebugForceError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetSSDebugForceError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetSSDebugForceError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_SetSSDebugForceError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_SetSSDebugForceError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_SetTimeout_Statics
	{
		struct YGS2RequestBase_eventSetTimeout_Parms
		{
			float _uTimeOut;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__uTimeOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetTimeout_Statics::NewProp__uTimeOut = { "_uTimeOut", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventSetTimeout_Parms, _uTimeOut), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_SetTimeout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetTimeout_Statics::NewProp__uTimeOut,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_SetTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "SetTimeout", nullptr, nullptr, sizeof(YGS2RequestBase_eventSetTimeout_Parms), Z_Construct_UFunction_UYGS2RequestBase_SetTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetTimeout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_SetTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_SetTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_SetUserData_Statics
	{
		struct YGS2RequestBase_eventSetUserData_Parms
		{
			UObject* _pcUserObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetUserData_Statics::NewProp__pcUserObject = { "_pcUserObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventSetUserData_Parms, _pcUserObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_SetUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetUserData_Statics::NewProp__pcUserObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetUserData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_SetUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "SetUserData", nullptr, nullptr, sizeof(YGS2RequestBase_eventSetUserData_Parms), Z_Construct_UFunction_UYGS2RequestBase_SetUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_SetUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_SetUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics
	{
		struct YGS2RequestBase_eventSetYGS2AppAuthKey_Parms
		{
			FString _strKey;
			FString _strSecret;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSecret;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventSetYGS2AppAuthKey_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::NewProp__strKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::NewProp__strSecret_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::NewProp__strSecret = { "_strSecret", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventSetYGS2AppAuthKey_Parms, _strSecret), METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::NewProp__strSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::NewProp__strSecret_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::NewProp__strSecret,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "SetYGS2AppAuthKey", nullptr, nullptr, sizeof(YGS2RequestBase_eventSetYGS2AppAuthKey_Parms), Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics
	{
		struct YGS2RequestBase_eventSetYGS2ClientSetupParam_Parms
		{
			FYGS2ClientSetupParam _stParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics::NewProp__stParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics::NewProp__stParam = { "_stParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventSetYGS2ClientSetupParam_Parms, _stParam), Z_Construct_UScriptStruct_FYGS2ClientSetupParam, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics::NewProp__stParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics::NewProp__stParam_MetaData)) };
	void Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((YGS2RequestBase_eventSetYGS2ClientSetupParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(YGS2RequestBase_eventSetYGS2ClientSetupParam_Parms), &Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics::NewProp__stParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "SetYGS2ClientSetupParam", nullptr, nullptr, sizeof(YGS2RequestBase_eventSetYGS2ClientSetupParam_Parms), Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics
	{
		struct YGS2RequestBase_eventSetYGS2EOSIDs_Parms
		{
			FString _strEpicAccountID;
			FString _strProductUserID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strEpicAccountID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strEpicAccountID;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::NewProp__strEpicAccountID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::NewProp__strEpicAccountID = { "_strEpicAccountID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventSetYGS2EOSIDs_Parms, _strEpicAccountID), METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::NewProp__strEpicAccountID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::NewProp__strEpicAccountID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventSetYGS2EOSIDs_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::NewProp__strProductUserID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::NewProp__strEpicAccountID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::NewProp__strProductUserID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "SetYGS2EOSIDs", nullptr, nullptr, sizeof(YGS2RequestBase_eventSetYGS2EOSIDs_Parms), Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics
	{
		struct YGS2RequestBase_eventSetYGS2UserAuthKey_Parms
		{
			FString _strUserId;
			FString _strKey;
			FString _strSecret;
			FString _strAuthToken;
			FString _strCustomData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strUserId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSecret_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSecret;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strAuthToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strAuthToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strCustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strCustomData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strUserId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strUserId = { "_strUserId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventSetYGS2UserAuthKey_Parms, _strUserId), METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strUserId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventSetYGS2UserAuthKey_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strSecret_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strSecret = { "_strSecret", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventSetYGS2UserAuthKey_Parms, _strSecret), METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strSecret_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strSecret_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strAuthToken_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strAuthToken = { "_strAuthToken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventSetYGS2UserAuthKey_Parms, _strAuthToken), METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strAuthToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strAuthToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strCustomData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strCustomData = { "_strCustomData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventSetYGS2UserAuthKey_Parms, _strCustomData), METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strCustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strCustomData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strUserId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strSecret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strAuthToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::NewProp__strCustomData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "SetYGS2UserAuthKey", nullptr, nullptr, sizeof(YGS2RequestBase_eventSetYGS2UserAuthKey_Parms), Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UYGS2RequestBase_YGS2GenIDForDebug_Statics
	{
		struct YGS2RequestBase_eventYGS2GenIDForDebug_Parms
		{
			int32 _uLength;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__uLength;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UYGS2RequestBase_YGS2GenIDForDebug_Statics::NewProp__uLength = { "_uLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventYGS2GenIDForDebug_Parms, _uLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UYGS2RequestBase_YGS2GenIDForDebug_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(YGS2RequestBase_eventYGS2GenIDForDebug_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UYGS2RequestBase_YGS2GenIDForDebug_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_YGS2GenIDForDebug_Statics::NewProp__uLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UYGS2RequestBase_YGS2GenIDForDebug_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UYGS2RequestBase_YGS2GenIDForDebug_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UYGS2RequestBase_YGS2GenIDForDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UYGS2RequestBase, nullptr, "YGS2GenIDForDebug", nullptr, nullptr, sizeof(YGS2RequestBase_eventYGS2GenIDForDebug_Parms), Z_Construct_UFunction_UYGS2RequestBase_YGS2GenIDForDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_YGS2GenIDForDebug_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UYGS2RequestBase_YGS2GenIDForDebug_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UYGS2RequestBase_YGS2GenIDForDebug_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UYGS2RequestBase_YGS2GenIDForDebug()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UYGS2RequestBase_YGS2GenIDForDebug_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UYGS2RequestBase_NoRegister()
	{
		return UYGS2RequestBase::StaticClass();
	}
	struct Z_Construct_UClass_UYGS2RequestBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YGS2ResponseDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_YGS2ResponseDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mErrDialogData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_mErrDialogData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mErrRetryEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_mErrRetryEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYGS2RequestBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UYGS2RequestBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UYGS2RequestBase_AddRef, "AddRef" }, // 1892964960
		{ &Z_Construct_UFunction_UYGS2RequestBase_ClearYGS2AuthCache, "ClearYGS2AuthCache" }, // 2583123969
		{ &Z_Construct_UFunction_UYGS2RequestBase_CreateYGS2Request, "CreateYGS2Request" }, // 610002789
		{ &Z_Construct_UFunction_UYGS2RequestBase_GetErrorString, "GetErrorString" }, // 1841619528
		{ &Z_Construct_UFunction_UYGS2RequestBase_GetErrorType, "GetErrorType" }, // 4285165153
		{ &Z_Construct_UFunction_UYGS2RequestBase_GetListTotalNum, "GetListTotalNum" }, // 2562372992
		{ &Z_Construct_UFunction_UYGS2RequestBase_GetRequestApi, "GetRequestApi" }, // 3660431203
		{ &Z_Construct_UFunction_UYGS2RequestBase_GetUrl, "GetUrl" }, // 576254761
		{ &Z_Construct_UFunction_UYGS2RequestBase_GetUserData, "GetUserData" }, // 1376523507
		{ &Z_Construct_UFunction_UYGS2RequestBase_GetUserID, "GetUserID" }, // 2059824879
		{ &Z_Construct_UFunction_UYGS2RequestBase_IsAuthorizedUser, "IsAuthorizedUser" }, // 2200881165
		{ &Z_Construct_UFunction_UYGS2RequestBase_IsBusy, "IsBusy" }, // 3758058016
		{ &Z_Construct_UFunction_UYGS2RequestBase_IsCanceled, "IsCanceled" }, // 4102066376
		{ &Z_Construct_UFunction_UYGS2RequestBase_IsEnableClientParam, "IsEnableClientParam" }, // 3265409376
		{ &Z_Construct_UFunction_UYGS2RequestBase_IsRef, "IsRef" }, // 4057859315
		{ &Z_Construct_UFunction_UYGS2RequestBase_IsSuccess, "IsSuccess" }, // 2782300944
		{ &Z_Construct_UFunction_UYGS2RequestBase_OnBeginCreate, "OnBeginCreate" }, // 2063372329
		{ &Z_Construct_UFunction_UYGS2RequestBase_OnBeginDelete, "OnBeginDelete" }, // 965913717
		{ &Z_Construct_UFunction_UYGS2RequestBase_OnBeginRead, "OnBeginRead" }, // 483604738
		{ &Z_Construct_UFunction_UYGS2RequestBase_OnBeginUpdate, "OnBeginUpdate" }, // 1296588574
		{ &Z_Construct_UFunction_UYGS2RequestBase_OnEndCreate, "OnEndCreate" }, // 2120398246
		{ &Z_Construct_UFunction_UYGS2RequestBase_OnEndDelete, "OnEndDelete" }, // 3610896626
		{ &Z_Construct_UFunction_UYGS2RequestBase_OnEndRead, "OnEndRead" }, // 3883832609
		{ &Z_Construct_UFunction_UYGS2RequestBase_OnEndUpdate, "OnEndUpdate" }, // 3937969930
		{ &Z_Construct_UFunction_UYGS2RequestBase_RemRef, "RemRef" }, // 3966914399
		{ &Z_Construct_UFunction_UYGS2RequestBase_Request, "Request" }, // 808450743
		{ &Z_Construct_UFunction_UYGS2RequestBase_RequestCreate, "RequestCreate" }, // 1454271953
		{ &Z_Construct_UFunction_UYGS2RequestBase_RequestDelete, "RequestDelete" }, // 3564770323
		{ &Z_Construct_UFunction_UYGS2RequestBase_RequestRead, "RequestRead" }, // 1947818976
		{ &Z_Construct_UFunction_UYGS2RequestBase_RequestUpdate, "RequestUpdate" }, // 4185149236
		{ &Z_Construct_UFunction_UYGS2RequestBase_RequestWithArgs, "RequestWithArgs" }, // 580418535
		{ &Z_Construct_UFunction_UYGS2RequestBase_SetDisableSession, "SetDisableSession" }, // 2656916991
		{ &Z_Construct_UFunction_UYGS2RequestBase_SetMaxRetry, "SetMaxRetry" }, // 2842406744
		{ &Z_Construct_UFunction_UYGS2RequestBase_SetOption, "SetOption" }, // 3073021742
		{ &Z_Construct_UFunction_UYGS2RequestBase_SetOptionalURLArgument, "SetOptionalURLArgument" }, // 567978202
		{ &Z_Construct_UFunction_UYGS2RequestBase_SetSSDebugForceError, "SetSSDebugForceError" }, // 1467295073
		{ &Z_Construct_UFunction_UYGS2RequestBase_SetTimeout, "SetTimeout" }, // 4096332394
		{ &Z_Construct_UFunction_UYGS2RequestBase_SetUserData, "SetUserData" }, // 1163100882
		{ &Z_Construct_UFunction_UYGS2RequestBase_SetYGS2AppAuthKey, "SetYGS2AppAuthKey" }, // 3224198799
		{ &Z_Construct_UFunction_UYGS2RequestBase_SetYGS2ClientSetupParam, "SetYGS2ClientSetupParam" }, // 1059820275
		{ &Z_Construct_UFunction_UYGS2RequestBase_SetYGS2EOSIDs, "SetYGS2EOSIDs" }, // 52876429
		{ &Z_Construct_UFunction_UYGS2RequestBase_SetYGS2UserAuthKey, "SetYGS2UserAuthKey" }, // 2023294459
		{ &Z_Construct_UFunction_UYGS2RequestBase_YGS2GenIDForDebug, "YGS2GenIDForDebug" }, // 2721516933
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2RequestBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "YGS2RequestBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2RequestBase_Statics::NewProp_YGS2ResponseDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2RequestBase" },
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYGS2RequestBase_Statics::NewProp_YGS2ResponseDispatcher = { "YGS2ResponseDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYGS2RequestBase, YGS2ResponseDispatcher), Z_Construct_UDelegateFunction_yGS2Client_YGS2ResponseDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYGS2RequestBase_Statics::NewProp_YGS2ResponseDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2RequestBase_Statics::NewProp_YGS2ResponseDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2RequestBase_Statics::NewProp_mErrDialogData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2RequestBase" },
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UYGS2RequestBase_Statics::NewProp_mErrDialogData = { "mErrDialogData", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYGS2RequestBase, mErrDialogData), Z_Construct_UScriptStruct_FHttpRequest_ErrDialogData, METADATA_PARAMS(Z_Construct_UClass_UYGS2RequestBase_Statics::NewProp_mErrDialogData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2RequestBase_Statics::NewProp_mErrDialogData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYGS2RequestBase_Statics::NewProp_mErrRetryEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2RequestBase" },
		{ "ModuleRelativePath", "Public/YGS2RequestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UYGS2RequestBase_Statics::NewProp_mErrRetryEvent = { "mErrRetryEvent", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYGS2RequestBase, mErrRetryEvent), Z_Construct_UDelegateFunction_yGS2Client_ErrorRequestRetryEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UYGS2RequestBase_Statics::NewProp_mErrRetryEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2RequestBase_Statics::NewProp_mErrRetryEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYGS2RequestBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYGS2RequestBase_Statics::NewProp_YGS2ResponseDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYGS2RequestBase_Statics::NewProp_mErrDialogData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYGS2RequestBase_Statics::NewProp_mErrRetryEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYGS2RequestBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYGS2RequestBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYGS2RequestBase_Statics::ClassParams = {
		&UYGS2RequestBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UYGS2RequestBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2RequestBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UYGS2RequestBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYGS2RequestBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYGS2RequestBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYGS2RequestBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYGS2RequestBase, 3741453864);
	template<> YGS2CLIENT_API UClass* StaticClass<UYGS2RequestBase>()
	{
		return UYGS2RequestBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYGS2RequestBase(Z_Construct_UClass_UYGS2RequestBase, &UYGS2RequestBase::StaticClass, TEXT("/Script/yGS2Client"), TEXT("UYGS2RequestBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYGS2RequestBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
