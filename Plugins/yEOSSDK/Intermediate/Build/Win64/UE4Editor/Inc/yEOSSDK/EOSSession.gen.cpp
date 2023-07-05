// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSession.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSession() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSession_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSession();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSMetricsSettings();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2P_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionSearchResults_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionSettings();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAPIRequestCallback_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAttribute_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PCreatedDispatcher__DelegateSignature();
	YEOSSDK_API UFunction* Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PDestroyDispatcher__DelegateSignature();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionOwnRequest_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSSession::execBeginPlayerSession)
	{
		P_GET_STRUCT_REF(FEOSMetricsSettings,Z_Param_Out__rstSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BeginPlayerSession(Z_Param_Out__rstSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execCreateSessionP2P)
	{
		P_GET_OBJECT_REF(UEOSSessionP2P,Z_Param_Out__pcSessionP2P);
		P_GET_OBJECT_REF(UEOSCommunityInfoBase,Z_Param_Out__pcCommunityInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateSessionP2P(Z_Param_Out__pcSessionP2P,Z_Param_Out__pcCommunityInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execEndPlayerSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EndPlayerSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execGenerateRandomStringForSessionName)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out__rstrCommunityInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEOSSession::GenerateRandomStringForSessionName(Z_Param_Out__rstrCommunityInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execGetAccountDisplayNameForSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccountDisplayNameForSession();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execGetDetailsByInvite)
	{
		P_GET_OBJECT_REF(UEOSCommunityInfoBase,Z_Param_Out__pcCommunityInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDetailsByInvite(Z_Param_Out__pcCommunityInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execGetDetailsBySearchIndex)
	{
		P_GET_OBJECT_REF(UEOSCommunityInfoBase,Z_Param_Out__pcCommunityInfo);
		P_GET_OBJECT(UEOSSessionSearchResults,Z_Param__pcSearchResults);
		P_GET_PROPERTY(FIntProperty,Z_Param__sSearchIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDetailsBySearchIndex(Z_Param_Out__pcCommunityInfo,Z_Param__pcSearchResults,Z_Param__sSearchIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execGetDetailsCurrent)
	{
		P_GET_OBJECT_REF(UEOSCommunityInfoBase,Z_Param_Out__pcCommunityInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSessionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDetailsCurrent(Z_Param_Out__pcCommunityInfo,Z_Param__strSessionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execGetLastMetricsSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEOSMetricsSettings*)Z_Param__Result=P_THIS->GetLastMetricsSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execRequestCreateSession)
	{
		P_GET_OBJECT_REF(UEOSCommunityInfoBase,Z_Param_Out__pcCommunityInfo);
		P_GET_STRUCT_REF(FEOSSessionSettings,Z_Param_Out__stSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestCreateSession(Z_Param_Out__pcCommunityInfo,Z_Param_Out__stSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execRequestDestroySession)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_UBOOL(Z_Param__bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDestroySession(Z_Param__pcCommunityInfo,Z_Param__bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execRequestEndSession)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestEndSession(Z_Param__pcCommunityInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execRequestInviteSession)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestInviteSession(Z_Param__pcCommunityInfo,Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execRequestJoinSession)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_UBOOL(Z_Param__bPresenceSession);
		P_GET_OBJECT(UEOSAPIRequestCallback,Z_Param__Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestJoinSession(Z_Param__pcCommunityInfo,Z_Param__bPresenceSession,Z_Param__Callback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execRequestLeaveSession)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param__PUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestLeaveSession(Z_Param__pcCommunityInfo,Z_Param__PUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execRequestQueryInvites)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestQueryInvites();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execRequestRegistUser)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestRegistUser(Z_Param__pcCommunityInfo,Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execRequestRejectInvite)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestRejectInvite(Z_Param__pcCommunityInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execRequestRemovetAttribute)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_TARRAY_REF(FString,Z_Param_Out__cAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestRemovetAttribute(Z_Param__pcCommunityInfo,Z_Param_Out__cAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execRequestSearchSession)
	{
		P_GET_OBJECT_REF(UEOSSessionSearchResults,Z_Param_Out__pcSearchResults);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSearchName);
		P_GET_TARRAY_REF(UEOSAttribute*,Z_Param_Out__cAttributes);
		P_GET_PROPERTY(FIntProperty,Z_Param__sMaxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSearchSession(Z_Param_Out__pcSearchResults,Z_Param__strSearchName,Z_Param_Out__cAttributes,Z_Param__sMaxResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execRequestSearchSessionBySessionID)
	{
		P_GET_OBJECT_REF(UEOSSessionSearchResults,Z_Param_Out__pcSearchResults);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSearchName);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSessionID);
		P_GET_PROPERTY(FIntProperty,Z_Param__sMaxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSearchSessionBySessionID(Z_Param_Out__pcSearchResults,Z_Param__strSearchName,Z_Param__strSessionID,Z_Param__sMaxResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execRequestSetAttribute)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_TARRAY_REF(UEOSAttribute*,Z_Param_Out__cAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSetAttribute(Z_Param__pcCommunityInfo,Z_Param_Out__cAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execRequestStartSession)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestStartSession(Z_Param__pcCommunityInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execRequestUnregistUser)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_GET_UBOOL(Z_Param__bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestUnregistUser(Z_Param__pcCommunityInfo,Z_Param__strProductUserID,Z_Param__bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execRequestUpdateSession)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_STRUCT_REF(FEOSSessionSettings,Z_Param_Out__stSetting);
		P_GET_UBOOL(Z_Param__bForce);
		P_GET_OBJECT(UEOSAPIRequestCallback,Z_Param__Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestUpdateSession(Z_Param__pcCommunityInfo,Z_Param_Out__stSetting,Z_Param__bForce,Z_Param__Callback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execSetApiVersionForMetrics)
	{
		P_GET_STRUCT(FEOSMetricsAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSSession::SetApiVersionForMetrics(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execSetApiVersionForSession)
	{
		P_GET_STRUCT(FEOSSessionAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSSession::SetApiVersionForSession(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execSetAutoCreationSessionP2P)
	{
		P_GET_UBOOL(Z_Param__bUseSessionP2P);
		P_GET_UBOOL(Z_Param__bUseSessionP2PWithAutoConnection);
		P_GET_PROPERTY(FByteProperty,Z_Param__uAdditionalFunctionTypeBits);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoCreationSessionP2P(Z_Param__bUseSessionP2P,Z_Param__bUseSessionP2PWithAutoConnection,Z_Param__uAdditionalFunctionTypeBits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execSetSessionP2PChannelList)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out__cChannelList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSessionP2PChannelList(Z_Param_Out__cChannelList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSSession::execSetupInternalCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupInternalCallback();
		P_NATIVE_END;
	}
	void UEOSSession::StaticRegisterNativesUEOSSession()
	{
		UClass* Class = UEOSSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPlayerSession", &UEOSSession::execBeginPlayerSession },
			{ "CreateSessionP2P", &UEOSSession::execCreateSessionP2P },
			{ "EndPlayerSession", &UEOSSession::execEndPlayerSession },
			{ "GenerateRandomStringForSessionName", &UEOSSession::execGenerateRandomStringForSessionName },
			{ "GetAccountDisplayNameForSession", &UEOSSession::execGetAccountDisplayNameForSession },
			{ "GetDetailsByInvite", &UEOSSession::execGetDetailsByInvite },
			{ "GetDetailsBySearchIndex", &UEOSSession::execGetDetailsBySearchIndex },
			{ "GetDetailsCurrent", &UEOSSession::execGetDetailsCurrent },
			{ "GetLastMetricsSettings", &UEOSSession::execGetLastMetricsSettings },
			{ "RequestCreateSession", &UEOSSession::execRequestCreateSession },
			{ "RequestDestroySession", &UEOSSession::execRequestDestroySession },
			{ "RequestEndSession", &UEOSSession::execRequestEndSession },
			{ "RequestInviteSession", &UEOSSession::execRequestInviteSession },
			{ "RequestJoinSession", &UEOSSession::execRequestJoinSession },
			{ "RequestLeaveSession", &UEOSSession::execRequestLeaveSession },
			{ "RequestQueryInvites", &UEOSSession::execRequestQueryInvites },
			{ "RequestRegistUser", &UEOSSession::execRequestRegistUser },
			{ "RequestRejectInvite", &UEOSSession::execRequestRejectInvite },
			{ "RequestRemovetAttribute", &UEOSSession::execRequestRemovetAttribute },
			{ "RequestSearchSession", &UEOSSession::execRequestSearchSession },
			{ "RequestSearchSessionBySessionID", &UEOSSession::execRequestSearchSessionBySessionID },
			{ "RequestSetAttribute", &UEOSSession::execRequestSetAttribute },
			{ "RequestStartSession", &UEOSSession::execRequestStartSession },
			{ "RequestUnregistUser", &UEOSSession::execRequestUnregistUser },
			{ "RequestUpdateSession", &UEOSSession::execRequestUpdateSession },
			{ "SetApiVersionForMetrics", &UEOSSession::execSetApiVersionForMetrics },
			{ "SetApiVersionForSession", &UEOSSession::execSetApiVersionForSession },
			{ "SetAutoCreationSessionP2P", &UEOSSession::execSetAutoCreationSessionP2P },
			{ "SetSessionP2PChannelList", &UEOSSession::execSetSessionP2PChannelList },
			{ "SetupInternalCallback", &UEOSSession::execSetupInternalCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics
	{
		struct EOSSession_eventBeginPlayerSession_Parms
		{
			FEOSMetricsSettings _rstSettings;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rstSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstSettings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics::NewProp__rstSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics::NewProp__rstSettings = { "_rstSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventBeginPlayerSession_Parms, _rstSettings), Z_Construct_UScriptStruct_FEOSMetricsSettings, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics::NewProp__rstSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics::NewProp__rstSettings_MetaData)) };
	void Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventBeginPlayerSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventBeginPlayerSession_Parms), &Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics::NewProp__rstSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "BeginPlayerSession", nullptr, nullptr, sizeof(EOSSession_eventBeginPlayerSession_Parms), Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_BeginPlayerSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_BeginPlayerSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_CreateSessionP2P_Statics
	{
		struct EOSSession_eventCreateSessionP2P_Parms
		{
			UEOSSessionP2P* _pcSessionP2P;
			UEOSCommunityInfoBase* _pcCommunityInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSessionP2P;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_CreateSessionP2P_Statics::NewProp__pcSessionP2P = { "_pcSessionP2P", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventCreateSessionP2P_Parms, _pcSessionP2P), Z_Construct_UClass_UEOSSessionP2P_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_CreateSessionP2P_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventCreateSessionP2P_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSession_CreateSessionP2P_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventCreateSessionP2P_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_CreateSessionP2P_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventCreateSessionP2P_Parms), &Z_Construct_UFunction_UEOSSession_CreateSessionP2P_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_CreateSessionP2P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_CreateSessionP2P_Statics::NewProp__pcSessionP2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_CreateSessionP2P_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_CreateSessionP2P_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_CreateSessionP2P_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_CreateSessionP2P_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "CreateSessionP2P", nullptr, nullptr, sizeof(EOSSession_eventCreateSessionP2P_Parms), Z_Construct_UFunction_UEOSSession_CreateSessionP2P_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_CreateSessionP2P_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_CreateSessionP2P_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_CreateSessionP2P_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_CreateSessionP2P()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_CreateSessionP2P_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_EndPlayerSession_Statics
	{
		struct EOSSession_eventEndPlayerSession_Parms
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
	void Z_Construct_UFunction_UEOSSession_EndPlayerSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventEndPlayerSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_EndPlayerSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventEndPlayerSession_Parms), &Z_Construct_UFunction_UEOSSession_EndPlayerSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_EndPlayerSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_EndPlayerSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_EndPlayerSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_EndPlayerSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "EndPlayerSession", nullptr, nullptr, sizeof(EOSSession_eventEndPlayerSession_Parms), Z_Construct_UFunction_UEOSSession_EndPlayerSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_EndPlayerSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_EndPlayerSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_EndPlayerSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_EndPlayerSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_EndPlayerSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_GenerateRandomStringForSessionName_Statics
	{
		struct EOSSession_eventGenerateRandomStringForSessionName_Parms
		{
			FString _rstrCommunityInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__rstrCommunityInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSession_GenerateRandomStringForSessionName_Statics::NewProp__rstrCommunityInfo = { "_rstrCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventGenerateRandomStringForSessionName_Parms, _rstrCommunityInfo), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSession_GenerateRandomStringForSessionName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventGenerateRandomStringForSessionName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_GenerateRandomStringForSessionName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventGenerateRandomStringForSessionName_Parms), &Z_Construct_UFunction_UEOSSession_GenerateRandomStringForSessionName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_GenerateRandomStringForSessionName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_GenerateRandomStringForSessionName_Statics::NewProp__rstrCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_GenerateRandomStringForSessionName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_GenerateRandomStringForSessionName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_GenerateRandomStringForSessionName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "GenerateRandomStringForSessionName", nullptr, nullptr, sizeof(EOSSession_eventGenerateRandomStringForSessionName_Parms), Z_Construct_UFunction_UEOSSession_GenerateRandomStringForSessionName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_GenerateRandomStringForSessionName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_GenerateRandomStringForSessionName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_GenerateRandomStringForSessionName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_GenerateRandomStringForSessionName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_GenerateRandomStringForSessionName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_GetAccountDisplayNameForSession_Statics
	{
		struct EOSSession_eventGetAccountDisplayNameForSession_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSession_GetAccountDisplayNameForSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventGetAccountDisplayNameForSession_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_GetAccountDisplayNameForSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_GetAccountDisplayNameForSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_GetAccountDisplayNameForSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_GetAccountDisplayNameForSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "GetAccountDisplayNameForSession", nullptr, nullptr, sizeof(EOSSession_eventGetAccountDisplayNameForSession_Parms), Z_Construct_UFunction_UEOSSession_GetAccountDisplayNameForSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_GetAccountDisplayNameForSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_GetAccountDisplayNameForSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_GetAccountDisplayNameForSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_GetAccountDisplayNameForSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_GetAccountDisplayNameForSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_GetDetailsByInvite_Statics
	{
		struct EOSSession_eventGetDetailsByInvite_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_GetDetailsByInvite_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventGetDetailsByInvite_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSession_GetDetailsByInvite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventGetDetailsByInvite_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_GetDetailsByInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventGetDetailsByInvite_Parms), &Z_Construct_UFunction_UEOSSession_GetDetailsByInvite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_GetDetailsByInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_GetDetailsByInvite_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_GetDetailsByInvite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_GetDetailsByInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_GetDetailsByInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "GetDetailsByInvite", nullptr, nullptr, sizeof(EOSSession_eventGetDetailsByInvite_Parms), Z_Construct_UFunction_UEOSSession_GetDetailsByInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_GetDetailsByInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_GetDetailsByInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_GetDetailsByInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_GetDetailsByInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_GetDetailsByInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics
	{
		struct EOSSession_eventGetDetailsBySearchIndex_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			UEOSSessionSearchResults* _pcSearchResults;
			int32 _sSearchIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSearchResults;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sSearchIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventGetDetailsBySearchIndex_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::NewProp__pcSearchResults = { "_pcSearchResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventGetDetailsBySearchIndex_Parms, _pcSearchResults), Z_Construct_UClass_UEOSSessionSearchResults_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::NewProp__sSearchIndex = { "_sSearchIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventGetDetailsBySearchIndex_Parms, _sSearchIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventGetDetailsBySearchIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventGetDetailsBySearchIndex_Parms), &Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::NewProp__pcSearchResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::NewProp__sSearchIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "GetDetailsBySearchIndex", nullptr, nullptr, sizeof(EOSSession_eventGetDetailsBySearchIndex_Parms), Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics
	{
		struct EOSSession_eventGetDetailsCurrent_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			FString _strSessionName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSessionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSessionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventGetDetailsCurrent_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::NewProp__strSessionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::NewProp__strSessionName = { "_strSessionName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventGetDetailsCurrent_Parms, _strSessionName), METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::NewProp__strSessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::NewProp__strSessionName_MetaData)) };
	void Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventGetDetailsCurrent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventGetDetailsCurrent_Parms), &Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::NewProp__strSessionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "GetDetailsCurrent", nullptr, nullptr, sizeof(EOSSession_eventGetDetailsCurrent_Parms), Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_GetDetailsCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_GetDetailsCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_GetLastMetricsSettings_Statics
	{
		struct EOSSession_eventGetLastMetricsSettings_Parms
		{
			FEOSMetricsSettings ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSession_GetLastMetricsSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventGetLastMetricsSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FEOSMetricsSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_GetLastMetricsSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_GetLastMetricsSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_GetLastMetricsSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_GetLastMetricsSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "GetLastMetricsSettings", nullptr, nullptr, sizeof(EOSSession_eventGetLastMetricsSettings_Parms), Z_Construct_UFunction_UEOSSession_GetLastMetricsSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_GetLastMetricsSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_GetLastMetricsSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_GetLastMetricsSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_GetLastMetricsSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_GetLastMetricsSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics
	{
		struct EOSSession_eventRequestCreateSession_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			FEOSSessionSettings _stSetting;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stSetting;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestCreateSession_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::NewProp__stSetting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::NewProp__stSetting = { "_stSetting", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestCreateSession_Parms, _stSetting), Z_Construct_UScriptStruct_FEOSSessionSettings, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::NewProp__stSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::NewProp__stSetting_MetaData)) };
	void Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventRequestCreateSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestCreateSession_Parms), &Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::NewProp__stSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "RequestCreateSession", nullptr, nullptr, sizeof(EOSSession_eventRequestCreateSession_Parms), Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_RequestCreateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_RequestCreateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics
	{
		struct EOSSession_eventRequestDestroySession_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			bool _bForce;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static void NewProp__bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bForce;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestDestroySession_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::NewProp__bForce_SetBit(void* Obj)
	{
		((EOSSession_eventRequestDestroySession_Parms*)Obj)->_bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::NewProp__bForce = { "_bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestDestroySession_Parms), &Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::NewProp__bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventRequestDestroySession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestDestroySession_Parms), &Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::NewProp__bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "RequestDestroySession", nullptr, nullptr, sizeof(EOSSession_eventRequestDestroySession_Parms), Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_RequestDestroySession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_RequestDestroySession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_RequestEndSession_Statics
	{
		struct EOSSession_eventRequestEndSession_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestEndSession_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestEndSession_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSession_RequestEndSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventRequestEndSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestEndSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestEndSession_Parms), &Z_Construct_UFunction_UEOSSession_RequestEndSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_RequestEndSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestEndSession_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestEndSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestEndSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_RequestEndSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "RequestEndSession", nullptr, nullptr, sizeof(EOSSession_eventRequestEndSession_Parms), Z_Construct_UFunction_UEOSSession_RequestEndSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestEndSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestEndSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestEndSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_RequestEndSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_RequestEndSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics
	{
		struct EOSSession_eventRequestInviteSession_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			FString _strProductUserID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestInviteSession_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestInviteSession_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventRequestInviteSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestInviteSession_Parms), &Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "RequestInviteSession", nullptr, nullptr, sizeof(EOSSession_eventRequestInviteSession_Parms), Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_RequestInviteSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_RequestInviteSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics
	{
		struct EOSSession_eventRequestJoinSession_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			bool _bPresenceSession;
			UEOSAPIRequestCallback* _Callback;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static void NewProp__bPresenceSession_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bPresenceSession;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Callback;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestJoinSession_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::NewProp__bPresenceSession_SetBit(void* Obj)
	{
		((EOSSession_eventRequestJoinSession_Parms*)Obj)->_bPresenceSession = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::NewProp__bPresenceSession = { "_bPresenceSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestJoinSession_Parms), &Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::NewProp__bPresenceSession_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::NewProp__Callback = { "_Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestJoinSession_Parms, _Callback), Z_Construct_UClass_UEOSAPIRequestCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventRequestJoinSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestJoinSession_Parms), &Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::NewProp__bPresenceSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::NewProp__Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "RequestJoinSession", nullptr, nullptr, sizeof(EOSSession_eventRequestJoinSession_Parms), Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_RequestJoinSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_RequestJoinSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics
	{
		struct EOSSession_eventRequestLeaveSession_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			FString _PUID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__PUID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestLeaveSession_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::NewProp__PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::NewProp__PUID = { "_PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestLeaveSession_Parms, _PUID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::NewProp__PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::NewProp__PUID_MetaData)) };
	void Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventRequestLeaveSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestLeaveSession_Parms), &Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::NewProp__PUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "RequestLeaveSession", nullptr, nullptr, sizeof(EOSSession_eventRequestLeaveSession_Parms), Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_RequestLeaveSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_RequestLeaveSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_RequestQueryInvites_Statics
	{
		struct EOSSession_eventRequestQueryInvites_Parms
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
	void Z_Construct_UFunction_UEOSSession_RequestQueryInvites_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventRequestQueryInvites_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestQueryInvites_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestQueryInvites_Parms), &Z_Construct_UFunction_UEOSSession_RequestQueryInvites_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_RequestQueryInvites_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestQueryInvites_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestQueryInvites_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_RequestQueryInvites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "RequestQueryInvites", nullptr, nullptr, sizeof(EOSSession_eventRequestQueryInvites_Parms), Z_Construct_UFunction_UEOSSession_RequestQueryInvites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestQueryInvites_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestQueryInvites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestQueryInvites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_RequestQueryInvites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_RequestQueryInvites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics
	{
		struct EOSSession_eventRequestRegistUser_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			FString _strProductUserID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestRegistUser_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestRegistUser_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventRequestRegistUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestRegistUser_Parms), &Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "RequestRegistUser", nullptr, nullptr, sizeof(EOSSession_eventRequestRegistUser_Parms), Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_RequestRegistUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_RequestRegistUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_RequestRejectInvite_Statics
	{
		struct EOSSession_eventRequestRejectInvite_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestRejectInvite_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestRejectInvite_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSession_RequestRejectInvite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventRequestRejectInvite_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestRejectInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestRejectInvite_Parms), &Z_Construct_UFunction_UEOSSession_RequestRejectInvite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_RequestRejectInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestRejectInvite_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestRejectInvite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestRejectInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_RequestRejectInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "RequestRejectInvite", nullptr, nullptr, sizeof(EOSSession_eventRequestRejectInvite_Parms), Z_Construct_UFunction_UEOSSession_RequestRejectInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestRejectInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestRejectInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestRejectInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_RequestRejectInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_RequestRejectInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics
	{
		struct EOSSession_eventRequestRemovetAttribute_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			TArray<FString> _cAttributes;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__cAttributes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cAttributes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestRemovetAttribute_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::NewProp__cAttributes_Inner = { "_cAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::NewProp__cAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::NewProp__cAttributes = { "_cAttributes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestRemovetAttribute_Parms, _cAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::NewProp__cAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::NewProp__cAttributes_MetaData)) };
	void Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventRequestRemovetAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestRemovetAttribute_Parms), &Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::NewProp__cAttributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::NewProp__cAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "RequestRemovetAttribute", nullptr, nullptr, sizeof(EOSSession_eventRequestRemovetAttribute_Parms), Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics
	{
		struct EOSSession_eventRequestSearchSession_Parms
		{
			UEOSSessionSearchResults* _pcSearchResults;
			FString _strSearchName;
			TArray<UEOSAttribute*> _cAttributes;
			int32 _sMaxResults;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSearchResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSearchName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSearchName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cAttributes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cAttributes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sMaxResults;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp__pcSearchResults = { "_pcSearchResults", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestSearchSession_Parms, _pcSearchResults), Z_Construct_UClass_UEOSSessionSearchResults_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp__strSearchName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp__strSearchName = { "_strSearchName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestSearchSession_Parms, _strSearchName), METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp__strSearchName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp__strSearchName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp__cAttributes_Inner = { "_cAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSAttribute_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp__cAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp__cAttributes = { "_cAttributes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestSearchSession_Parms, _cAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp__cAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp__cAttributes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp__sMaxResults = { "_sMaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestSearchSession_Parms, _sMaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventRequestSearchSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestSearchSession_Parms), &Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp__pcSearchResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp__strSearchName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp__cAttributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp__cAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp__sMaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "RequestSearchSession", nullptr, nullptr, sizeof(EOSSession_eventRequestSearchSession_Parms), Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_RequestSearchSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_RequestSearchSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics
	{
		struct EOSSession_eventRequestSearchSessionBySessionID_Parms
		{
			UEOSSessionSearchResults* _pcSearchResults;
			FString _strSearchName;
			FString _strSessionID;
			int32 _sMaxResults;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSearchResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSearchName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSearchName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSessionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSessionID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sMaxResults;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp__pcSearchResults = { "_pcSearchResults", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestSearchSessionBySessionID_Parms, _pcSearchResults), Z_Construct_UClass_UEOSSessionSearchResults_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp__strSearchName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp__strSearchName = { "_strSearchName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestSearchSessionBySessionID_Parms, _strSearchName), METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp__strSearchName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp__strSearchName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp__strSessionID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp__strSessionID = { "_strSessionID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestSearchSessionBySessionID_Parms, _strSessionID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp__strSessionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp__strSessionID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp__sMaxResults = { "_sMaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestSearchSessionBySessionID_Parms, _sMaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventRequestSearchSessionBySessionID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestSearchSessionBySessionID_Parms), &Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp__pcSearchResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp__strSearchName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp__strSessionID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp__sMaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "RequestSearchSessionBySessionID", nullptr, nullptr, sizeof(EOSSession_eventRequestSearchSessionBySessionID_Parms), Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics
	{
		struct EOSSession_eventRequestSetAttribute_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			TArray<UEOSAttribute*> _cAttributes;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cAttributes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cAttributes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cAttributes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestSetAttribute_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::NewProp__cAttributes_Inner = { "_cAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSAttribute_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::NewProp__cAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::NewProp__cAttributes = { "_cAttributes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestSetAttribute_Parms, _cAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::NewProp__cAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::NewProp__cAttributes_MetaData)) };
	void Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventRequestSetAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestSetAttribute_Parms), &Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::NewProp__cAttributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::NewProp__cAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "RequestSetAttribute", nullptr, nullptr, sizeof(EOSSession_eventRequestSetAttribute_Parms), Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_RequestSetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_RequestSetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_RequestStartSession_Statics
	{
		struct EOSSession_eventRequestStartSession_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestStartSession_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestStartSession_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSession_RequestStartSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventRequestStartSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestStartSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestStartSession_Parms), &Z_Construct_UFunction_UEOSSession_RequestStartSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_RequestStartSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestStartSession_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestStartSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestStartSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_RequestStartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "RequestStartSession", nullptr, nullptr, sizeof(EOSSession_eventRequestStartSession_Parms), Z_Construct_UFunction_UEOSSession_RequestStartSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestStartSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestStartSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestStartSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_RequestStartSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_RequestStartSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics
	{
		struct EOSSession_eventRequestUnregistUser_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			FString _strProductUserID;
			bool _bForce;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static void NewProp__bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bForce;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestUnregistUser_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestUnregistUser_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::NewProp__bForce_SetBit(void* Obj)
	{
		((EOSSession_eventRequestUnregistUser_Parms*)Obj)->_bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::NewProp__bForce = { "_bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestUnregistUser_Parms), &Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::NewProp__bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventRequestUnregistUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestUnregistUser_Parms), &Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::NewProp__bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "RequestUnregistUser", nullptr, nullptr, sizeof(EOSSession_eventRequestUnregistUser_Parms), Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_RequestUnregistUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_RequestUnregistUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics
	{
		struct EOSSession_eventRequestUpdateSession_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			FEOSSessionSettings _stSetting;
			bool _bForce;
			UEOSAPIRequestCallback* _Callback;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stSetting;
		static void NewProp__bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bForce;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Callback;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestUpdateSession_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::NewProp__stSetting_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::NewProp__stSetting = { "_stSetting", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestUpdateSession_Parms, _stSetting), Z_Construct_UScriptStruct_FEOSSessionSettings, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::NewProp__stSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::NewProp__stSetting_MetaData)) };
	void Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::NewProp__bForce_SetBit(void* Obj)
	{
		((EOSSession_eventRequestUpdateSession_Parms*)Obj)->_bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::NewProp__bForce = { "_bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestUpdateSession_Parms), &Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::NewProp__bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::NewProp__Callback = { "_Callback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventRequestUpdateSession_Parms, _Callback), Z_Construct_UClass_UEOSAPIRequestCallback_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventRequestUpdateSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventRequestUpdateSession_Parms), &Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::NewProp__stSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::NewProp__bForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::NewProp__Callback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "RequestUpdateSession", nullptr, nullptr, sizeof(EOSSession_eventRequestUpdateSession_Parms), Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_RequestUpdateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_RequestUpdateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_SetApiVersionForMetrics_Statics
	{
		struct EOSSession_eventSetApiVersionForMetrics_Parms
		{
			FEOSMetricsAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSession_SetApiVersionForMetrics_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventSetApiVersionForMetrics_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSMetricsAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_SetApiVersionForMetrics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_SetApiVersionForMetrics_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_SetApiVersionForMetrics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_SetApiVersionForMetrics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "SetApiVersionForMetrics", nullptr, nullptr, sizeof(EOSSession_eventSetApiVersionForMetrics_Parms), Z_Construct_UFunction_UEOSSession_SetApiVersionForMetrics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_SetApiVersionForMetrics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_SetApiVersionForMetrics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_SetApiVersionForMetrics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_SetApiVersionForMetrics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_SetApiVersionForMetrics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_SetApiVersionForSession_Statics
	{
		struct EOSSession_eventSetApiVersionForSession_Parms
		{
			FEOSSessionAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSSession_SetApiVersionForSession_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventSetApiVersionForSession_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSSessionAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_SetApiVersionForSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_SetApiVersionForSession_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_SetApiVersionForSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_SetApiVersionForSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "SetApiVersionForSession", nullptr, nullptr, sizeof(EOSSession_eventSetApiVersionForSession_Parms), Z_Construct_UFunction_UEOSSession_SetApiVersionForSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_SetApiVersionForSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_SetApiVersionForSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_SetApiVersionForSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_SetApiVersionForSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_SetApiVersionForSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics
	{
		struct EOSSession_eventSetAutoCreationSessionP2P_Parms
		{
			bool _bUseSessionP2P;
			bool _bUseSessionP2PWithAutoConnection;
			uint8 _uAdditionalFunctionTypeBits;
		};
		static void NewProp__bUseSessionP2P_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bUseSessionP2P;
		static void NewProp__bUseSessionP2PWithAutoConnection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bUseSessionP2PWithAutoConnection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__uAdditionalFunctionTypeBits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::NewProp__bUseSessionP2P_SetBit(void* Obj)
	{
		((EOSSession_eventSetAutoCreationSessionP2P_Parms*)Obj)->_bUseSessionP2P = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::NewProp__bUseSessionP2P = { "_bUseSessionP2P", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventSetAutoCreationSessionP2P_Parms), &Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::NewProp__bUseSessionP2P_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::NewProp__bUseSessionP2PWithAutoConnection_SetBit(void* Obj)
	{
		((EOSSession_eventSetAutoCreationSessionP2P_Parms*)Obj)->_bUseSessionP2PWithAutoConnection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::NewProp__bUseSessionP2PWithAutoConnection = { "_bUseSessionP2PWithAutoConnection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventSetAutoCreationSessionP2P_Parms), &Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::NewProp__bUseSessionP2PWithAutoConnection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::NewProp__uAdditionalFunctionTypeBits = { "_uAdditionalFunctionTypeBits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventSetAutoCreationSessionP2P_Parms, _uAdditionalFunctionTypeBits), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::NewProp__bUseSessionP2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::NewProp__bUseSessionP2PWithAutoConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::NewProp__uAdditionalFunctionTypeBits,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "SetAutoCreationSessionP2P", nullptr, nullptr, sizeof(EOSSession_eventSetAutoCreationSessionP2P_Parms), Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics
	{
		struct EOSSession_eventSetSessionP2PChannelList_Parms
		{
			TArray<uint8> _cChannelList;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__cChannelList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cChannelList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__cChannelList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::NewProp__cChannelList_Inner = { "_cChannelList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::NewProp__cChannelList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::NewProp__cChannelList = { "_cChannelList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSSession_eventSetSessionP2PChannelList_Parms, _cChannelList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::NewProp__cChannelList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::NewProp__cChannelList_MetaData)) };
	void Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventSetSessionP2PChannelList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventSetSessionP2PChannelList_Parms), &Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::NewProp__cChannelList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::NewProp__cChannelList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "SetSessionP2PChannelList", nullptr, nullptr, sizeof(EOSSession_eventSetSessionP2PChannelList_Parms), Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSSession_SetupInternalCallback_Statics
	{
		struct EOSSession_eventSetupInternalCallback_Parms
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
	void Z_Construct_UFunction_UEOSSession_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSSession_eventSetupInternalCallback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSSession_SetupInternalCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSSession_eventSetupInternalCallback_Parms), &Z_Construct_UFunction_UEOSSession_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSSession_SetupInternalCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSSession_SetupInternalCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSSession_SetupInternalCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSSession_SetupInternalCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSSession, nullptr, "SetupInternalCallback", nullptr, nullptr, sizeof(EOSSession_eventSetupInternalCallback_Parms), Z_Construct_UFunction_UEOSSession_SetupInternalCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_SetupInternalCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSSession_SetupInternalCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSSession_SetupInternalCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSSession_SetupInternalCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSSession_SetupInternalCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSSession_NoRegister()
	{
		return UEOSSession::StaticClass();
	}
	struct Z_Construct_UClass_UEOSSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionP2PCreatedDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SessionP2PCreatedDispatcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionP2PDestroyDispatcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SessionP2PDestroyDispatcher;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cOwnRequests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cOwnRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cOwnRequests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_stLastMetricsSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_stLastMetricsSettings;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_cChannelList_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_cChannelList_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cChannelList_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_m_cChannelList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugSessionCreateErr_MetaData[];
#endif
		static void NewProp_DebugSessionCreateErr_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugSessionCreateErr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugSessionDestroyErr_MetaData[];
#endif
		static void NewProp_DebugSessionDestroyErr_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugSessionDestroyErr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugSessionJoinErr_MetaData[];
#endif
		static void NewProp_DebugSessionJoinErr_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugSessionJoinErr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugSessionLeaveErr_MetaData[];
#endif
		static void NewProp_DebugSessionLeaveErr_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugSessionLeaveErr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugSessionStartErr_MetaData[];
#endif
		static void NewProp_DebugSessionStartErr_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DebugSessionStartErr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommunityBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSSession_BeginPlayerSession, "BeginPlayerSession" }, // 3412120544
		{ &Z_Construct_UFunction_UEOSSession_CreateSessionP2P, "CreateSessionP2P" }, // 2341892538
		{ &Z_Construct_UFunction_UEOSSession_EndPlayerSession, "EndPlayerSession" }, // 2649327120
		{ &Z_Construct_UFunction_UEOSSession_GenerateRandomStringForSessionName, "GenerateRandomStringForSessionName" }, // 1732359876
		{ &Z_Construct_UFunction_UEOSSession_GetAccountDisplayNameForSession, "GetAccountDisplayNameForSession" }, // 2536010473
		{ &Z_Construct_UFunction_UEOSSession_GetDetailsByInvite, "GetDetailsByInvite" }, // 2564049482
		{ &Z_Construct_UFunction_UEOSSession_GetDetailsBySearchIndex, "GetDetailsBySearchIndex" }, // 2658552693
		{ &Z_Construct_UFunction_UEOSSession_GetDetailsCurrent, "GetDetailsCurrent" }, // 918595772
		{ &Z_Construct_UFunction_UEOSSession_GetLastMetricsSettings, "GetLastMetricsSettings" }, // 3364252514
		{ &Z_Construct_UFunction_UEOSSession_RequestCreateSession, "RequestCreateSession" }, // 1035016802
		{ &Z_Construct_UFunction_UEOSSession_RequestDestroySession, "RequestDestroySession" }, // 1027580111
		{ &Z_Construct_UFunction_UEOSSession_RequestEndSession, "RequestEndSession" }, // 1366764382
		{ &Z_Construct_UFunction_UEOSSession_RequestInviteSession, "RequestInviteSession" }, // 1345842075
		{ &Z_Construct_UFunction_UEOSSession_RequestJoinSession, "RequestJoinSession" }, // 4238508364
		{ &Z_Construct_UFunction_UEOSSession_RequestLeaveSession, "RequestLeaveSession" }, // 3732637729
		{ &Z_Construct_UFunction_UEOSSession_RequestQueryInvites, "RequestQueryInvites" }, // 4041325287
		{ &Z_Construct_UFunction_UEOSSession_RequestRegistUser, "RequestRegistUser" }, // 3296511091
		{ &Z_Construct_UFunction_UEOSSession_RequestRejectInvite, "RequestRejectInvite" }, // 3698468992
		{ &Z_Construct_UFunction_UEOSSession_RequestRemovetAttribute, "RequestRemovetAttribute" }, // 3420064901
		{ &Z_Construct_UFunction_UEOSSession_RequestSearchSession, "RequestSearchSession" }, // 596986980
		{ &Z_Construct_UFunction_UEOSSession_RequestSearchSessionBySessionID, "RequestSearchSessionBySessionID" }, // 2316939280
		{ &Z_Construct_UFunction_UEOSSession_RequestSetAttribute, "RequestSetAttribute" }, // 106032133
		{ &Z_Construct_UFunction_UEOSSession_RequestStartSession, "RequestStartSession" }, // 1186750423
		{ &Z_Construct_UFunction_UEOSSession_RequestUnregistUser, "RequestUnregistUser" }, // 48293005
		{ &Z_Construct_UFunction_UEOSSession_RequestUpdateSession, "RequestUpdateSession" }, // 3188654041
		{ &Z_Construct_UFunction_UEOSSession_SetApiVersionForMetrics, "SetApiVersionForMetrics" }, // 2568818739
		{ &Z_Construct_UFunction_UEOSSession_SetApiVersionForSession, "SetApiVersionForSession" }, // 1263822511
		{ &Z_Construct_UFunction_UEOSSession_SetAutoCreationSessionP2P, "SetAutoCreationSessionP2P" }, // 2980213749
		{ &Z_Construct_UFunction_UEOSSession_SetSessionP2PChannelList, "SetSessionP2PChannelList" }, // 1533590986
		{ &Z_Construct_UFunction_UEOSSession_SetupInternalCallback, "SetupInternalCallback" }, // 700239607
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSSession.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSession_Statics::NewProp_SessionP2PCreatedDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSession" },
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSSession_Statics::NewProp_SessionP2PCreatedDispatcher = { "SessionP2PCreatedDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSession, SessionP2PCreatedDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PCreatedDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSSession_Statics::NewProp_SessionP2PCreatedDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSession_Statics::NewProp_SessionP2PCreatedDispatcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSession_Statics::NewProp_SessionP2PDestroyDispatcher_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSession" },
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEOSSession_Statics::NewProp_SessionP2PDestroyDispatcher = { "SessionP2PDestroyDispatcher", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSession, SessionP2PDestroyDispatcher), Z_Construct_UDelegateFunction_yEOSSDK_EOSSessionP2PDestroyDispatcher__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEOSSession_Statics::NewProp_SessionP2PDestroyDispatcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSession_Statics::NewProp_SessionP2PDestroyDispatcher_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSSession_Statics::NewProp_m_cOwnRequests_Inner = { "m_cOwnRequests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSSessionOwnRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSession_Statics::NewProp_m_cOwnRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSession" },
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEOSSession_Statics::NewProp_m_cOwnRequests = { "m_cOwnRequests", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSession, m_cOwnRequests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSSession_Statics::NewProp_m_cOwnRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSession_Statics::NewProp_m_cOwnRequests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSession_Statics::NewProp_m_stLastMetricsSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSession" },
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEOSSession_Statics::NewProp_m_stLastMetricsSettings = { "m_stLastMetricsSettings", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSession, m_stLastMetricsSettings), Z_Construct_UScriptStruct_FEOSMetricsSettings, METADATA_PARAMS(Z_Construct_UClass_UEOSSession_Statics::NewProp_m_stLastMetricsSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSession_Statics::NewProp_m_stLastMetricsSettings_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEOSSession_Statics::NewProp_m_cChannelList_ValueProp = { "m_cChannelList", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEOSSession_Statics::NewProp_m_cChannelList_Key_KeyProp = { "m_cChannelList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSession_Statics::NewProp_m_cChannelList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSession" },
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEOSSession_Statics::NewProp_m_cChannelList = { "m_cChannelList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSSession, m_cChannelList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSSession_Statics::NewProp_m_cChannelList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSession_Statics::NewProp_m_cChannelList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionCreateErr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSession" },
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	void Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionCreateErr_SetBit(void* Obj)
	{
		((UEOSSession*)Obj)->DebugSessionCreateErr = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionCreateErr = { "DebugSessionCreateErr", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEOSSession), &Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionCreateErr_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionCreateErr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionCreateErr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionDestroyErr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSession" },
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	void Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionDestroyErr_SetBit(void* Obj)
	{
		((UEOSSession*)Obj)->DebugSessionDestroyErr = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionDestroyErr = { "DebugSessionDestroyErr", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEOSSession), &Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionDestroyErr_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionDestroyErr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionDestroyErr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionJoinErr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSession" },
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	void Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionJoinErr_SetBit(void* Obj)
	{
		((UEOSSession*)Obj)->DebugSessionJoinErr = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionJoinErr = { "DebugSessionJoinErr", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEOSSession), &Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionJoinErr_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionJoinErr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionJoinErr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionLeaveErr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSession" },
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	void Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionLeaveErr_SetBit(void* Obj)
	{
		((UEOSSession*)Obj)->DebugSessionLeaveErr = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionLeaveErr = { "DebugSessionLeaveErr", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEOSSession), &Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionLeaveErr_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionLeaveErr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionLeaveErr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionStartErr_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSession" },
		{ "ModuleRelativePath", "Public/EOSSession.h" },
	};
#endif
	void Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionStartErr_SetBit(void* Obj)
	{
		((UEOSSession*)Obj)->DebugSessionStartErr = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionStartErr = { "DebugSessionStartErr", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEOSSession), &Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionStartErr_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionStartErr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionStartErr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSession_Statics::NewProp_SessionP2PCreatedDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSession_Statics::NewProp_SessionP2PDestroyDispatcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSession_Statics::NewProp_m_cOwnRequests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSession_Statics::NewProp_m_cOwnRequests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSession_Statics::NewProp_m_stLastMetricsSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSession_Statics::NewProp_m_cChannelList_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSession_Statics::NewProp_m_cChannelList_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSession_Statics::NewProp_m_cChannelList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionCreateErr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionDestroyErr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionJoinErr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionLeaveErr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSSession_Statics::NewProp_DebugSessionStartErr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSSession>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSSession_Statics::ClassParams = {
		&UEOSSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSession_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSSession()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSSession_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSSession, 460560285);
	template<> YEOSSDK_API UClass* StaticClass<UEOSSession>()
	{
		return UEOSSession::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSSession(Z_Construct_UClass_UEOSSession, &UEOSSession::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSSession"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSSession);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
