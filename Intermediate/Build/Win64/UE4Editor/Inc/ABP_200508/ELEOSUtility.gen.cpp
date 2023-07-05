// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELEOSUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELEOSUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerNameText();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EPlatformType();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EExternalAccountType();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSSanitizeTextPartyChat_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSSanitizeTextWrestlerData_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSExternalAccountId();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FLobbyInvite();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAntiCheatClient_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityUserBase_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSPresenceBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSFriend_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSGameChatSession_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSGameSession_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSGameSessionMatching_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSLobby_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSManager_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSAuth_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriend_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSLeaderboard_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSManager_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSPresence_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELOnlineRankCalculator_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSReports_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSSanctions_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSStats_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUser_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContents_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserManager_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSVoice_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSGameStatus();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriendUser_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileColorParam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ABP_200508_API UClass* Z_Construct_UClass_UELNetworkObserverBase_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSessionGamePlayerDataBP();
	ABP_200508_API UClass* Z_Construct_UClass_UELYGS2Manager_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSFriendPresence_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ELobbyInviteError();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_EOSSanitizePartyChatEvent__DelegateSignature();
	ABP_200508_API UFunction* Z_Construct_UDelegateFunction_ABP_200508_EOSSanitizeWrestlerNameTextEvent__DelegateSignature();
	ABP_200508_API UClass* Z_Construct_UClass_UELEOSLobbyMiniGameInfo_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELEOSUtility::execApplyWrestlerNameText)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UObject,Z_Param_OnlineWrestlerData);
		P_GET_STRUCT_REF(FWrestlerNameText,Z_Param_Out_WrestlerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::ApplyWrestlerNameText(Z_Param_WorldContextObject,Z_Param_OnlineWrestlerData,Z_Param_Out_WrestlerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execCheckUsingMultiplayerFeatures)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::CheckUsingMultiplayerFeatures(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execConvertPlatformTypeToExternalAccountType)
	{
		P_GET_ENUM(EPlatformType,Z_Param_ELPlatform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EExternalAccountType*)Z_Param__Result=UELEOSUtility::ConvertPlatformTypeToExternalAccountType(EPlatformType(Z_Param_ELPlatform));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execCreateLobby)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::CreateLobby(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execCreateSanitizeTextPartyChat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELEOSSanitizeTextPartyChat**)Z_Param__Result=UELEOSUtility::CreateSanitizeTextPartyChat(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execCreateSanitizeTextWrestlerData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELEOSSanitizeTextWrestlerData**)Z_Param__Result=UELEOSUtility::CreateSanitizeTextWrestlerData(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execDebug_IsSkipPatchUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::Debug_IsSkipPatchUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execDebug_SetSkipPatchCheck)
	{
		P_GET_UBOOL(Z_Param_bSkip);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::Debug_SetSkipPatchCheck(Z_Param_bSkip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execDeleteSanitizePartyChat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UELEOSSanitizeTextPartyChat,Z_Param_Obj);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::DeleteSanitizePartyChat(Z_Param_WorldContextObject,Z_Param_Obj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execDeleteSanitizeWrestlerData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UELEOSSanitizeTextWrestlerData,Z_Param_Obj);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::DeleteSanitizeWrestlerData(Z_Param_WorldContextObject,Z_Param_Obj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execDispDebugELEOSFriend)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_Disp);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::DispDebugELEOSFriend(Z_Param_WorldContextObject,Z_Param_Disp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execDispDebugELEOSGameSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_Disp);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::DispDebugELEOSGameSession(Z_Param_WorldContextObject,Z_Param_Disp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execDispDebugELEOSLobby)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_Disp);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::DispDebugELEOSLobby(Z_Param_WorldContextObject,Z_Param_Disp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execDispDebugELEOSUser)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_Disp);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::DispDebugELEOSUser(Z_Param_WorldContextObject,Z_Param_Disp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execEOSOnlineVersionCheck)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::EOSOnlineVersionCheck(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execFindExternalAccountId)
	{
		P_GET_ENUM(EExternalAccountType,Z_Param_AccountType);
		P_GET_TARRAY_REF(FEOSExternalAccountId,Z_Param_Out_ExternalAccountIds);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AccountId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::FindExternalAccountId(EExternalAccountType(Z_Param_AccountType),Z_Param_Out_ExternalAccountIds,Z_Param_Out_AccountId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execFindExternalDisplayName)
	{
		P_GET_ENUM(EExternalAccountType,Z_Param_AccountType);
		P_GET_TARRAY_REF(FEOSExternalAccountId,Z_Param_Out_ExternalAccountIds);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_DisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::FindExternalDisplayName(EExternalAccountType(Z_Param_AccountType),Z_Param_Out_ExternalAccountIds,Z_Param_Out_DisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execFindLobbyInvite)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_CommunityID);
		P_GET_STRUCT_REF(FLobbyInvite,Z_Param_Out_Invite);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::FindLobbyInvite(Z_Param_WorldContextObject,Z_Param_CommunityID,Z_Param_Out_Invite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execFindLobbyInviteByPUID)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_PUID);
		P_GET_STRUCT_REF(FLobbyInvite,Z_Param_Out_Invite);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::FindLobbyInviteByPUID(Z_Param_WorldContextObject,Z_Param_PUID,Z_Param_Out_Invite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetAntiCheatClient)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSAntiCheatClient**)Z_Param__Result=UELEOSUtility::GetAntiCheatClient(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetCommunityUserDisplayName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UEOSCommunityUserBase,Z_Param_User);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_DisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::GetCommunityUserDisplayName(Z_Param_WorldContextObject,Z_Param_User,Z_Param_Out_DisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetConfigPingUpdateInterval)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELEOSUtility::GetConfigPingUpdateInterval(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetCurrentWrestlerDataByPUID)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UObject,Z_Param_OutObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_InPUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::GetCurrentWrestlerDataByPUID(Z_Param_WorldContextObject,Z_Param_OutObject,Z_Param_InPUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetDisplayNamePresence)
	{
		P_GET_OBJECT(UEOSPresenceBase,Z_Param_Presence);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_DisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::GetDisplayNamePresence(Z_Param_Presence,Z_Param_Out_DisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetELEOSFriend)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELEOSFriend**)Z_Param__Result=UELEOSUtility::GetELEOSFriend(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetELEOSGameChatSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELEOSGameChatSession**)Z_Param__Result=UELEOSUtility::GetELEOSGameChatSession(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetELEOSGameSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELEOSGameSession**)Z_Param__Result=UELEOSUtility::GetELEOSGameSession(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetELEOSGameSessionInfo)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSCommunityInfoBase**)Z_Param__Result=UELEOSUtility::GetELEOSGameSessionInfo(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetELEOSGameSessionMatching)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELEOSGameSessionMatching**)Z_Param__Result=UELEOSUtility::GetELEOSGameSessionMatching(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetELEOSLobby)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELEOSLobby**)Z_Param__Result=UELEOSUtility::GetELEOSLobby(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetELEOSManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELEOSManager**)Z_Param__Result=UELEOSUtility::GetELEOSManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetEOSAuth)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSAuth**)Z_Param__Result=UELEOSUtility::GetEOSAuth(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetEOSAuthToken)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Token);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::GetEOSAuthToken(Z_Param_WorldContextObject,Z_Param_Out_Token);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetEOSFriend)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSFriend**)Z_Param__Result=UELEOSUtility::GetEOSFriend(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetEOSGameFlowManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSSessionP2PAFGameFlowManager**)Z_Param__Result=UELEOSUtility::GetEOSGameFlowManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetEOSLeaderboard)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSLeaderboard**)Z_Param__Result=UELEOSUtility::GetEOSLeaderboard(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetEOSManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSManager**)Z_Param__Result=UELEOSUtility::GetEOSManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetEOSPresence)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSPresence**)Z_Param__Result=UELEOSUtility::GetEOSPresence(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetEOSProductID)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELEOSUtility::GetEOSProductID(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetEOSRankCalculator)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELOnlineRankCalculator**)Z_Param__Result=UELEOSUtility::GetEOSRankCalculator(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetEOSReports)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSReports**)Z_Param__Result=UELEOSUtility::GetEOSReports(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetEOSSanctions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSSanctions**)Z_Param__Result=UELEOSUtility::GetEOSSanctions(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetEOSStats)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSStats**)Z_Param__Result=UELEOSUtility::GetEOSStats(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetEOSUser)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSUser**)Z_Param__Result=UELEOSUtility::GetEOSUser(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetEOSUserContents)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSUserContents**)Z_Param__Result=UELEOSUtility::GetEOSUserContents(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetEOSUserManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSUserManager**)Z_Param__Result=UELEOSUtility::GetEOSUserManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetEOSVoice)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEOSVoice**)Z_Param__Result=UELEOSUtility::GetEOSVoice(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetFriendEnabledCrossplayPresence)
	{
		P_GET_OBJECT(UEOSPresenceBase,Z_Param_Presence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::GetFriendEnabledCrossplayPresence(Z_Param_Presence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetFriendGameStatusPresence)
	{
		P_GET_OBJECT(UEOSPresenceBase,Z_Param_Presence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EELEOSGameStatus*)Z_Param__Result=UELEOSUtility::GetFriendGameStatusPresence(Z_Param_Presence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetFriendOnlineVersionPresence)
	{
		P_GET_OBJECT(UEOSPresenceBase,Z_Param_Presence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELEOSUtility::GetFriendOnlineVersionPresence(Z_Param_Presence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetFriendPlatformPresence)
	{
		P_GET_OBJECT(UEOSPresenceBase,Z_Param_Presence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlatformType*)Z_Param__Result=UELEOSUtility::GetFriendPlatformPresence(Z_Param_Presence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetFriendPlayerIcon)
	{
		P_GET_OBJECT(UEOSFriendUser,Z_Param_FriendUser);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayerIcon);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BGIcon);
		P_GET_STRUCT_REF(FUserProfileColorParam,Z_Param_Out_ColorParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::GetFriendPlayerIcon(Z_Param_FriendUser,Z_Param_Out_PlayerIcon,Z_Param_Out_BGIcon,Z_Param_Out_ColorParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetFriendProductIDList)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FString,Z_Param_Out_IDList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::GetFriendProductIDList(Z_Param_WorldContextObject,Z_Param_Out_IDList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetGameStatusPresence)
	{
		P_GET_OBJECT(UEOSUser,Z_Param_User);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EELEOSGameStatus*)Z_Param__Result=UELEOSUtility::GetGameStatusPresence(Z_Param_User);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetLastSyncServerUtc)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_DateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::GetLastSyncServerUtc(Z_Param_WorldContextObject,Z_Param_Out_DateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetLobbyInvites)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TMAP_REF(FString,FLobbyInvite,Z_Param_Out_Invites);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::GetLobbyInvites(Z_Param_WorldContextObject,Z_Param_Out_Invites);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetMaxPlayerCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELEOSUtility::GetMaxPlayerCount(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetMyGameStatusPresence)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EELEOSGameStatus*)Z_Param__Result=UELEOSUtility::GetMyGameStatusPresence(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetNearestServerPing)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ServerName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Ping);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::GetNearestServerPing(Z_Param_WorldContextObject,Z_Param_Out_ServerName,Z_Param_Out_Ping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetNetworkObserver)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELNetworkObserverBase**)Z_Param__Result=UELEOSUtility::GetNetworkObserver(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetNowPlayerCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELEOSUtility::GetNowPlayerCount(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetPlatformAttibuteName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EPlatformType,Z_Param_Platform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELEOSUtility::GetPlatformAttibuteName(Z_Param_WorldContextObject,EPlatformType(Z_Param_Platform));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetPlatformAttibuteValue)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EPlatformType,Z_Param_Platform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELEOSUtility::GetPlatformAttibuteValue(Z_Param_WorldContextObject,EPlatformType(Z_Param_Platform));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetPresenceFriendPlayerIcon)
	{
		P_GET_OBJECT(UEOSPresenceBase,Z_Param_Presence);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayerIcon);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BGIcon);
		P_GET_STRUCT_REF(FUserProfileColorParam,Z_Param_Out_ColorParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::GetPresenceFriendPlayerIcon(Z_Param_Presence,Z_Param_Out_PlayerIcon,Z_Param_Out_BGIcon,Z_Param_Out_ColorParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetPresenceFriendPlayerIcons)
	{
		P_GET_OBJECT(UEOSPresenceBase,Z_Param_Presence);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Icons);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::GetPresenceFriendPlayerIcons(Z_Param_Presence,Z_Param_Out_Icons);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetPresencePlayerIcons)
	{
		P_GET_OBJECT(UEOSUser,Z_Param_User);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Icons);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::GetPresencePlayerIcons(Z_Param_User,Z_Param_Out_Icons);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetSessionGamePlayerDisplayName)
	{
		P_GET_STRUCT_REF(FSessionGamePlayerDataBP,Z_Param_Out_PlayerData);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_DisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::GetSessionGamePlayerDisplayName(Z_Param_Out_PlayerData,Z_Param_Out_DisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetSessionGamePlayerIcon)
	{
		P_GET_STRUCT_REF(FSessionGamePlayerDataBP,Z_Param_Out_PlayerData);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayerIcon);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BGIcon);
		P_GET_STRUCT_REF(FUserProfileColorParam,Z_Param_Out_ColorParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::GetSessionGamePlayerIcon(Z_Param_Out_PlayerData,Z_Param_Out_PlayerIcon,Z_Param_Out_BGIcon,Z_Param_Out_ColorParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetSessionGamePlayerWeaponDecal)
	{
		P_GET_STRUCT_REF(FSessionGamePlayerDataBP,Z_Param_Out_PlayerData);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Decal);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DecalSymbol);
		P_GET_STRUCT_REF(FUserProfileColorParam,Z_Param_Out_ColorParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::GetSessionGamePlayerWeaponDecal(Z_Param_Out_PlayerData,Z_Param_Out_Decal,Z_Param_Out_DecalSymbol,Z_Param_Out_ColorParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetTimeStamp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UELEOSUtility::GetTimeStamp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetWrestlerNameText)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UObject,Z_Param_OnlineWrestlerData);
		P_GET_STRUCT_REF(FWrestlerNameText,Z_Param_Out_WrestlerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::GetWrestlerNameText(Z_Param_WorldContextObject,Z_Param_OnlineWrestlerData,Z_Param_Out_WrestlerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetYGS2Manager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELYGS2Manager**)Z_Param__Result=UELEOSUtility::GetYGS2Manager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execGetYGS2PingMs)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELEOSUtility::GetYGS2PingMs(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execIsCompleteCurrentWrestler)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::IsCompleteCurrentWrestler(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execIsEASLogin)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::IsEASLogin(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execIsEnabledCrossPlay)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::IsEnabledCrossPlay(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execIsEnabledFriendChat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::IsEnabledFriendChat(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execIsEnableOnlineVersionCheck)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::IsEnableOnlineVersionCheck(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execIsEOSLogin)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::IsEOSLogin(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execIsFriendPlayingThisGame)
	{
		P_GET_OBJECT(UEOSFriendPresence,Z_Param_Presence);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::IsFriendPlayingThisGame(Z_Param_Presence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execIsFriendUserPlayingThisGameOrNotFriend)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_PUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::IsFriendUserPlayingThisGameOrNotFriend(Z_Param_WorldContextObject,Z_Param_PUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execIsInSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::IsInSession(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execIsInviteError)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FLobbyInvite,Z_Param_Out_Invite);
		P_GET_ENUM_REF(ELobbyInviteError,Z_Param_Out_Reason);
		P_GET_UBOOL(Z_Param__bCheckCommunityUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::IsInviteError(Z_Param_WorldContextObject,Z_Param_Out_Invite,(ELobbyInviteError&)(Z_Param_Out_Reason),Z_Param__bCheckCommunityUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execIsLobbyOwner)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::IsLobbyOwner(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execIsOnlineProcessing_ExhibitionMatch)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::IsOnlineProcessing_ExhibitionMatch(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execIsPartyAttributeJoinable)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param_CommunityInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::IsPartyAttributeJoinable(Z_Param_WorldContextObject,Z_Param_CommunityInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execIsPatchUpdateAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::IsPatchUpdateAvailable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execIsQuickMatchAble)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::IsQuickMatchAble(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execIsSessionSearching)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::IsSessionSearching(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execIsValidOnlineWrestlerData)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UObject,Z_Param_OnlineWrestlerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::IsValidOnlineWrestlerData(Z_Param_WorldContextObject,Z_Param_OnlineWrestlerData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execJoinLobby)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param_CommunityInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::JoinLobby(Z_Param_WorldContextObject,Z_Param_CommunityInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execJoinLobbyByLobbyInvite)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FLobbyInvite,Z_Param_Out_LobbyInvite);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::JoinLobbyByLobbyInvite(Z_Param_WorldContextObject,Z_Param_Out_LobbyInvite);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execLeaveLobby)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::LeaveLobby(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execLeaveSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::LeaveSession(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execLogin)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param__Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::Login(Z_Param_WorldContextObject,Z_Param__Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execLoginPortal)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::LoginPortal(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execLogout)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::Logout(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execMakeUndefinedDateTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UELEOSUtility::MakeUndefinedDateTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execOnlineConnectionCheck)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::OnlineConnectionCheck(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execQueryLobbyInvites)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::QueryLobbyInvites(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execRejectLobbyInvite)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UEOSCommunityInfoBase,Z_Param_CommunityInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::RejectLobbyInvite(Z_Param_WorldContextObject,Z_Param_CommunityInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execRequestInviteLobbyMember)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::RequestInviteLobbyMember(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execRequestSanitizePartyChat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_GET_OBJECT(UELEOSSanitizeTextPartyChat,Z_Param_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::RequestSanitizePartyChat(Z_Param_WorldContextObject,FEOSSanitizePartyChatEvent(Z_Param_Delegate),Z_Param_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execRequestSanitizeWrestlerName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_GET_OBJECT(UELEOSSanitizeTextWrestlerData,Z_Param_UserData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::RequestSanitizeWrestlerName(Z_Param_WorldContextObject,FEOSSanitizeWrestlerNameTextEvent(Z_Param_Delegate),Z_Param_UserData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execRequestYGS2Analytics)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_MatchingResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::RequestYGS2Analytics(Z_Param_WorldContextObject,Z_Param_MatchingResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execSendLobbyPacketMiniGameInfo)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UELEOSLobbyMiniGameInfo,Z_Param_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::SendLobbyPacketMiniGameInfo(Z_Param_WorldContextObject,Z_Param_Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execSendLobbyPacketMiniGameOwnerSelectInfo)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_InNextCursor);
		P_GET_UBOOL(Z_Param_InDecide);
		P_GET_UBOOL(Z_Param_InCancel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::SendLobbyPacketMiniGameOwnerSelectInfo(Z_Param_WorldContextObject,Z_Param_InNextCursor,Z_Param_InDecide,Z_Param_InCancel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execSendLobbyPacketPositionSelectMenuInput)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UObject,Z_Param_MenuInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::SendLobbyPacketPositionSelectMenuInput(Z_Param_WorldContextObject,Z_Param_MenuInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execSendLobbyPacketPositionSelectMenuInputResult)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UObject,Z_Param_MenuInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::SendLobbyPacketPositionSelectMenuInputResult(Z_Param_WorldContextObject,Z_Param_MenuInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execSetDisplayNamePresence)
	{
		P_GET_OBJECT(UEOSUser,Z_Param_User);
		P_GET_PROPERTY(FStrProperty,Z_Param_DisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::SetDisplayNamePresence(Z_Param_User,Z_Param_DisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execSetEnableOnlineVersionCheck)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::SetEnableOnlineVersionCheck(Z_Param_WorldContextObject,Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execSetGameStatusPresence)
	{
		P_GET_OBJECT(UEOSUser,Z_Param_User);
		P_GET_ENUM(EELEOSGameStatus,Z_Param_Status);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::SetGameStatusPresence(Z_Param_User,EELEOSGameStatus(Z_Param_Status));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execSetMyGameStatusPresence)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EELEOSGameStatus,Z_Param_Status);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::SetMyGameStatusPresence(Z_Param_WorldContextObject,EELEOSGameStatus(Z_Param_Status));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execSetMyPresence)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_PresenceText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::SetMyPresence(Z_Param_WorldContextObject,Z_Param_PresenceText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execSetMyPresencePlayerIcon)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIcon);
		P_GET_PROPERTY(FIntProperty,Z_Param_BGIcon);
		P_GET_STRUCT_REF(FUserProfileColorParam,Z_Param_Out_ColorParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::SetMyPresencePlayerIcon(Z_Param_WorldContextObject,Z_Param_PlayerIcon,Z_Param_BGIcon,Z_Param_Out_ColorParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execSetOnlineVersionPresence)
	{
		P_GET_OBJECT(UEOSUser,Z_Param_User);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::SetOnlineVersionPresence(Z_Param_User);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execSetPartyAttributeJoinable)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_Joinable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::SetPartyAttributeJoinable(Z_Param_WorldContextObject,Z_Param_Joinable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execSetPatchUpdateAvailable)
	{
		P_GET_UBOOL(Z_Param_bPatchUpdateAvailable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::SetPatchUpdateAvailable(Z_Param_bPatchUpdateAvailable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execSetPlatformPresence)
	{
		P_GET_OBJECT(UEOSUser,Z_Param_User);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::SetPlatformPresence(Z_Param_User);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execSetPresencePlayerIcons)
	{
		P_GET_OBJECT(UEOSUser,Z_Param_User);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Icons);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::SetPresencePlayerIcons(Z_Param_User,Z_Param_Out_Icons);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execShouldUseExternalDisplayName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EPlatformType,Z_Param_Platform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::ShouldUseExternalDisplayName(Z_Param_WorldContextObject,EPlatformType(Z_Param_Platform));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execSortIDListByResultScore)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FString,Z_Param_Out_LeaderboardNames);
		P_GET_TARRAY_REF(FString,Z_Param_Out_IDList);
		P_GET_TARRAY_REF(float,Z_Param_Out_ScoreList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELEOSUtility::SortIDListByResultScore(Z_Param_WorldContextObject,Z_Param_Out_LeaderboardNames,Z_Param_Out_IDList,Z_Param_Out_ScoreList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execTimeStampToDateTime)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param__UnixTimeStamp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=UELEOSUtility::TimeStampToDateTime(Z_Param__UnixTimeStamp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execToggleDebugELEOSFriend)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::ToggleDebugELEOSFriend(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execToggleDebugELEOSGameSession)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::ToggleDebugELEOSGameSession(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execToggleDebugELEOSLobby)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::ToggleDebugELEOSLobby(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELEOSUtility::execToggleDebugELEOSUser)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELEOSUtility::ToggleDebugELEOSUser(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UELEOSUtility::StaticRegisterNativesUELEOSUtility()
	{
		UClass* Class = UELEOSUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyWrestlerNameText", &UELEOSUtility::execApplyWrestlerNameText },
			{ "CheckUsingMultiplayerFeatures", &UELEOSUtility::execCheckUsingMultiplayerFeatures },
			{ "ConvertPlatformTypeToExternalAccountType", &UELEOSUtility::execConvertPlatformTypeToExternalAccountType },
			{ "CreateLobby", &UELEOSUtility::execCreateLobby },
			{ "CreateSanitizeTextPartyChat", &UELEOSUtility::execCreateSanitizeTextPartyChat },
			{ "CreateSanitizeTextWrestlerData", &UELEOSUtility::execCreateSanitizeTextWrestlerData },
			{ "Debug_IsSkipPatchUpdate", &UELEOSUtility::execDebug_IsSkipPatchUpdate },
			{ "Debug_SetSkipPatchCheck", &UELEOSUtility::execDebug_SetSkipPatchCheck },
			{ "DeleteSanitizePartyChat", &UELEOSUtility::execDeleteSanitizePartyChat },
			{ "DeleteSanitizeWrestlerData", &UELEOSUtility::execDeleteSanitizeWrestlerData },
			{ "DispDebugELEOSFriend", &UELEOSUtility::execDispDebugELEOSFriend },
			{ "DispDebugELEOSGameSession", &UELEOSUtility::execDispDebugELEOSGameSession },
			{ "DispDebugELEOSLobby", &UELEOSUtility::execDispDebugELEOSLobby },
			{ "DispDebugELEOSUser", &UELEOSUtility::execDispDebugELEOSUser },
			{ "EOSOnlineVersionCheck", &UELEOSUtility::execEOSOnlineVersionCheck },
			{ "FindExternalAccountId", &UELEOSUtility::execFindExternalAccountId },
			{ "FindExternalDisplayName", &UELEOSUtility::execFindExternalDisplayName },
			{ "FindLobbyInvite", &UELEOSUtility::execFindLobbyInvite },
			{ "FindLobbyInviteByPUID", &UELEOSUtility::execFindLobbyInviteByPUID },
			{ "GetAntiCheatClient", &UELEOSUtility::execGetAntiCheatClient },
			{ "GetCommunityUserDisplayName", &UELEOSUtility::execGetCommunityUserDisplayName },
			{ "GetConfigPingUpdateInterval", &UELEOSUtility::execGetConfigPingUpdateInterval },
			{ "GetCurrentWrestlerDataByPUID", &UELEOSUtility::execGetCurrentWrestlerDataByPUID },
			{ "GetDisplayNamePresence", &UELEOSUtility::execGetDisplayNamePresence },
			{ "GetELEOSFriend", &UELEOSUtility::execGetELEOSFriend },
			{ "GetELEOSGameChatSession", &UELEOSUtility::execGetELEOSGameChatSession },
			{ "GetELEOSGameSession", &UELEOSUtility::execGetELEOSGameSession },
			{ "GetELEOSGameSessionInfo", &UELEOSUtility::execGetELEOSGameSessionInfo },
			{ "GetELEOSGameSessionMatching", &UELEOSUtility::execGetELEOSGameSessionMatching },
			{ "GetELEOSLobby", &UELEOSUtility::execGetELEOSLobby },
			{ "GetELEOSManager", &UELEOSUtility::execGetELEOSManager },
			{ "GetEOSAuth", &UELEOSUtility::execGetEOSAuth },
			{ "GetEOSAuthToken", &UELEOSUtility::execGetEOSAuthToken },
			{ "GetEOSFriend", &UELEOSUtility::execGetEOSFriend },
			{ "GetEOSGameFlowManager", &UELEOSUtility::execGetEOSGameFlowManager },
			{ "GetEOSLeaderboard", &UELEOSUtility::execGetEOSLeaderboard },
			{ "GetEOSManager", &UELEOSUtility::execGetEOSManager },
			{ "GetEOSPresence", &UELEOSUtility::execGetEOSPresence },
			{ "GetEOSProductID", &UELEOSUtility::execGetEOSProductID },
			{ "GetEOSRankCalculator", &UELEOSUtility::execGetEOSRankCalculator },
			{ "GetEOSReports", &UELEOSUtility::execGetEOSReports },
			{ "GetEOSSanctions", &UELEOSUtility::execGetEOSSanctions },
			{ "GetEOSStats", &UELEOSUtility::execGetEOSStats },
			{ "GetEOSUser", &UELEOSUtility::execGetEOSUser },
			{ "GetEOSUserContents", &UELEOSUtility::execGetEOSUserContents },
			{ "GetEOSUserManager", &UELEOSUtility::execGetEOSUserManager },
			{ "GetEOSVoice", &UELEOSUtility::execGetEOSVoice },
			{ "GetFriendEnabledCrossplayPresence", &UELEOSUtility::execGetFriendEnabledCrossplayPresence },
			{ "GetFriendGameStatusPresence", &UELEOSUtility::execGetFriendGameStatusPresence },
			{ "GetFriendOnlineVersionPresence", &UELEOSUtility::execGetFriendOnlineVersionPresence },
			{ "GetFriendPlatformPresence", &UELEOSUtility::execGetFriendPlatformPresence },
			{ "GetFriendPlayerIcon", &UELEOSUtility::execGetFriendPlayerIcon },
			{ "GetFriendProductIDList", &UELEOSUtility::execGetFriendProductIDList },
			{ "GetGameStatusPresence", &UELEOSUtility::execGetGameStatusPresence },
			{ "GetLastSyncServerUtc", &UELEOSUtility::execGetLastSyncServerUtc },
			{ "GetLobbyInvites", &UELEOSUtility::execGetLobbyInvites },
			{ "GetMaxPlayerCount", &UELEOSUtility::execGetMaxPlayerCount },
			{ "GetMyGameStatusPresence", &UELEOSUtility::execGetMyGameStatusPresence },
			{ "GetNearestServerPing", &UELEOSUtility::execGetNearestServerPing },
			{ "GetNetworkObserver", &UELEOSUtility::execGetNetworkObserver },
			{ "GetNowPlayerCount", &UELEOSUtility::execGetNowPlayerCount },
			{ "GetPlatformAttibuteName", &UELEOSUtility::execGetPlatformAttibuteName },
			{ "GetPlatformAttibuteValue", &UELEOSUtility::execGetPlatformAttibuteValue },
			{ "GetPresenceFriendPlayerIcon", &UELEOSUtility::execGetPresenceFriendPlayerIcon },
			{ "GetPresenceFriendPlayerIcons", &UELEOSUtility::execGetPresenceFriendPlayerIcons },
			{ "GetPresencePlayerIcons", &UELEOSUtility::execGetPresencePlayerIcons },
			{ "GetSessionGamePlayerDisplayName", &UELEOSUtility::execGetSessionGamePlayerDisplayName },
			{ "GetSessionGamePlayerIcon", &UELEOSUtility::execGetSessionGamePlayerIcon },
			{ "GetSessionGamePlayerWeaponDecal", &UELEOSUtility::execGetSessionGamePlayerWeaponDecal },
			{ "GetTimeStamp", &UELEOSUtility::execGetTimeStamp },
			{ "GetWrestlerNameText", &UELEOSUtility::execGetWrestlerNameText },
			{ "GetYGS2Manager", &UELEOSUtility::execGetYGS2Manager },
			{ "GetYGS2PingMs", &UELEOSUtility::execGetYGS2PingMs },
			{ "IsCompleteCurrentWrestler", &UELEOSUtility::execIsCompleteCurrentWrestler },
			{ "IsEASLogin", &UELEOSUtility::execIsEASLogin },
			{ "IsEnabledCrossPlay", &UELEOSUtility::execIsEnabledCrossPlay },
			{ "IsEnabledFriendChat", &UELEOSUtility::execIsEnabledFriendChat },
			{ "IsEnableOnlineVersionCheck", &UELEOSUtility::execIsEnableOnlineVersionCheck },
			{ "IsEOSLogin", &UELEOSUtility::execIsEOSLogin },
			{ "IsFriendPlayingThisGame", &UELEOSUtility::execIsFriendPlayingThisGame },
			{ "IsFriendUserPlayingThisGameOrNotFriend", &UELEOSUtility::execIsFriendUserPlayingThisGameOrNotFriend },
			{ "IsInSession", &UELEOSUtility::execIsInSession },
			{ "IsInviteError", &UELEOSUtility::execIsInviteError },
			{ "IsLobbyOwner", &UELEOSUtility::execIsLobbyOwner },
			{ "IsOnlineProcessing_ExhibitionMatch", &UELEOSUtility::execIsOnlineProcessing_ExhibitionMatch },
			{ "IsPartyAttributeJoinable", &UELEOSUtility::execIsPartyAttributeJoinable },
			{ "IsPatchUpdateAvailable", &UELEOSUtility::execIsPatchUpdateAvailable },
			{ "IsQuickMatchAble", &UELEOSUtility::execIsQuickMatchAble },
			{ "IsSessionSearching", &UELEOSUtility::execIsSessionSearching },
			{ "IsValidOnlineWrestlerData", &UELEOSUtility::execIsValidOnlineWrestlerData },
			{ "JoinLobby", &UELEOSUtility::execJoinLobby },
			{ "JoinLobbyByLobbyInvite", &UELEOSUtility::execJoinLobbyByLobbyInvite },
			{ "LeaveLobby", &UELEOSUtility::execLeaveLobby },
			{ "LeaveSession", &UELEOSUtility::execLeaveSession },
			{ "Login", &UELEOSUtility::execLogin },
			{ "LoginPortal", &UELEOSUtility::execLoginPortal },
			{ "Logout", &UELEOSUtility::execLogout },
			{ "MakeUndefinedDateTime", &UELEOSUtility::execMakeUndefinedDateTime },
			{ "OnlineConnectionCheck", &UELEOSUtility::execOnlineConnectionCheck },
			{ "QueryLobbyInvites", &UELEOSUtility::execQueryLobbyInvites },
			{ "RejectLobbyInvite", &UELEOSUtility::execRejectLobbyInvite },
			{ "RequestInviteLobbyMember", &UELEOSUtility::execRequestInviteLobbyMember },
			{ "RequestSanitizePartyChat", &UELEOSUtility::execRequestSanitizePartyChat },
			{ "RequestSanitizeWrestlerName", &UELEOSUtility::execRequestSanitizeWrestlerName },
			{ "RequestYGS2Analytics", &UELEOSUtility::execRequestYGS2Analytics },
			{ "SendLobbyPacketMiniGameInfo", &UELEOSUtility::execSendLobbyPacketMiniGameInfo },
			{ "SendLobbyPacketMiniGameOwnerSelectInfo", &UELEOSUtility::execSendLobbyPacketMiniGameOwnerSelectInfo },
			{ "SendLobbyPacketPositionSelectMenuInput", &UELEOSUtility::execSendLobbyPacketPositionSelectMenuInput },
			{ "SendLobbyPacketPositionSelectMenuInputResult", &UELEOSUtility::execSendLobbyPacketPositionSelectMenuInputResult },
			{ "SetDisplayNamePresence", &UELEOSUtility::execSetDisplayNamePresence },
			{ "SetEnableOnlineVersionCheck", &UELEOSUtility::execSetEnableOnlineVersionCheck },
			{ "SetGameStatusPresence", &UELEOSUtility::execSetGameStatusPresence },
			{ "SetMyGameStatusPresence", &UELEOSUtility::execSetMyGameStatusPresence },
			{ "SetMyPresence", &UELEOSUtility::execSetMyPresence },
			{ "SetMyPresencePlayerIcon", &UELEOSUtility::execSetMyPresencePlayerIcon },
			{ "SetOnlineVersionPresence", &UELEOSUtility::execSetOnlineVersionPresence },
			{ "SetPartyAttributeJoinable", &UELEOSUtility::execSetPartyAttributeJoinable },
			{ "SetPatchUpdateAvailable", &UELEOSUtility::execSetPatchUpdateAvailable },
			{ "SetPlatformPresence", &UELEOSUtility::execSetPlatformPresence },
			{ "SetPresencePlayerIcons", &UELEOSUtility::execSetPresencePlayerIcons },
			{ "ShouldUseExternalDisplayName", &UELEOSUtility::execShouldUseExternalDisplayName },
			{ "SortIDListByResultScore", &UELEOSUtility::execSortIDListByResultScore },
			{ "TimeStampToDateTime", &UELEOSUtility::execTimeStampToDateTime },
			{ "ToggleDebugELEOSFriend", &UELEOSUtility::execToggleDebugELEOSFriend },
			{ "ToggleDebugELEOSGameSession", &UELEOSUtility::execToggleDebugELEOSGameSession },
			{ "ToggleDebugELEOSLobby", &UELEOSUtility::execToggleDebugELEOSLobby },
			{ "ToggleDebugELEOSUser", &UELEOSUtility::execToggleDebugELEOSUser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics
	{
		struct ELEOSUtility_eventApplyWrestlerNameText_Parms
		{
			const UObject* WorldContextObject;
			UObject* OnlineWrestlerData;
			FWrestlerNameText WrestlerName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineWrestlerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventApplyWrestlerNameText_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::NewProp_OnlineWrestlerData = { "OnlineWrestlerData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventApplyWrestlerNameText_Parms, OnlineWrestlerData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::NewProp_WrestlerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::NewProp_WrestlerName = { "WrestlerName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventApplyWrestlerNameText_Parms, WrestlerName), Z_Construct_UScriptStruct_FWrestlerNameText, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::NewProp_WrestlerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::NewProp_WrestlerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::NewProp_OnlineWrestlerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::NewProp_WrestlerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "ApplyWrestlerNameText", nullptr, nullptr, sizeof(ELEOSUtility_eventApplyWrestlerNameText_Parms), Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_CheckUsingMultiplayerFeatures_Statics
	{
		struct ELEOSUtility_eventCheckUsingMultiplayerFeatures_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_CheckUsingMultiplayerFeatures_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_CheckUsingMultiplayerFeatures_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventCheckUsingMultiplayerFeatures_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_CheckUsingMultiplayerFeatures_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_CheckUsingMultiplayerFeatures_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_CheckUsingMultiplayerFeatures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_CheckUsingMultiplayerFeatures_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_CheckUsingMultiplayerFeatures_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_CheckUsingMultiplayerFeatures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "CheckUsingMultiplayerFeatures", nullptr, nullptr, sizeof(ELEOSUtility_eventCheckUsingMultiplayerFeatures_Parms), Z_Construct_UFunction_UELEOSUtility_CheckUsingMultiplayerFeatures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_CheckUsingMultiplayerFeatures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_CheckUsingMultiplayerFeatures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_CheckUsingMultiplayerFeatures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_CheckUsingMultiplayerFeatures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_CheckUsingMultiplayerFeatures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType_Statics
	{
		struct ELEOSUtility_eventConvertPlatformTypeToExternalAccountType_Parms
		{
			EPlatformType ELPlatform;
			EExternalAccountType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ELPlatform_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ELPlatform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType_Statics::NewProp_ELPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType_Statics::NewProp_ELPlatform = { "ELPlatform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventConvertPlatformTypeToExternalAccountType_Parms, ELPlatform), Z_Construct_UEnum_ELITE_Core_EPlatformType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventConvertPlatformTypeToExternalAccountType_Parms, ReturnValue), Z_Construct_UEnum_yEOSSDK_EExternalAccountType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType_Statics::NewProp_ELPlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType_Statics::NewProp_ELPlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "ConvertPlatformTypeToExternalAccountType", nullptr, nullptr, sizeof(ELEOSUtility_eventConvertPlatformTypeToExternalAccountType_Parms), Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics
	{
		struct ELEOSUtility_eventCreateLobby_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventCreateLobby_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventCreateLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventCreateLobby_Parms), &Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "CreateLobby", nullptr, nullptr, sizeof(ELEOSUtility_eventCreateLobby_Parms), Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_CreateLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_CreateLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat_Statics
	{
		struct ELEOSUtility_eventCreateSanitizeTextPartyChat_Parms
		{
			const UObject* WorldContextObject;
			UELEOSSanitizeTextPartyChat* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventCreateSanitizeTextPartyChat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventCreateSanitizeTextPartyChat_Parms, ReturnValue), Z_Construct_UClass_UELEOSSanitizeTextPartyChat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "CreateSanitizeTextPartyChat", nullptr, nullptr, sizeof(ELEOSUtility_eventCreateSanitizeTextPartyChat_Parms), Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData_Statics
	{
		struct ELEOSUtility_eventCreateSanitizeTextWrestlerData_Parms
		{
			const UObject* WorldContextObject;
			UELEOSSanitizeTextWrestlerData* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventCreateSanitizeTextWrestlerData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventCreateSanitizeTextWrestlerData_Parms, ReturnValue), Z_Construct_UClass_UELEOSSanitizeTextWrestlerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "CreateSanitizeTextWrestlerData", nullptr, nullptr, sizeof(ELEOSUtility_eventCreateSanitizeTextWrestlerData_Parms), Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_Debug_IsSkipPatchUpdate_Statics
	{
		struct ELEOSUtility_eventDebug_IsSkipPatchUpdate_Parms
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
	void Z_Construct_UFunction_UELEOSUtility_Debug_IsSkipPatchUpdate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventDebug_IsSkipPatchUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_Debug_IsSkipPatchUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventDebug_IsSkipPatchUpdate_Parms), &Z_Construct_UFunction_UELEOSUtility_Debug_IsSkipPatchUpdate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_Debug_IsSkipPatchUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_Debug_IsSkipPatchUpdate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_Debug_IsSkipPatchUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_Debug_IsSkipPatchUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "Debug_IsSkipPatchUpdate", nullptr, nullptr, sizeof(ELEOSUtility_eventDebug_IsSkipPatchUpdate_Parms), Z_Construct_UFunction_UELEOSUtility_Debug_IsSkipPatchUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_Debug_IsSkipPatchUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_Debug_IsSkipPatchUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_Debug_IsSkipPatchUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_Debug_IsSkipPatchUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_Debug_IsSkipPatchUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_Debug_SetSkipPatchCheck_Statics
	{
		struct ELEOSUtility_eventDebug_SetSkipPatchCheck_Parms
		{
			bool bSkip;
		};
		static void NewProp_bSkip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELEOSUtility_Debug_SetSkipPatchCheck_Statics::NewProp_bSkip_SetBit(void* Obj)
	{
		((ELEOSUtility_eventDebug_SetSkipPatchCheck_Parms*)Obj)->bSkip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_Debug_SetSkipPatchCheck_Statics::NewProp_bSkip = { "bSkip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventDebug_SetSkipPatchCheck_Parms), &Z_Construct_UFunction_UELEOSUtility_Debug_SetSkipPatchCheck_Statics::NewProp_bSkip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_Debug_SetSkipPatchCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_Debug_SetSkipPatchCheck_Statics::NewProp_bSkip,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_Debug_SetSkipPatchCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_Debug_SetSkipPatchCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "Debug_SetSkipPatchCheck", nullptr, nullptr, sizeof(ELEOSUtility_eventDebug_SetSkipPatchCheck_Parms), Z_Construct_UFunction_UELEOSUtility_Debug_SetSkipPatchCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_Debug_SetSkipPatchCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_Debug_SetSkipPatchCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_Debug_SetSkipPatchCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_Debug_SetSkipPatchCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_Debug_SetSkipPatchCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat_Statics
	{
		struct ELEOSUtility_eventDeleteSanitizePartyChat_Parms
		{
			const UObject* WorldContextObject;
			UELEOSSanitizeTextPartyChat* Obj;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Obj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventDeleteSanitizePartyChat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventDeleteSanitizePartyChat_Parms, Obj), Z_Construct_UClass_UELEOSSanitizeTextPartyChat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat_Statics::NewProp_Obj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "DeleteSanitizePartyChat", nullptr, nullptr, sizeof(ELEOSUtility_eventDeleteSanitizePartyChat_Parms), Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData_Statics
	{
		struct ELEOSUtility_eventDeleteSanitizeWrestlerData_Parms
		{
			const UObject* WorldContextObject;
			UELEOSSanitizeTextWrestlerData* Obj;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Obj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventDeleteSanitizeWrestlerData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventDeleteSanitizeWrestlerData_Parms, Obj), Z_Construct_UClass_UELEOSSanitizeTextWrestlerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData_Statics::NewProp_Obj,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "DeleteSanitizeWrestlerData", nullptr, nullptr, sizeof(ELEOSUtility_eventDeleteSanitizeWrestlerData_Parms), Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics
	{
		struct ELEOSUtility_eventDispDebugELEOSFriend_Parms
		{
			const UObject* WorldContextObject;
			bool Disp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_Disp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventDispDebugELEOSFriend_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics::NewProp_Disp_SetBit(void* Obj)
	{
		((ELEOSUtility_eventDispDebugELEOSFriend_Parms*)Obj)->Disp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics::NewProp_Disp = { "Disp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventDispDebugELEOSFriend_Parms), &Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics::NewProp_Disp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics::NewProp_Disp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "DispDebugELEOSFriend", nullptr, nullptr, sizeof(ELEOSUtility_eventDispDebugELEOSFriend_Parms), Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics
	{
		struct ELEOSUtility_eventDispDebugELEOSGameSession_Parms
		{
			const UObject* WorldContextObject;
			bool Disp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_Disp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventDispDebugELEOSGameSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics::NewProp_Disp_SetBit(void* Obj)
	{
		((ELEOSUtility_eventDispDebugELEOSGameSession_Parms*)Obj)->Disp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics::NewProp_Disp = { "Disp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventDispDebugELEOSGameSession_Parms), &Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics::NewProp_Disp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics::NewProp_Disp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "DispDebugELEOSGameSession", nullptr, nullptr, sizeof(ELEOSUtility_eventDispDebugELEOSGameSession_Parms), Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics
	{
		struct ELEOSUtility_eventDispDebugELEOSLobby_Parms
		{
			const UObject* WorldContextObject;
			bool Disp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_Disp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventDispDebugELEOSLobby_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics::NewProp_Disp_SetBit(void* Obj)
	{
		((ELEOSUtility_eventDispDebugELEOSLobby_Parms*)Obj)->Disp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics::NewProp_Disp = { "Disp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventDispDebugELEOSLobby_Parms), &Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics::NewProp_Disp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics::NewProp_Disp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "DispDebugELEOSLobby", nullptr, nullptr, sizeof(ELEOSUtility_eventDispDebugELEOSLobby_Parms), Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics
	{
		struct ELEOSUtility_eventDispDebugELEOSUser_Parms
		{
			const UObject* WorldContextObject;
			bool Disp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_Disp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Disp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventDispDebugELEOSUser_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics::NewProp_Disp_SetBit(void* Obj)
	{
		((ELEOSUtility_eventDispDebugELEOSUser_Parms*)Obj)->Disp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics::NewProp_Disp = { "Disp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventDispDebugELEOSUser_Parms), &Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics::NewProp_Disp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics::NewProp_Disp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "DispDebugELEOSUser", nullptr, nullptr, sizeof(ELEOSUtility_eventDispDebugELEOSUser_Parms), Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics
	{
		struct ELEOSUtility_eventEOSOnlineVersionCheck_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventEOSOnlineVersionCheck_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventEOSOnlineVersionCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventEOSOnlineVersionCheck_Parms), &Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "EOSOnlineVersionCheck", nullptr, nullptr, sizeof(ELEOSUtility_eventEOSOnlineVersionCheck_Parms), Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics
	{
		struct ELEOSUtility_eventFindExternalAccountId_Parms
		{
			EExternalAccountType AccountType;
			TArray<FEOSExternalAccountId> ExternalAccountIds;
			FString AccountId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccountType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AccountType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalAccountIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalAccountIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalAccountIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AccountId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::NewProp_AccountType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::NewProp_AccountType = { "AccountType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventFindExternalAccountId_Parms, AccountType), Z_Construct_UEnum_yEOSSDK_EExternalAccountType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::NewProp_ExternalAccountIds_Inner = { "ExternalAccountIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSExternalAccountId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::NewProp_ExternalAccountIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::NewProp_ExternalAccountIds = { "ExternalAccountIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventFindExternalAccountId_Parms, ExternalAccountIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::NewProp_ExternalAccountIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::NewProp_ExternalAccountIds_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::NewProp_AccountId = { "AccountId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventFindExternalAccountId_Parms, AccountId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventFindExternalAccountId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventFindExternalAccountId_Parms), &Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::NewProp_AccountType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::NewProp_AccountType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::NewProp_ExternalAccountIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::NewProp_ExternalAccountIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::NewProp_AccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "FindExternalAccountId", nullptr, nullptr, sizeof(ELEOSUtility_eventFindExternalAccountId_Parms), Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics
	{
		struct ELEOSUtility_eventFindExternalDisplayName_Parms
		{
			EExternalAccountType AccountType;
			TArray<FEOSExternalAccountId> ExternalAccountIds;
			FString DisplayName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AccountType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AccountType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalAccountIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalAccountIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalAccountIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::NewProp_AccountType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::NewProp_AccountType = { "AccountType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventFindExternalDisplayName_Parms, AccountType), Z_Construct_UEnum_yEOSSDK_EExternalAccountType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::NewProp_ExternalAccountIds_Inner = { "ExternalAccountIds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEOSExternalAccountId, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::NewProp_ExternalAccountIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::NewProp_ExternalAccountIds = { "ExternalAccountIds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventFindExternalDisplayName_Parms, ExternalAccountIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::NewProp_ExternalAccountIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::NewProp_ExternalAccountIds_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventFindExternalDisplayName_Parms, DisplayName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventFindExternalDisplayName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventFindExternalDisplayName_Parms), &Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::NewProp_AccountType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::NewProp_AccountType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::NewProp_ExternalAccountIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::NewProp_ExternalAccountIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "FindExternalDisplayName", nullptr, nullptr, sizeof(ELEOSUtility_eventFindExternalDisplayName_Parms), Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics
	{
		struct ELEOSUtility_eventFindLobbyInvite_Parms
		{
			const UObject* WorldContextObject;
			FString CommunityID;
			FLobbyInvite Invite;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommunityID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommunityID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Invite;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventFindLobbyInvite_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::NewProp_CommunityID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::NewProp_CommunityID = { "CommunityID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventFindLobbyInvite_Parms, CommunityID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::NewProp_CommunityID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::NewProp_CommunityID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::NewProp_Invite = { "Invite", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventFindLobbyInvite_Parms, Invite), Z_Construct_UScriptStruct_FLobbyInvite, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventFindLobbyInvite_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventFindLobbyInvite_Parms), &Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::NewProp_CommunityID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::NewProp_Invite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "FindLobbyInvite", nullptr, nullptr, sizeof(ELEOSUtility_eventFindLobbyInvite_Parms), Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics
	{
		struct ELEOSUtility_eventFindLobbyInviteByPUID_Parms
		{
			const UObject* WorldContextObject;
			FString PUID;
			FLobbyInvite Invite;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PUID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Invite;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventFindLobbyInviteByPUID_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::NewProp_PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::NewProp_PUID = { "PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventFindLobbyInviteByPUID_Parms, PUID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::NewProp_PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::NewProp_PUID_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::NewProp_Invite = { "Invite", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventFindLobbyInviteByPUID_Parms, Invite), Z_Construct_UScriptStruct_FLobbyInvite, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventFindLobbyInviteByPUID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventFindLobbyInviteByPUID_Parms), &Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::NewProp_PUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::NewProp_Invite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "FindLobbyInviteByPUID", nullptr, nullptr, sizeof(ELEOSUtility_eventFindLobbyInviteByPUID_Parms), Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient_Statics
	{
		struct ELEOSUtility_eventGetAntiCheatClient_Parms
		{
			const UObject* WorldContextObject;
			UEOSAntiCheatClient* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetAntiCheatClient_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetAntiCheatClient_Parms, ReturnValue), Z_Construct_UClass_UEOSAntiCheatClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetAntiCheatClient", nullptr, nullptr, sizeof(ELEOSUtility_eventGetAntiCheatClient_Parms), Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics
	{
		struct ELEOSUtility_eventGetCommunityUserDisplayName_Parms
		{
			const UObject* WorldContextObject;
			UEOSCommunityUserBase* User;
			FString DisplayName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetCommunityUserDisplayName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetCommunityUserDisplayName_Parms, User), Z_Construct_UClass_UEOSCommunityUserBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetCommunityUserDisplayName_Parms, DisplayName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventGetCommunityUserDisplayName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventGetCommunityUserDisplayName_Parms), &Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetCommunityUserDisplayName", nullptr, nullptr, sizeof(ELEOSUtility_eventGetCommunityUserDisplayName_Parms), Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval_Statics
	{
		struct ELEOSUtility_eventGetConfigPingUpdateInterval_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetConfigPingUpdateInterval_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetConfigPingUpdateInterval_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetConfigPingUpdateInterval", nullptr, nullptr, sizeof(ELEOSUtility_eventGetConfigPingUpdateInterval_Parms), Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics
	{
		struct ELEOSUtility_eventGetCurrentWrestlerDataByPUID_Parms
		{
			const UObject* WorldContextObject;
			UObject* OutObject;
			FString InPUID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InPUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetCurrentWrestlerDataByPUID_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::NewProp_OutObject = { "OutObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetCurrentWrestlerDataByPUID_Parms, OutObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::NewProp_InPUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::NewProp_InPUID = { "InPUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetCurrentWrestlerDataByPUID_Parms, InPUID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::NewProp_InPUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::NewProp_InPUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::NewProp_OutObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::NewProp_InPUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetCurrentWrestlerDataByPUID", nullptr, nullptr, sizeof(ELEOSUtility_eventGetCurrentWrestlerDataByPUID_Parms), Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence_Statics
	{
		struct ELEOSUtility_eventGetDisplayNamePresence_Parms
		{
			UEOSPresenceBase* Presence;
			FString DisplayName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Presence;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence_Statics::NewProp_Presence = { "Presence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetDisplayNamePresence_Parms, Presence), Z_Construct_UClass_UEOSPresenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetDisplayNamePresence_Parms, DisplayName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventGetDisplayNamePresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventGetDisplayNamePresence_Parms), &Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence_Statics::NewProp_Presence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetDisplayNamePresence", nullptr, nullptr, sizeof(ELEOSUtility_eventGetDisplayNamePresence_Parms), Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend_Statics
	{
		struct ELEOSUtility_eventGetELEOSFriend_Parms
		{
			const UObject* WorldContextObject;
			UELEOSFriend* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetELEOSFriend_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetELEOSFriend_Parms, ReturnValue), Z_Construct_UClass_UELEOSFriend_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetELEOSFriend", nullptr, nullptr, sizeof(ELEOSUtility_eventGetELEOSFriend_Parms), Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession_Statics
	{
		struct ELEOSUtility_eventGetELEOSGameChatSession_Parms
		{
			const UObject* WorldContextObject;
			UELEOSGameChatSession* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetELEOSGameChatSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetELEOSGameChatSession_Parms, ReturnValue), Z_Construct_UClass_UELEOSGameChatSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetELEOSGameChatSession", nullptr, nullptr, sizeof(ELEOSUtility_eventGetELEOSGameChatSession_Parms), Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession_Statics
	{
		struct ELEOSUtility_eventGetELEOSGameSession_Parms
		{
			const UObject* WorldContextObject;
			UELEOSGameSession* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetELEOSGameSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetELEOSGameSession_Parms, ReturnValue), Z_Construct_UClass_UELEOSGameSession_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetELEOSGameSession", nullptr, nullptr, sizeof(ELEOSUtility_eventGetELEOSGameSession_Parms), Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo_Statics
	{
		struct ELEOSUtility_eventGetELEOSGameSessionInfo_Parms
		{
			const UObject* WorldContextObject;
			UEOSCommunityInfoBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetELEOSGameSessionInfo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetELEOSGameSessionInfo_Parms, ReturnValue), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetELEOSGameSessionInfo", nullptr, nullptr, sizeof(ELEOSUtility_eventGetELEOSGameSessionInfo_Parms), Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching_Statics
	{
		struct ELEOSUtility_eventGetELEOSGameSessionMatching_Parms
		{
			const UObject* WorldContextObject;
			UELEOSGameSessionMatching* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetELEOSGameSessionMatching_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetELEOSGameSessionMatching_Parms, ReturnValue), Z_Construct_UClass_UELEOSGameSessionMatching_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetELEOSGameSessionMatching", nullptr, nullptr, sizeof(ELEOSUtility_eventGetELEOSGameSessionMatching_Parms), Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby_Statics
	{
		struct ELEOSUtility_eventGetELEOSLobby_Parms
		{
			const UObject* WorldContextObject;
			UELEOSLobby* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetELEOSLobby_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetELEOSLobby_Parms, ReturnValue), Z_Construct_UClass_UELEOSLobby_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetELEOSLobby", nullptr, nullptr, sizeof(ELEOSUtility_eventGetELEOSLobby_Parms), Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetELEOSManager_Statics
	{
		struct ELEOSUtility_eventGetELEOSManager_Parms
		{
			const UObject* WorldContextObject;
			UELEOSManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetELEOSManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetELEOSManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetELEOSManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetELEOSManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetELEOSManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetELEOSManager_Parms, ReturnValue), Z_Construct_UClass_UELEOSManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetELEOSManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetELEOSManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetELEOSManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetELEOSManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetELEOSManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetELEOSManager", nullptr, nullptr, sizeof(ELEOSUtility_eventGetELEOSManager_Parms), Z_Construct_UFunction_UELEOSUtility_GetELEOSManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetELEOSManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetELEOSManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetELEOSManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetELEOSManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetEOSAuth_Statics
	{
		struct ELEOSUtility_eventGetEOSAuth_Parms
		{
			const UObject* WorldContextObject;
			UEOSAuth* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSAuth_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSAuth_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSAuth_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSAuth_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSAuth_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSAuth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSAuth_Parms, ReturnValue), Z_Construct_UClass_UEOSAuth_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetEOSAuth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSAuth_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSAuth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSAuth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetEOSAuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetEOSAuth", nullptr, nullptr, sizeof(ELEOSUtility_eventGetEOSAuth_Parms), Z_Construct_UFunction_UELEOSUtility_GetEOSAuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSAuth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSAuth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSAuth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetEOSAuth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetEOSAuth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics
	{
		struct ELEOSUtility_eventGetEOSAuthToken_Parms
		{
			const UObject* WorldContextObject;
			FString Token;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSAuthToken_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSAuthToken_Parms, Token), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventGetEOSAuthToken_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventGetEOSAuthToken_Parms), &Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::NewProp_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetEOSAuthToken", nullptr, nullptr, sizeof(ELEOSUtility_eventGetEOSAuthToken_Parms), Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetEOSFriend_Statics
	{
		struct ELEOSUtility_eventGetEOSFriend_Parms
		{
			const UObject* WorldContextObject;
			UEOSFriend* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSFriend_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSFriend_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSFriend_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSFriend_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSFriend_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSFriend_Parms, ReturnValue), Z_Construct_UClass_UEOSFriend_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetEOSFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSFriend_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSFriend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetEOSFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetEOSFriend", nullptr, nullptr, sizeof(ELEOSUtility_eventGetEOSFriend_Parms), Z_Construct_UFunction_UELEOSUtility_GetEOSFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetEOSFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetEOSFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager_Statics
	{
		struct ELEOSUtility_eventGetEOSGameFlowManager_Parms
		{
			const UObject* WorldContextObject;
			UEOSSessionP2PAFGameFlowManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSGameFlowManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSGameFlowManager_Parms, ReturnValue), Z_Construct_UClass_UEOSSessionP2PAFGameFlowManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetEOSGameFlowManager", nullptr, nullptr, sizeof(ELEOSUtility_eventGetEOSGameFlowManager_Parms), Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard_Statics
	{
		struct ELEOSUtility_eventGetEOSLeaderboard_Parms
		{
			const UObject* WorldContextObject;
			UEOSLeaderboard* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSLeaderboard_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSLeaderboard_Parms, ReturnValue), Z_Construct_UClass_UEOSLeaderboard_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetEOSLeaderboard", nullptr, nullptr, sizeof(ELEOSUtility_eventGetEOSLeaderboard_Parms), Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetEOSManager_Statics
	{
		struct ELEOSUtility_eventGetEOSManager_Parms
		{
			const UObject* WorldContextObject;
			UEOSManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSManager_Parms, ReturnValue), Z_Construct_UClass_UEOSManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetEOSManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetEOSManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetEOSManager", nullptr, nullptr, sizeof(ELEOSUtility_eventGetEOSManager_Parms), Z_Construct_UFunction_UELEOSUtility_GetEOSManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetEOSManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetEOSManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetEOSPresence_Statics
	{
		struct ELEOSUtility_eventGetEOSPresence_Parms
		{
			const UObject* WorldContextObject;
			UEOSPresence* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSPresence_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSPresence_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSPresence_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSPresence_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSPresence_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSPresence_Parms, ReturnValue), Z_Construct_UClass_UEOSPresence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetEOSPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSPresence_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetEOSPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetEOSPresence", nullptr, nullptr, sizeof(ELEOSUtility_eventGetEOSPresence_Parms), Z_Construct_UFunction_UELEOSUtility_GetEOSPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetEOSPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetEOSPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetEOSProductID_Statics
	{
		struct ELEOSUtility_eventGetEOSProductID_Parms
		{
			const UObject* WorldContextObject;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSProductID_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSProductID_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSProductID_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSProductID_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSProductID_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSProductID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSProductID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetEOSProductID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSProductID_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSProductID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSProductID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetEOSProductID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetEOSProductID", nullptr, nullptr, sizeof(ELEOSUtility_eventGetEOSProductID_Parms), Z_Construct_UFunction_UELEOSUtility_GetEOSProductID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSProductID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSProductID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSProductID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetEOSProductID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetEOSProductID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator_Statics
	{
		struct ELEOSUtility_eventGetEOSRankCalculator_Parms
		{
			const UObject* WorldContextObject;
			UELOnlineRankCalculator* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSRankCalculator_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSRankCalculator_Parms, ReturnValue), Z_Construct_UClass_UELOnlineRankCalculator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetEOSRankCalculator", nullptr, nullptr, sizeof(ELEOSUtility_eventGetEOSRankCalculator_Parms), Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetEOSReports_Statics
	{
		struct ELEOSUtility_eventGetEOSReports_Parms
		{
			const UObject* WorldContextObject;
			UEOSReports* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSReports_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSReports_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSReports_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSReports_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSReports_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSReports_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSReports_Parms, ReturnValue), Z_Construct_UClass_UEOSReports_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetEOSReports_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSReports_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSReports_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSReports_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetEOSReports_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetEOSReports", nullptr, nullptr, sizeof(ELEOSUtility_eventGetEOSReports_Parms), Z_Construct_UFunction_UELEOSUtility_GetEOSReports_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSReports_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSReports_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSReports_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetEOSReports()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetEOSReports_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions_Statics
	{
		struct ELEOSUtility_eventGetEOSSanctions_Parms
		{
			const UObject* WorldContextObject;
			UEOSSanctions* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSSanctions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSSanctions_Parms, ReturnValue), Z_Construct_UClass_UEOSSanctions_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetEOSSanctions", nullptr, nullptr, sizeof(ELEOSUtility_eventGetEOSSanctions_Parms), Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetEOSStats_Statics
	{
		struct ELEOSUtility_eventGetEOSStats_Parms
		{
			const UObject* WorldContextObject;
			UEOSStats* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSStats_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSStats_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSStats_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSStats_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSStats_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSStats_Parms, ReturnValue), Z_Construct_UClass_UEOSStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetEOSStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSStats_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetEOSStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetEOSStats", nullptr, nullptr, sizeof(ELEOSUtility_eventGetEOSStats_Parms), Z_Construct_UFunction_UELEOSUtility_GetEOSStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetEOSStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetEOSStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetEOSUser_Statics
	{
		struct ELEOSUtility_eventGetEOSUser_Parms
		{
			const UObject* WorldContextObject;
			UEOSUser* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSUser_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSUser_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSUser_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSUser_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSUser_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSUser_Parms, ReturnValue), Z_Construct_UClass_UEOSUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetEOSUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSUser_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSUser_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetEOSUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetEOSUser", nullptr, nullptr, sizeof(ELEOSUtility_eventGetEOSUser_Parms), Z_Construct_UFunction_UELEOSUtility_GetEOSUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetEOSUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetEOSUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents_Statics
	{
		struct ELEOSUtility_eventGetEOSUserContents_Parms
		{
			const UObject* WorldContextObject;
			UEOSUserContents* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSUserContents_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSUserContents_Parms, ReturnValue), Z_Construct_UClass_UEOSUserContents_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetEOSUserContents", nullptr, nullptr, sizeof(ELEOSUtility_eventGetEOSUserContents_Parms), Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager_Statics
	{
		struct ELEOSUtility_eventGetEOSUserManager_Parms
		{
			const UObject* WorldContextObject;
			UEOSUserManager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSUserManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSUserManager_Parms, ReturnValue), Z_Construct_UClass_UEOSUserManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetEOSUserManager", nullptr, nullptr, sizeof(ELEOSUtility_eventGetEOSUserManager_Parms), Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetEOSVoice_Statics
	{
		struct ELEOSUtility_eventGetEOSVoice_Parms
		{
			const UObject* WorldContextObject;
			UEOSVoice* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSVoice_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSVoice_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSVoice_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSVoice_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSVoice_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetEOSVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetEOSVoice_Parms, ReturnValue), Z_Construct_UClass_UEOSVoice_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetEOSVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSVoice_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetEOSVoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetEOSVoice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetEOSVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetEOSVoice", nullptr, nullptr, sizeof(ELEOSUtility_eventGetEOSVoice_Parms), Z_Construct_UFunction_UELEOSUtility_GetEOSVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetEOSVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetEOSVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetEOSVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetEOSVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetFriendEnabledCrossplayPresence_Statics
	{
		struct ELEOSUtility_eventGetFriendEnabledCrossplayPresence_Parms
		{
			UEOSPresenceBase* Presence;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Presence;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendEnabledCrossplayPresence_Statics::NewProp_Presence = { "Presence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetFriendEnabledCrossplayPresence_Parms, Presence), Z_Construct_UClass_UEOSPresenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_GetFriendEnabledCrossplayPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventGetFriendEnabledCrossplayPresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendEnabledCrossplayPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventGetFriendEnabledCrossplayPresence_Parms), &Z_Construct_UFunction_UELEOSUtility_GetFriendEnabledCrossplayPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetFriendEnabledCrossplayPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendEnabledCrossplayPresence_Statics::NewProp_Presence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendEnabledCrossplayPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetFriendEnabledCrossplayPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetFriendEnabledCrossplayPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetFriendEnabledCrossplayPresence", nullptr, nullptr, sizeof(ELEOSUtility_eventGetFriendEnabledCrossplayPresence_Parms), Z_Construct_UFunction_UELEOSUtility_GetFriendEnabledCrossplayPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetFriendEnabledCrossplayPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetFriendEnabledCrossplayPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetFriendEnabledCrossplayPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetFriendEnabledCrossplayPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetFriendEnabledCrossplayPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetFriendGameStatusPresence_Statics
	{
		struct ELEOSUtility_eventGetFriendGameStatusPresence_Parms
		{
			UEOSPresenceBase* Presence;
			EELEOSGameStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Presence;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendGameStatusPresence_Statics::NewProp_Presence = { "Presence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetFriendGameStatusPresence_Parms, Presence), Z_Construct_UClass_UEOSPresenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendGameStatusPresence_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendGameStatusPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetFriendGameStatusPresence_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EELEOSGameStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetFriendGameStatusPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendGameStatusPresence_Statics::NewProp_Presence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendGameStatusPresence_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendGameStatusPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetFriendGameStatusPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetFriendGameStatusPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetFriendGameStatusPresence", nullptr, nullptr, sizeof(ELEOSUtility_eventGetFriendGameStatusPresence_Parms), Z_Construct_UFunction_UELEOSUtility_GetFriendGameStatusPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetFriendGameStatusPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetFriendGameStatusPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetFriendGameStatusPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetFriendGameStatusPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetFriendGameStatusPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetFriendOnlineVersionPresence_Statics
	{
		struct ELEOSUtility_eventGetFriendOnlineVersionPresence_Parms
		{
			UEOSPresenceBase* Presence;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Presence;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendOnlineVersionPresence_Statics::NewProp_Presence = { "Presence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetFriendOnlineVersionPresence_Parms, Presence), Z_Construct_UClass_UEOSPresenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendOnlineVersionPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetFriendOnlineVersionPresence_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetFriendOnlineVersionPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendOnlineVersionPresence_Statics::NewProp_Presence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendOnlineVersionPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetFriendOnlineVersionPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetFriendOnlineVersionPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetFriendOnlineVersionPresence", nullptr, nullptr, sizeof(ELEOSUtility_eventGetFriendOnlineVersionPresence_Parms), Z_Construct_UFunction_UELEOSUtility_GetFriendOnlineVersionPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetFriendOnlineVersionPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetFriendOnlineVersionPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetFriendOnlineVersionPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetFriendOnlineVersionPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetFriendOnlineVersionPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetFriendPlatformPresence_Statics
	{
		struct ELEOSUtility_eventGetFriendPlatformPresence_Parms
		{
			UEOSPresenceBase* Presence;
			EPlatformType ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Presence;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendPlatformPresence_Statics::NewProp_Presence = { "Presence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetFriendPlatformPresence_Parms, Presence), Z_Construct_UClass_UEOSPresenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendPlatformPresence_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendPlatformPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetFriendPlatformPresence_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Core_EPlatformType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetFriendPlatformPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendPlatformPresence_Statics::NewProp_Presence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendPlatformPresence_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendPlatformPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetFriendPlatformPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetFriendPlatformPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetFriendPlatformPresence", nullptr, nullptr, sizeof(ELEOSUtility_eventGetFriendPlatformPresence_Parms), Z_Construct_UFunction_UELEOSUtility_GetFriendPlatformPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetFriendPlatformPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetFriendPlatformPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetFriendPlatformPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetFriendPlatformPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetFriendPlatformPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics
	{
		struct ELEOSUtility_eventGetFriendPlayerIcon_Parms
		{
			UEOSFriendUser* FriendUser;
			int32 PlayerIcon;
			int32 BGIcon;
			FUserProfileColorParam ColorParam;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FriendUser;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIcon;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BGIcon;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::NewProp_FriendUser = { "FriendUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetFriendPlayerIcon_Parms, FriendUser), Z_Construct_UClass_UEOSFriendUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::NewProp_PlayerIcon = { "PlayerIcon", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetFriendPlayerIcon_Parms, PlayerIcon), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::NewProp_BGIcon = { "BGIcon", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetFriendPlayerIcon_Parms, BGIcon), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::NewProp_ColorParam = { "ColorParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetFriendPlayerIcon_Parms, ColorParam), Z_Construct_UScriptStruct_FUserProfileColorParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventGetFriendPlayerIcon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventGetFriendPlayerIcon_Parms), &Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::NewProp_FriendUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::NewProp_PlayerIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::NewProp_BGIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::NewProp_ColorParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetFriendPlayerIcon", nullptr, nullptr, sizeof(ELEOSUtility_eventGetFriendPlayerIcon_Parms), Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics
	{
		struct ELEOSUtility_eventGetFriendProductIDList_Parms
		{
			const UObject* WorldContextObject;
			TArray<FString> IDList;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IDList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IDList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetFriendProductIDList_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::NewProp_IDList_Inner = { "IDList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::NewProp_IDList = { "IDList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetFriendProductIDList_Parms, IDList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventGetFriendProductIDList_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventGetFriendProductIDList_Parms), &Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::NewProp_IDList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::NewProp_IDList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetFriendProductIDList", nullptr, nullptr, sizeof(ELEOSUtility_eventGetFriendProductIDList_Parms), Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetGameStatusPresence_Statics
	{
		struct ELEOSUtility_eventGetGameStatusPresence_Parms
		{
			UEOSUser* User;
			EELEOSGameStatus ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetGameStatusPresence_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetGameStatusPresence_Parms, User), Z_Construct_UClass_UEOSUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSUtility_GetGameStatusPresence_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSUtility_GetGameStatusPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetGameStatusPresence_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EELEOSGameStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetGameStatusPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetGameStatusPresence_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetGameStatusPresence_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetGameStatusPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetGameStatusPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetGameStatusPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetGameStatusPresence", nullptr, nullptr, sizeof(ELEOSUtility_eventGetGameStatusPresence_Parms), Z_Construct_UFunction_UELEOSUtility_GetGameStatusPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetGameStatusPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetGameStatusPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetGameStatusPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetGameStatusPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetGameStatusPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics
	{
		struct ELEOSUtility_eventGetLastSyncServerUtc_Parms
		{
			const UObject* WorldContextObject;
			FDateTime DateTime;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DateTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetLastSyncServerUtc_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetLastSyncServerUtc_Parms, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventGetLastSyncServerUtc_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventGetLastSyncServerUtc_Parms), &Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::NewProp_DateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetLastSyncServerUtc", nullptr, nullptr, sizeof(ELEOSUtility_eventGetLastSyncServerUtc_Parms), Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics
	{
		struct ELEOSUtility_eventGetLobbyInvites_Parms
		{
			const UObject* WorldContextObject;
			TMap<FString,FLobbyInvite> Invites;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Invites_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Invites_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Invites;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetLobbyInvites_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::NewProp_Invites_ValueProp = { "Invites", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLobbyInvite, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::NewProp_Invites_Key_KeyProp = { "Invites_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::NewProp_Invites = { "Invites", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetLobbyInvites_Parms, Invites), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::NewProp_Invites_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::NewProp_Invites_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::NewProp_Invites,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetLobbyInvites", nullptr, nullptr, sizeof(ELEOSUtility_eventGetLobbyInvites_Parms), Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount_Statics
	{
		struct ELEOSUtility_eventGetMaxPlayerCount_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetMaxPlayerCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetMaxPlayerCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetMaxPlayerCount", nullptr, nullptr, sizeof(ELEOSUtility_eventGetMaxPlayerCount_Parms), Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics
	{
		struct ELEOSUtility_eventGetMyGameStatusPresence_Parms
		{
			const UObject* WorldContextObject;
			EELEOSGameStatus ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetMyGameStatusPresence_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetMyGameStatusPresence_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_EELEOSGameStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetMyGameStatusPresence", nullptr, nullptr, sizeof(ELEOSUtility_eventGetMyGameStatusPresence_Parms), Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics
	{
		struct ELEOSUtility_eventGetNearestServerPing_Parms
		{
			const UObject* WorldContextObject;
			FString ServerName;
			int32 Ping;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Ping;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetNearestServerPing_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetNearestServerPing_Parms, ServerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::NewProp_Ping = { "Ping", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetNearestServerPing_Parms, Ping), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventGetNearestServerPing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventGetNearestServerPing_Parms), &Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::NewProp_ServerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::NewProp_Ping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetNearestServerPing", nullptr, nullptr, sizeof(ELEOSUtility_eventGetNearestServerPing_Parms), Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver_Statics
	{
		struct ELEOSUtility_eventGetNetworkObserver_Parms
		{
			const UObject* WorldContextObject;
			UELNetworkObserverBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetNetworkObserver_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetNetworkObserver_Parms, ReturnValue), Z_Construct_UClass_UELNetworkObserverBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetNetworkObserver", nullptr, nullptr, sizeof(ELEOSUtility_eventGetNetworkObserver_Parms), Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount_Statics
	{
		struct ELEOSUtility_eventGetNowPlayerCount_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetNowPlayerCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetNowPlayerCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetNowPlayerCount", nullptr, nullptr, sizeof(ELEOSUtility_eventGetNowPlayerCount_Parms), Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics
	{
		struct ELEOSUtility_eventGetPlatformAttibuteName_Parms
		{
			const UObject* WorldContextObject;
			EPlatformType Platform;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Platform_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Platform;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetPlatformAttibuteName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetPlatformAttibuteName_Parms, Platform), Z_Construct_UEnum_ELITE_Core_EPlatformType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetPlatformAttibuteName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::NewProp_Platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetPlatformAttibuteName", nullptr, nullptr, sizeof(ELEOSUtility_eventGetPlatformAttibuteName_Parms), Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics
	{
		struct ELEOSUtility_eventGetPlatformAttibuteValue_Parms
		{
			const UObject* WorldContextObject;
			EPlatformType Platform;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Platform_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Platform;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetPlatformAttibuteValue_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetPlatformAttibuteValue_Parms, Platform), Z_Construct_UEnum_ELITE_Core_EPlatformType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetPlatformAttibuteValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::NewProp_Platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetPlatformAttibuteValue", nullptr, nullptr, sizeof(ELEOSUtility_eventGetPlatformAttibuteValue_Parms), Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics
	{
		struct ELEOSUtility_eventGetPresenceFriendPlayerIcon_Parms
		{
			UEOSPresenceBase* Presence;
			int32 PlayerIcon;
			int32 BGIcon;
			FUserProfileColorParam ColorParam;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Presence;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIcon;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BGIcon;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::NewProp_Presence = { "Presence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetPresenceFriendPlayerIcon_Parms, Presence), Z_Construct_UClass_UEOSPresenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::NewProp_PlayerIcon = { "PlayerIcon", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetPresenceFriendPlayerIcon_Parms, PlayerIcon), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::NewProp_BGIcon = { "BGIcon", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetPresenceFriendPlayerIcon_Parms, BGIcon), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::NewProp_ColorParam = { "ColorParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetPresenceFriendPlayerIcon_Parms, ColorParam), Z_Construct_UScriptStruct_FUserProfileColorParam, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventGetPresenceFriendPlayerIcon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventGetPresenceFriendPlayerIcon_Parms), &Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::NewProp_Presence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::NewProp_PlayerIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::NewProp_BGIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::NewProp_ColorParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetPresenceFriendPlayerIcon", nullptr, nullptr, sizeof(ELEOSUtility_eventGetPresenceFriendPlayerIcon_Parms), Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics
	{
		struct ELEOSUtility_eventGetPresenceFriendPlayerIcons_Parms
		{
			UEOSPresenceBase* Presence;
			TArray<int32> Icons;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Presence;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Icons_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Icons;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::NewProp_Presence = { "Presence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetPresenceFriendPlayerIcons_Parms, Presence), Z_Construct_UClass_UEOSPresenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::NewProp_Icons_Inner = { "Icons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::NewProp_Icons = { "Icons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetPresenceFriendPlayerIcons_Parms, Icons), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventGetPresenceFriendPlayerIcons_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventGetPresenceFriendPlayerIcons_Parms), &Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::NewProp_Presence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::NewProp_Icons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::NewProp_Icons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetPresenceFriendPlayerIcons", nullptr, nullptr, sizeof(ELEOSUtility_eventGetPresenceFriendPlayerIcons_Parms), Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics
	{
		struct ELEOSUtility_eventGetPresencePlayerIcons_Parms
		{
			UEOSUser* User;
			TArray<int32> Icons;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Icons_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Icons;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetPresencePlayerIcons_Parms, User), Z_Construct_UClass_UEOSUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::NewProp_Icons_Inner = { "Icons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::NewProp_Icons = { "Icons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetPresencePlayerIcons_Parms, Icons), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventGetPresencePlayerIcons_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventGetPresencePlayerIcons_Parms), &Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::NewProp_Icons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::NewProp_Icons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetPresencePlayerIcons", nullptr, nullptr, sizeof(ELEOSUtility_eventGetPresencePlayerIcons_Parms), Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName_Statics
	{
		struct ELEOSUtility_eventGetSessionGamePlayerDisplayName_Parms
		{
			FSessionGamePlayerDataBP PlayerData;
			FString DisplayName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName_Statics::NewProp_PlayerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetSessionGamePlayerDisplayName_Parms, PlayerData), Z_Construct_UScriptStruct_FSessionGamePlayerDataBP, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName_Statics::NewProp_PlayerData_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetSessionGamePlayerDisplayName_Parms, DisplayName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName_Statics::NewProp_PlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName_Statics::NewProp_DisplayName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetSessionGamePlayerDisplayName", nullptr, nullptr, sizeof(ELEOSUtility_eventGetSessionGamePlayerDisplayName_Parms), Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics
	{
		struct ELEOSUtility_eventGetSessionGamePlayerIcon_Parms
		{
			FSessionGamePlayerDataBP PlayerData;
			int32 PlayerIcon;
			int32 BGIcon;
			FUserProfileColorParam ColorParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIcon;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BGIcon;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::NewProp_PlayerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetSessionGamePlayerIcon_Parms, PlayerData), Z_Construct_UScriptStruct_FSessionGamePlayerDataBP, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::NewProp_PlayerData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::NewProp_PlayerIcon = { "PlayerIcon", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetSessionGamePlayerIcon_Parms, PlayerIcon), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::NewProp_BGIcon = { "BGIcon", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetSessionGamePlayerIcon_Parms, BGIcon), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::NewProp_ColorParam = { "ColorParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetSessionGamePlayerIcon_Parms, ColorParam), Z_Construct_UScriptStruct_FUserProfileColorParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::NewProp_PlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::NewProp_PlayerIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::NewProp_BGIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::NewProp_ColorParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetSessionGamePlayerIcon", nullptr, nullptr, sizeof(ELEOSUtility_eventGetSessionGamePlayerIcon_Parms), Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics
	{
		struct ELEOSUtility_eventGetSessionGamePlayerWeaponDecal_Parms
		{
			FSessionGamePlayerDataBP PlayerData;
			int32 Decal;
			int32 DecalSymbol;
			FUserProfileColorParam ColorParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Decal;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DecalSymbol;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::NewProp_PlayerData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::NewProp_PlayerData = { "PlayerData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetSessionGamePlayerWeaponDecal_Parms, PlayerData), Z_Construct_UScriptStruct_FSessionGamePlayerDataBP, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::NewProp_PlayerData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::NewProp_Decal = { "Decal", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetSessionGamePlayerWeaponDecal_Parms, Decal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::NewProp_DecalSymbol = { "DecalSymbol", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetSessionGamePlayerWeaponDecal_Parms, DecalSymbol), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::NewProp_ColorParam = { "ColorParam", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetSessionGamePlayerWeaponDecal_Parms, ColorParam), Z_Construct_UScriptStruct_FUserProfileColorParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::NewProp_PlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::NewProp_Decal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::NewProp_DecalSymbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::NewProp_ColorParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetSessionGamePlayerWeaponDecal", nullptr, nullptr, sizeof(ELEOSUtility_eventGetSessionGamePlayerWeaponDecal_Parms), Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetTimeStamp_Statics
	{
		struct ELEOSUtility_eventGetTimeStamp_Parms
		{
			int64 ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UELEOSUtility_GetTimeStamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetTimeStamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetTimeStamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetTimeStamp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetTimeStamp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetTimeStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetTimeStamp", nullptr, nullptr, sizeof(ELEOSUtility_eventGetTimeStamp_Parms), Z_Construct_UFunction_UELEOSUtility_GetTimeStamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetTimeStamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetTimeStamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetTimeStamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetTimeStamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetTimeStamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics
	{
		struct ELEOSUtility_eventGetWrestlerNameText_Parms
		{
			const UObject* WorldContextObject;
			UObject* OnlineWrestlerData;
			FWrestlerNameText WrestlerName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineWrestlerData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetWrestlerNameText_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::NewProp_OnlineWrestlerData = { "OnlineWrestlerData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetWrestlerNameText_Parms, OnlineWrestlerData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::NewProp_WrestlerName = { "WrestlerName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetWrestlerNameText_Parms, WrestlerName), Z_Construct_UScriptStruct_FWrestlerNameText, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventGetWrestlerNameText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventGetWrestlerNameText_Parms), &Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::NewProp_OnlineWrestlerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::NewProp_WrestlerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetWrestlerNameText", nullptr, nullptr, sizeof(ELEOSUtility_eventGetWrestlerNameText_Parms), Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager_Statics
	{
		struct ELEOSUtility_eventGetYGS2Manager_Parms
		{
			const UObject* WorldContextObject;
			UELYGS2Manager* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetYGS2Manager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetYGS2Manager_Parms, ReturnValue), Z_Construct_UClass_UELYGS2Manager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetYGS2Manager", nullptr, nullptr, sizeof(ELEOSUtility_eventGetYGS2Manager_Parms), Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs_Statics
	{
		struct ELEOSUtility_eventGetYGS2PingMs_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetYGS2PingMs_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventGetYGS2PingMs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "GetYGS2PingMs", nullptr, nullptr, sizeof(ELEOSUtility_eventGetYGS2PingMs_Parms), Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics
	{
		struct ELEOSUtility_eventIsCompleteCurrentWrestler_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsCompleteCurrentWrestler_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventIsCompleteCurrentWrestler_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventIsCompleteCurrentWrestler_Parms), &Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "IsCompleteCurrentWrestler", nullptr, nullptr, sizeof(ELEOSUtility_eventIsCompleteCurrentWrestler_Parms), Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics
	{
		struct ELEOSUtility_eventIsEASLogin_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsEASLogin_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventIsEASLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventIsEASLogin_Parms), &Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "IsEASLogin", nullptr, nullptr, sizeof(ELEOSUtility_eventIsEASLogin_Parms), Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_IsEASLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_IsEASLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics
	{
		struct ELEOSUtility_eventIsEnabledCrossPlay_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsEnabledCrossPlay_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventIsEnabledCrossPlay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventIsEnabledCrossPlay_Parms), &Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "IsEnabledCrossPlay", nullptr, nullptr, sizeof(ELEOSUtility_eventIsEnabledCrossPlay_Parms), Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics
	{
		struct ELEOSUtility_eventIsEnabledFriendChat_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsEnabledFriendChat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventIsEnabledFriendChat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventIsEnabledFriendChat_Parms), &Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "IsEnabledFriendChat", nullptr, nullptr, sizeof(ELEOSUtility_eventIsEnabledFriendChat_Parms), Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics
	{
		struct ELEOSUtility_eventIsEnableOnlineVersionCheck_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsEnableOnlineVersionCheck_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventIsEnableOnlineVersionCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventIsEnableOnlineVersionCheck_Parms), &Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "IsEnableOnlineVersionCheck", nullptr, nullptr, sizeof(ELEOSUtility_eventIsEnableOnlineVersionCheck_Parms), Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics
	{
		struct ELEOSUtility_eventIsEOSLogin_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsEOSLogin_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventIsEOSLogin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventIsEOSLogin_Parms), &Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "IsEOSLogin", nullptr, nullptr, sizeof(ELEOSUtility_eventIsEOSLogin_Parms), Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_IsEOSLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_IsEOSLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_IsFriendPlayingThisGame_Statics
	{
		struct ELEOSUtility_eventIsFriendPlayingThisGame_Parms
		{
			UEOSFriendPresence* Presence;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Presence;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsFriendPlayingThisGame_Statics::NewProp_Presence = { "Presence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsFriendPlayingThisGame_Parms, Presence), Z_Construct_UClass_UEOSFriendPresence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_IsFriendPlayingThisGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventIsFriendPlayingThisGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_IsFriendPlayingThisGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventIsFriendPlayingThisGame_Parms), &Z_Construct_UFunction_UELEOSUtility_IsFriendPlayingThisGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_IsFriendPlayingThisGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsFriendPlayingThisGame_Statics::NewProp_Presence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsFriendPlayingThisGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsFriendPlayingThisGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_IsFriendPlayingThisGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "IsFriendPlayingThisGame", nullptr, nullptr, sizeof(ELEOSUtility_eventIsFriendPlayingThisGame_Parms), Z_Construct_UFunction_UELEOSUtility_IsFriendPlayingThisGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsFriendPlayingThisGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsFriendPlayingThisGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsFriendPlayingThisGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_IsFriendPlayingThisGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_IsFriendPlayingThisGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics
	{
		struct ELEOSUtility_eventIsFriendUserPlayingThisGameOrNotFriend_Parms
		{
			const UObject* WorldContextObject;
			FString PUID;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PUID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsFriendUserPlayingThisGameOrNotFriend_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::NewProp_PUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::NewProp_PUID = { "PUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsFriendUserPlayingThisGameOrNotFriend_Parms, PUID), METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::NewProp_PUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::NewProp_PUID_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventIsFriendUserPlayingThisGameOrNotFriend_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventIsFriendUserPlayingThisGameOrNotFriend_Parms), &Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::NewProp_PUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "IsFriendUserPlayingThisGameOrNotFriend", nullptr, nullptr, sizeof(ELEOSUtility_eventIsFriendUserPlayingThisGameOrNotFriend_Parms), Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics
	{
		struct ELEOSUtility_eventIsInSession_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsInSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventIsInSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventIsInSession_Parms), &Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "IsInSession", nullptr, nullptr, sizeof(ELEOSUtility_eventIsInSession_Parms), Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_IsInSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_IsInSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics
	{
		struct ELEOSUtility_eventIsInviteError_Parms
		{
			const UObject* WorldContextObject;
			FLobbyInvite Invite;
			ELobbyInviteError Reason;
			bool _bCheckCommunityUser;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Invite_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Invite;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static void NewProp__bCheckCommunityUser_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bCheckCommunityUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsInviteError_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp_Invite_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp_Invite = { "Invite", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsInviteError_Parms, Invite), Z_Construct_UScriptStruct_FLobbyInvite, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp_Invite_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp_Invite_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsInviteError_Parms, Reason), Z_Construct_UEnum_ABP_200508_ELobbyInviteError, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp__bCheckCommunityUser_SetBit(void* Obj)
	{
		((ELEOSUtility_eventIsInviteError_Parms*)Obj)->_bCheckCommunityUser = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp__bCheckCommunityUser = { "_bCheckCommunityUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventIsInviteError_Parms), &Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp__bCheckCommunityUser_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp_Invite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp_Reason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::NewProp__bCheckCommunityUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "IsInviteError", nullptr, nullptr, sizeof(ELEOSUtility_eventIsInviteError_Parms), Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_IsInviteError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_IsInviteError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics
	{
		struct ELEOSUtility_eventIsLobbyOwner_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsLobbyOwner_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventIsLobbyOwner_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventIsLobbyOwner_Parms), &Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "IsLobbyOwner", nullptr, nullptr, sizeof(ELEOSUtility_eventIsLobbyOwner_Parms), Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics
	{
		struct ELEOSUtility_eventIsOnlineProcessing_ExhibitionMatch_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsOnlineProcessing_ExhibitionMatch_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventIsOnlineProcessing_ExhibitionMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventIsOnlineProcessing_ExhibitionMatch_Parms), &Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "IsOnlineProcessing_ExhibitionMatch", nullptr, nullptr, sizeof(ELEOSUtility_eventIsOnlineProcessing_ExhibitionMatch_Parms), Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics
	{
		struct ELEOSUtility_eventIsPartyAttributeJoinable_Parms
		{
			const UObject* WorldContextObject;
			UEOSCommunityInfoBase* CommunityInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommunityInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsPartyAttributeJoinable_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::NewProp_CommunityInfo = { "CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsPartyAttributeJoinable_Parms, CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventIsPartyAttributeJoinable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventIsPartyAttributeJoinable_Parms), &Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::NewProp_CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "IsPartyAttributeJoinable", nullptr, nullptr, sizeof(ELEOSUtility_eventIsPartyAttributeJoinable_Parms), Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_IsPatchUpdateAvailable_Statics
	{
		struct ELEOSUtility_eventIsPatchUpdateAvailable_Parms
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
	void Z_Construct_UFunction_UELEOSUtility_IsPatchUpdateAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventIsPatchUpdateAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_IsPatchUpdateAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventIsPatchUpdateAvailable_Parms), &Z_Construct_UFunction_UELEOSUtility_IsPatchUpdateAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_IsPatchUpdateAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsPatchUpdateAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsPatchUpdateAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_IsPatchUpdateAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "IsPatchUpdateAvailable", nullptr, nullptr, sizeof(ELEOSUtility_eventIsPatchUpdateAvailable_Parms), Z_Construct_UFunction_UELEOSUtility_IsPatchUpdateAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsPatchUpdateAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsPatchUpdateAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsPatchUpdateAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_IsPatchUpdateAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_IsPatchUpdateAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics
	{
		struct ELEOSUtility_eventIsQuickMatchAble_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsQuickMatchAble_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventIsQuickMatchAble_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventIsQuickMatchAble_Parms), &Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "IsQuickMatchAble", nullptr, nullptr, sizeof(ELEOSUtility_eventIsQuickMatchAble_Parms), Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics
	{
		struct ELEOSUtility_eventIsSessionSearching_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsSessionSearching_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventIsSessionSearching_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventIsSessionSearching_Parms), &Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "IsSessionSearching", nullptr, nullptr, sizeof(ELEOSUtility_eventIsSessionSearching_Parms), Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_IsSessionSearching()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_IsSessionSearching_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics
	{
		struct ELEOSUtility_eventIsValidOnlineWrestlerData_Parms
		{
			const UObject* WorldContextObject;
			UObject* OnlineWrestlerData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnlineWrestlerData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsValidOnlineWrestlerData_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::NewProp_OnlineWrestlerData = { "OnlineWrestlerData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventIsValidOnlineWrestlerData_Parms, OnlineWrestlerData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventIsValidOnlineWrestlerData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventIsValidOnlineWrestlerData_Parms), &Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::NewProp_OnlineWrestlerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "IsValidOnlineWrestlerData", nullptr, nullptr, sizeof(ELEOSUtility_eventIsValidOnlineWrestlerData_Parms), Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics
	{
		struct ELEOSUtility_eventJoinLobby_Parms
		{
			const UObject* WorldContextObject;
			UEOSCommunityInfoBase* CommunityInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommunityInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventJoinLobby_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::NewProp_CommunityInfo = { "CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventJoinLobby_Parms, CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventJoinLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventJoinLobby_Parms), &Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::NewProp_CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "JoinLobby", nullptr, nullptr, sizeof(ELEOSUtility_eventJoinLobby_Parms), Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_JoinLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_JoinLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics
	{
		struct ELEOSUtility_eventJoinLobbyByLobbyInvite_Parms
		{
			const UObject* WorldContextObject;
			FLobbyInvite LobbyInvite;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyInvite_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LobbyInvite;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventJoinLobbyByLobbyInvite_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::NewProp_LobbyInvite_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::NewProp_LobbyInvite = { "LobbyInvite", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventJoinLobbyByLobbyInvite_Parms, LobbyInvite), Z_Construct_UScriptStruct_FLobbyInvite, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::NewProp_LobbyInvite_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::NewProp_LobbyInvite_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventJoinLobbyByLobbyInvite_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventJoinLobbyByLobbyInvite_Parms), &Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::NewProp_LobbyInvite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "JoinLobbyByLobbyInvite", nullptr, nullptr, sizeof(ELEOSUtility_eventJoinLobbyByLobbyInvite_Parms), Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics
	{
		struct ELEOSUtility_eventLeaveLobby_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventLeaveLobby_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventLeaveLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventLeaveLobby_Parms), &Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "LeaveLobby", nullptr, nullptr, sizeof(ELEOSUtility_eventLeaveLobby_Parms), Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_LeaveLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_LeaveLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics
	{
		struct ELEOSUtility_eventLeaveSession_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventLeaveSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventLeaveSession_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventLeaveSession_Parms), &Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "LeaveSession", nullptr, nullptr, sizeof(ELEOSUtility_eventLeaveSession_Parms), Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_LeaveSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_LeaveSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_Login_Statics
	{
		struct ELEOSUtility_eventLogin_Parms
		{
			const UObject* WorldContextObject;
			FString _Name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_Login_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_Login_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventLogin_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_Login_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_Login_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_Login_Statics::NewProp__Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_Login_Statics::NewProp__Name = { "_Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventLogin_Parms, _Name), METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_Login_Statics::NewProp__Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_Login_Statics::NewProp__Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_Login_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_Login_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_Login_Statics::NewProp__Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_Login_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_Login_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "Login", nullptr, nullptr, sizeof(ELEOSUtility_eventLogin_Parms), Z_Construct_UFunction_UELEOSUtility_Login_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_Login_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_Login_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_Login_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_Login()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_Login_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_LoginPortal_Statics
	{
		struct ELEOSUtility_eventLoginPortal_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_LoginPortal_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_LoginPortal_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventLoginPortal_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_LoginPortal_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_LoginPortal_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_LoginPortal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_LoginPortal_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_LoginPortal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_LoginPortal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "LoginPortal", nullptr, nullptr, sizeof(ELEOSUtility_eventLoginPortal_Parms), Z_Construct_UFunction_UELEOSUtility_LoginPortal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_LoginPortal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_LoginPortal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_LoginPortal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_LoginPortal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_LoginPortal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_Logout_Statics
	{
		struct ELEOSUtility_eventLogout_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_Logout_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_Logout_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventLogout_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_Logout_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_Logout_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_Logout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_Logout_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_Logout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_Logout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "Logout", nullptr, nullptr, sizeof(ELEOSUtility_eventLogout_Parms), Z_Construct_UFunction_UELEOSUtility_Logout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_Logout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_Logout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_Logout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_Logout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_Logout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_MakeUndefinedDateTime_Statics
	{
		struct ELEOSUtility_eventMakeUndefinedDateTime_Parms
		{
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_MakeUndefinedDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventMakeUndefinedDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_MakeUndefinedDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_MakeUndefinedDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_MakeUndefinedDateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_MakeUndefinedDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "MakeUndefinedDateTime", nullptr, nullptr, sizeof(ELEOSUtility_eventMakeUndefinedDateTime_Parms), Z_Construct_UFunction_UELEOSUtility_MakeUndefinedDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_MakeUndefinedDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_MakeUndefinedDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_MakeUndefinedDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_MakeUndefinedDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_MakeUndefinedDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics
	{
		struct ELEOSUtility_eventOnlineConnectionCheck_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventOnlineConnectionCheck_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventOnlineConnectionCheck_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventOnlineConnectionCheck_Parms), &Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "OnlineConnectionCheck", nullptr, nullptr, sizeof(ELEOSUtility_eventOnlineConnectionCheck_Parms), Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics
	{
		struct ELEOSUtility_eventQueryLobbyInvites_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventQueryLobbyInvites_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventQueryLobbyInvites_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventQueryLobbyInvites_Parms), &Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "QueryLobbyInvites", nullptr, nullptr, sizeof(ELEOSUtility_eventQueryLobbyInvites_Parms), Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics
	{
		struct ELEOSUtility_eventRejectLobbyInvite_Parms
		{
			const UObject* WorldContextObject;
			UEOSCommunityInfoBase* CommunityInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CommunityInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventRejectLobbyInvite_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::NewProp_CommunityInfo = { "CommunityInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventRejectLobbyInvite_Parms, CommunityInfo), Z_Construct_UClass_UEOSCommunityInfoBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventRejectLobbyInvite_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventRejectLobbyInvite_Parms), &Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::NewProp_CommunityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "RejectLobbyInvite", nullptr, nullptr, sizeof(ELEOSUtility_eventRejectLobbyInvite_Parms), Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics
	{
		struct ELEOSUtility_eventRequestInviteLobbyMember_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventRequestInviteLobbyMember_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventRequestInviteLobbyMember_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventRequestInviteLobbyMember_Parms), &Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "RequestInviteLobbyMember", nullptr, nullptr, sizeof(ELEOSUtility_eventRequestInviteLobbyMember_Parms), Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics
	{
		struct ELEOSUtility_eventRequestSanitizePartyChat_Parms
		{
			const UObject* WorldContextObject;
			FScriptDelegate Delegate;
			UELEOSSanitizeTextPartyChat* UserData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventRequestSanitizePartyChat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventRequestSanitizePartyChat_Parms, Delegate), Z_Construct_UDelegateFunction_ABP_200508_EOSSanitizePartyChatEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventRequestSanitizePartyChat_Parms, UserData), Z_Construct_UClass_UELEOSSanitizeTextPartyChat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics::NewProp_Delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics::NewProp_UserData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "RequestSanitizePartyChat", nullptr, nullptr, sizeof(ELEOSUtility_eventRequestSanitizePartyChat_Parms), Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics
	{
		struct ELEOSUtility_eventRequestSanitizeWrestlerName_Parms
		{
			const UObject* WorldContextObject;
			FScriptDelegate Delegate;
			UELEOSSanitizeTextWrestlerData* UserData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventRequestSanitizeWrestlerName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventRequestSanitizeWrestlerName_Parms, Delegate), Z_Construct_UDelegateFunction_ABP_200508_EOSSanitizeWrestlerNameTextEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::NewProp_UserData = { "UserData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventRequestSanitizeWrestlerName_Parms, UserData), Z_Construct_UClass_UELEOSSanitizeTextWrestlerData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventRequestSanitizeWrestlerName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventRequestSanitizeWrestlerName_Parms), &Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::NewProp_Delegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::NewProp_UserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "RequestSanitizeWrestlerName", nullptr, nullptr, sizeof(ELEOSUtility_eventRequestSanitizeWrestlerName_Parms), Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics
	{
		struct ELEOSUtility_eventRequestYGS2Analytics_Parms
		{
			const UObject* WorldContextObject;
			bool MatchingResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_MatchingResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MatchingResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventRequestYGS2Analytics_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics::NewProp_MatchingResult_SetBit(void* Obj)
	{
		((ELEOSUtility_eventRequestYGS2Analytics_Parms*)Obj)->MatchingResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics::NewProp_MatchingResult = { "MatchingResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventRequestYGS2Analytics_Parms), &Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics::NewProp_MatchingResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics::NewProp_MatchingResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "RequestYGS2Analytics", nullptr, nullptr, sizeof(ELEOSUtility_eventRequestYGS2Analytics_Parms), Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics
	{
		struct ELEOSUtility_eventSendLobbyPacketMiniGameInfo_Parms
		{
			const UObject* WorldContextObject;
			UELEOSLobbyMiniGameInfo* Info;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Info;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSendLobbyPacketMiniGameInfo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSendLobbyPacketMiniGameInfo_Parms, Info), Z_Construct_UClass_UELEOSLobbyMiniGameInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSendLobbyPacketMiniGameInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSendLobbyPacketMiniGameInfo_Parms), &Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::NewProp_Info,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "SendLobbyPacketMiniGameInfo", nullptr, nullptr, sizeof(ELEOSUtility_eventSendLobbyPacketMiniGameInfo_Parms), Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics
	{
		struct ELEOSUtility_eventSendLobbyPacketMiniGameOwnerSelectInfo_Parms
		{
			const UObject* WorldContextObject;
			int32 InNextCursor;
			bool InDecide;
			bool InCancel;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InNextCursor;
		static void NewProp_InDecide_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InDecide;
		static void NewProp_InCancel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InCancel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSendLobbyPacketMiniGameOwnerSelectInfo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_InNextCursor = { "InNextCursor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSendLobbyPacketMiniGameOwnerSelectInfo_Parms, InNextCursor), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_InDecide_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSendLobbyPacketMiniGameOwnerSelectInfo_Parms*)Obj)->InDecide = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_InDecide = { "InDecide", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSendLobbyPacketMiniGameOwnerSelectInfo_Parms), &Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_InDecide_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_InCancel_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSendLobbyPacketMiniGameOwnerSelectInfo_Parms*)Obj)->InCancel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_InCancel = { "InCancel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSendLobbyPacketMiniGameOwnerSelectInfo_Parms), &Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_InCancel_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSendLobbyPacketMiniGameOwnerSelectInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSendLobbyPacketMiniGameOwnerSelectInfo_Parms), &Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_InNextCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_InDecide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_InCancel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "SendLobbyPacketMiniGameOwnerSelectInfo", nullptr, nullptr, sizeof(ELEOSUtility_eventSendLobbyPacketMiniGameOwnerSelectInfo_Parms), Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics
	{
		struct ELEOSUtility_eventSendLobbyPacketPositionSelectMenuInput_Parms
		{
			const UObject* WorldContextObject;
			UObject* MenuInput;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuInput;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSendLobbyPacketPositionSelectMenuInput_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::NewProp_MenuInput = { "MenuInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSendLobbyPacketPositionSelectMenuInput_Parms, MenuInput), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSendLobbyPacketPositionSelectMenuInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSendLobbyPacketPositionSelectMenuInput_Parms), &Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::NewProp_MenuInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "SendLobbyPacketPositionSelectMenuInput", nullptr, nullptr, sizeof(ELEOSUtility_eventSendLobbyPacketPositionSelectMenuInput_Parms), Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics
	{
		struct ELEOSUtility_eventSendLobbyPacketPositionSelectMenuInputResult_Parms
		{
			const UObject* WorldContextObject;
			UObject* MenuInput;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuInput;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSendLobbyPacketPositionSelectMenuInputResult_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::NewProp_MenuInput = { "MenuInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSendLobbyPacketPositionSelectMenuInputResult_Parms, MenuInput), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSendLobbyPacketPositionSelectMenuInputResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSendLobbyPacketPositionSelectMenuInputResult_Parms), &Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::NewProp_MenuInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "SendLobbyPacketPositionSelectMenuInputResult", nullptr, nullptr, sizeof(ELEOSUtility_eventSendLobbyPacketPositionSelectMenuInputResult_Parms), Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics
	{
		struct ELEOSUtility_eventSetDisplayNamePresence_Parms
		{
			UEOSUser* User;
			FString DisplayName;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetDisplayNamePresence_Parms, User), Z_Construct_UClass_UEOSUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::NewProp_DisplayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetDisplayNamePresence_Parms, DisplayName), METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::NewProp_DisplayName_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSetDisplayNamePresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSetDisplayNamePresence_Parms), &Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "SetDisplayNamePresence", nullptr, nullptr, sizeof(ELEOSUtility_eventSetDisplayNamePresence_Parms), Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics
	{
		struct ELEOSUtility_eventSetEnableOnlineVersionCheck_Parms
		{
			const UObject* WorldContextObject;
			bool Enable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetEnableOnlineVersionCheck_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSetEnableOnlineVersionCheck_Parms*)Obj)->Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSetEnableOnlineVersionCheck_Parms), &Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "SetEnableOnlineVersionCheck", nullptr, nullptr, sizeof(ELEOSUtility_eventSetEnableOnlineVersionCheck_Parms), Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics
	{
		struct ELEOSUtility_eventSetGameStatusPresence_Parms
		{
			UEOSUser* User;
			EELEOSGameStatus Status;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetGameStatusPresence_Parms, User), Z_Construct_UClass_UEOSUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetGameStatusPresence_Parms, Status), Z_Construct_UEnum_ABP_200508_EELEOSGameStatus, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSetGameStatusPresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSetGameStatusPresence_Parms), &Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "SetGameStatusPresence", nullptr, nullptr, sizeof(ELEOSUtility_eventSetGameStatusPresence_Parms), Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics
	{
		struct ELEOSUtility_eventSetMyGameStatusPresence_Parms
		{
			const UObject* WorldContextObject;
			EELEOSGameStatus Status;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetMyGameStatusPresence_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetMyGameStatusPresence_Parms, Status), Z_Construct_UEnum_ABP_200508_EELEOSGameStatus, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSetMyGameStatusPresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSetMyGameStatusPresence_Parms), &Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "SetMyGameStatusPresence", nullptr, nullptr, sizeof(ELEOSUtility_eventSetMyGameStatusPresence_Parms), Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics
	{
		struct ELEOSUtility_eventSetMyPresence_Parms
		{
			const UObject* WorldContextObject;
			FString PresenceText;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenceText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PresenceText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetMyPresence_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::NewProp_PresenceText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::NewProp_PresenceText = { "PresenceText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetMyPresence_Parms, PresenceText), METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::NewProp_PresenceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::NewProp_PresenceText_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSetMyPresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSetMyPresence_Parms), &Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::NewProp_PresenceText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "SetMyPresence", nullptr, nullptr, sizeof(ELEOSUtility_eventSetMyPresence_Parms), Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_SetMyPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_SetMyPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics
	{
		struct ELEOSUtility_eventSetMyPresencePlayerIcon_Parms
		{
			const UObject* WorldContextObject;
			int32 PlayerIcon;
			int32 BGIcon;
			FUserProfileColorParam ColorParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIcon;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BGIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetMyPresencePlayerIcon_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_PlayerIcon = { "PlayerIcon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetMyPresencePlayerIcon_Parms, PlayerIcon), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_BGIcon = { "BGIcon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetMyPresencePlayerIcon_Parms, BGIcon), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_ColorParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_ColorParam = { "ColorParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetMyPresencePlayerIcon_Parms, ColorParam), Z_Construct_UScriptStruct_FUserProfileColorParam, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_ColorParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_ColorParam_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSetMyPresencePlayerIcon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSetMyPresencePlayerIcon_Parms), &Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_PlayerIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_BGIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_ColorParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "SetMyPresencePlayerIcon", nullptr, nullptr, sizeof(ELEOSUtility_eventSetMyPresencePlayerIcon_Parms), Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_SetOnlineVersionPresence_Statics
	{
		struct ELEOSUtility_eventSetOnlineVersionPresence_Parms
		{
			UEOSUser* User;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SetOnlineVersionPresence_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetOnlineVersionPresence_Parms, User), Z_Construct_UClass_UEOSUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_SetOnlineVersionPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSetOnlineVersionPresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SetOnlineVersionPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSetOnlineVersionPresence_Parms), &Z_Construct_UFunction_UELEOSUtility_SetOnlineVersionPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_SetOnlineVersionPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetOnlineVersionPresence_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetOnlineVersionPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetOnlineVersionPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_SetOnlineVersionPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "SetOnlineVersionPresence", nullptr, nullptr, sizeof(ELEOSUtility_eventSetOnlineVersionPresence_Parms), Z_Construct_UFunction_UELEOSUtility_SetOnlineVersionPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetOnlineVersionPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetOnlineVersionPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetOnlineVersionPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_SetOnlineVersionPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_SetOnlineVersionPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics
	{
		struct ELEOSUtility_eventSetPartyAttributeJoinable_Parms
		{
			const UObject* WorldContextObject;
			bool Joinable;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_Joinable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Joinable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetPartyAttributeJoinable_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics::NewProp_Joinable_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSetPartyAttributeJoinable_Parms*)Obj)->Joinable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics::NewProp_Joinable = { "Joinable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSetPartyAttributeJoinable_Parms), &Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics::NewProp_Joinable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics::NewProp_Joinable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "SetPartyAttributeJoinable", nullptr, nullptr, sizeof(ELEOSUtility_eventSetPartyAttributeJoinable_Parms), Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_SetPatchUpdateAvailable_Statics
	{
		struct ELEOSUtility_eventSetPatchUpdateAvailable_Parms
		{
			bool bPatchUpdateAvailable;
		};
		static void NewProp_bPatchUpdateAvailable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPatchUpdateAvailable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELEOSUtility_SetPatchUpdateAvailable_Statics::NewProp_bPatchUpdateAvailable_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSetPatchUpdateAvailable_Parms*)Obj)->bPatchUpdateAvailable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SetPatchUpdateAvailable_Statics::NewProp_bPatchUpdateAvailable = { "bPatchUpdateAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSetPatchUpdateAvailable_Parms), &Z_Construct_UFunction_UELEOSUtility_SetPatchUpdateAvailable_Statics::NewProp_bPatchUpdateAvailable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_SetPatchUpdateAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetPatchUpdateAvailable_Statics::NewProp_bPatchUpdateAvailable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetPatchUpdateAvailable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_SetPatchUpdateAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "SetPatchUpdateAvailable", nullptr, nullptr, sizeof(ELEOSUtility_eventSetPatchUpdateAvailable_Parms), Z_Construct_UFunction_UELEOSUtility_SetPatchUpdateAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetPatchUpdateAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetPatchUpdateAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetPatchUpdateAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_SetPatchUpdateAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_SetPatchUpdateAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_SetPlatformPresence_Statics
	{
		struct ELEOSUtility_eventSetPlatformPresence_Parms
		{
			UEOSUser* User;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SetPlatformPresence_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetPlatformPresence_Parms, User), Z_Construct_UClass_UEOSUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_SetPlatformPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSetPlatformPresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SetPlatformPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSetPlatformPresence_Parms), &Z_Construct_UFunction_UELEOSUtility_SetPlatformPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_SetPlatformPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetPlatformPresence_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetPlatformPresence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetPlatformPresence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_SetPlatformPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "SetPlatformPresence", nullptr, nullptr, sizeof(ELEOSUtility_eventSetPlatformPresence_Parms), Z_Construct_UFunction_UELEOSUtility_SetPlatformPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetPlatformPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetPlatformPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetPlatformPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_SetPlatformPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_SetPlatformPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics
	{
		struct ELEOSUtility_eventSetPresencePlayerIcons_Parms
		{
			UEOSUser* User;
			TArray<int32> Icons;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_User;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Icons_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Icons;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetPresencePlayerIcons_Parms, User), Z_Construct_UClass_UEOSUser_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::NewProp_Icons_Inner = { "Icons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::NewProp_Icons = { "Icons", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSetPresencePlayerIcons_Parms, Icons), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSetPresencePlayerIcons_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSetPresencePlayerIcons_Parms), &Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::NewProp_User,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::NewProp_Icons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::NewProp_Icons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "SetPresencePlayerIcons", nullptr, nullptr, sizeof(ELEOSUtility_eventSetPresencePlayerIcons_Parms), Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics
	{
		struct ELEOSUtility_eventShouldUseExternalDisplayName_Parms
		{
			const UObject* WorldContextObject;
			EPlatformType Platform;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Platform_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Platform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventShouldUseExternalDisplayName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventShouldUseExternalDisplayName_Parms, Platform), Z_Construct_UEnum_ELITE_Core_EPlatformType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventShouldUseExternalDisplayName_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventShouldUseExternalDisplayName_Parms), &Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::NewProp_Platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "ShouldUseExternalDisplayName", nullptr, nullptr, sizeof(ELEOSUtility_eventShouldUseExternalDisplayName_Parms), Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics
	{
		struct ELEOSUtility_eventSortIDListByResultScore_Parms
		{
			const UObject* WorldContextObject;
			TArray<FString> LeaderboardNames;
			TArray<FString> IDList;
			TArray<float> ScoreList;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LeaderboardNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IDList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IDList;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScoreList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ScoreList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSortIDListByResultScore_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_LeaderboardNames_Inner = { "LeaderboardNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_LeaderboardNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_LeaderboardNames = { "LeaderboardNames", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSortIDListByResultScore_Parms, LeaderboardNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_LeaderboardNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_LeaderboardNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_IDList_Inner = { "IDList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_IDList = { "IDList", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSortIDListByResultScore_Parms, IDList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_ScoreList_Inner = { "ScoreList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_ScoreList = { "ScoreList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventSortIDListByResultScore_Parms, ScoreList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELEOSUtility_eventSortIDListByResultScore_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELEOSUtility_eventSortIDListByResultScore_Parms), &Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_LeaderboardNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_LeaderboardNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_IDList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_IDList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_ScoreList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_ScoreList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "SortIDListByResultScore", nullptr, nullptr, sizeof(ELEOSUtility_eventSortIDListByResultScore_Parms), Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_TimeStampToDateTime_Statics
	{
		struct ELEOSUtility_eventTimeStampToDateTime_Parms
		{
			int64 _UnixTimeStamp;
			FDateTime ReturnValue;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp__UnixTimeStamp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UELEOSUtility_TimeStampToDateTime_Statics::NewProp__UnixTimeStamp = { "_UnixTimeStamp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventTimeStampToDateTime_Parms, _UnixTimeStamp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELEOSUtility_TimeStampToDateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventTimeStampToDateTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_TimeStampToDateTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_TimeStampToDateTime_Statics::NewProp__UnixTimeStamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_TimeStampToDateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_TimeStampToDateTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_TimeStampToDateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "TimeStampToDateTime", nullptr, nullptr, sizeof(ELEOSUtility_eventTimeStampToDateTime_Parms), Z_Construct_UFunction_UELEOSUtility_TimeStampToDateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_TimeStampToDateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_TimeStampToDateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_TimeStampToDateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_TimeStampToDateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_TimeStampToDateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSFriend_Statics
	{
		struct ELEOSUtility_eventToggleDebugELEOSFriend_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSFriend_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSFriend_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventToggleDebugELEOSFriend_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSFriend_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSFriend_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSFriend_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "ToggleDebugELEOSFriend", nullptr, nullptr, sizeof(ELEOSUtility_eventToggleDebugELEOSFriend_Parms), Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSGameSession_Statics
	{
		struct ELEOSUtility_eventToggleDebugELEOSGameSession_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSGameSession_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSGameSession_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventToggleDebugELEOSGameSession_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSGameSession_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSGameSession_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSGameSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSGameSession_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSGameSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSGameSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "ToggleDebugELEOSGameSession", nullptr, nullptr, sizeof(ELEOSUtility_eventToggleDebugELEOSGameSession_Parms), Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSGameSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSGameSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSGameSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSGameSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSGameSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSGameSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSLobby_Statics
	{
		struct ELEOSUtility_eventToggleDebugELEOSLobby_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSLobby_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSLobby_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventToggleDebugELEOSLobby_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSLobby_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSLobby_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSLobby_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSLobby_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "ToggleDebugELEOSLobby", nullptr, nullptr, sizeof(ELEOSUtility_eventToggleDebugELEOSLobby_Parms), Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSUser_Statics
	{
		struct ELEOSUtility_eventToggleDebugELEOSUser_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSUser_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSUser_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELEOSUtility_eventToggleDebugELEOSUser_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSUser_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSUser_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSUser_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSUser_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELEOSUtility, nullptr, "ToggleDebugELEOSUser", nullptr, nullptr, sizeof(ELEOSUtility_eventToggleDebugELEOSUser_Parms), Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELEOSUtility_NoRegister()
	{
		return UELEOSUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELEOSUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELEOSUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELEOSUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELEOSUtility_ApplyWrestlerNameText, "ApplyWrestlerNameText" }, // 1995092854
		{ &Z_Construct_UFunction_UELEOSUtility_CheckUsingMultiplayerFeatures, "CheckUsingMultiplayerFeatures" }, // 2613804951
		{ &Z_Construct_UFunction_UELEOSUtility_ConvertPlatformTypeToExternalAccountType, "ConvertPlatformTypeToExternalAccountType" }, // 4006019087
		{ &Z_Construct_UFunction_UELEOSUtility_CreateLobby, "CreateLobby" }, // 562462108
		{ &Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextPartyChat, "CreateSanitizeTextPartyChat" }, // 2546028278
		{ &Z_Construct_UFunction_UELEOSUtility_CreateSanitizeTextWrestlerData, "CreateSanitizeTextWrestlerData" }, // 2255534754
		{ &Z_Construct_UFunction_UELEOSUtility_Debug_IsSkipPatchUpdate, "Debug_IsSkipPatchUpdate" }, // 2385312179
		{ &Z_Construct_UFunction_UELEOSUtility_Debug_SetSkipPatchCheck, "Debug_SetSkipPatchCheck" }, // 2847248149
		{ &Z_Construct_UFunction_UELEOSUtility_DeleteSanitizePartyChat, "DeleteSanitizePartyChat" }, // 529486321
		{ &Z_Construct_UFunction_UELEOSUtility_DeleteSanitizeWrestlerData, "DeleteSanitizeWrestlerData" }, // 770919823
		{ &Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSFriend, "DispDebugELEOSFriend" }, // 585689746
		{ &Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSGameSession, "DispDebugELEOSGameSession" }, // 1036937750
		{ &Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSLobby, "DispDebugELEOSLobby" }, // 3312729136
		{ &Z_Construct_UFunction_UELEOSUtility_DispDebugELEOSUser, "DispDebugELEOSUser" }, // 3815070491
		{ &Z_Construct_UFunction_UELEOSUtility_EOSOnlineVersionCheck, "EOSOnlineVersionCheck" }, // 297217122
		{ &Z_Construct_UFunction_UELEOSUtility_FindExternalAccountId, "FindExternalAccountId" }, // 2026368291
		{ &Z_Construct_UFunction_UELEOSUtility_FindExternalDisplayName, "FindExternalDisplayName" }, // 3101583972
		{ &Z_Construct_UFunction_UELEOSUtility_FindLobbyInvite, "FindLobbyInvite" }, // 2090483347
		{ &Z_Construct_UFunction_UELEOSUtility_FindLobbyInviteByPUID, "FindLobbyInviteByPUID" }, // 3650914705
		{ &Z_Construct_UFunction_UELEOSUtility_GetAntiCheatClient, "GetAntiCheatClient" }, // 3130381562
		{ &Z_Construct_UFunction_UELEOSUtility_GetCommunityUserDisplayName, "GetCommunityUserDisplayName" }, // 3036087425
		{ &Z_Construct_UFunction_UELEOSUtility_GetConfigPingUpdateInterval, "GetConfigPingUpdateInterval" }, // 4080503813
		{ &Z_Construct_UFunction_UELEOSUtility_GetCurrentWrestlerDataByPUID, "GetCurrentWrestlerDataByPUID" }, // 4104378437
		{ &Z_Construct_UFunction_UELEOSUtility_GetDisplayNamePresence, "GetDisplayNamePresence" }, // 571198217
		{ &Z_Construct_UFunction_UELEOSUtility_GetELEOSFriend, "GetELEOSFriend" }, // 1490689996
		{ &Z_Construct_UFunction_UELEOSUtility_GetELEOSGameChatSession, "GetELEOSGameChatSession" }, // 4232540144
		{ &Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSession, "GetELEOSGameSession" }, // 588789499
		{ &Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionInfo, "GetELEOSGameSessionInfo" }, // 1048630830
		{ &Z_Construct_UFunction_UELEOSUtility_GetELEOSGameSessionMatching, "GetELEOSGameSessionMatching" }, // 4206535803
		{ &Z_Construct_UFunction_UELEOSUtility_GetELEOSLobby, "GetELEOSLobby" }, // 3715519263
		{ &Z_Construct_UFunction_UELEOSUtility_GetELEOSManager, "GetELEOSManager" }, // 3279045206
		{ &Z_Construct_UFunction_UELEOSUtility_GetEOSAuth, "GetEOSAuth" }, // 3707456492
		{ &Z_Construct_UFunction_UELEOSUtility_GetEOSAuthToken, "GetEOSAuthToken" }, // 24903661
		{ &Z_Construct_UFunction_UELEOSUtility_GetEOSFriend, "GetEOSFriend" }, // 1109926628
		{ &Z_Construct_UFunction_UELEOSUtility_GetEOSGameFlowManager, "GetEOSGameFlowManager" }, // 1905339705
		{ &Z_Construct_UFunction_UELEOSUtility_GetEOSLeaderboard, "GetEOSLeaderboard" }, // 198596376
		{ &Z_Construct_UFunction_UELEOSUtility_GetEOSManager, "GetEOSManager" }, // 3097830443
		{ &Z_Construct_UFunction_UELEOSUtility_GetEOSPresence, "GetEOSPresence" }, // 373879486
		{ &Z_Construct_UFunction_UELEOSUtility_GetEOSProductID, "GetEOSProductID" }, // 3365011731
		{ &Z_Construct_UFunction_UELEOSUtility_GetEOSRankCalculator, "GetEOSRankCalculator" }, // 334573199
		{ &Z_Construct_UFunction_UELEOSUtility_GetEOSReports, "GetEOSReports" }, // 896935912
		{ &Z_Construct_UFunction_UELEOSUtility_GetEOSSanctions, "GetEOSSanctions" }, // 3563987969
		{ &Z_Construct_UFunction_UELEOSUtility_GetEOSStats, "GetEOSStats" }, // 4162741120
		{ &Z_Construct_UFunction_UELEOSUtility_GetEOSUser, "GetEOSUser" }, // 404813738
		{ &Z_Construct_UFunction_UELEOSUtility_GetEOSUserContents, "GetEOSUserContents" }, // 1272773053
		{ &Z_Construct_UFunction_UELEOSUtility_GetEOSUserManager, "GetEOSUserManager" }, // 4163435105
		{ &Z_Construct_UFunction_UELEOSUtility_GetEOSVoice, "GetEOSVoice" }, // 299657582
		{ &Z_Construct_UFunction_UELEOSUtility_GetFriendEnabledCrossplayPresence, "GetFriendEnabledCrossplayPresence" }, // 2363943843
		{ &Z_Construct_UFunction_UELEOSUtility_GetFriendGameStatusPresence, "GetFriendGameStatusPresence" }, // 1026587338
		{ &Z_Construct_UFunction_UELEOSUtility_GetFriendOnlineVersionPresence, "GetFriendOnlineVersionPresence" }, // 4185843166
		{ &Z_Construct_UFunction_UELEOSUtility_GetFriendPlatformPresence, "GetFriendPlatformPresence" }, // 1025820268
		{ &Z_Construct_UFunction_UELEOSUtility_GetFriendPlayerIcon, "GetFriendPlayerIcon" }, // 2060853201
		{ &Z_Construct_UFunction_UELEOSUtility_GetFriendProductIDList, "GetFriendProductIDList" }, // 941105438
		{ &Z_Construct_UFunction_UELEOSUtility_GetGameStatusPresence, "GetGameStatusPresence" }, // 2113046509
		{ &Z_Construct_UFunction_UELEOSUtility_GetLastSyncServerUtc, "GetLastSyncServerUtc" }, // 1552232261
		{ &Z_Construct_UFunction_UELEOSUtility_GetLobbyInvites, "GetLobbyInvites" }, // 2331746429
		{ &Z_Construct_UFunction_UELEOSUtility_GetMaxPlayerCount, "GetMaxPlayerCount" }, // 280308454
		{ &Z_Construct_UFunction_UELEOSUtility_GetMyGameStatusPresence, "GetMyGameStatusPresence" }, // 1866832332
		{ &Z_Construct_UFunction_UELEOSUtility_GetNearestServerPing, "GetNearestServerPing" }, // 3885780860
		{ &Z_Construct_UFunction_UELEOSUtility_GetNetworkObserver, "GetNetworkObserver" }, // 3898370618
		{ &Z_Construct_UFunction_UELEOSUtility_GetNowPlayerCount, "GetNowPlayerCount" }, // 3737529501
		{ &Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteName, "GetPlatformAttibuteName" }, // 23207246
		{ &Z_Construct_UFunction_UELEOSUtility_GetPlatformAttibuteValue, "GetPlatformAttibuteValue" }, // 69895553
		{ &Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcon, "GetPresenceFriendPlayerIcon" }, // 3109964282
		{ &Z_Construct_UFunction_UELEOSUtility_GetPresenceFriendPlayerIcons, "GetPresenceFriendPlayerIcons" }, // 1494265858
		{ &Z_Construct_UFunction_UELEOSUtility_GetPresencePlayerIcons, "GetPresencePlayerIcons" }, // 1410957142
		{ &Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerDisplayName, "GetSessionGamePlayerDisplayName" }, // 2285539741
		{ &Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerIcon, "GetSessionGamePlayerIcon" }, // 3578757587
		{ &Z_Construct_UFunction_UELEOSUtility_GetSessionGamePlayerWeaponDecal, "GetSessionGamePlayerWeaponDecal" }, // 4151777396
		{ &Z_Construct_UFunction_UELEOSUtility_GetTimeStamp, "GetTimeStamp" }, // 4190622118
		{ &Z_Construct_UFunction_UELEOSUtility_GetWrestlerNameText, "GetWrestlerNameText" }, // 4157442152
		{ &Z_Construct_UFunction_UELEOSUtility_GetYGS2Manager, "GetYGS2Manager" }, // 1511490654
		{ &Z_Construct_UFunction_UELEOSUtility_GetYGS2PingMs, "GetYGS2PingMs" }, // 1753941832
		{ &Z_Construct_UFunction_UELEOSUtility_IsCompleteCurrentWrestler, "IsCompleteCurrentWrestler" }, // 3227700621
		{ &Z_Construct_UFunction_UELEOSUtility_IsEASLogin, "IsEASLogin" }, // 1656842736
		{ &Z_Construct_UFunction_UELEOSUtility_IsEnabledCrossPlay, "IsEnabledCrossPlay" }, // 3911104741
		{ &Z_Construct_UFunction_UELEOSUtility_IsEnabledFriendChat, "IsEnabledFriendChat" }, // 1300426285
		{ &Z_Construct_UFunction_UELEOSUtility_IsEnableOnlineVersionCheck, "IsEnableOnlineVersionCheck" }, // 2365334382
		{ &Z_Construct_UFunction_UELEOSUtility_IsEOSLogin, "IsEOSLogin" }, // 2886685079
		{ &Z_Construct_UFunction_UELEOSUtility_IsFriendPlayingThisGame, "IsFriendPlayingThisGame" }, // 781464640
		{ &Z_Construct_UFunction_UELEOSUtility_IsFriendUserPlayingThisGameOrNotFriend, "IsFriendUserPlayingThisGameOrNotFriend" }, // 1568735022
		{ &Z_Construct_UFunction_UELEOSUtility_IsInSession, "IsInSession" }, // 3233443263
		{ &Z_Construct_UFunction_UELEOSUtility_IsInviteError, "IsInviteError" }, // 2221014506
		{ &Z_Construct_UFunction_UELEOSUtility_IsLobbyOwner, "IsLobbyOwner" }, // 3198518561
		{ &Z_Construct_UFunction_UELEOSUtility_IsOnlineProcessing_ExhibitionMatch, "IsOnlineProcessing_ExhibitionMatch" }, // 506457931
		{ &Z_Construct_UFunction_UELEOSUtility_IsPartyAttributeJoinable, "IsPartyAttributeJoinable" }, // 544936588
		{ &Z_Construct_UFunction_UELEOSUtility_IsPatchUpdateAvailable, "IsPatchUpdateAvailable" }, // 3758445928
		{ &Z_Construct_UFunction_UELEOSUtility_IsQuickMatchAble, "IsQuickMatchAble" }, // 433866416
		{ &Z_Construct_UFunction_UELEOSUtility_IsSessionSearching, "IsSessionSearching" }, // 3878735786
		{ &Z_Construct_UFunction_UELEOSUtility_IsValidOnlineWrestlerData, "IsValidOnlineWrestlerData" }, // 1799517054
		{ &Z_Construct_UFunction_UELEOSUtility_JoinLobby, "JoinLobby" }, // 3154953486
		{ &Z_Construct_UFunction_UELEOSUtility_JoinLobbyByLobbyInvite, "JoinLobbyByLobbyInvite" }, // 3210223838
		{ &Z_Construct_UFunction_UELEOSUtility_LeaveLobby, "LeaveLobby" }, // 2919442094
		{ &Z_Construct_UFunction_UELEOSUtility_LeaveSession, "LeaveSession" }, // 1228943880
		{ &Z_Construct_UFunction_UELEOSUtility_Login, "Login" }, // 2877066287
		{ &Z_Construct_UFunction_UELEOSUtility_LoginPortal, "LoginPortal" }, // 1174638807
		{ &Z_Construct_UFunction_UELEOSUtility_Logout, "Logout" }, // 1764466918
		{ &Z_Construct_UFunction_UELEOSUtility_MakeUndefinedDateTime, "MakeUndefinedDateTime" }, // 623783258
		{ &Z_Construct_UFunction_UELEOSUtility_OnlineConnectionCheck, "OnlineConnectionCheck" }, // 2537625858
		{ &Z_Construct_UFunction_UELEOSUtility_QueryLobbyInvites, "QueryLobbyInvites" }, // 2676309069
		{ &Z_Construct_UFunction_UELEOSUtility_RejectLobbyInvite, "RejectLobbyInvite" }, // 2459852604
		{ &Z_Construct_UFunction_UELEOSUtility_RequestInviteLobbyMember, "RequestInviteLobbyMember" }, // 4096384200
		{ &Z_Construct_UFunction_UELEOSUtility_RequestSanitizePartyChat, "RequestSanitizePartyChat" }, // 4084272126
		{ &Z_Construct_UFunction_UELEOSUtility_RequestSanitizeWrestlerName, "RequestSanitizeWrestlerName" }, // 1588461888
		{ &Z_Construct_UFunction_UELEOSUtility_RequestYGS2Analytics, "RequestYGS2Analytics" }, // 1571339718
		{ &Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameInfo, "SendLobbyPacketMiniGameInfo" }, // 3277307288
		{ &Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketMiniGameOwnerSelectInfo, "SendLobbyPacketMiniGameOwnerSelectInfo" }, // 1741724480
		{ &Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInput, "SendLobbyPacketPositionSelectMenuInput" }, // 1787191402
		{ &Z_Construct_UFunction_UELEOSUtility_SendLobbyPacketPositionSelectMenuInputResult, "SendLobbyPacketPositionSelectMenuInputResult" }, // 3153727890
		{ &Z_Construct_UFunction_UELEOSUtility_SetDisplayNamePresence, "SetDisplayNamePresence" }, // 564835123
		{ &Z_Construct_UFunction_UELEOSUtility_SetEnableOnlineVersionCheck, "SetEnableOnlineVersionCheck" }, // 861134021
		{ &Z_Construct_UFunction_UELEOSUtility_SetGameStatusPresence, "SetGameStatusPresence" }, // 3480353593
		{ &Z_Construct_UFunction_UELEOSUtility_SetMyGameStatusPresence, "SetMyGameStatusPresence" }, // 2411843869
		{ &Z_Construct_UFunction_UELEOSUtility_SetMyPresence, "SetMyPresence" }, // 1136659983
		{ &Z_Construct_UFunction_UELEOSUtility_SetMyPresencePlayerIcon, "SetMyPresencePlayerIcon" }, // 1154661533
		{ &Z_Construct_UFunction_UELEOSUtility_SetOnlineVersionPresence, "SetOnlineVersionPresence" }, // 3094004207
		{ &Z_Construct_UFunction_UELEOSUtility_SetPartyAttributeJoinable, "SetPartyAttributeJoinable" }, // 2746155060
		{ &Z_Construct_UFunction_UELEOSUtility_SetPatchUpdateAvailable, "SetPatchUpdateAvailable" }, // 1272816223
		{ &Z_Construct_UFunction_UELEOSUtility_SetPlatformPresence, "SetPlatformPresence" }, // 59225911
		{ &Z_Construct_UFunction_UELEOSUtility_SetPresencePlayerIcons, "SetPresencePlayerIcons" }, // 1607449307
		{ &Z_Construct_UFunction_UELEOSUtility_ShouldUseExternalDisplayName, "ShouldUseExternalDisplayName" }, // 1403800875
		{ &Z_Construct_UFunction_UELEOSUtility_SortIDListByResultScore, "SortIDListByResultScore" }, // 4164377898
		{ &Z_Construct_UFunction_UELEOSUtility_TimeStampToDateTime, "TimeStampToDateTime" }, // 948062814
		{ &Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSFriend, "ToggleDebugELEOSFriend" }, // 3657424392
		{ &Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSGameSession, "ToggleDebugELEOSGameSession" }, // 3480789478
		{ &Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSLobby, "ToggleDebugELEOSLobby" }, // 1153776164
		{ &Z_Construct_UFunction_UELEOSUtility_ToggleDebugELEOSUser, "ToggleDebugELEOSUser" }, // 778250235
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELEOSUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELEOSUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELEOSUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELEOSUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELEOSUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELEOSUtility_Statics::ClassParams = {
		&UELEOSUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELEOSUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELEOSUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELEOSUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELEOSUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELEOSUtility, 843361087);
	template<> ABP_200508_API UClass* StaticClass<UELEOSUtility>()
	{
		return UELEOSUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELEOSUtility(Z_Construct_UClass_UELEOSUtility, &UELEOSUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELEOSUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELEOSUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
