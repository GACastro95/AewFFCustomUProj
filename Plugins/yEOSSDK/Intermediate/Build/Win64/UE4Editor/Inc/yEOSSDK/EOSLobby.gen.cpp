// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSLobby.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLobby() {}
// Cross Module References
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLobby_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLobby();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityBase();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase_NoRegister();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSCommunityPermission();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLobbySearchResults_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAttribute_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLobbyOwnRequest_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEOSLobby::execGetDetailsByInvite)
	{
		P_GET_OBJECT_REF(UEOSCommunityInfoBase,Z_Param_Out__pcCommunityInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDetailsByInvite(Z_Param_Out__pcCommunityInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execGetDetailsCurrent)
	{
		P_GET_OBJECT_REF(UEOSCommunityInfoBase,Z_Param_Out__pcCommunityInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param__strLobbyID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDetailsCurrent(Z_Param_Out__pcCommunityInfo,Z_Param__strLobbyID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execGetVoiceChatEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVoiceChatEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execGetVoiceChatStartMuted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetVoiceChatStartMuted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRemoveInvite)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_CommunityID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveInvite(Z_Param_CommunityID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestBlockVoice)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_OBJECT(UEOSCommunityUserBase,Z_Param__pcUser);
		P_GET_UBOOL(Z_Param__bBlock);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestBlockVoice(Z_Param__pcCommunityInfo,Z_Param__pcUser,Z_Param__bBlock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestChangeOwner)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_OBJECT(UEOSCommunityUserBase,Z_Param__pcUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestChangeOwner(Z_Param__pcCommunityInfo,Z_Param__pcUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestClearBlockVoiceFlag)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_OBJECT(UEOSCommunityUserBase,Z_Param__pcUser);
		P_GET_ENUM(EEOSLobbyUserMuteFlag,Z_Param__bMuteFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestClearBlockVoiceFlag(Z_Param__pcCommunityInfo,Z_Param__pcUser,EEOSLobbyUserMuteFlag(Z_Param__bMuteFlag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestClearMuteVoiceFlag)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_OBJECT(UEOSCommunityUserBase,Z_Param__pcUser);
		P_GET_ENUM(EEOSLobbyUserMuteFlag,Z_Param__bMuteFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestClearMuteVoiceFlag(Z_Param__pcCommunityInfo,Z_Param__pcUser,EEOSLobbyUserMuteFlag(Z_Param__bMuteFlag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestCreateLobby)
	{
		P_GET_OBJECT_REF(UEOSCommunityInfoBase,Z_Param_Out__pcCommunityInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_GET_PROPERTY(FIntProperty,Z_Param__sMaxMembers);
		P_GET_ENUM(EEOSCommunityPermission,Z_Param__enPermission);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestCreateLobby(Z_Param_Out__pcCommunityInfo,Z_Param__strKey,Z_Param__sMaxMembers,EEOSCommunityPermission(Z_Param__enPermission));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestDeleteUser)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_OBJECT(UEOSCommunityUserBase,Z_Param__pcUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDeleteUser(Z_Param__pcCommunityInfo,Z_Param__pcUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestDestroyLobby)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDestroyLobby(Z_Param__pcCommunityInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestDestroyLobbyForce)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__strKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestDestroyLobbyForce(Z_Param__strKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestInviteLobby)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestInviteLobby(Z_Param__pcCommunityInfo,Z_Param__strProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestJoinLobby)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestJoinLobby(Z_Param__pcCommunityInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestLeaveAllLobbies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestLeaveAllLobbies();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestLeaveLobby)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestLeaveLobby(Z_Param__pcCommunityInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestMuteVoiceSelf)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_UBOOL(Z_Param__bMute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestMuteVoiceSelf(Z_Param__pcCommunityInfo,Z_Param__bMute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestMuteVoiceUser)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_OBJECT(UEOSCommunityUserBase,Z_Param__pcUser);
		P_GET_UBOOL(Z_Param__bMute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestMuteVoiceUser(Z_Param__pcCommunityInfo,Z_Param__pcUser,Z_Param__bMute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestQueryInvites)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestQueryInvites();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestRejectInvite)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestRejectInvite(Z_Param__pcCommunityInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestRemovetAttribute)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_TARRAY_REF(FString,Z_Param_Out__cAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestRemovetAttribute(Z_Param__pcCommunityInfo,Z_Param_Out__cAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestRemovetMemberAttribute)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_TARRAY_REF(FString,Z_Param_Out__cAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestRemovetMemberAttribute(Z_Param__pcCommunityInfo,Z_Param_Out__cAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestSearchLobby)
	{
		P_GET_OBJECT_REF(UEOSLobbySearchResults,Z_Param_Out__pcSearchResults);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSearchName);
		P_GET_TARRAY_REF(UEOSAttribute*,Z_Param_Out__cAttributes);
		P_GET_PROPERTY(FIntProperty,Z_Param__sMaxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSearchLobby(Z_Param_Out__pcSearchResults,Z_Param__strSearchName,Z_Param_Out__cAttributes,Z_Param__sMaxResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestSearchLobbyByLobbyID)
	{
		P_GET_OBJECT_REF(UEOSLobbySearchResults,Z_Param_Out__pcSearchResults);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSearchName);
		P_GET_PROPERTY(FStrProperty,Z_Param__strLobbyID);
		P_GET_PROPERTY(FIntProperty,Z_Param__sMaxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSearchLobbyByLobbyID(Z_Param_Out__pcSearchResults,Z_Param__strSearchName,Z_Param__strLobbyID,Z_Param__sMaxResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestSearchLobbyByUser)
	{
		P_GET_OBJECT_REF(UEOSLobbySearchResults,Z_Param_Out__pcSearchResults);
		P_GET_PROPERTY(FStrProperty,Z_Param__strSearchName);
		P_GET_PROPERTY(FStrProperty,Z_Param__strProductUserID);
		P_GET_PROPERTY(FIntProperty,Z_Param__sMaxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSearchLobbyByUser(Z_Param_Out__pcSearchResults,Z_Param__strSearchName,Z_Param__strProductUserID,Z_Param__sMaxResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestSetAttribute)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_TARRAY_REF(UEOSAttribute*,Z_Param_Out__cAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSetAttribute(Z_Param__pcCommunityInfo,Z_Param_Out__cAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestSetBlockVoiceFlag)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_OBJECT(UEOSCommunityUserBase,Z_Param__pcUser);
		P_GET_ENUM(EEOSLobbyUserMuteFlag,Z_Param__bMuteFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSetBlockVoiceFlag(Z_Param__pcCommunityInfo,Z_Param__pcUser,EEOSLobbyUserMuteFlag(Z_Param__bMuteFlag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestSetLobbyParam)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_PROPERTY(FIntProperty,Z_Param__sMaxMembers);
		P_GET_ENUM(EEOSCommunityPermission,Z_Param__enPermission);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSetLobbyParam(Z_Param__pcCommunityInfo,Z_Param__sMaxMembers,EEOSCommunityPermission(Z_Param__enPermission));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestSetMemberAttribute)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_TARRAY_REF(UEOSAttribute*,Z_Param_Out__cAttributes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSetMemberAttribute(Z_Param__pcCommunityInfo,Z_Param_Out__cAttributes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execRequestSetMuteVoiceFlag)
	{
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param__pcCommunityInfo);
		P_GET_OBJECT(UEOSCommunityUserBase,Z_Param__pcUser);
		P_GET_ENUM(EEOSLobbyUserMuteFlag,Z_Param__bMuteFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestSetMuteVoiceFlag(Z_Param__pcCommunityInfo,Z_Param__pcUser,EEOSLobbyUserMuteFlag(Z_Param__bMuteFlag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execSetApiVersion)
	{
		P_GET_STRUCT(FEOSLobbyAPIVersionSettings,Z_Param__stAPIVerSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEOSLobby::SetApiVersion(Z_Param__stAPIVerSetting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execSetupInternalCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupInternalCallback();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execSetVoiceChatEnabled)
	{
		P_GET_UBOOL(Z_Param__bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVoiceChatEnabled(Z_Param__bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEOSLobby::execSetVoiceChatStartMuted)
	{
		P_GET_UBOOL(Z_Param__bMuted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVoiceChatStartMuted(Z_Param__bMuted);
		P_NATIVE_END;
	}
	void UEOSLobby::StaticRegisterNativesUEOSLobby()
	{
		UClass* Class = UEOSLobby::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDetailsByInvite", &UEOSLobby::execGetDetailsByInvite },
			{ "GetDetailsCurrent", &UEOSLobby::execGetDetailsCurrent },
			{ "GetVoiceChatEnabled", &UEOSLobby::execGetVoiceChatEnabled },
			{ "GetVoiceChatStartMuted", &UEOSLobby::execGetVoiceChatStartMuted },
			{ "RemoveInvite", &UEOSLobby::execRemoveInvite },
			{ "RequestBlockVoice", &UEOSLobby::execRequestBlockVoice },
			{ "RequestChangeOwner", &UEOSLobby::execRequestChangeOwner },
			{ "RequestClearBlockVoiceFlag", &UEOSLobby::execRequestClearBlockVoiceFlag },
			{ "RequestClearMuteVoiceFlag", &UEOSLobby::execRequestClearMuteVoiceFlag },
			{ "RequestCreateLobby", &UEOSLobby::execRequestCreateLobby },
			{ "RequestDeleteUser", &UEOSLobby::execRequestDeleteUser },
			{ "RequestDestroyLobby", &UEOSLobby::execRequestDestroyLobby },
			{ "RequestDestroyLobbyForce", &UEOSLobby::execRequestDestroyLobbyForce },
			{ "RequestInviteLobby", &UEOSLobby::execRequestInviteLobby },
			{ "RequestJoinLobby", &UEOSLobby::execRequestJoinLobby },
			{ "RequestLeaveAllLobbies", &UEOSLobby::execRequestLeaveAllLobbies },
			{ "RequestLeaveLobby", &UEOSLobby::execRequestLeaveLobby },
			{ "RequestMuteVoiceSelf", &UEOSLobby::execRequestMuteVoiceSelf },
			{ "RequestMuteVoiceUser", &UEOSLobby::execRequestMuteVoiceUser },
			{ "RequestQueryInvites", &UEOSLobby::execRequestQueryInvites },
			{ "RequestRejectInvite", &UEOSLobby::execRequestRejectInvite },
			{ "RequestRemovetAttribute", &UEOSLobby::execRequestRemovetAttribute },
			{ "RequestRemovetMemberAttribute", &UEOSLobby::execRequestRemovetMemberAttribute },
			{ "RequestSearchLobby", &UEOSLobby::execRequestSearchLobby },
			{ "RequestSearchLobbyByLobbyID", &UEOSLobby::execRequestSearchLobbyByLobbyID },
			{ "RequestSearchLobbyByUser", &UEOSLobby::execRequestSearchLobbyByUser },
			{ "RequestSetAttribute", &UEOSLobby::execRequestSetAttribute },
			{ "RequestSetBlockVoiceFlag", &UEOSLobby::execRequestSetBlockVoiceFlag },
			{ "RequestSetLobbyParam", &UEOSLobby::execRequestSetLobbyParam },
			{ "RequestSetMemberAttribute", &UEOSLobby::execRequestSetMemberAttribute },
			{ "RequestSetMuteVoiceFlag", &UEOSLobby::execRequestSetMuteVoiceFlag },
			{ "SetApiVersion", &UEOSLobby::execSetApiVersion },
			{ "SetupInternalCallback", &UEOSLobby::execSetupInternalCallback },
			{ "SetVoiceChatEnabled", &UEOSLobby::execSetVoiceChatEnabled },
			{ "SetVoiceChatStartMuted", &UEOSLobby::execSetVoiceChatStartMuted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEOSLobby_GetDetailsByInvite_Statics
	{
		struct EOSLobby_eventGetDetailsByInvite_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_GetDetailsByInvite_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventGetDetailsByInvite_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_GetDetailsByInvite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventGetDetailsByInvite_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_GetDetailsByInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventGetDetailsByInvite_Parms), &Z_Construct_UFunction_UEOSLobby_GetDetailsByInvite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_GetDetailsByInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_GetDetailsByInvite_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_GetDetailsByInvite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_GetDetailsByInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_GetDetailsByInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "GetDetailsByInvite", nullptr, nullptr, sizeof(EOSLobby_eventGetDetailsByInvite_Parms), Z_Construct_UFunction_UEOSLobby_GetDetailsByInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_GetDetailsByInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_GetDetailsByInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_GetDetailsByInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_GetDetailsByInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_GetDetailsByInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics
	{
		struct EOSLobby_eventGetDetailsCurrent_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			FString _strLobbyID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strLobbyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strLobbyID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventGetDetailsCurrent_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::NewProp__strLobbyID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::NewProp__strLobbyID = { "_strLobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventGetDetailsCurrent_Parms, _strLobbyID), METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::NewProp__strLobbyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::NewProp__strLobbyID_MetaData)) };
	void Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventGetDetailsCurrent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventGetDetailsCurrent_Parms), &Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::NewProp__strLobbyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "GetDetailsCurrent", nullptr, nullptr, sizeof(EOSLobby_eventGetDetailsCurrent_Parms), Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_GetVoiceChatEnabled_Statics
	{
		struct EOSLobby_eventGetVoiceChatEnabled_Parms
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
	void Z_Construct_UFunction_UEOSLobby_GetVoiceChatEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventGetVoiceChatEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_GetVoiceChatEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventGetVoiceChatEnabled_Parms), &Z_Construct_UFunction_UEOSLobby_GetVoiceChatEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_GetVoiceChatEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_GetVoiceChatEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_GetVoiceChatEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_GetVoiceChatEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "GetVoiceChatEnabled", nullptr, nullptr, sizeof(EOSLobby_eventGetVoiceChatEnabled_Parms), Z_Construct_UFunction_UEOSLobby_GetVoiceChatEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_GetVoiceChatEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_GetVoiceChatEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_GetVoiceChatEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_GetVoiceChatEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_GetVoiceChatEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_GetVoiceChatStartMuted_Statics
	{
		struct EOSLobby_eventGetVoiceChatStartMuted_Parms
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
	void Z_Construct_UFunction_UEOSLobby_GetVoiceChatStartMuted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventGetVoiceChatStartMuted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_GetVoiceChatStartMuted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventGetVoiceChatStartMuted_Parms), &Z_Construct_UFunction_UEOSLobby_GetVoiceChatStartMuted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_GetVoiceChatStartMuted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_GetVoiceChatStartMuted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_GetVoiceChatStartMuted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_GetVoiceChatStartMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "GetVoiceChatStartMuted", nullptr, nullptr, sizeof(EOSLobby_eventGetVoiceChatStartMuted_Parms), Z_Construct_UFunction_UEOSLobby_GetVoiceChatStartMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_GetVoiceChatStartMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_GetVoiceChatStartMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_GetVoiceChatStartMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_GetVoiceChatStartMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_GetVoiceChatStartMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RemoveInvite_Statics
	{
		struct EOSLobby_eventRemoveInvite_Parms
		{
			FString CommunityID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommunityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommunityID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RemoveInvite_Statics::NewProp_CommunityID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLobby_RemoveInvite_Statics::NewProp_CommunityID = { "CommunityID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRemoveInvite_Parms, CommunityID), METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RemoveInvite_Statics::NewProp_CommunityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RemoveInvite_Statics::NewProp_CommunityID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RemoveInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RemoveInvite_Statics::NewProp_CommunityID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RemoveInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RemoveInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RemoveInvite", nullptr, nullptr, sizeof(EOSLobby_eventRemoveInvite_Parms), Z_Construct_UFunction_UEOSLobby_RemoveInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RemoveInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RemoveInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RemoveInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RemoveInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RemoveInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics
	{
		struct EOSLobby_eventRequestBlockVoice_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			UEOSCommunityUserBase* _pcUser;
			bool _bBlock;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUser;
		static void NewProp__bBlock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bBlock;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestBlockVoice_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestBlockVoice_Parms, _pcUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::NewProp__bBlock_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestBlockVoice_Parms*)Obj)->_bBlock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::NewProp__bBlock = { "_bBlock", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestBlockVoice_Parms), &Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::NewProp__bBlock_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestBlockVoice_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestBlockVoice_Parms), &Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::NewProp__bBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestBlockVoice", nullptr, nullptr, sizeof(EOSLobby_eventRequestBlockVoice_Parms), Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestBlockVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestBlockVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestChangeOwner_Statics
	{
		struct EOSLobby_eventRequestChangeOwner_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			UEOSCommunityUserBase* _pcUser;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestChangeOwner_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestChangeOwner_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestChangeOwner_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestChangeOwner_Parms, _pcUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestChangeOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestChangeOwner_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestChangeOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestChangeOwner_Parms), &Z_Construct_UFunction_UEOSLobby_RequestChangeOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestChangeOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestChangeOwner_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestChangeOwner_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestChangeOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestChangeOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestChangeOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestChangeOwner", nullptr, nullptr, sizeof(EOSLobby_eventRequestChangeOwner_Parms), Z_Construct_UFunction_UEOSLobby_RequestChangeOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestChangeOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestChangeOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestChangeOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestChangeOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestChangeOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics
	{
		struct EOSLobby_eventRequestClearBlockVoiceFlag_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			UEOSCommunityUserBase* _pcUser;
			EEOSLobbyUserMuteFlag _bMuteFlag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUser;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__bMuteFlag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__bMuteFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestClearBlockVoiceFlag_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestClearBlockVoiceFlag_Parms, _pcUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::NewProp__bMuteFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::NewProp__bMuteFlag = { "_bMuteFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestClearBlockVoiceFlag_Parms, _bMuteFlag), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestClearBlockVoiceFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestClearBlockVoiceFlag_Parms), &Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::NewProp__bMuteFlag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::NewProp__bMuteFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestClearBlockVoiceFlag", nullptr, nullptr, sizeof(EOSLobby_eventRequestClearBlockVoiceFlag_Parms), Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics
	{
		struct EOSLobby_eventRequestClearMuteVoiceFlag_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			UEOSCommunityUserBase* _pcUser;
			EEOSLobbyUserMuteFlag _bMuteFlag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUser;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__bMuteFlag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__bMuteFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestClearMuteVoiceFlag_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestClearMuteVoiceFlag_Parms, _pcUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::NewProp__bMuteFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::NewProp__bMuteFlag = { "_bMuteFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestClearMuteVoiceFlag_Parms, _bMuteFlag), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestClearMuteVoiceFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestClearMuteVoiceFlag_Parms), &Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::NewProp__bMuteFlag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::NewProp__bMuteFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestClearMuteVoiceFlag", nullptr, nullptr, sizeof(EOSLobby_eventRequestClearMuteVoiceFlag_Parms), Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics
	{
		struct EOSLobby_eventRequestCreateLobby_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			FString _strKey;
			int32 _sMaxMembers;
			EEOSCommunityPermission _enPermission;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strKey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sMaxMembers;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enPermission_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enPermission;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestCreateLobby_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestCreateLobby_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::NewProp__strKey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::NewProp__sMaxMembers = { "_sMaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestCreateLobby_Parms, _sMaxMembers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::NewProp__enPermission_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::NewProp__enPermission = { "_enPermission", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestCreateLobby_Parms, _enPermission), Z_Construct_UEnum_yEOSSDK_EEOSCommunityPermission, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestCreateLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestCreateLobby_Parms), &Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::NewProp__sMaxMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::NewProp__enPermission_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::NewProp__enPermission,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestCreateLobby", nullptr, nullptr, sizeof(EOSLobby_eventRequestCreateLobby_Parms), Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestCreateLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestCreateLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestDeleteUser_Statics
	{
		struct EOSLobby_eventRequestDeleteUser_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			UEOSCommunityUserBase* _pcUser;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUser;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestDeleteUser_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestDeleteUser_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestDeleteUser_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestDeleteUser_Parms, _pcUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestDeleteUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestDeleteUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestDeleteUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestDeleteUser_Parms), &Z_Construct_UFunction_UEOSLobby_RequestDeleteUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestDeleteUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestDeleteUser_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestDeleteUser_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestDeleteUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestDeleteUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestDeleteUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestDeleteUser", nullptr, nullptr, sizeof(EOSLobby_eventRequestDeleteUser_Parms), Z_Construct_UFunction_UEOSLobby_RequestDeleteUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestDeleteUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestDeleteUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestDeleteUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestDeleteUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestDeleteUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestDestroyLobby_Statics
	{
		struct EOSLobby_eventRequestDestroyLobby_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestDestroyLobby_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestDestroyLobby_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestDestroyLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestDestroyLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestDestroyLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestDestroyLobby_Parms), &Z_Construct_UFunction_UEOSLobby_RequestDestroyLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestDestroyLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestDestroyLobby_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestDestroyLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestDestroyLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestDestroyLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestDestroyLobby", nullptr, nullptr, sizeof(EOSLobby_eventRequestDestroyLobby_Parms), Z_Construct_UFunction_UEOSLobby_RequestDestroyLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestDestroyLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestDestroyLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestDestroyLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestDestroyLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestDestroyLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics
	{
		struct EOSLobby_eventRequestDestroyLobbyForce_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics::NewProp__strKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics::NewProp__strKey = { "_strKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestDestroyLobbyForce_Parms, _strKey), METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics::NewProp__strKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics::NewProp__strKey_MetaData)) };
	void Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestDestroyLobbyForce_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestDestroyLobbyForce_Parms), &Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics::NewProp__strKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestDestroyLobbyForce", nullptr, nullptr, sizeof(EOSLobby_eventRequestDestroyLobbyForce_Parms), Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics
	{
		struct EOSLobby_eventRequestInviteLobby_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestInviteLobby_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestInviteLobby_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::NewProp__strProductUserID_MetaData)) };
	void Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestInviteLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestInviteLobby_Parms), &Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestInviteLobby", nullptr, nullptr, sizeof(EOSLobby_eventRequestInviteLobby_Parms), Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestInviteLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestInviteLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestJoinLobby_Statics
	{
		struct EOSLobby_eventRequestJoinLobby_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestJoinLobby_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestJoinLobby_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestJoinLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestJoinLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestJoinLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestJoinLobby_Parms), &Z_Construct_UFunction_UEOSLobby_RequestJoinLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestJoinLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestJoinLobby_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestJoinLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestJoinLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestJoinLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestJoinLobby", nullptr, nullptr, sizeof(EOSLobby_eventRequestJoinLobby_Parms), Z_Construct_UFunction_UEOSLobby_RequestJoinLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestJoinLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestJoinLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestJoinLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestJoinLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestJoinLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestLeaveAllLobbies_Statics
	{
		struct EOSLobby_eventRequestLeaveAllLobbies_Parms
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
	void Z_Construct_UFunction_UEOSLobby_RequestLeaveAllLobbies_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestLeaveAllLobbies_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestLeaveAllLobbies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestLeaveAllLobbies_Parms), &Z_Construct_UFunction_UEOSLobby_RequestLeaveAllLobbies_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestLeaveAllLobbies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestLeaveAllLobbies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestLeaveAllLobbies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestLeaveAllLobbies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestLeaveAllLobbies", nullptr, nullptr, sizeof(EOSLobby_eventRequestLeaveAllLobbies_Parms), Z_Construct_UFunction_UEOSLobby_RequestLeaveAllLobbies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestLeaveAllLobbies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestLeaveAllLobbies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestLeaveAllLobbies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestLeaveAllLobbies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestLeaveAllLobbies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestLeaveLobby_Statics
	{
		struct EOSLobby_eventRequestLeaveLobby_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestLeaveLobby_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestLeaveLobby_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestLeaveLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestLeaveLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestLeaveLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestLeaveLobby_Parms), &Z_Construct_UFunction_UEOSLobby_RequestLeaveLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestLeaveLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestLeaveLobby_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestLeaveLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestLeaveLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestLeaveLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestLeaveLobby", nullptr, nullptr, sizeof(EOSLobby_eventRequestLeaveLobby_Parms), Z_Construct_UFunction_UEOSLobby_RequestLeaveLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestLeaveLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestLeaveLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestLeaveLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestLeaveLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestLeaveLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics
	{
		struct EOSLobby_eventRequestMuteVoiceSelf_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			bool _bMute;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static void NewProp__bMute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bMute;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestMuteVoiceSelf_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::NewProp__bMute_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestMuteVoiceSelf_Parms*)Obj)->_bMute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::NewProp__bMute = { "_bMute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestMuteVoiceSelf_Parms), &Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::NewProp__bMute_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestMuteVoiceSelf_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestMuteVoiceSelf_Parms), &Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::NewProp__bMute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestMuteVoiceSelf", nullptr, nullptr, sizeof(EOSLobby_eventRequestMuteVoiceSelf_Parms), Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics
	{
		struct EOSLobby_eventRequestMuteVoiceUser_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			UEOSCommunityUserBase* _pcUser;
			bool _bMute;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUser;
		static void NewProp__bMute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bMute;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestMuteVoiceUser_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestMuteVoiceUser_Parms, _pcUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::NewProp__bMute_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestMuteVoiceUser_Parms*)Obj)->_bMute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::NewProp__bMute = { "_bMute", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestMuteVoiceUser_Parms), &Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::NewProp__bMute_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestMuteVoiceUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestMuteVoiceUser_Parms), &Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::NewProp__bMute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestMuteVoiceUser", nullptr, nullptr, sizeof(EOSLobby_eventRequestMuteVoiceUser_Parms), Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestQueryInvites_Statics
	{
		struct EOSLobby_eventRequestQueryInvites_Parms
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
	void Z_Construct_UFunction_UEOSLobby_RequestQueryInvites_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestQueryInvites_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestQueryInvites_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestQueryInvites_Parms), &Z_Construct_UFunction_UEOSLobby_RequestQueryInvites_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestQueryInvites_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestQueryInvites_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestQueryInvites_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestQueryInvites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestQueryInvites", nullptr, nullptr, sizeof(EOSLobby_eventRequestQueryInvites_Parms), Z_Construct_UFunction_UEOSLobby_RequestQueryInvites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestQueryInvites_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestQueryInvites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestQueryInvites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestQueryInvites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestQueryInvites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestRejectInvite_Statics
	{
		struct EOSLobby_eventRequestRejectInvite_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestRejectInvite_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestRejectInvite_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestRejectInvite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestRejectInvite_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestRejectInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestRejectInvite_Parms), &Z_Construct_UFunction_UEOSLobby_RequestRejectInvite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestRejectInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestRejectInvite_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestRejectInvite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestRejectInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestRejectInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestRejectInvite", nullptr, nullptr, sizeof(EOSLobby_eventRequestRejectInvite_Parms), Z_Construct_UFunction_UEOSLobby_RequestRejectInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestRejectInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestRejectInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestRejectInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestRejectInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestRejectInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics
	{
		struct EOSLobby_eventRequestRemovetAttribute_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestRemovetAttribute_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::NewProp__cAttributes_Inner = { "_cAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::NewProp__cAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::NewProp__cAttributes = { "_cAttributes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestRemovetAttribute_Parms, _cAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::NewProp__cAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::NewProp__cAttributes_MetaData)) };
	void Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestRemovetAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestRemovetAttribute_Parms), &Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::NewProp__cAttributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::NewProp__cAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestRemovetAttribute", nullptr, nullptr, sizeof(EOSLobby_eventRequestRemovetAttribute_Parms), Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics
	{
		struct EOSLobby_eventRequestRemovetMemberAttribute_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestRemovetMemberAttribute_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::NewProp__cAttributes_Inner = { "_cAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::NewProp__cAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::NewProp__cAttributes = { "_cAttributes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestRemovetMemberAttribute_Parms, _cAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::NewProp__cAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::NewProp__cAttributes_MetaData)) };
	void Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestRemovetMemberAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestRemovetMemberAttribute_Parms), &Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::NewProp__cAttributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::NewProp__cAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestRemovetMemberAttribute", nullptr, nullptr, sizeof(EOSLobby_eventRequestRemovetMemberAttribute_Parms), Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics
	{
		struct EOSLobby_eventRequestSearchLobby_Parms
		{
			UEOSLobbySearchResults* _pcSearchResults;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp__pcSearchResults = { "_pcSearchResults", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSearchLobby_Parms, _pcSearchResults), Z_Construct_UClass_UEOSLobbySearchResults_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp__strSearchName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp__strSearchName = { "_strSearchName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSearchLobby_Parms, _strSearchName), METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp__strSearchName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp__strSearchName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp__cAttributes_Inner = { "_cAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSAttribute_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp__cAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp__cAttributes = { "_cAttributes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSearchLobby_Parms, _cAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp__cAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp__cAttributes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp__sMaxResults = { "_sMaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSearchLobby_Parms, _sMaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestSearchLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestSearchLobby_Parms), &Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp__pcSearchResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp__strSearchName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp__cAttributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp__cAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp__sMaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestSearchLobby", nullptr, nullptr, sizeof(EOSLobby_eventRequestSearchLobby_Parms), Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestSearchLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestSearchLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics
	{
		struct EOSLobby_eventRequestSearchLobbyByLobbyID_Parms
		{
			UEOSLobbySearchResults* _pcSearchResults;
			FString _strSearchName;
			FString _strLobbyID;
			int32 _sMaxResults;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSearchResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSearchName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSearchName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strLobbyID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strLobbyID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sMaxResults;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp__pcSearchResults = { "_pcSearchResults", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSearchLobbyByLobbyID_Parms, _pcSearchResults), Z_Construct_UClass_UEOSLobbySearchResults_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp__strSearchName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp__strSearchName = { "_strSearchName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSearchLobbyByLobbyID_Parms, _strSearchName), METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp__strSearchName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp__strSearchName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp__strLobbyID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp__strLobbyID = { "_strLobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSearchLobbyByLobbyID_Parms, _strLobbyID), METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp__strLobbyID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp__strLobbyID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp__sMaxResults = { "_sMaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSearchLobbyByLobbyID_Parms, _sMaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestSearchLobbyByLobbyID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestSearchLobbyByLobbyID_Parms), &Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp__pcSearchResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp__strSearchName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp__strLobbyID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp__sMaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestSearchLobbyByLobbyID", nullptr, nullptr, sizeof(EOSLobby_eventRequestSearchLobbyByLobbyID_Parms), Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics
	{
		struct EOSLobby_eventRequestSearchLobbyByUser_Parms
		{
			UEOSLobbySearchResults* _pcSearchResults;
			FString _strSearchName;
			FString _strProductUserID;
			int32 _sMaxResults;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcSearchResults;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strSearchName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strSearchName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__strProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__strProductUserID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sMaxResults;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp__pcSearchResults = { "_pcSearchResults", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSearchLobbyByUser_Parms, _pcSearchResults), Z_Construct_UClass_UEOSLobbySearchResults_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp__strSearchName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp__strSearchName = { "_strSearchName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSearchLobbyByUser_Parms, _strSearchName), METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp__strSearchName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp__strSearchName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp__strProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp__strProductUserID = { "_strProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSearchLobbyByUser_Parms, _strProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp__strProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp__strProductUserID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp__sMaxResults = { "_sMaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSearchLobbyByUser_Parms, _sMaxResults), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestSearchLobbyByUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestSearchLobbyByUser_Parms), &Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp__pcSearchResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp__strSearchName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp__strProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp__sMaxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestSearchLobbyByUser", nullptr, nullptr, sizeof(EOSLobby_eventRequestSearchLobbyByUser_Parms), Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics
	{
		struct EOSLobby_eventRequestSetAttribute_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSetAttribute_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::NewProp__cAttributes_Inner = { "_cAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSAttribute_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::NewProp__cAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::NewProp__cAttributes = { "_cAttributes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSetAttribute_Parms, _cAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::NewProp__cAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::NewProp__cAttributes_MetaData)) };
	void Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestSetAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestSetAttribute_Parms), &Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::NewProp__cAttributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::NewProp__cAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestSetAttribute", nullptr, nullptr, sizeof(EOSLobby_eventRequestSetAttribute_Parms), Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestSetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestSetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics
	{
		struct EOSLobby_eventRequestSetBlockVoiceFlag_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			UEOSCommunityUserBase* _pcUser;
			EEOSLobbyUserMuteFlag _bMuteFlag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUser;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__bMuteFlag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__bMuteFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSetBlockVoiceFlag_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSetBlockVoiceFlag_Parms, _pcUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::NewProp__bMuteFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::NewProp__bMuteFlag = { "_bMuteFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSetBlockVoiceFlag_Parms, _bMuteFlag), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestSetBlockVoiceFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestSetBlockVoiceFlag_Parms), &Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::NewProp__bMuteFlag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::NewProp__bMuteFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestSetBlockVoiceFlag", nullptr, nullptr, sizeof(EOSLobby_eventRequestSetBlockVoiceFlag_Parms), Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics
	{
		struct EOSLobby_eventRequestSetLobbyParam_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			int32 _sMaxMembers;
			EEOSCommunityPermission _enPermission;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sMaxMembers;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enPermission_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enPermission;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSetLobbyParam_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::NewProp__sMaxMembers = { "_sMaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSetLobbyParam_Parms, _sMaxMembers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::NewProp__enPermission_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::NewProp__enPermission = { "_enPermission", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSetLobbyParam_Parms, _enPermission), Z_Construct_UEnum_yEOSSDK_EEOSCommunityPermission, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestSetLobbyParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestSetLobbyParam_Parms), &Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::NewProp__sMaxMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::NewProp__enPermission_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::NewProp__enPermission,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestSetLobbyParam", nullptr, nullptr, sizeof(EOSLobby_eventRequestSetLobbyParam_Parms), Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics
	{
		struct EOSLobby_eventRequestSetMemberAttribute_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSetMemberAttribute_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::NewProp__cAttributes_Inner = { "_cAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSAttribute_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::NewProp__cAttributes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::NewProp__cAttributes = { "_cAttributes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSetMemberAttribute_Parms, _cAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::NewProp__cAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::NewProp__cAttributes_MetaData)) };
	void Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestSetMemberAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestSetMemberAttribute_Parms), &Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::NewProp__cAttributes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::NewProp__cAttributes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestSetMemberAttribute", nullptr, nullptr, sizeof(EOSLobby_eventRequestSetMemberAttribute_Parms), Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics
	{
		struct EOSLobby_eventRequestSetMuteVoiceFlag_Parms
		{
			UEOSCommunityInfoBase* _pcCommunityInfo;
			UEOSCommunityUserBase* _pcUser;
			EEOSLobbyUserMuteFlag _bMuteFlag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcCommunityInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUser;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__bMuteFlag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__bMuteFlag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::NewProp__pcCommunityInfo = { "_pcCommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSetMuteVoiceFlag_Parms, _pcCommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::NewProp__pcUser = { "_pcUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSetMuteVoiceFlag_Parms, _pcUser), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::NewProp__bMuteFlag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::NewProp__bMuteFlag = { "_bMuteFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventRequestSetMuteVoiceFlag_Parms, _bMuteFlag), Z_Construct_UEnum_yEOSSDK_EEOSLobbyUserMuteFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventRequestSetMuteVoiceFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventRequestSetMuteVoiceFlag_Parms), &Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::NewProp__pcCommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::NewProp__pcUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::NewProp__bMuteFlag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::NewProp__bMuteFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "RequestSetMuteVoiceFlag", nullptr, nullptr, sizeof(EOSLobby_eventRequestSetMuteVoiceFlag_Parms), Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_SetApiVersion_Statics
	{
		struct EOSLobby_eventSetApiVersion_Parms
		{
			FEOSLobbyAPIVersionSettings _stAPIVerSetting;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stAPIVerSetting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEOSLobby_SetApiVersion_Statics::NewProp__stAPIVerSetting = { "_stAPIVerSetting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EOSLobby_eventSetApiVersion_Parms, _stAPIVerSetting), Z_Construct_UScriptStruct_FEOSLobbyAPIVersionSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_SetApiVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_SetApiVersion_Statics::NewProp__stAPIVerSetting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_SetApiVersion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_SetApiVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "SetApiVersion", nullptr, nullptr, sizeof(EOSLobby_eventSetApiVersion_Parms), Z_Construct_UFunction_UEOSLobby_SetApiVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_SetApiVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_SetApiVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_SetApiVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_SetApiVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_SetApiVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_SetupInternalCallback_Statics
	{
		struct EOSLobby_eventSetupInternalCallback_Parms
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
	void Z_Construct_UFunction_UEOSLobby_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EOSLobby_eventSetupInternalCallback_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_SetupInternalCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventSetupInternalCallback_Parms), &Z_Construct_UFunction_UEOSLobby_SetupInternalCallback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_SetupInternalCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_SetupInternalCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_SetupInternalCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_SetupInternalCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "SetupInternalCallback", nullptr, nullptr, sizeof(EOSLobby_eventSetupInternalCallback_Parms), Z_Construct_UFunction_UEOSLobby_SetupInternalCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_SetupInternalCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_SetupInternalCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_SetupInternalCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_SetupInternalCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_SetupInternalCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_SetVoiceChatEnabled_Statics
	{
		struct EOSLobby_eventSetVoiceChatEnabled_Parms
		{
			bool _bEnabled;
		};
		static void NewProp__bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSLobby_SetVoiceChatEnabled_Statics::NewProp__bEnabled_SetBit(void* Obj)
	{
		((EOSLobby_eventSetVoiceChatEnabled_Parms*)Obj)->_bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_SetVoiceChatEnabled_Statics::NewProp__bEnabled = { "_bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventSetVoiceChatEnabled_Parms), &Z_Construct_UFunction_UEOSLobby_SetVoiceChatEnabled_Statics::NewProp__bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_SetVoiceChatEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_SetVoiceChatEnabled_Statics::NewProp__bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_SetVoiceChatEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_SetVoiceChatEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "SetVoiceChatEnabled", nullptr, nullptr, sizeof(EOSLobby_eventSetVoiceChatEnabled_Parms), Z_Construct_UFunction_UEOSLobby_SetVoiceChatEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_SetVoiceChatEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_SetVoiceChatEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_SetVoiceChatEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_SetVoiceChatEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_SetVoiceChatEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEOSLobby_SetVoiceChatStartMuted_Statics
	{
		struct EOSLobby_eventSetVoiceChatStartMuted_Parms
		{
			bool _bMuted;
		};
		static void NewProp__bMuted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bMuted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEOSLobby_SetVoiceChatStartMuted_Statics::NewProp__bMuted_SetBit(void* Obj)
	{
		((EOSLobby_eventSetVoiceChatStartMuted_Parms*)Obj)->_bMuted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEOSLobby_SetVoiceChatStartMuted_Statics::NewProp__bMuted = { "_bMuted", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EOSLobby_eventSetVoiceChatStartMuted_Parms), &Z_Construct_UFunction_UEOSLobby_SetVoiceChatStartMuted_Statics::NewProp__bMuted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEOSLobby_SetVoiceChatStartMuted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEOSLobby_SetVoiceChatStartMuted_Statics::NewProp__bMuted,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEOSLobby_SetVoiceChatStartMuted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEOSLobby_SetVoiceChatStartMuted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEOSLobby, nullptr, "SetVoiceChatStartMuted", nullptr, nullptr, sizeof(EOSLobby_eventSetVoiceChatStartMuted_Parms), Z_Construct_UFunction_UEOSLobby_SetVoiceChatStartMuted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_SetVoiceChatStartMuted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEOSLobby_SetVoiceChatStartMuted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEOSLobby_SetVoiceChatStartMuted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEOSLobby_SetVoiceChatStartMuted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEOSLobby_SetVoiceChatStartMuted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEOSLobby_NoRegister()
	{
		return UEOSLobby::StaticClass();
	}
	struct Z_Construct_UClass_UEOSLobby_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_cOwnRequests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_cOwnRequests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_cOwnRequests;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEOSLobby_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEOSCommunityBase,
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEOSLobby_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEOSLobby_GetDetailsByInvite, "GetDetailsByInvite" }, // 4063047035
		{ &Z_Construct_UFunction_UEOSLobby_GetDetailsCurrent, "GetDetailsCurrent" }, // 3477730014
		{ &Z_Construct_UFunction_UEOSLobby_GetVoiceChatEnabled, "GetVoiceChatEnabled" }, // 230071760
		{ &Z_Construct_UFunction_UEOSLobby_GetVoiceChatStartMuted, "GetVoiceChatStartMuted" }, // 2376116416
		{ &Z_Construct_UFunction_UEOSLobby_RemoveInvite, "RemoveInvite" }, // 3412314369
		{ &Z_Construct_UFunction_UEOSLobby_RequestBlockVoice, "RequestBlockVoice" }, // 3488311865
		{ &Z_Construct_UFunction_UEOSLobby_RequestChangeOwner, "RequestChangeOwner" }, // 3737242150
		{ &Z_Construct_UFunction_UEOSLobby_RequestClearBlockVoiceFlag, "RequestClearBlockVoiceFlag" }, // 2322900423
		{ &Z_Construct_UFunction_UEOSLobby_RequestClearMuteVoiceFlag, "RequestClearMuteVoiceFlag" }, // 563090017
		{ &Z_Construct_UFunction_UEOSLobby_RequestCreateLobby, "RequestCreateLobby" }, // 3534961381
		{ &Z_Construct_UFunction_UEOSLobby_RequestDeleteUser, "RequestDeleteUser" }, // 2646175770
		{ &Z_Construct_UFunction_UEOSLobby_RequestDestroyLobby, "RequestDestroyLobby" }, // 238288168
		{ &Z_Construct_UFunction_UEOSLobby_RequestDestroyLobbyForce, "RequestDestroyLobbyForce" }, // 2542640480
		{ &Z_Construct_UFunction_UEOSLobby_RequestInviteLobby, "RequestInviteLobby" }, // 2165879083
		{ &Z_Construct_UFunction_UEOSLobby_RequestJoinLobby, "RequestJoinLobby" }, // 1077449417
		{ &Z_Construct_UFunction_UEOSLobby_RequestLeaveAllLobbies, "RequestLeaveAllLobbies" }, // 263232206
		{ &Z_Construct_UFunction_UEOSLobby_RequestLeaveLobby, "RequestLeaveLobby" }, // 2887460259
		{ &Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceSelf, "RequestMuteVoiceSelf" }, // 3975793163
		{ &Z_Construct_UFunction_UEOSLobby_RequestMuteVoiceUser, "RequestMuteVoiceUser" }, // 2689118269
		{ &Z_Construct_UFunction_UEOSLobby_RequestQueryInvites, "RequestQueryInvites" }, // 2047698036
		{ &Z_Construct_UFunction_UEOSLobby_RequestRejectInvite, "RequestRejectInvite" }, // 2270296495
		{ &Z_Construct_UFunction_UEOSLobby_RequestRemovetAttribute, "RequestRemovetAttribute" }, // 538815979
		{ &Z_Construct_UFunction_UEOSLobby_RequestRemovetMemberAttribute, "RequestRemovetMemberAttribute" }, // 3399727208
		{ &Z_Construct_UFunction_UEOSLobby_RequestSearchLobby, "RequestSearchLobby" }, // 1013050823
		{ &Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByLobbyID, "RequestSearchLobbyByLobbyID" }, // 2665210617
		{ &Z_Construct_UFunction_UEOSLobby_RequestSearchLobbyByUser, "RequestSearchLobbyByUser" }, // 1596157269
		{ &Z_Construct_UFunction_UEOSLobby_RequestSetAttribute, "RequestSetAttribute" }, // 1958779527
		{ &Z_Construct_UFunction_UEOSLobby_RequestSetBlockVoiceFlag, "RequestSetBlockVoiceFlag" }, // 879102193
		{ &Z_Construct_UFunction_UEOSLobby_RequestSetLobbyParam, "RequestSetLobbyParam" }, // 4052010126
		{ &Z_Construct_UFunction_UEOSLobby_RequestSetMemberAttribute, "RequestSetMemberAttribute" }, // 2303665624
		{ &Z_Construct_UFunction_UEOSLobby_RequestSetMuteVoiceFlag, "RequestSetMuteVoiceFlag" }, // 3529842972
		{ &Z_Construct_UFunction_UEOSLobby_SetApiVersion, "SetApiVersion" }, // 3528019915
		{ &Z_Construct_UFunction_UEOSLobby_SetupInternalCallback, "SetupInternalCallback" }, // 552855340
		{ &Z_Construct_UFunction_UEOSLobby_SetVoiceChatEnabled, "SetVoiceChatEnabled" }, // 3424758597
		{ &Z_Construct_UFunction_UEOSLobby_SetVoiceChatStartMuted, "SetVoiceChatStartMuted" }, // 4175403546
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLobby_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EOSLobby.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEOSLobby_Statics::NewProp_m_cOwnRequests_Inner = { "m_cOwnRequests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSLobbyOwnRequest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEOSLobby_Statics::NewProp_m_cOwnRequests_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLobby" },
		{ "ModuleRelativePath", "Public/EOSLobby.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEOSLobby_Statics::NewProp_m_cOwnRequests = { "m_cOwnRequests", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEOSLobby, m_cOwnRequests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEOSLobby_Statics::NewProp_m_cOwnRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLobby_Statics::NewProp_m_cOwnRequests_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEOSLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSLobby_Statics::NewProp_m_cOwnRequests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEOSLobby_Statics::NewProp_m_cOwnRequests,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEOSLobby_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEOSLobby>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEOSLobby_Statics::ClassParams = {
		&UEOSLobby::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEOSLobby_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLobby_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEOSLobby_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEOSLobby_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEOSLobby()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEOSLobby_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEOSLobby, 2823823963);
	template<> YEOSSDK_API UClass* StaticClass<UEOSLobby>()
	{
		return UEOSLobby::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEOSLobby(Z_Construct_UClass_UEOSLobby, &UEOSLobby::StaticClass, TEXT("/Script/yEOSSDK"), TEXT("UEOSLobby"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEOSLobby);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
