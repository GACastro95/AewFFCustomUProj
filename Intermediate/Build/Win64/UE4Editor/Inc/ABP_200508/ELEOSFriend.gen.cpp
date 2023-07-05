// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSFriend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSFriend() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSFriend_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSFriend();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriendUser_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyChatLogData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyCharacterData();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSFriendEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriend_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PBinary_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSFriendNotify();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSManager_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUser_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSStats_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLeaderboard_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSPresenceBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2P_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSNatP2PQueueTransfer_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyPersonalChatLog();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceiveMessageEvent__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELEOSFriend::execClosePersonalChat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__PUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClosePersonalChat(Z_Param__PUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execFindFriendUser)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__PUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSFriendUser**)Z_Param__Result=P_THIS->FindFriendUser(Z_Param__PUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execGetChatLog)
	{
		P_GET_TARRAY_REF(FLobbyChatLogData,Z_Param_Out__ChatLog);
		P_GET_PROPERTY(FStrProperty,Z_Param__PUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChatLog(Z_Param_Out__ChatLog,Z_Param__PUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execGetPersonalChatMember)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out__ChatMember);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPersonalChatMember(Z_Param_Out__ChatMember);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execGetPersonalLastReadTime)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out__DateTime);
		P_GET_PROPERTY(FStrProperty,Z_Param__PUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPersonalLastReadTime(Z_Param_Out__DateTime,Z_Param__PUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execGetPersonalPlayers)
	{
		P_GET_TMAP_REF(FString,FLobbyCharacterData,Z_Param_Out__Players);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPersonalPlayers(Z_Param_Out__Players);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execGetSortedFriendList)
	{
		P_GET_TARRAY_REF(UEOSFriendUser*,Z_Param_Out_List);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSortedFriendList(Z_Param_Out_List);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execGetUnreadPersonalChatCount)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out__UtcDateTime);
		P_GET_PROPERTY(FStrProperty,Z_Param__PUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetUnreadPersonalChatCount(Z_Param_Out__UtcDateTime,Z_Param__PUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execOnFriendEvent)
	{
		P_GET_ENUM(EEOSFriendEvent,Z_Param_FriendEvent);
		P_GET_OBJECT(UEOSFriend,Z_Param_Friend);
		P_GET_OBJECT(UEOSUserBase,Z_Param_FriendUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFriendEvent(EEOSFriendEvent(Z_Param_FriendEvent),Z_Param_Friend,Z_Param_FriendUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execOnReceive)
	{
		P_GET_OBJECT(UEOSNatP2PCachedTransfer,Z_Param__Transfer);
		P_GET_OBJECT(UEOSUserBase,Z_Param__UserBase);
		P_GET_OBJECT(UEOSNatP2PBinary,Z_Param__P2PBinary);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReceive(Z_Param__Transfer,Z_Param__UserBase,Z_Param__P2PBinary);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execOnUpdatePUIDEvent)
	{
		P_GET_OBJECT(UEOSUserBase,Z_Param__FriendUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdatePUIDEvent(Z_Param__FriendUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execOpenPersonalChat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__PUID);
		P_GET_OBJECT(UEOSUserBase,Z_Param__UserBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenPersonalChat(Z_Param__PUID,Z_Param__UserBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execQueryFriendPlayerIconStats)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__PUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->QueryFriendPlayerIconStats(Z_Param__PUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execSendNotify)
	{
		P_GET_ENUM(EELEOSFriendNotify,Z_Param_Notify);
		P_GET_OBJECT(UEOSUserBase,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendNotify(EELEOSFriendNotify(Z_Param_Notify),Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execSendPersonalChat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__Message);
		P_GET_OBJECT(UEOSUserBase,Z_Param__target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendPersonalChat(Z_Param__Message,Z_Param__target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execSendPersonalStamp)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__StampID);
		P_GET_OBJECT(UEOSUserBase,Z_Param__target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendPersonalStamp(Z_Param__StampID,Z_Param__target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execSetPersonalLastReadTime)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out__DateTime);
		P_GET_PROPERTY(FStrProperty,Z_Param__PUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPersonalLastReadTime(Z_Param_Out__DateTime,Z_Param__PUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execSetup)
	{
		P_GET_OBJECT(UEOSManager,Z_Param__Manager);
		P_GET_OBJECT(UEOSUser,Z_Param__User);
		P_GET_OBJECT(UEOSStats,Z_Param__Stats);
		P_GET_OBJECT(UEOSLeaderboard,Z_Param__Leaderboard);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Setup(Z_Param__Manager,Z_Param__User,Z_Param__Stats,Z_Param__Leaderboard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execUpdateFriendPresence)
	{
		P_GET_OBJECT(UEOSPresenceBase,Z_Param__EOSPresenceBase);
		P_GET_PROPERTY(FStrProperty,Z_Param__EpicAccountID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateFriendPresence(Z_Param__EOSPresenceBase,Z_Param__EpicAccountID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSFriend::execUpdateInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInfo();
		P_NATIVE_END;
	}
	void UELEOSFriend::StaticRegisterNativesUELEOSFriend()
	{
		UClass* Class = UELEOSFriend::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClosePersonalChat", &UELEOSFriend::execClosePersonalChat },
			{ "FindFriendUser", &UELEOSFriend::execFindFriendUser },
			{ "GetChatLog", &UELEOSFriend::execGetChatLog },
			{ "GetPersonalChatMember", &UELEOSFriend::execGetPersonalChatMember },
			{ "GetPersonalLastReadTime", &UELEOSFriend::execGetPersonalLastReadTime },
			{ "GetPersonalPlayers", &UELEOSFriend::execGetPersonalPlayers },
			{ "GetSortedFriendList", &UELEOSFriend::execGetSortedFriendList },
			{ "GetUnreadPersonalChatCount", &UELEOSFriend::execGetUnreadPersonalChatCount },
			{ "OnFriendEvent", &UELEOSFriend::execOnFriendEvent },
			{ "OnReceive", &UELEOSFriend::execOnReceive },
			{ "OnUpdatePUIDEvent", &UELEOSFriend::execOnUpdatePUIDEvent },
			{ "OpenPersonalChat", &UELEOSFriend::execOpenPersonalChat },
			{ "QueryFriendPlayerIconStats", &UELEOSFriend::execQueryFriendPlayerIconStats },
			{ "Release", &UELEOSFriend::execRelease },
			{ "SendNotify", &UELEOSFriend::execSendNotify },
			{ "SendPersonalChat", &UELEOSFriend::execSendPersonalChat },
			{ "SendPersonalStamp", &UELEOSFriend::execSendPersonalStamp },
			{ "SetPersonalLastReadTime", &UELEOSFriend::execSetPersonalLastReadTime },
			{ "Setup", &UELEOSFriend::execSetup },
			{ "UpdateFriendPresence", &UELEOSFriend::execUpdateFriendPresence },
			{ "UpdateInfo", &UELEOSFriend::execUpdateInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELEOSFriend_ClosePersonalChat_Statics
	{
		struct ELEOSFriend_eventClosePersonalChat_Parms
		{
			FString _PUID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__PUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_ClosePersonalChat_Statics::NewProp__PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSFriend_ClosePersonalChat_Statics::NewProp__PUID = { "_PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventClosePersonalChat_Parms, _PUID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_ClosePersonalChat_Statics::NewProp__PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_ClosePersonalChat_Statics::NewProp__PUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_ClosePersonalChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_ClosePersonalChat_Statics::NewProp__PUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_ClosePersonalChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_ClosePersonalChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "ClosePersonalChat", nullptr, nullptr, sizeof(ELEOSFriend_eventClosePersonalChat_Parms), Z_Construct_UFunction_UELEOSFriend_ClosePersonalChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_ClosePersonalChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_ClosePersonalChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_ClosePersonalChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_ClosePersonalChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_ClosePersonalChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_FindFriendUser_Statics
	{
		struct ELEOSFriend_eventFindFriendUser_Parms
		{
			FString _PUID;
			UEOSFriendUser* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__PUID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_FindFriendUser_Statics::NewProp__PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSFriend_FindFriendUser_Statics::NewProp__PUID = { "_PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventFindFriendUser_Parms, _PUID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_FindFriendUser_Statics::NewProp__PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_FindFriendUser_Statics::NewProp__PUID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSFriend_FindFriendUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventFindFriendUser_Parms, ReturnValue), Z_Construct_UClass_UEOSFriendUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_FindFriendUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_FindFriendUser_Statics::NewProp__PUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_FindFriendUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_FindFriendUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_FindFriendUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "FindFriendUser", nullptr, nullptr, sizeof(ELEOSFriend_eventFindFriendUser_Parms), Z_Construct_UFunction_UELEOSFriend_FindFriendUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_FindFriendUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_FindFriendUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_FindFriendUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_FindFriendUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_FindFriendUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics
	{
		struct ELEOSFriend_eventGetChatLog_Parms
		{
			TArray<FLobbyChatLogData> _ChatLog;
			FString _PUID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__ChatLog_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__ChatLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__PUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics::NewProp__ChatLog_Inner = { "_ChatLog", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLobbyChatLogData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics::NewProp__ChatLog = { "_ChatLog", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventGetChatLog_Parms, _ChatLog), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics::NewProp__PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics::NewProp__PUID = { "_PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventGetChatLog_Parms, _PUID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics::NewProp__PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics::NewProp__PUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics::NewProp__ChatLog_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics::NewProp__ChatLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics::NewProp__PUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "GetChatLog", nullptr, nullptr, sizeof(ELEOSFriend_eventGetChatLog_Parms), Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_GetChatLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_GetChatLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_GetPersonalChatMember_Statics
	{
		struct ELEOSFriend_eventGetPersonalChatMember_Parms
		{
			TArray<FString> _ChatMember;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__ChatMember_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__ChatMember;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSFriend_GetPersonalChatMember_Statics::NewProp__ChatMember_Inner = { "_ChatMember", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSFriend_GetPersonalChatMember_Statics::NewProp__ChatMember = { "_ChatMember", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventGetPersonalChatMember_Parms, _ChatMember), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_GetPersonalChatMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_GetPersonalChatMember_Statics::NewProp__ChatMember_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_GetPersonalChatMember_Statics::NewProp__ChatMember,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_GetPersonalChatMember_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_GetPersonalChatMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "GetPersonalChatMember", nullptr, nullptr, sizeof(ELEOSFriend_eventGetPersonalChatMember_Parms), Z_Construct_UFunction_UELEOSFriend_GetPersonalChatMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_GetPersonalChatMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_GetPersonalChatMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_GetPersonalChatMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_GetPersonalChatMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_GetPersonalChatMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime_Statics
	{
		struct ELEOSFriend_eventGetPersonalLastReadTime_Parms
		{
			FDateTime _DateTime;
			FString _PUID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__DateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__PUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime_Statics::NewProp__DateTime = { "_DateTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventGetPersonalLastReadTime_Parms, _DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime_Statics::NewProp__PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime_Statics::NewProp__PUID = { "_PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventGetPersonalLastReadTime_Parms, _PUID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime_Statics::NewProp__PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime_Statics::NewProp__PUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime_Statics::NewProp__DateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime_Statics::NewProp__PUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "GetPersonalLastReadTime", nullptr, nullptr, sizeof(ELEOSFriend_eventGetPersonalLastReadTime_Parms), Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_GetPersonalPlayers_Statics
	{
		struct ELEOSFriend_eventGetPersonalPlayers_Parms
		{
			TMap<FString,FLobbyCharacterData> _Players;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Players_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__Players_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__Players;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSFriend_GetPersonalPlayers_Statics::NewProp__Players_ValueProp = { "_Players", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLobbyCharacterData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSFriend_GetPersonalPlayers_Statics::NewProp__Players_Key_KeyProp = { "_Players_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UELEOSFriend_GetPersonalPlayers_Statics::NewProp__Players = { "_Players", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventGetPersonalPlayers_Parms, _Players), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_GetPersonalPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_GetPersonalPlayers_Statics::NewProp__Players_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_GetPersonalPlayers_Statics::NewProp__Players_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_GetPersonalPlayers_Statics::NewProp__Players,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_GetPersonalPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_GetPersonalPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "GetPersonalPlayers", nullptr, nullptr, sizeof(ELEOSFriend_eventGetPersonalPlayers_Parms), Z_Construct_UFunction_UELEOSFriend_GetPersonalPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_GetPersonalPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_GetPersonalPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_GetPersonalPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_GetPersonalPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_GetPersonalPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_GetSortedFriendList_Statics
	{
		struct ELEOSFriend_eventGetSortedFriendList_Parms
		{
			TArray<UEOSFriendUser*> List;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_List_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_List;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSFriend_GetSortedFriendList_Statics::NewProp_List_Inner = { "List", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEOSFriendUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSFriend_GetSortedFriendList_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventGetSortedFriendList_Parms, List), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_GetSortedFriendList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_GetSortedFriendList_Statics::NewProp_List_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_GetSortedFriendList_Statics::NewProp_List,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_GetSortedFriendList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_GetSortedFriendList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "GetSortedFriendList", nullptr, nullptr, sizeof(ELEOSFriend_eventGetSortedFriendList_Parms), Z_Construct_UFunction_UELEOSFriend_GetSortedFriendList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_GetSortedFriendList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_GetSortedFriendList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_GetSortedFriendList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_GetSortedFriendList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_GetSortedFriendList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics
	{
		struct ELEOSFriend_eventGetUnreadPersonalChatCount_Parms
		{
			FDateTime _UtcDateTime;
			FString _PUID;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__UtcDateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__UtcDateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__PUID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::NewProp__UtcDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::NewProp__UtcDateTime = { "_UtcDateTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventGetUnreadPersonalChatCount_Parms, _UtcDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::NewProp__UtcDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::NewProp__UtcDateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::NewProp__PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::NewProp__PUID = { "_PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventGetUnreadPersonalChatCount_Parms, _PUID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::NewProp__PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::NewProp__PUID_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventGetUnreadPersonalChatCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::NewProp__UtcDateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::NewProp__PUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "GetUnreadPersonalChatCount", nullptr, nullptr, sizeof(ELEOSFriend_eventGetUnreadPersonalChatCount_Parms), Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_OnFriendEvent_Statics
	{
		struct ELEOSFriend_eventOnFriendEvent_Parms
		{
			EEOSFriendEvent FriendEvent;
			UEOSFriend* Friend;
			UEOSUserBase* FriendUser;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FriendEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FriendEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Friend;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FriendUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSFriend_OnFriendEvent_Statics::NewProp_FriendEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSFriend_OnFriendEvent_Statics::NewProp_FriendEvent = { "FriendEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventOnFriendEvent_Parms, FriendEvent), Z_Construct_UEnum_yEOSSDK_EEOSFriendEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSFriend_OnFriendEvent_Statics::NewProp_Friend = { "Friend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventOnFriendEvent_Parms, Friend), Z_Construct_UClass_UEOSFriend_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSFriend_OnFriendEvent_Statics::NewProp_FriendUser = { "FriendUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventOnFriendEvent_Parms, FriendUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_OnFriendEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_OnFriendEvent_Statics::NewProp_FriendEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_OnFriendEvent_Statics::NewProp_FriendEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_OnFriendEvent_Statics::NewProp_Friend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_OnFriendEvent_Statics::NewProp_FriendUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_OnFriendEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_OnFriendEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "OnFriendEvent", nullptr, nullptr, sizeof(ELEOSFriend_eventOnFriendEvent_Parms), Z_Construct_UFunction_UELEOSFriend_OnFriendEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_OnFriendEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_OnFriendEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_OnFriendEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_OnFriendEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_OnFriendEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_OnReceive_Statics
	{
		struct ELEOSFriend_eventOnReceive_Parms
		{
			UEOSNatP2PCachedTransfer* _Transfer;
			UEOSUserBase* _UserBase;
			UEOSNatP2PBinary* _P2PBinary;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Transfer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__UserBase;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__P2PBinary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSFriend_OnReceive_Statics::NewProp__Transfer = { "_Transfer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventOnReceive_Parms, _Transfer), Z_Construct_UClass_UEOSNatP2PCachedTransfer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSFriend_OnReceive_Statics::NewProp__UserBase = { "_UserBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventOnReceive_Parms, _UserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSFriend_OnReceive_Statics::NewProp__P2PBinary = { "_P2PBinary", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventOnReceive_Parms, _P2PBinary), Z_Construct_UClass_UEOSNatP2PBinary_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_OnReceive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_OnReceive_Statics::NewProp__Transfer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_OnReceive_Statics::NewProp__UserBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_OnReceive_Statics::NewProp__P2PBinary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_OnReceive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_OnReceive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "OnReceive", nullptr, nullptr, sizeof(ELEOSFriend_eventOnReceive_Parms), Z_Construct_UFunction_UELEOSFriend_OnReceive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_OnReceive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_OnReceive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_OnReceive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_OnReceive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_OnReceive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_OnUpdatePUIDEvent_Statics
	{
		struct ELEOSFriend_eventOnUpdatePUIDEvent_Parms
		{
			UEOSUserBase* _FriendUser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__FriendUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSFriend_OnUpdatePUIDEvent_Statics::NewProp__FriendUser = { "_FriendUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventOnUpdatePUIDEvent_Parms, _FriendUser), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_OnUpdatePUIDEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_OnUpdatePUIDEvent_Statics::NewProp__FriendUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_OnUpdatePUIDEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_OnUpdatePUIDEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "OnUpdatePUIDEvent", nullptr, nullptr, sizeof(ELEOSFriend_eventOnUpdatePUIDEvent_Parms), Z_Construct_UFunction_UELEOSFriend_OnUpdatePUIDEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_OnUpdatePUIDEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_OnUpdatePUIDEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_OnUpdatePUIDEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_OnUpdatePUIDEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_OnUpdatePUIDEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat_Statics
	{
		struct ELEOSFriend_eventOpenPersonalChat_Parms
		{
			FString _PUID;
			UEOSUserBase* _UserBase;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__PUID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__UserBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat_Statics::NewProp__PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat_Statics::NewProp__PUID = { "_PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventOpenPersonalChat_Parms, _PUID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat_Statics::NewProp__PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat_Statics::NewProp__PUID_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat_Statics::NewProp__UserBase = { "_UserBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventOpenPersonalChat_Parms, _UserBase), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat_Statics::NewProp__PUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat_Statics::NewProp__UserBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "OpenPersonalChat", nullptr, nullptr, sizeof(ELEOSFriend_eventOpenPersonalChat_Parms), Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics
	{
		struct ELEOSFriend_eventQueryFriendPlayerIconStats_Parms
		{
			FString _PUID;
			bool ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics::NewProp__PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics::NewProp__PUID = { "_PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventQueryFriendPlayerIconStats_Parms, _PUID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics::NewProp__PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics::NewProp__PUID_MetaData)) };
	void Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSFriend_eventQueryFriendPlayerIconStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSFriend_eventQueryFriendPlayerIconStats_Parms), &Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics::NewProp__PUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "QueryFriendPlayerIconStats", nullptr, nullptr, sizeof(ELEOSFriend_eventQueryFriendPlayerIconStats_Parms), Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_Release_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_Release_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "Release", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics
	{
		struct ELEOSFriend_eventSendNotify_Parms
		{
			EELEOSFriendNotify Notify;
			UEOSUserBase* Target;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Notify_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Notify;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::NewProp_Notify_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::NewProp_Notify = { "Notify", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventSendNotify_Parms, Notify), Z_Construct_UEnum_ABP_200508_EELEOSFriendNotify, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventSendNotify_Parms, Target), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSFriend_eventSendNotify_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSFriend_eventSendNotify_Parms), &Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::NewProp_Notify_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::NewProp_Notify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "SendNotify", nullptr, nullptr, sizeof(ELEOSFriend_eventSendNotify_Parms), Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_SendNotify()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_SendNotify_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics
	{
		struct ELEOSFriend_eventSendPersonalChat_Parms
		{
			FString _Message;
			UEOSUserBase* _target;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__Message;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::NewProp__Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::NewProp__Message = { "_Message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventSendPersonalChat_Parms, _Message), METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::NewProp__Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::NewProp__Message_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::NewProp__target = { "_target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventSendPersonalChat_Parms, _target), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSFriend_eventSendPersonalChat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSFriend_eventSendPersonalChat_Parms), &Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::NewProp__Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::NewProp__target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "SendPersonalChat", nullptr, nullptr, sizeof(ELEOSFriend_eventSendPersonalChat_Parms), Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_SendPersonalChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_SendPersonalChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp_Statics
	{
		struct ELEOSFriend_eventSendPersonalStamp_Parms
		{
			int32 _StampID;
			UEOSUserBase* _target;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__StampID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp_Statics::NewProp__StampID = { "_StampID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventSendPersonalStamp_Parms, _StampID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp_Statics::NewProp__target = { "_target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventSendPersonalStamp_Parms, _target), Z_Construct_UClass_UEOSUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSFriend_eventSendPersonalStamp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSFriend_eventSendPersonalStamp_Parms), &Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp_Statics::NewProp__StampID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp_Statics::NewProp__target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "SendPersonalStamp", nullptr, nullptr, sizeof(ELEOSFriend_eventSendPersonalStamp_Parms), Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics
	{
		struct ELEOSFriend_eventSetPersonalLastReadTime_Parms
		{
			FDateTime _DateTime;
			FString _PUID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__DateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__DateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__PUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::NewProp__DateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::NewProp__DateTime = { "_DateTime", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventSetPersonalLastReadTime_Parms, _DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::NewProp__DateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::NewProp__DateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::NewProp__PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::NewProp__PUID = { "_PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventSetPersonalLastReadTime_Parms, _PUID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::NewProp__PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::NewProp__PUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::NewProp__DateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::NewProp__PUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "SetPersonalLastReadTime", nullptr, nullptr, sizeof(ELEOSFriend_eventSetPersonalLastReadTime_Parms), Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_Setup_Statics
	{
		struct ELEOSFriend_eventSetup_Parms
		{
			UEOSManager* _Manager;
			UEOSUser* _User;
			UEOSStats* _Stats;
			UEOSLeaderboard* _Leaderboard;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Manager;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__User;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Stats;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Leaderboard;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSFriend_Setup_Statics::NewProp__Manager = { "_Manager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventSetup_Parms, _Manager), Z_Construct_UClass_UEOSManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSFriend_Setup_Statics::NewProp__User = { "_User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventSetup_Parms, _User), Z_Construct_UClass_UEOSUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSFriend_Setup_Statics::NewProp__Stats = { "_Stats", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventSetup_Parms, _Stats), Z_Construct_UClass_UEOSStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSFriend_Setup_Statics::NewProp__Leaderboard = { "_Leaderboard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventSetup_Parms, _Leaderboard), Z_Construct_UClass_UEOSLeaderboard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSFriend_Setup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSFriend_eventSetup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSFriend_Setup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSFriend_eventSetup_Parms), &Z_Construct_UFunction_UELEOSFriend_Setup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_Setup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_Setup_Statics::NewProp__Manager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_Setup_Statics::NewProp__User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_Setup_Statics::NewProp__Stats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_Setup_Statics::NewProp__Leaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_Setup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_Setup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_Setup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "Setup", nullptr, nullptr, sizeof(ELEOSFriend_eventSetup_Parms), Z_Construct_UFunction_UELEOSFriend_Setup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_Setup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_Setup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_Setup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_Setup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_Setup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics
	{
		struct ELEOSFriend_eventUpdateFriendPresence_Parms
		{
			UEOSPresenceBase* _EOSPresenceBase;
			FString _EpicAccountID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__EOSPresenceBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__EpicAccountID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__EpicAccountID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::NewProp__EOSPresenceBase = { "_EOSPresenceBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventUpdateFriendPresence_Parms, _EOSPresenceBase), Z_Construct_UClass_UEOSPresenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::NewProp__EpicAccountID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::NewProp__EpicAccountID = { "_EpicAccountID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSFriend_eventUpdateFriendPresence_Parms, _EpicAccountID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::NewProp__EpicAccountID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::NewProp__EpicAccountID_MetaData)) };
	void Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSFriend_eventUpdateFriendPresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSFriend_eventUpdateFriendPresence_Parms), &Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::NewProp__EOSPresenceBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::NewProp__EpicAccountID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "UpdateFriendPresence", nullptr, nullptr, sizeof(ELEOSFriend_eventUpdateFriendPresence_Parms), Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSFriend_UpdateInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSFriend_UpdateInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSFriend_UpdateInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSFriend, nullptr, "UpdateInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSFriend_UpdateInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSFriend_UpdateInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSFriend_UpdateInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSFriend_UpdateInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELEOSFriend_NoRegister()
	{
		return UELEOSFriend::StaticClass();
	}
	struct Z_Construct_UClass_UELEOSFriend_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSUser;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSFriend_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSFriend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSLeaderboard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSLeaderboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSNatP2P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSNatP2P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EOSNatP2PTransfer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EOSNatP2PTransfer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSocketID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultSocketID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PersonalPlayers_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PersonalPlayers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersonalPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PersonalPlayers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PersonalChatLog_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PersonalChatLog_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersonalChatLog_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PersonalChatLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLobbyReceiveMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyReceiveMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLobbyReceivePacket_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLobbyReceivePacket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEOSFriend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELEOSFriend_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELEOSFriend_ClosePersonalChat, "ClosePersonalChat" }, // 412325077
		{ &Z_Construct_UFunction_UELEOSFriend_FindFriendUser, "FindFriendUser" }, // 3717428571
		{ &Z_Construct_UFunction_UELEOSFriend_GetChatLog, "GetChatLog" }, // 2398259851
		{ &Z_Construct_UFunction_UELEOSFriend_GetPersonalChatMember, "GetPersonalChatMember" }, // 3026545036
		{ &Z_Construct_UFunction_UELEOSFriend_GetPersonalLastReadTime, "GetPersonalLastReadTime" }, // 3792647067
		{ &Z_Construct_UFunction_UELEOSFriend_GetPersonalPlayers, "GetPersonalPlayers" }, // 3987855798
		{ &Z_Construct_UFunction_UELEOSFriend_GetSortedFriendList, "GetSortedFriendList" }, // 99955718
		{ &Z_Construct_UFunction_UELEOSFriend_GetUnreadPersonalChatCount, "GetUnreadPersonalChatCount" }, // 1211967417
		{ &Z_Construct_UFunction_UELEOSFriend_OnFriendEvent, "OnFriendEvent" }, // 3507219532
		{ &Z_Construct_UFunction_UELEOSFriend_OnReceive, "OnReceive" }, // 731767063
		{ &Z_Construct_UFunction_UELEOSFriend_OnUpdatePUIDEvent, "OnUpdatePUIDEvent" }, // 4199273062
		{ &Z_Construct_UFunction_UELEOSFriend_OpenPersonalChat, "OpenPersonalChat" }, // 3011828111
		{ &Z_Construct_UFunction_UELEOSFriend_QueryFriendPlayerIconStats, "QueryFriendPlayerIconStats" }, // 2659055153
		{ &Z_Construct_UFunction_UELEOSFriend_Release, "Release" }, // 1906713073
		{ &Z_Construct_UFunction_UELEOSFriend_SendNotify, "SendNotify" }, // 3229913968
		{ &Z_Construct_UFunction_UELEOSFriend_SendPersonalChat, "SendPersonalChat" }, // 182934985
		{ &Z_Construct_UFunction_UELEOSFriend_SendPersonalStamp, "SendPersonalStamp" }, // 1803023194
		{ &Z_Construct_UFunction_UELEOSFriend_SetPersonalLastReadTime, "SetPersonalLastReadTime" }, // 1243576472
		{ &Z_Construct_UFunction_UELEOSFriend_Setup, "Setup" }, // 1003617473
		{ &Z_Construct_UFunction_UELEOSFriend_UpdateFriendPresence, "UpdateFriendPresence" }, // 646928529
		{ &Z_Construct_UFunction_UELEOSFriend_UpdateInfo, "UpdateInfo" }, // 1357277182
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSFriend_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSFriend.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSFriend" },
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSManager = { "EOSManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSFriend, EOSManager), Z_Construct_UClass_UEOSManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSUser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSFriend" },
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSUser = { "EOSUser", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSFriend, EOSUser), Z_Construct_UClass_UEOSUser_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSUser_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSFriend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSFriend" },
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSFriend = { "EOSFriend", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSFriend, EOSFriend), Z_Construct_UClass_UEOSFriend_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSFriend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSFriend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSStats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSFriend" },
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSStats = { "EOSStats", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSFriend, EOSStats), Z_Construct_UClass_UEOSStats_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSLeaderboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSFriend" },
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSLeaderboard = { "EOSLeaderboard", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSFriend, EOSLeaderboard), Z_Construct_UClass_UEOSLeaderboard_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSLeaderboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSLeaderboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSNatP2P_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSFriend" },
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSNatP2P = { "EOSNatP2P", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSFriend, EOSNatP2P), Z_Construct_UClass_UEOSNatP2P_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSNatP2P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSNatP2P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSNatP2PTransfer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSFriend" },
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSNatP2PTransfer = { "EOSNatP2PTransfer", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSFriend, EOSNatP2PTransfer), Z_Construct_UClass_UEOSNatP2PQueueTransfer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSNatP2PTransfer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSNatP2PTransfer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSFriend_Statics::NewProp_DefaultSocketID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSFriend" },
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELEOSFriend_Statics::NewProp_DefaultSocketID = { "DefaultSocketID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSFriend, DefaultSocketID), METADATA_PARAMS(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_DefaultSocketID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_DefaultSocketID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalPlayers_ValueProp = { "PersonalPlayers", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLobbyCharacterData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalPlayers_Key_KeyProp = { "PersonalPlayers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalPlayers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSFriend" },
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalPlayers = { "PersonalPlayers", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSFriend, PersonalPlayers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalPlayers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalChatLog_ValueProp = { "PersonalChatLog", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLobbyPersonalChatLog, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalChatLog_Key_KeyProp = { "PersonalChatLog_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalChatLog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSFriend" },
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalChatLog = { "PersonalChatLog", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSFriend, PersonalChatLog), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalChatLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalChatLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSFriend_Statics::NewProp_OnLobbyReceiveMessage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSFriend" },
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELEOSFriend_Statics::NewProp_OnLobbyReceiveMessage = { "OnLobbyReceiveMessage", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSFriend, OnLobbyReceiveMessage), Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceiveMessageEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_OnLobbyReceiveMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_OnLobbyReceiveMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSFriend_Statics::NewProp_OnLobbyReceivePacket_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELEOSFriend" },
		{ "ModuleRelativePath", "Public/ELEOSFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELEOSFriend_Statics::NewProp_OnLobbyReceivePacket = { "OnLobbyReceivePacket", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELEOSFriend, OnLobbyReceivePacket), Z_Construct_UDelegateFunction_ABP_200508_EOSLobbyReceivePacketEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_OnLobbyReceivePacket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSFriend_Statics::NewProp_OnLobbyReceivePacket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELEOSFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSFriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSLeaderboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSNatP2P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriend_Statics::NewProp_EOSNatP2PTransfer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriend_Statics::NewProp_DefaultSocketID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalPlayers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalPlayers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalChatLog_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalChatLog_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriend_Statics::NewProp_PersonalChatLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriend_Statics::NewProp_OnLobbyReceiveMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELEOSFriend_Statics::NewProp_OnLobbyReceivePacket,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEOSFriend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEOSFriend>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEOSFriend_Statics::ClassParams = {
		&UELEOSFriend::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELEOSFriend_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSFriend_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELEOSFriend_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSFriend_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEOSFriend()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEOSFriend_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEOSFriend, 947078075);
	template<> ABP_200508_API UClass* StaticClass<UELEOSFriend>()
	{
		return UELEOSFriend::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEOSFriend(Z_Construct_UClass_UELEOSFriend, &UELEOSFriend::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEOSFriend"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEOSFriend);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
