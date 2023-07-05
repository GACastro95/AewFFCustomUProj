// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELOSSLocalPlayer.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELOSSLocalPlayer() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELOSSLocalPlayer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELOSSLocalPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnCanPlayOnlinePrivilege__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnQueryPrivilege__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnQueryPrivileges__DelegateSignature();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EUserPrivilegeBit();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnReadOSSFriendsList__DelegateSignature();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELFriendInfo();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELFriendsListType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ELOSSFriendStatus();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSEventType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSEventResult();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_OnQueryBlockedListUpdated__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_CloseLoginUIEventHandle__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_LoginCancelEventHandle__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_ReadFriendsListEventHandle__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UELOSSLocalPlayer::execAsyncHasCanCommunicateOnlinePrivilege)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnCanCommunicateOnlinePrivilege);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AsyncHasCanCommunicateOnlinePrivilege(FOnCanPlayOnlinePrivilege(Z_Param_Out_OnCanCommunicateOnlinePrivilege));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execAsyncHasCanPlayOnlinePrivilege)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnCanPlayOnlinePrivilege);
		P_GET_UBOOL(Z_Param_ShowWarningUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AsyncHasCanPlayOnlinePrivilege(FOnCanPlayOnlinePrivilege(Z_Param_Out_OnCanPlayOnlinePrivilege),Z_Param_ShowWarningUI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execAsyncQueryCanOnlinePlayPrivilege)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnQueryPrivilege);
		P_GET_UBOOL(Z_Param_CheckPSPlus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AsyncQueryCanOnlinePlayPrivilege(FOnQueryPrivilege(Z_Param_Out_OnQueryPrivilege),Z_Param_CheckPSPlus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execAsyncQueryUserPrivileges)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnQueryUserPrivileges);
		P_GET_ENUM(EUserPrivilegeBit,Z_Param_UserPrivilegeBit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AsyncQueryUserPrivileges(FOnQueryPrivileges(Z_Param_Out_OnQueryUserPrivileges),EUserPrivilegeBit(Z_Param_UserPrivilegeBit));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execAsyncReadOSSFriendsList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnReadOSSFriendsList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AsyncReadOSSFriendsList(FOnReadOSSFriendsList(Z_Param_Out_OnReadOSSFriendsList));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execGetBlockedPlayers)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutBlockedMap);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBlockedPlayers(Z_Param_Out_OutBlockedMap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execGetOSSAccountNickName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetOSSAccountNickName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execGetOSSFriendsList)
	{
		P_GET_TARRAY_REF(FELFriendInfo,Z_Param_Out_OutFriendArray);
		P_GET_ENUM(EELFriendsListType,Z_Param_FriendsListType);
		P_GET_PROPERTY(FIntProperty,Z_Param_SortFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOSSFriendsList(Z_Param_Out_OutFriendArray,EELFriendsListType(Z_Param_FriendsListType),Z_Param_SortFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execGetOSSFriendsProductUserIdList)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutFriendArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetOSSFriendsProductUserIdList(Z_Param_Out_OutFriendArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execGetOSSFriendStatusByProductUserId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductUserID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELOSSFriendStatus*)Z_Param__Result=P_THIS->GetOSSFriendStatusByProductUserId(Z_Param_ProductUserID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execHasAnyPrivilegeError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyPrivilegeError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execHasCanAccessOnlinePrivilege)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCanAccessOnlinePrivilege();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execHasCanCommunicateOnlinePrivilege)
	{
		P_GET_UBOOL(Z_Param_ShowWarningUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCanCommunicateOnlinePrivilege(Z_Param_ShowWarningUI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execHasCanCommunicateOnlinePrivilegeError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCanCommunicateOnlinePrivilegeError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execHasCanJoinPartyPrivilege)
	{
		P_GET_UBOOL(Z_Param_ShowWarningUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCanJoinPartyPrivilege(Z_Param_ShowWarningUI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execHasCanPlayOnlinePrivilege)
	{
		P_GET_UBOOL(Z_Param_ShowWarningUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCanPlayOnlinePrivilege(Z_Param_ShowWarningUI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execHasCanPlayOnlinePrivilegeError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCanPlayOnlinePrivilegeError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execHasCanPlayPrivilege)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCanPlayPrivilege();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execHasCanUseUGCPrivilege)
	{
		P_GET_UBOOL(Z_Param_ShowWarningUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCanUseUGCPrivilege(Z_Param_ShowWarningUI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execHasCanUseUGCPrivilegeError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCanUseUGCPrivilegeError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execHasCanUseUserCrossPlayPrivilege)
	{
		P_GET_UBOOL(Z_Param_ShowWarningUI);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCanUseUserCrossPlayPrivilege(Z_Param_ShowWarningUI);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execHasCanUseUserCrossPlayPrivilegeError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCanUseUserCrossPlayPrivilegeError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execHasOnlineAgeRestriction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasOnlineAgeRestriction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execHasRequiredPatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasRequiredPatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execIsBlockedUser)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProductID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBlockedUser(Z_Param_ProductID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execIsOSSFirstLoggedin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOSSFirstLoggedin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execIsPlatformLoggedIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlatformLoggedIn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execOnEOSEvent)
	{
		P_GET_ENUM(EELEOSEventType,Z_Param_EventType);
		P_GET_ENUM(EELEOSEventResult,Z_Param_EventResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEOSEvent(EELEOSEventType(Z_Param_EventType),EELEOSEventResult(Z_Param_EventResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execOnWindowFocusChanged)
	{
		P_GET_UBOOL(Z_Param__bIsFocused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnWindowFocusChanged(Z_Param__bIsFocused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execQueryBlockedPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->QueryBlockedPlayers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execQueryBlockedPlayersWithDelegate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnQueryBlockedListUpdated);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->QueryBlockedPlayersWithDelegate(FOnQueryBlockedListUpdated(Z_Param_Out_OnQueryBlockedListUpdated));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execReadOSSFriendsList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadOSSFriendsList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execRefreshPlayOnlinePrivilege)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshPlayOnlinePrivilege();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execResetOSSFirstLoggedin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetOSSFirstLoggedin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execSetOSSRichPresence)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PresenceString);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOSSRichPresence(Z_Param_PresenceString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execSetOSSStats)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StatsName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOSSStats(Z_Param_StatsName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execShowLoginUI)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__controllerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowLoginUI(Z_Param__controllerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELOSSLocalPlayer::execUnlockOSSAchievement)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AchievementName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockOSSAchievement(Z_Param_AchievementName);
		P_NATIVE_END;
	}
	void UELOSSLocalPlayer::StaticRegisterNativesUELOSSLocalPlayer()
	{
		UClass* Class = UELOSSLocalPlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncHasCanCommunicateOnlinePrivilege", &UELOSSLocalPlayer::execAsyncHasCanCommunicateOnlinePrivilege },
			{ "AsyncHasCanPlayOnlinePrivilege", &UELOSSLocalPlayer::execAsyncHasCanPlayOnlinePrivilege },
			{ "AsyncQueryCanOnlinePlayPrivilege", &UELOSSLocalPlayer::execAsyncQueryCanOnlinePlayPrivilege },
			{ "AsyncQueryUserPrivileges", &UELOSSLocalPlayer::execAsyncQueryUserPrivileges },
			{ "AsyncReadOSSFriendsList", &UELOSSLocalPlayer::execAsyncReadOSSFriendsList },
			{ "GetBlockedPlayers", &UELOSSLocalPlayer::execGetBlockedPlayers },
			{ "GetOSSAccountNickName", &UELOSSLocalPlayer::execGetOSSAccountNickName },
			{ "GetOSSFriendsList", &UELOSSLocalPlayer::execGetOSSFriendsList },
			{ "GetOSSFriendsProductUserIdList", &UELOSSLocalPlayer::execGetOSSFriendsProductUserIdList },
			{ "GetOSSFriendStatusByProductUserId", &UELOSSLocalPlayer::execGetOSSFriendStatusByProductUserId },
			{ "HasAnyPrivilegeError", &UELOSSLocalPlayer::execHasAnyPrivilegeError },
			{ "HasCanAccessOnlinePrivilege", &UELOSSLocalPlayer::execHasCanAccessOnlinePrivilege },
			{ "HasCanCommunicateOnlinePrivilege", &UELOSSLocalPlayer::execHasCanCommunicateOnlinePrivilege },
			{ "HasCanCommunicateOnlinePrivilegeError", &UELOSSLocalPlayer::execHasCanCommunicateOnlinePrivilegeError },
			{ "HasCanJoinPartyPrivilege", &UELOSSLocalPlayer::execHasCanJoinPartyPrivilege },
			{ "HasCanPlayOnlinePrivilege", &UELOSSLocalPlayer::execHasCanPlayOnlinePrivilege },
			{ "HasCanPlayOnlinePrivilegeError", &UELOSSLocalPlayer::execHasCanPlayOnlinePrivilegeError },
			{ "HasCanPlayPrivilege", &UELOSSLocalPlayer::execHasCanPlayPrivilege },
			{ "HasCanUseUGCPrivilege", &UELOSSLocalPlayer::execHasCanUseUGCPrivilege },
			{ "HasCanUseUGCPrivilegeError", &UELOSSLocalPlayer::execHasCanUseUGCPrivilegeError },
			{ "HasCanUseUserCrossPlayPrivilege", &UELOSSLocalPlayer::execHasCanUseUserCrossPlayPrivilege },
			{ "HasCanUseUserCrossPlayPrivilegeError", &UELOSSLocalPlayer::execHasCanUseUserCrossPlayPrivilegeError },
			{ "HasOnlineAgeRestriction", &UELOSSLocalPlayer::execHasOnlineAgeRestriction },
			{ "HasRequiredPatch", &UELOSSLocalPlayer::execHasRequiredPatch },
			{ "IsBlockedUser", &UELOSSLocalPlayer::execIsBlockedUser },
			{ "IsOSSFirstLoggedin", &UELOSSLocalPlayer::execIsOSSFirstLoggedin },
			{ "IsPlatformLoggedIn", &UELOSSLocalPlayer::execIsPlatformLoggedIn },
			{ "OnEOSEvent", &UELOSSLocalPlayer::execOnEOSEvent },
			{ "OnWindowFocusChanged", &UELOSSLocalPlayer::execOnWindowFocusChanged },
			{ "QueryBlockedPlayers", &UELOSSLocalPlayer::execQueryBlockedPlayers },
			{ "QueryBlockedPlayersWithDelegate", &UELOSSLocalPlayer::execQueryBlockedPlayersWithDelegate },
			{ "ReadOSSFriendsList", &UELOSSLocalPlayer::execReadOSSFriendsList },
			{ "RefreshPlayOnlinePrivilege", &UELOSSLocalPlayer::execRefreshPlayOnlinePrivilege },
			{ "ResetOSSFirstLoggedin", &UELOSSLocalPlayer::execResetOSSFirstLoggedin },
			{ "SetOSSRichPresence", &UELOSSLocalPlayer::execSetOSSRichPresence },
			{ "SetOSSStats", &UELOSSLocalPlayer::execSetOSSStats },
			{ "ShowLoginUI", &UELOSSLocalPlayer::execShowLoginUI },
			{ "UnlockOSSAchievement", &UELOSSLocalPlayer::execUnlockOSSAchievement },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanCommunicateOnlinePrivilege_Statics
	{
		struct ELOSSLocalPlayer_eventAsyncHasCanCommunicateOnlinePrivilege_Parms
		{
			FScriptDelegate OnCanCommunicateOnlinePrivilege;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCanCommunicateOnlinePrivilege_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnCanCommunicateOnlinePrivilege;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanCommunicateOnlinePrivilege_Statics::NewProp_OnCanCommunicateOnlinePrivilege_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanCommunicateOnlinePrivilege_Statics::NewProp_OnCanCommunicateOnlinePrivilege = { "OnCanCommunicateOnlinePrivilege", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventAsyncHasCanCommunicateOnlinePrivilege_Parms, OnCanCommunicateOnlinePrivilege), Z_Construct_UDelegateFunction_ABP_200508_OnCanPlayOnlinePrivilege__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanCommunicateOnlinePrivilege_Statics::NewProp_OnCanCommunicateOnlinePrivilege_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanCommunicateOnlinePrivilege_Statics::NewProp_OnCanCommunicateOnlinePrivilege_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanCommunicateOnlinePrivilege_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanCommunicateOnlinePrivilege_Statics::NewProp_OnCanCommunicateOnlinePrivilege,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanCommunicateOnlinePrivilege_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanCommunicateOnlinePrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "AsyncHasCanCommunicateOnlinePrivilege", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventAsyncHasCanCommunicateOnlinePrivilege_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanCommunicateOnlinePrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanCommunicateOnlinePrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanCommunicateOnlinePrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanCommunicateOnlinePrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanCommunicateOnlinePrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanCommunicateOnlinePrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics
	{
		struct ELOSSLocalPlayer_eventAsyncHasCanPlayOnlinePrivilege_Parms
		{
			FScriptDelegate OnCanPlayOnlinePrivilege;
			bool ShowWarningUI;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCanPlayOnlinePrivilege_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnCanPlayOnlinePrivilege;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowWarningUI_MetaData[];
#endif
		static void NewProp_ShowWarningUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowWarningUI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::NewProp_OnCanPlayOnlinePrivilege_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::NewProp_OnCanPlayOnlinePrivilege = { "OnCanPlayOnlinePrivilege", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventAsyncHasCanPlayOnlinePrivilege_Parms, OnCanPlayOnlinePrivilege), Z_Construct_UDelegateFunction_ABP_200508_OnCanPlayOnlinePrivilege__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::NewProp_OnCanPlayOnlinePrivilege_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::NewProp_OnCanPlayOnlinePrivilege_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::NewProp_ShowWarningUI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::NewProp_ShowWarningUI_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventAsyncHasCanPlayOnlinePrivilege_Parms*)Obj)->ShowWarningUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::NewProp_ShowWarningUI = { "ShowWarningUI", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventAsyncHasCanPlayOnlinePrivilege_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::NewProp_ShowWarningUI_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::NewProp_ShowWarningUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::NewProp_ShowWarningUI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::NewProp_OnCanPlayOnlinePrivilege,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::NewProp_ShowWarningUI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "AsyncHasCanPlayOnlinePrivilege", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventAsyncHasCanPlayOnlinePrivilege_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics
	{
		struct ELOSSLocalPlayer_eventAsyncQueryCanOnlinePlayPrivilege_Parms
		{
			FScriptDelegate OnQueryPrivilege;
			bool CheckPSPlus;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryPrivilege_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnQueryPrivilege;
		static void NewProp_CheckPSPlus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CheckPSPlus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics::NewProp_OnQueryPrivilege_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics::NewProp_OnQueryPrivilege = { "OnQueryPrivilege", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventAsyncQueryCanOnlinePlayPrivilege_Parms, OnQueryPrivilege), Z_Construct_UDelegateFunction_ABP_200508_OnQueryPrivilege__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics::NewProp_OnQueryPrivilege_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics::NewProp_OnQueryPrivilege_MetaData)) };
	void Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics::NewProp_CheckPSPlus_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventAsyncQueryCanOnlinePlayPrivilege_Parms*)Obj)->CheckPSPlus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics::NewProp_CheckPSPlus = { "CheckPSPlus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventAsyncQueryCanOnlinePlayPrivilege_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics::NewProp_CheckPSPlus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics::NewProp_OnQueryPrivilege,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics::NewProp_CheckPSPlus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "AsyncQueryCanOnlinePlayPrivilege", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventAsyncQueryCanOnlinePlayPrivilege_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics
	{
		struct ELOSSLocalPlayer_eventAsyncQueryUserPrivileges_Parms
		{
			FScriptDelegate OnQueryUserPrivileges;
			EUserPrivilegeBit UserPrivilegeBit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryUserPrivileges_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnQueryUserPrivileges;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UserPrivilegeBit_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UserPrivilegeBit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics::NewProp_OnQueryUserPrivileges_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics::NewProp_OnQueryUserPrivileges = { "OnQueryUserPrivileges", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventAsyncQueryUserPrivileges_Parms, OnQueryUserPrivileges), Z_Construct_UDelegateFunction_ABP_200508_OnQueryPrivileges__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics::NewProp_OnQueryUserPrivileges_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics::NewProp_OnQueryUserPrivileges_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics::NewProp_UserPrivilegeBit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics::NewProp_UserPrivilegeBit = { "UserPrivilegeBit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventAsyncQueryUserPrivileges_Parms, UserPrivilegeBit), Z_Construct_UEnum_ABP_200508_EUserPrivilegeBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics::NewProp_OnQueryUserPrivileges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics::NewProp_UserPrivilegeBit_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics::NewProp_UserPrivilegeBit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "AsyncQueryUserPrivileges", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventAsyncQueryUserPrivileges_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_AsyncReadOSSFriendsList_Statics
	{
		struct ELOSSLocalPlayer_eventAsyncReadOSSFriendsList_Parms
		{
			FScriptDelegate OnReadOSSFriendsList;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReadOSSFriendsList_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnReadOSSFriendsList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_AsyncReadOSSFriendsList_Statics::NewProp_OnReadOSSFriendsList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_AsyncReadOSSFriendsList_Statics::NewProp_OnReadOSSFriendsList = { "OnReadOSSFriendsList", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventAsyncReadOSSFriendsList_Parms, OnReadOSSFriendsList), Z_Construct_UDelegateFunction_ABP_200508_OnReadOSSFriendsList__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncReadOSSFriendsList_Statics::NewProp_OnReadOSSFriendsList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncReadOSSFriendsList_Statics::NewProp_OnReadOSSFriendsList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_AsyncReadOSSFriendsList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_AsyncReadOSSFriendsList_Statics::NewProp_OnReadOSSFriendsList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_AsyncReadOSSFriendsList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_AsyncReadOSSFriendsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "AsyncReadOSSFriendsList", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventAsyncReadOSSFriendsList_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_AsyncReadOSSFriendsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncReadOSSFriendsList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncReadOSSFriendsList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_AsyncReadOSSFriendsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_AsyncReadOSSFriendsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_AsyncReadOSSFriendsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics
	{
		struct ELOSSLocalPlayer_eventGetBlockedPlayers_Parms
		{
			TMap<FString,FString> OutBlockedMap;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutBlockedMap_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutBlockedMap_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OutBlockedMap;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::NewProp_OutBlockedMap_ValueProp = { "OutBlockedMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::NewProp_OutBlockedMap_Key_KeyProp = { "OutBlockedMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::NewProp_OutBlockedMap = { "OutBlockedMap", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventGetBlockedPlayers_Parms, OutBlockedMap), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventGetBlockedPlayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventGetBlockedPlayers_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::NewProp_OutBlockedMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::NewProp_OutBlockedMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::NewProp_OutBlockedMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "GetBlockedPlayers", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventGetBlockedPlayers_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSAccountNickName_Statics
	{
		struct ELOSSLocalPlayer_eventGetOSSAccountNickName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSAccountNickName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventGetOSSAccountNickName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSAccountNickName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSAccountNickName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSAccountNickName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSAccountNickName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "GetOSSAccountNickName", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventGetOSSAccountNickName_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSAccountNickName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSAccountNickName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSAccountNickName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSAccountNickName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSAccountNickName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSAccountNickName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics
	{
		struct ELOSSLocalPlayer_eventGetOSSFriendsList_Parms
		{
			TArray<FELFriendInfo> OutFriendArray;
			EELFriendsListType FriendsListType;
			int32 SortFlag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutFriendArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFriendArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FriendsListType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FriendsListType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::NewProp_OutFriendArray_Inner = { "OutFriendArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELFriendInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::NewProp_OutFriendArray = { "OutFriendArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventGetOSSFriendsList_Parms, OutFriendArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::NewProp_FriendsListType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::NewProp_FriendsListType = { "FriendsListType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventGetOSSFriendsList_Parms, FriendsListType), Z_Construct_UEnum_ABP_200508_EELFriendsListType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::NewProp_SortFlag = { "SortFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventGetOSSFriendsList_Parms, SortFlag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::NewProp_OutFriendArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::NewProp_OutFriendArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::NewProp_FriendsListType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::NewProp_FriendsListType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::NewProp_SortFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "GetOSSFriendsList", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventGetOSSFriendsList_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsProductUserIdList_Statics
	{
		struct ELOSSLocalPlayer_eventGetOSSFriendsProductUserIdList_Parms
		{
			TArray<FString> OutFriendArray;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutFriendArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutFriendArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsProductUserIdList_Statics::NewProp_OutFriendArray_Inner = { "OutFriendArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsProductUserIdList_Statics::NewProp_OutFriendArray = { "OutFriendArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventGetOSSFriendsProductUserIdList_Parms, OutFriendArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsProductUserIdList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsProductUserIdList_Statics::NewProp_OutFriendArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsProductUserIdList_Statics::NewProp_OutFriendArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsProductUserIdList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsProductUserIdList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "GetOSSFriendsProductUserIdList", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventGetOSSFriendsProductUserIdList_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsProductUserIdList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsProductUserIdList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsProductUserIdList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsProductUserIdList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsProductUserIdList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsProductUserIdList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics
	{
		struct ELOSSLocalPlayer_eventGetOSSFriendStatusByProductUserId_Parms
		{
			FString ProductUserID;
			ELOSSFriendStatus ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductUserID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductUserID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics::NewProp_ProductUserID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics::NewProp_ProductUserID = { "ProductUserID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventGetOSSFriendStatusByProductUserId_Parms, ProductUserID), METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics::NewProp_ProductUserID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics::NewProp_ProductUserID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventGetOSSFriendStatusByProductUserId_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ELOSSFriendStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics::NewProp_ProductUserID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "GetOSSFriendStatusByProductUserId", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventGetOSSFriendStatusByProductUserId_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_HasAnyPrivilegeError_Statics
	{
		struct ELOSSLocalPlayer_eventHasAnyPrivilegeError_Parms
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
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasAnyPrivilegeError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasAnyPrivilegeError_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasAnyPrivilegeError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasAnyPrivilegeError_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasAnyPrivilegeError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_HasAnyPrivilegeError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasAnyPrivilegeError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasAnyPrivilegeError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_HasAnyPrivilegeError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "HasAnyPrivilegeError", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventHasAnyPrivilegeError_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_HasAnyPrivilegeError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasAnyPrivilegeError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasAnyPrivilegeError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasAnyPrivilegeError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_HasAnyPrivilegeError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_HasAnyPrivilegeError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_HasCanAccessOnlinePrivilege_Statics
	{
		struct ELOSSLocalPlayer_eventHasCanAccessOnlinePrivilege_Parms
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
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasCanAccessOnlinePrivilege_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasCanAccessOnlinePrivilege_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanAccessOnlinePrivilege_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasCanAccessOnlinePrivilege_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanAccessOnlinePrivilege_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_HasCanAccessOnlinePrivilege_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasCanAccessOnlinePrivilege_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasCanAccessOnlinePrivilege_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanAccessOnlinePrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "HasCanAccessOnlinePrivilege", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventHasCanAccessOnlinePrivilege_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_HasCanAccessOnlinePrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanAccessOnlinePrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanAccessOnlinePrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanAccessOnlinePrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_HasCanAccessOnlinePrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_HasCanAccessOnlinePrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics
	{
		struct ELOSSLocalPlayer_eventHasCanCommunicateOnlinePrivilege_Parms
		{
			bool ShowWarningUI;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowWarningUI_MetaData[];
#endif
		static void NewProp_ShowWarningUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowWarningUI;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::NewProp_ShowWarningUI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::NewProp_ShowWarningUI_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasCanCommunicateOnlinePrivilege_Parms*)Obj)->ShowWarningUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::NewProp_ShowWarningUI = { "ShowWarningUI", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasCanCommunicateOnlinePrivilege_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::NewProp_ShowWarningUI_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::NewProp_ShowWarningUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::NewProp_ShowWarningUI_MetaData)) };
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasCanCommunicateOnlinePrivilege_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasCanCommunicateOnlinePrivilege_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::NewProp_ShowWarningUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "HasCanCommunicateOnlinePrivilege", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventHasCanCommunicateOnlinePrivilege_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilegeError_Statics
	{
		struct ELOSSLocalPlayer_eventHasCanCommunicateOnlinePrivilegeError_Parms
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
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilegeError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasCanCommunicateOnlinePrivilegeError_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilegeError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasCanCommunicateOnlinePrivilegeError_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilegeError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilegeError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilegeError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilegeError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilegeError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "HasCanCommunicateOnlinePrivilegeError", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventHasCanCommunicateOnlinePrivilegeError_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilegeError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilegeError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilegeError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilegeError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilegeError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilegeError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics
	{
		struct ELOSSLocalPlayer_eventHasCanJoinPartyPrivilege_Parms
		{
			bool ShowWarningUI;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowWarningUI_MetaData[];
#endif
		static void NewProp_ShowWarningUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowWarningUI;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::NewProp_ShowWarningUI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::NewProp_ShowWarningUI_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasCanJoinPartyPrivilege_Parms*)Obj)->ShowWarningUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::NewProp_ShowWarningUI = { "ShowWarningUI", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasCanJoinPartyPrivilege_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::NewProp_ShowWarningUI_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::NewProp_ShowWarningUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::NewProp_ShowWarningUI_MetaData)) };
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasCanJoinPartyPrivilege_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasCanJoinPartyPrivilege_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::NewProp_ShowWarningUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "HasCanJoinPartyPrivilege", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventHasCanJoinPartyPrivilege_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics
	{
		struct ELOSSLocalPlayer_eventHasCanPlayOnlinePrivilege_Parms
		{
			bool ShowWarningUI;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowWarningUI_MetaData[];
#endif
		static void NewProp_ShowWarningUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowWarningUI;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::NewProp_ShowWarningUI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::NewProp_ShowWarningUI_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasCanPlayOnlinePrivilege_Parms*)Obj)->ShowWarningUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::NewProp_ShowWarningUI = { "ShowWarningUI", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasCanPlayOnlinePrivilege_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::NewProp_ShowWarningUI_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::NewProp_ShowWarningUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::NewProp_ShowWarningUI_MetaData)) };
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasCanPlayOnlinePrivilege_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasCanPlayOnlinePrivilege_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::NewProp_ShowWarningUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "HasCanPlayOnlinePrivilege", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventHasCanPlayOnlinePrivilege_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilegeError_Statics
	{
		struct ELOSSLocalPlayer_eventHasCanPlayOnlinePrivilegeError_Parms
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
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilegeError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasCanPlayOnlinePrivilegeError_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilegeError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasCanPlayOnlinePrivilegeError_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilegeError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilegeError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilegeError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilegeError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilegeError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "HasCanPlayOnlinePrivilegeError", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventHasCanPlayOnlinePrivilegeError_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilegeError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilegeError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilegeError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilegeError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilegeError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilegeError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayPrivilege_Statics
	{
		struct ELOSSLocalPlayer_eventHasCanPlayPrivilege_Parms
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
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayPrivilege_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasCanPlayPrivilege_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayPrivilege_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasCanPlayPrivilege_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayPrivilege_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayPrivilege_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayPrivilege_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayPrivilege_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayPrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "HasCanPlayPrivilege", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventHasCanPlayPrivilege_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayPrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayPrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayPrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayPrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayPrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayPrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics
	{
		struct ELOSSLocalPlayer_eventHasCanUseUGCPrivilege_Parms
		{
			bool ShowWarningUI;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowWarningUI_MetaData[];
#endif
		static void NewProp_ShowWarningUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowWarningUI;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::NewProp_ShowWarningUI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::NewProp_ShowWarningUI_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasCanUseUGCPrivilege_Parms*)Obj)->ShowWarningUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::NewProp_ShowWarningUI = { "ShowWarningUI", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasCanUseUGCPrivilege_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::NewProp_ShowWarningUI_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::NewProp_ShowWarningUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::NewProp_ShowWarningUI_MetaData)) };
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasCanUseUGCPrivilege_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasCanUseUGCPrivilege_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::NewProp_ShowWarningUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "HasCanUseUGCPrivilege", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventHasCanUseUGCPrivilege_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilegeError_Statics
	{
		struct ELOSSLocalPlayer_eventHasCanUseUGCPrivilegeError_Parms
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
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilegeError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasCanUseUGCPrivilegeError_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilegeError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasCanUseUGCPrivilegeError_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilegeError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilegeError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilegeError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilegeError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilegeError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "HasCanUseUGCPrivilegeError", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventHasCanUseUGCPrivilegeError_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilegeError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilegeError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilegeError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilegeError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilegeError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilegeError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics
	{
		struct ELOSSLocalPlayer_eventHasCanUseUserCrossPlayPrivilege_Parms
		{
			bool ShowWarningUI;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowWarningUI_MetaData[];
#endif
		static void NewProp_ShowWarningUI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowWarningUI;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::NewProp_ShowWarningUI_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::NewProp_ShowWarningUI_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasCanUseUserCrossPlayPrivilege_Parms*)Obj)->ShowWarningUI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::NewProp_ShowWarningUI = { "ShowWarningUI", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasCanUseUserCrossPlayPrivilege_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::NewProp_ShowWarningUI_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::NewProp_ShowWarningUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::NewProp_ShowWarningUI_MetaData)) };
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasCanUseUserCrossPlayPrivilege_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasCanUseUserCrossPlayPrivilege_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::NewProp_ShowWarningUI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "HasCanUseUserCrossPlayPrivilege", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventHasCanUseUserCrossPlayPrivilege_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilegeError_Statics
	{
		struct ELOSSLocalPlayer_eventHasCanUseUserCrossPlayPrivilegeError_Parms
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
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilegeError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasCanUseUserCrossPlayPrivilegeError_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilegeError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasCanUseUserCrossPlayPrivilegeError_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilegeError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilegeError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilegeError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilegeError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilegeError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "HasCanUseUserCrossPlayPrivilegeError", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventHasCanUseUserCrossPlayPrivilegeError_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilegeError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilegeError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilegeError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilegeError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilegeError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilegeError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_HasOnlineAgeRestriction_Statics
	{
		struct ELOSSLocalPlayer_eventHasOnlineAgeRestriction_Parms
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
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasOnlineAgeRestriction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasOnlineAgeRestriction_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasOnlineAgeRestriction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasOnlineAgeRestriction_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasOnlineAgeRestriction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_HasOnlineAgeRestriction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasOnlineAgeRestriction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasOnlineAgeRestriction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_HasOnlineAgeRestriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "HasOnlineAgeRestriction", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventHasOnlineAgeRestriction_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_HasOnlineAgeRestriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasOnlineAgeRestriction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasOnlineAgeRestriction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasOnlineAgeRestriction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_HasOnlineAgeRestriction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_HasOnlineAgeRestriction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_HasRequiredPatch_Statics
	{
		struct ELOSSLocalPlayer_eventHasRequiredPatch_Parms
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
	void Z_Construct_UFunction_UELOSSLocalPlayer_HasRequiredPatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventHasRequiredPatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_HasRequiredPatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventHasRequiredPatch_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_HasRequiredPatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_HasRequiredPatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_HasRequiredPatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_HasRequiredPatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_HasRequiredPatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "HasRequiredPatch", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventHasRequiredPatch_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_HasRequiredPatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasRequiredPatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_HasRequiredPatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_HasRequiredPatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_HasRequiredPatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_HasRequiredPatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics
	{
		struct ELOSSLocalPlayer_eventIsBlockedUser_Parms
		{
			FString ProductID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics::NewProp_ProductID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics::NewProp_ProductID = { "ProductID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventIsBlockedUser_Parms, ProductID), METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics::NewProp_ProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics::NewProp_ProductID_MetaData)) };
	void Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventIsBlockedUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventIsBlockedUser_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics::NewProp_ProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "IsBlockedUser", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventIsBlockedUser_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_IsOSSFirstLoggedin_Statics
	{
		struct ELOSSLocalPlayer_eventIsOSSFirstLoggedin_Parms
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
	void Z_Construct_UFunction_UELOSSLocalPlayer_IsOSSFirstLoggedin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventIsOSSFirstLoggedin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_IsOSSFirstLoggedin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventIsOSSFirstLoggedin_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_IsOSSFirstLoggedin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_IsOSSFirstLoggedin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_IsOSSFirstLoggedin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_IsOSSFirstLoggedin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_IsOSSFirstLoggedin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "IsOSSFirstLoggedin", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventIsOSSFirstLoggedin_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_IsOSSFirstLoggedin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_IsOSSFirstLoggedin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_IsOSSFirstLoggedin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_IsOSSFirstLoggedin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_IsOSSFirstLoggedin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_IsOSSFirstLoggedin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_IsPlatformLoggedIn_Statics
	{
		struct ELOSSLocalPlayer_eventIsPlatformLoggedIn_Parms
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
	void Z_Construct_UFunction_UELOSSLocalPlayer_IsPlatformLoggedIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventIsPlatformLoggedIn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_IsPlatformLoggedIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventIsPlatformLoggedIn_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_IsPlatformLoggedIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_IsPlatformLoggedIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_IsPlatformLoggedIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_IsPlatformLoggedIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_IsPlatformLoggedIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "IsPlatformLoggedIn", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventIsPlatformLoggedIn_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_IsPlatformLoggedIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_IsPlatformLoggedIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_IsPlatformLoggedIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_IsPlatformLoggedIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_IsPlatformLoggedIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_IsPlatformLoggedIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent_Statics
	{
		struct ELOSSLocalPlayer_eventOnEOSEvent_Parms
		{
			EELEOSEventType EventType;
			EELEOSEventResult EventResult;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventOnEOSEvent_Parms, EventType), Z_Construct_UEnum_ABP_200508_EELEOSEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent_Statics::NewProp_EventResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent_Statics::NewProp_EventResult = { "EventResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventOnEOSEvent_Parms, EventResult), Z_Construct_UEnum_ABP_200508_EELEOSEventResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent_Statics::NewProp_EventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent_Statics::NewProp_EventResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent_Statics::NewProp_EventResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "OnEOSEvent", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventOnEOSEvent_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_OnWindowFocusChanged_Statics
	{
		struct ELOSSLocalPlayer_eventOnWindowFocusChanged_Parms
		{
			bool _bIsFocused;
		};
		static void NewProp__bIsFocused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bIsFocused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELOSSLocalPlayer_OnWindowFocusChanged_Statics::NewProp__bIsFocused_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventOnWindowFocusChanged_Parms*)Obj)->_bIsFocused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_OnWindowFocusChanged_Statics::NewProp__bIsFocused = { "_bIsFocused", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventOnWindowFocusChanged_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_OnWindowFocusChanged_Statics::NewProp__bIsFocused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_OnWindowFocusChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_OnWindowFocusChanged_Statics::NewProp__bIsFocused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_OnWindowFocusChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_OnWindowFocusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "OnWindowFocusChanged", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventOnWindowFocusChanged_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_OnWindowFocusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_OnWindowFocusChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_OnWindowFocusChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_OnWindowFocusChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_OnWindowFocusChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_OnWindowFocusChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayers_Statics
	{
		struct ELOSSLocalPlayer_eventQueryBlockedPlayers_Parms
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
	void Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventQueryBlockedPlayers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventQueryBlockedPlayers_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "QueryBlockedPlayers", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventQueryBlockedPlayers_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics
	{
		struct ELOSSLocalPlayer_eventQueryBlockedPlayersWithDelegate_Parms
		{
			FScriptDelegate OnQueryBlockedListUpdated;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryBlockedListUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnQueryBlockedListUpdated;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics::NewProp_OnQueryBlockedListUpdated_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics::NewProp_OnQueryBlockedListUpdated = { "OnQueryBlockedListUpdated", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventQueryBlockedPlayersWithDelegate_Parms, OnQueryBlockedListUpdated), Z_Construct_UDelegateFunction_ABP_200508_OnQueryBlockedListUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics::NewProp_OnQueryBlockedListUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics::NewProp_OnQueryBlockedListUpdated_MetaData)) };
	void Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELOSSLocalPlayer_eventQueryBlockedPlayersWithDelegate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELOSSLocalPlayer_eventQueryBlockedPlayersWithDelegate_Parms), &Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics::NewProp_OnQueryBlockedListUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "QueryBlockedPlayersWithDelegate", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventQueryBlockedPlayersWithDelegate_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_ReadOSSFriendsList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_ReadOSSFriendsList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_ReadOSSFriendsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "ReadOSSFriendsList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_ReadOSSFriendsList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_ReadOSSFriendsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_ReadOSSFriendsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_ReadOSSFriendsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_RefreshPlayOnlinePrivilege_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_RefreshPlayOnlinePrivilege_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_RefreshPlayOnlinePrivilege_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "RefreshPlayOnlinePrivilege", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_RefreshPlayOnlinePrivilege_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_RefreshPlayOnlinePrivilege_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_RefreshPlayOnlinePrivilege()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_RefreshPlayOnlinePrivilege_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_ResetOSSFirstLoggedin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_ResetOSSFirstLoggedin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_ResetOSSFirstLoggedin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "ResetOSSFirstLoggedin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_ResetOSSFirstLoggedin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_ResetOSSFirstLoggedin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_ResetOSSFirstLoggedin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_ResetOSSFirstLoggedin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSRichPresence_Statics
	{
		struct ELOSSLocalPlayer_eventSetOSSRichPresence_Parms
		{
			FString PresenceString;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PresenceString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSRichPresence_Statics::NewProp_PresenceString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSRichPresence_Statics::NewProp_PresenceString = { "PresenceString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventSetOSSRichPresence_Parms, PresenceString), METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSRichPresence_Statics::NewProp_PresenceString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSRichPresence_Statics::NewProp_PresenceString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSRichPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSRichPresence_Statics::NewProp_PresenceString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSRichPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "SetOSSRichPresence", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventSetOSSRichPresence_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSRichPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSRichPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSRichPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSRichPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSRichPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSRichPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats_Statics
	{
		struct ELOSSLocalPlayer_eventSetOSSStats_Parms
		{
			FName StatsName;
			int32 Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatsName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats_Statics::NewProp_StatsName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats_Statics::NewProp_StatsName = { "StatsName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventSetOSSStats_Parms, StatsName), METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats_Statics::NewProp_StatsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats_Statics::NewProp_StatsName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventSetOSSStats_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats_Statics::NewProp_StatsName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "SetOSSStats", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventSetOSSStats_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_ShowLoginUI_Statics
	{
		struct ELOSSLocalPlayer_eventShowLoginUI_Parms
		{
			int32 _controllerIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__controllerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__controllerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_ShowLoginUI_Statics::NewProp__controllerIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_ShowLoginUI_Statics::NewProp__controllerIndex = { "_controllerIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventShowLoginUI_Parms, _controllerIndex), METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_ShowLoginUI_Statics::NewProp__controllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_ShowLoginUI_Statics::NewProp__controllerIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_ShowLoginUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_ShowLoginUI_Statics::NewProp__controllerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_ShowLoginUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_ShowLoginUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "ShowLoginUI", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventShowLoginUI_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_ShowLoginUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_ShowLoginUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_ShowLoginUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_ShowLoginUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_ShowLoginUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_ShowLoginUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELOSSLocalPlayer_UnlockOSSAchievement_Statics
	{
		struct ELOSSLocalPlayer_eventUnlockOSSAchievement_Parms
		{
			FName AchievementName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AchievementName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_UnlockOSSAchievement_Statics::NewProp_AchievementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELOSSLocalPlayer_UnlockOSSAchievement_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELOSSLocalPlayer_eventUnlockOSSAchievement_Parms, AchievementName), METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_UnlockOSSAchievement_Statics::NewProp_AchievementName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_UnlockOSSAchievement_Statics::NewProp_AchievementName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELOSSLocalPlayer_UnlockOSSAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELOSSLocalPlayer_UnlockOSSAchievement_Statics::NewProp_AchievementName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELOSSLocalPlayer_UnlockOSSAchievement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELOSSLocalPlayer_UnlockOSSAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELOSSLocalPlayer, nullptr, "UnlockOSSAchievement", nullptr, nullptr, sizeof(ELOSSLocalPlayer_eventUnlockOSSAchievement_Parms), Z_Construct_UFunction_UELOSSLocalPlayer_UnlockOSSAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_UnlockOSSAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELOSSLocalPlayer_UnlockOSSAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELOSSLocalPlayer_UnlockOSSAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELOSSLocalPlayer_UnlockOSSAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELOSSLocalPlayer_UnlockOSSAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELOSSLocalPlayer_NoRegister()
	{
		return UELOSSLocalPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UELOSSLocalPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCloseLoginUIEventHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCloseLoginUIEventHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLoginCancelEventHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoginCancelEventHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReadFriendsListEventHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReadFriendsListEventHandler;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_OnQueryPrivileges_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQueryPrivileges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OnQueryPrivileges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELOSSLocalPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalPlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELOSSLocalPlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanCommunicateOnlinePrivilege, "AsyncHasCanCommunicateOnlinePrivilege" }, // 3506280347
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_AsyncHasCanPlayOnlinePrivilege, "AsyncHasCanPlayOnlinePrivilege" }, // 3644766192
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryCanOnlinePlayPrivilege, "AsyncQueryCanOnlinePlayPrivilege" }, // 2396723084
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_AsyncQueryUserPrivileges, "AsyncQueryUserPrivileges" }, // 2795797367
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_AsyncReadOSSFriendsList, "AsyncReadOSSFriendsList" }, // 2014049792
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_GetBlockedPlayers, "GetBlockedPlayers" }, // 7886148
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSAccountNickName, "GetOSSAccountNickName" }, // 2543296189
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsList, "GetOSSFriendsList" }, // 503758366
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendsProductUserIdList, "GetOSSFriendsProductUserIdList" }, // 2981361969
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_GetOSSFriendStatusByProductUserId, "GetOSSFriendStatusByProductUserId" }, // 4183830467
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_HasAnyPrivilegeError, "HasAnyPrivilegeError" }, // 253069986
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanAccessOnlinePrivilege, "HasCanAccessOnlinePrivilege" }, // 684734090
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilege, "HasCanCommunicateOnlinePrivilege" }, // 3777972795
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanCommunicateOnlinePrivilegeError, "HasCanCommunicateOnlinePrivilegeError" }, // 2362696332
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanJoinPartyPrivilege, "HasCanJoinPartyPrivilege" }, // 3127666043
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilege, "HasCanPlayOnlinePrivilege" }, // 4076056150
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayOnlinePrivilegeError, "HasCanPlayOnlinePrivilegeError" }, // 1325312564
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanPlayPrivilege, "HasCanPlayPrivilege" }, // 3565333623
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilege, "HasCanUseUGCPrivilege" }, // 2431473673
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUGCPrivilegeError, "HasCanUseUGCPrivilegeError" }, // 2560884622
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilege, "HasCanUseUserCrossPlayPrivilege" }, // 1000693896
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_HasCanUseUserCrossPlayPrivilegeError, "HasCanUseUserCrossPlayPrivilegeError" }, // 2857024063
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_HasOnlineAgeRestriction, "HasOnlineAgeRestriction" }, // 2809429530
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_HasRequiredPatch, "HasRequiredPatch" }, // 4275606102
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_IsBlockedUser, "IsBlockedUser" }, // 551763022
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_IsOSSFirstLoggedin, "IsOSSFirstLoggedin" }, // 1579742426
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_IsPlatformLoggedIn, "IsPlatformLoggedIn" }, // 1533213781
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_OnEOSEvent, "OnEOSEvent" }, // 3511096581
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_OnWindowFocusChanged, "OnWindowFocusChanged" }, // 3776401513
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayers, "QueryBlockedPlayers" }, // 1216995400
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_QueryBlockedPlayersWithDelegate, "QueryBlockedPlayersWithDelegate" }, // 2546165761
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_ReadOSSFriendsList, "ReadOSSFriendsList" }, // 957526523
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_RefreshPlayOnlinePrivilege, "RefreshPlayOnlinePrivilege" }, // 4266979094
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_ResetOSSFirstLoggedin, "ResetOSSFirstLoggedin" }, // 413153643
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSRichPresence, "SetOSSRichPresence" }, // 2824816335
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_SetOSSStats, "SetOSSStats" }, // 606729729
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_ShowLoginUI, "ShowLoginUI" }, // 3448783548
		{ &Z_Construct_UFunction_UELOSSLocalPlayer_UnlockOSSAchievement, "UnlockOSSAchievement" }, // 2769268297
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOSSLocalPlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELOSSLocalPlayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnCloseLoginUIEventHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOSSLocalPlayer" },
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnCloseLoginUIEventHandler = { "OnCloseLoginUIEventHandler", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOSSLocalPlayer, OnCloseLoginUIEventHandler), Z_Construct_UDelegateFunction_ABP_200508_CloseLoginUIEventHandle__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnCloseLoginUIEventHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnCloseLoginUIEventHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnLoginCancelEventHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOSSLocalPlayer" },
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnLoginCancelEventHandler = { "OnLoginCancelEventHandler", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOSSLocalPlayer, OnLoginCancelEventHandler), Z_Construct_UDelegateFunction_ABP_200508_LoginCancelEventHandle__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnLoginCancelEventHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnLoginCancelEventHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnReadFriendsListEventHandler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOSSLocalPlayer" },
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnReadFriendsListEventHandler = { "OnReadFriendsListEventHandler", nullptr, (EPropertyFlags)0x0010000010080005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOSSLocalPlayer, OnReadFriendsListEventHandler), Z_Construct_UDelegateFunction_ABP_200508_ReadFriendsListEventHandle__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnReadFriendsListEventHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnReadFriendsListEventHandler_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnQueryPrivileges_Inner = { "OnQueryPrivileges", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UDelegateFunction_ABP_200508_OnQueryPrivileges__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnQueryPrivileges_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELOSSLocalPlayer" },
		{ "ModuleRelativePath", "Public/ELOSSLocalPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnQueryPrivileges = { "OnQueryPrivileges", nullptr, (EPropertyFlags)0x0020088000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELOSSLocalPlayer, OnQueryPrivileges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnQueryPrivileges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnQueryPrivileges_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELOSSLocalPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnCloseLoginUIEventHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnLoginCancelEventHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnReadFriendsListEventHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnQueryPrivileges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELOSSLocalPlayer_Statics::NewProp_OnQueryPrivileges,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELOSSLocalPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELOSSLocalPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELOSSLocalPlayer_Statics::ClassParams = {
		&UELOSSLocalPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELOSSLocalPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELOSSLocalPlayer_Statics::PropPointers),
		0,
		0x008000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UELOSSLocalPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELOSSLocalPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELOSSLocalPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELOSSLocalPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELOSSLocalPlayer, 3587006699);
	template<> ABP_200508_API UClass* StaticClass<UELOSSLocalPlayer>()
	{
		return UELOSSLocalPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELOSSLocalPlayer(Z_Construct_UClass_UELOSSLocalPlayer, &UELOSSLocalPlayer::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELOSSLocalPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELOSSLocalPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
