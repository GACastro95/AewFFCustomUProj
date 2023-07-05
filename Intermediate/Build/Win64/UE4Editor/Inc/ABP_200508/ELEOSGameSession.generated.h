// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EELEOSSessionEventType : uint8;
enum class EELEOSSessionEventResult : uint8;
enum class EELEOSSessionUserEventType : uint8;
class UEOSUserBase;
class UObject;
class UEOSCommunityUserBase;
class UEOSCommunityInfoBase;
struct FELEOSSessionSearchResultWrapper;
struct FELActivity_InitInfo;
struct FELActivity_MatchResultPlayerInfo;
struct FELActivity_MatchPlayerInfo;
enum class EELActivityUpdateMatchStatus : uint8;
struct FSessionGamePlayerDataBP;
enum class EELOnlineModeType : uint8;
class UEOSSessionP2PAFGameFlowManager;
class UEOSNatP2P;
class UEOSNatP2PSplitQueueTransfer;
class UEOSSession;
class UEOSSessionInfo;
 struct FSessionGamePlayerDataBP;
 
struct FUserProfileColorParam;
enum class EPlatformType : uint8;
enum class ESessionPlayerStateNameType : uint8;
enum class ESessionPlayerStateType : uint8;
class UEOSSessionP2P;
class UEOSSessionSearchResults;
enum class EEOSNatP2PCachedTransferEvent : uint8;
class UEOSNatP2PCachedTransfer;
enum class EEOSNatP2PEvent : uint8;
class UEOSSessionP2PMemberInfoPacket;
class UEOSNatP2PBinary;
struct FWrestlerNameText;
enum class EEOSCommunityEvent : uint8;
class UEOSCommunityBase;
class UEOSSessionP2PSynchronizedPacketBase;
enum class EEOSSessionP2PDataSharingEvent : uint8;
enum class EEOSSessionP2PEvent : uint8;
class UEOSSessionUserPacketMap;
class UEOSSearchResultsBase;
struct FEOSSessionSettings;
class UEOSAttribute;
enum class EEOSSessionGameEventType : uint8;
enum class EEOSSessionP2PAFGameFlowStep : uint8;
#ifdef ABP_200508_ELEOSGameSession_generated_h
#error "ELEOSGameSession.generated.h already included, missing '#pragma once' in ELEOSGameSession.h"
#endif
#define ABP_200508_ELEOSGameSession_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_87_DELEGATE \
struct ELEOSGameSession_eventEOSSessionEvent_Parms \
{ \
	EELEOSSessionEventType EventType; \
	EELEOSSessionEventResult EventResult; \
}; \
static inline void FEOSSessionEvent_DelegateWrapper(const FMulticastScriptDelegate& EOSSessionEvent, EELEOSSessionEventType EventType, EELEOSSessionEventResult EventResult) \
{ \
	ELEOSGameSession_eventEOSSessionEvent_Parms Parms; \
	Parms.EventType=EventType; \
	Parms.EventResult=EventResult; \
	EOSSessionEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_86_DELEGATE \
struct ELEOSGameSession_eventEOSSessionUserEvent_Parms \
{ \
	EELEOSSessionUserEventType EventType; \
	EELEOSSessionEventResult EventResult; \
	FString ProductUserID; \
}; \
static inline void FEOSSessionUserEvent_DelegateWrapper(const FMulticastScriptDelegate& EOSSessionUserEvent, EELEOSSessionUserEventType EventType, EELEOSSessionEventResult EventResult, const FString& ProductUserID) \
{ \
	ELEOSGameSession_eventEOSSessionUserEvent_Parms Parms; \
	Parms.EventType=EventType; \
	Parms.EventResult=EventResult; \
	Parms.ProductUserID=ProductUserID; \
	EOSSessionUserEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_85_DELEGATE \
struct ELEOSGameSession_eventOnChangeStartableSessionSearch_Parms \
{ \
	bool Startable; \
}; \
static inline void FOnChangeStartableSessionSearch_DelegateWrapper(const FMulticastScriptDelegate& OnChangeStartableSessionSearch, bool Startable) \
{ \
	ELEOSGameSession_eventOnChangeStartableSessionSearch_Parms Parms; \
	Parms.Startable=Startable ? true : false; \
	OnChangeStartableSessionSearch.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_84_DELEGATE \
struct ELEOSGameSession_eventOnGetNatP2PLatency_Parms \
{ \
	float _Latency; \
}; \
static inline void FOnGetNatP2PLatency_DelegateWrapper(const FMulticastScriptDelegate& OnGetNatP2PLatency, float _Latency) \
{ \
	ELEOSGameSession_eventOnGetNatP2PLatency_Parms Parms; \
	Parms._Latency=_Latency; \
	OnGetNatP2PLatency.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_83_DELEGATE \
struct ELEOSGameSession_eventOnNatP2PCachedTransferConnectedUser_Parms \
{ \
	UEOSUserBase* _CommunityUser; \
}; \
static inline void FOnNatP2PCachedTransferConnectedUser_DelegateWrapper(const FMulticastScriptDelegate& OnNatP2PCachedTransferConnectedUser, UEOSUserBase* _CommunityUser) \
{ \
	ELEOSGameSession_eventOnNatP2PCachedTransferConnectedUser_Parms Parms; \
	Parms._CommunityUser=_CommunityUser; \
	OnNatP2PCachedTransferConnectedUser.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_82_DELEGATE \
struct ELEOSGameSession_eventOnNatP2PCachedTransferDisconnectedUser_Parms \
{ \
	UEOSUserBase* _CommunityUser; \
}; \
static inline void FOnNatP2PCachedTransferDisconnectedUser_DelegateWrapper(const FMulticastScriptDelegate& OnNatP2PCachedTransferDisconnectedUser, UEOSUserBase* _CommunityUser) \
{ \
	ELEOSGameSession_eventOnNatP2PCachedTransferDisconnectedUser_Parms Parms; \
	Parms._CommunityUser=_CommunityUser; \
	OnNatP2PCachedTransferDisconnectedUser.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_81_DELEGATE \
static inline void FOnNatP2PTimeout_DelegateWrapper(const FMulticastScriptDelegate& OnNatP2PTimeout) \
{ \
	OnNatP2PTimeout.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_80_DELEGATE \
struct ELEOSGameSession_eventOnReceivedNotify_Parms \
{ \
	UEOSUserBase* _UserBase; \
	UObject* _Object; \
}; \
static inline void FOnReceivedNotify_DelegateWrapper(const FMulticastScriptDelegate& OnReceivedNotify, UEOSUserBase* _UserBase, UObject* _Object) \
{ \
	ELEOSGameSession_eventOnReceivedNotify_Parms Parms; \
	Parms._UserBase=_UserBase; \
	Parms._Object=_Object; \
	OnReceivedNotify.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_79_DELEGATE \
struct ELEOSGameSession_eventOnReceivedPartyData_Parms \
{ \
	UEOSUserBase* _UserBase; \
	UObject* _Object; \
}; \
static inline void FOnReceivedPartyData_DelegateWrapper(const FMulticastScriptDelegate& OnReceivedPartyData, UEOSUserBase* _UserBase, UObject* _Object) \
{ \
	ELEOSGameSession_eventOnReceivedPartyData_Parms Parms; \
	Parms._UserBase=_UserBase; \
	Parms._Object=_Object; \
	OnReceivedPartyData.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_78_DELEGATE \
static inline void FOnReceivedPositionData_DelegateWrapper(const FMulticastScriptDelegate& OnReceivedPositionData) \
{ \
	OnReceivedPositionData.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_77_DELEGATE \
static inline void FOnSessionCreate_DelegateWrapper(const FMulticastScriptDelegate& OnSessionCreate) \
{ \
	OnSessionCreate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_76_DELEGATE \
static inline void FOnSessionDestroy_DelegateWrapper(const FMulticastScriptDelegate& OnSessionDestroy) \
{ \
	OnSessionDestroy.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_75_DELEGATE \
struct ELEOSGameSession_eventOnSessionDisconnectedPlayer_Parms \
{ \
	FString _PUID; \
}; \
static inline void FOnSessionDisconnectedPlayer_DelegateWrapper(const FMulticastScriptDelegate& OnSessionDisconnectedPlayer, const FString& _PUID) \
{ \
	ELEOSGameSession_eventOnSessionDisconnectedPlayer_Parms Parms; \
	Parms._PUID=_PUID; \
	OnSessionDisconnectedPlayer.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_74_DELEGATE \
static inline void FOnSessionGameEnd_DelegateWrapper(const FMulticastScriptDelegate& OnSessionGameEnd) \
{ \
	OnSessionGameEnd.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_73_DELEGATE \
static inline void FOnSessionGameStart_DelegateWrapper(const FMulticastScriptDelegate& OnSessionGameStart) \
{ \
	OnSessionGameStart.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_72_DELEGATE \
struct ELEOSGameSession_eventOnSessionJoin_Parms \
{ \
	UEOSCommunityUserBase* _User; \
}; \
static inline void FOnSessionJoin_DelegateWrapper(const FMulticastScriptDelegate& OnSessionJoin, UEOSCommunityUserBase* _User) \
{ \
	ELEOSGameSession_eventOnSessionJoin_Parms Parms; \
	Parms._User=_User; \
	OnSessionJoin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_71_DELEGATE \
struct ELEOSGameSession_eventOnSessionLeave_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _User; \
}; \
static inline void FOnSessionLeave_DelegateWrapper(const FMulticastScriptDelegate& OnSessionLeave, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _User) \
{ \
	ELEOSGameSession_eventOnSessionLeave_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._User=_User; \
	OnSessionLeave.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_70_DELEGATE \
static inline void FOnSessionMemberUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnSessionMemberUpdate) \
{ \
	OnSessionMemberUpdate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_69_DELEGATE \
static inline void FOnSessionP2PDestroyDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSessionP2PDestroyDelegate) \
{ \
	OnSessionP2PDestroyDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_68_DELEGATE \
static inline void FOnSessionSearchCancel_DelegateWrapper(const FMulticastScriptDelegate& OnSessionSearchCancel) \
{ \
	OnSessionSearchCancel.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_67_DELEGATE \
struct ELEOSGameSession_eventOnSessionSearchEnd_Parms \
{ \
	FELEOSSessionSearchResultWrapper _Results; \
}; \
static inline void FOnSessionSearchEnd_DelegateWrapper(const FMulticastScriptDelegate& OnSessionSearchEnd, FELEOSSessionSearchResultWrapper _Results) \
{ \
	ELEOSGameSession_eventOnSessionSearchEnd_Parms Parms; \
	Parms._Results=_Results; \
	OnSessionSearchEnd.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_66_DELEGATE \
struct ELEOSGameSession_eventOnSessionSearchResult_Parms \
{ \
	FELEOSSessionSearchResultWrapper _Results; \
}; \
static inline void FOnSessionSearchResult_DelegateWrapper(const FMulticastScriptDelegate& OnSessionSearchResult, FELEOSSessionSearchResultWrapper _Results) \
{ \
	ELEOSGameSession_eventOnSessionSearchResult_Parms Parms; \
	Parms._Results=_Results; \
	OnSessionSearchResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_65_DELEGATE \
static inline void FOnSessionSearchStart_DelegateWrapper(const FMulticastScriptDelegate& OnSessionSearchStart) \
{ \
	OnSessionSearchStart.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_64_DELEGATE \
struct ELEOSGameSession_eventOnSessionUpdate_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
}; \
static inline void FOnSessionUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnSessionUpdate, UEOSCommunityInfoBase* _CommunityInfo) \
{ \
	ELEOSGameSession_eventOnSessionUpdate_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	OnSessionUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_63_DELEGATE \
static inline void FOnUpdateNatP2PTransfer_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateNatP2PTransfer) \
{ \
	OnUpdateNatP2PTransfer.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execActivity_CreateMatch); \
	DECLARE_FUNCTION(execActivity_DestroyMatch); \
	DECLARE_FUNCTION(execActivity_JoinMatch); \
	DECLARE_FUNCTION(execActivity_LeaveMatch); \
	DECLARE_FUNCTION(execActivity_RestartMatch); \
	DECLARE_FUNCTION(execActivity_UpdateMatchStatus); \
	DECLARE_FUNCTION(execAddDisconnectedPlayerUserID); \
	DECLARE_FUNCTION(execClearPlayerPosition); \
	DECLARE_FUNCTION(execContainsDisconnectedPlayerUserID); \
	DECLARE_FUNCTION(execFindPlayerData); \
	DECLARE_FUNCTION(execFindPlayerDataBP); \
	DECLARE_FUNCTION(execGetAllMatchRuleData); \
	DECLARE_FUNCTION(execGetCharacterIndex); \
	DECLARE_FUNCTION(execGetCharacterIndexByPlayerIndex); \
	DECLARE_FUNCTION(execGetCurrentArenaData); \
	DECLARE_FUNCTION(execGetCurrentMatchRuleData); \
	DECLARE_FUNCTION(execGetCurrentOwningManagementIndex); \
	DECLARE_FUNCTION(execGetCurrentOwningPlayerIndex); \
	DECLARE_FUNCTION(execGetCurrentPlayerIndex); \
	DECLARE_FUNCTION(execGetCurrentPlayerNum); \
	DECLARE_FUNCTION(execGetCurrentWrestlerData); \
	DECLARE_FUNCTION(execGetDisconnectedPlayerUserIDList); \
	DECLARE_FUNCTION(execGetELOnlineModeType); \
	DECLARE_FUNCTION(execGetEnableBuildVersionCheck); \
	DECLARE_FUNCTION(execGetEOSCommunityInfo); \
	DECLARE_FUNCTION(execGetEOSGameFlowManager); \
	DECLARE_FUNCTION(execGetEOSNatP2P); \
	DECLARE_FUNCTION(execGetEOSNatP2PTransfer); \
	DECLARE_FUNCTION(execGetEOSNatP2PTransferRPC); \
	DECLARE_FUNCTION(execGetEOSSession); \
	DECLARE_FUNCTION(execGetEOSSessionInfo); \
	DECLARE_FUNCTION(execGetEOSSessionName); \
	DECLARE_FUNCTION(execGetEOSSessionPlayerDataMap); \
	DECLARE_FUNCTION(execGetEOSSessionPlayerMap); \
	DECLARE_FUNCTION(execGetEOSSortedPlayerUserIDList); \
	DECLARE_FUNCTION(execGetInitialPlayerNum); \
	DECLARE_FUNCTION(execGetInitialPlayerUserIDList); \
	DECLARE_FUNCTION(execGetMaxPacketSize); \
	DECLARE_FUNCTION(execGetMaxSessionP2PLatency); \
	DECLARE_FUNCTION(execGetNeedsUpdatePlayerList); \
	DECLARE_FUNCTION(execGetNPCCharacterSelectorPlayerIndex); \
	DECLARE_FUNCTION(execGetOnlineModePlayerPositionArray); \
	DECLARE_FUNCTION(execGetOnlineModeType); \
	DECLARE_FUNCTION(execGetOwningCharacterIndex); \
	DECLARE_FUNCTION(execGetOwningPlayerIndex); \
	DECLARE_FUNCTION(execGetP2PTimeoutLatency); \
	DECLARE_FUNCTION(execGetP2PTimeoutRetryCount); \
	DECLARE_FUNCTION(execGetPlayerAllWrestlerDataArray); \
	DECLARE_FUNCTION(execGetPlayerData); \
	DECLARE_FUNCTION(execGetPlayerDataArray); \
	DECLARE_FUNCTION(execGetPlayerDataArraySortedByName); \
	DECLARE_FUNCTION(execGetPlayerIcon); \
	DECLARE_FUNCTION(execGetPlayerIcons); \
	DECLARE_FUNCTION(execGetPlayerIndex); \
	DECLARE_FUNCTION(execGetPlayerIndexToPlayerPosition); \
	DECLARE_FUNCTION(execGetPlayerMatchRuleData); \
	DECLARE_FUNCTION(execGetPlayerName); \
	DECLARE_FUNCTION(execGetPlayerPlatform); \
	DECLARE_FUNCTION(execGetPlayerPositionArray); \
	DECLARE_FUNCTION(execGetPlayerPositionRankedArray); \
	DECLARE_FUNCTION(execGetPlayerPUIDByPlayerIndex); \
	DECLARE_FUNCTION(execGetPlayerRandomNumber); \
	DECLARE_FUNCTION(execGetPlayerRank); \
	DECLARE_FUNCTION(execGetPlayerStateByIndex); \
	DECLARE_FUNCTION(execGetPlayerValidWrestlerNum); \
	DECLARE_FUNCTION(execGetPlayerWinLoseCounts); \
	DECLARE_FUNCTION(execGetPlayerWrestlerData); \
	DECLARE_FUNCTION(execGetPlayerWrestlerDataArray); \
	DECLARE_FUNCTION(execGetPlayerWrestlerDataAtIndex); \
	DECLARE_FUNCTION(execGetPlayerWrestlerList); \
	DECLARE_FUNCTION(execGetPlayerWrestlerNum); \
	DECLARE_FUNCTION(execGetSelectNPCCharacter); \
	DECLARE_FUNCTION(execGetSessionP2P); \
	DECLARE_FUNCTION(execGetSessionP2PSocketID); \
	DECLARE_FUNCTION(execGetSessionSearchResults); \
	DECLARE_FUNCTION(execGetSpectatorNum); \
	DECLARE_FUNCTION(execGetSpectatorUserID); \
	DECLARE_FUNCTION(execGetUserIDByCharacterIndex); \
	DECLARE_FUNCTION(execGetUserIDByIndex); \
	DECLARE_FUNCTION(execGetVoiceChatMembers); \
	DECLARE_FUNCTION(execGetWeaponDecal); \
	DECLARE_FUNCTION(execHasTimeoutSessionP2P); \
	DECLARE_FUNCTION(execIsAllPlayerStateMatched); \
	DECLARE_FUNCTION(execIsAllPlayerStateMatchedInList); \
	DECLARE_FUNCTION(execIsAnyPlayerStateMatched); \
	DECLARE_FUNCTION(execIsCreatedOrJoinedSession); \
	DECLARE_FUNCTION(execIsInSession); \
	DECLARE_FUNCTION(execIsPrivateMatch); \
	DECLARE_FUNCTION(execIsSessionOwner); \
	DECLARE_FUNCTION(execIsSessionSearching); \
	DECLARE_FUNCTION(execIsSpectatorCharacterIndex); \
	DECLARE_FUNCTION(execIsStartMatch); \
	DECLARE_FUNCTION(execIsUsingMultiplayerFeature); \
	DECLARE_FUNCTION(execIsValidPlayerIndex); \
	DECLARE_FUNCTION(execMarkRequestStartGame); \
	DECLARE_FUNCTION(execNeedToSelectNPCCharacter); \
	DECLARE_FUNCTION(execOnNatP2PCachedTransferEvent); \
	DECLARE_FUNCTION(execOnNatP2PEvent); \
	DECLARE_FUNCTION(execOnPlayerMemberUpdated); \
	DECLARE_FUNCTION(execOnReceiveSessionObject); \
	DECLARE_FUNCTION(execOnSanitizeTextWrestlerData); \
	DECLARE_FUNCTION(execOnSanitizeTextWrestlerDataNPC); \
	DECLARE_FUNCTION(execOnSessionCommunityEvent); \
	DECLARE_FUNCTION(execOnSessionP2PCreated); \
	DECLARE_FUNCTION(execOnSessionP2PDataReceived); \
	DECLARE_FUNCTION(execOnSessionP2PDataShared); \
	DECLARE_FUNCTION(execOnSessionP2PDestroy); \
	DECLARE_FUNCTION(execOnSessionP2PEvent); \
	DECLARE_FUNCTION(execOnSessionSearchResultEvent); \
	DECLARE_FUNCTION(execQuickMatch); \
	DECLARE_FUNCTION(execQuickMatchCancel); \
	DECLARE_FUNCTION(execQuickMatchCreate); \
	DECLARE_FUNCTION(execQuickMatchJoin); \
	DECLARE_FUNCTION(execQuitMatch); \
	DECLARE_FUNCTION(execRequestCreateSession); \
	DECLARE_FUNCTION(execRequestDestroySession); \
	DECLARE_FUNCTION(execRequestEndGame); \
	DECLARE_FUNCTION(execRequestJoinSession); \
	DECLARE_FUNCTION(execRequestLeaveSession); \
	DECLARE_FUNCTION(execRequestStartGame); \
	DECLARE_FUNCTION(execResendPlayerData); \
	DECLARE_FUNCTION(execSearchSession); \
	DECLARE_FUNCTION(execSearchSessionInitParam); \
	DECLARE_FUNCTION(execSearchSessionInternal); \
	DECLARE_FUNCTION(execSendP2PLatencyPacket); \
	DECLARE_FUNCTION(execSendPlayerArenaData); \
	DECLARE_FUNCTION(execSendPlayerData); \
	DECLARE_FUNCTION(execSendPlayerMatchRuleData); \
	DECLARE_FUNCTION(execSendPlayerStateData); \
	DECLARE_FUNCTION(execSendPlayerWrestlerData); \
	DECLARE_FUNCTION(execSendPositionData); \
	DECLARE_FUNCTION(execSendSessionGameEvent); \
	DECLARE_FUNCTION(execSendSessionGameFlowStep); \
	DECLARE_FUNCTION(execSetArenaData); \
	DECLARE_FUNCTION(execSetCurrentWrestlerData); \
	DECLARE_FUNCTION(execSetELOnlineModeType); \
	DECLARE_FUNCTION(execSetEnableBuildVersionCheck); \
	DECLARE_FUNCTION(execSetGameVoiceChatEnabled); \
	DECLARE_FUNCTION(execSetMatchRuleData); \
	DECLARE_FUNCTION(execSetMaxPacketSize); \
	DECLARE_FUNCTION(execSetNeedsUpdatePlayerList); \
	DECLARE_FUNCTION(execSetNPCPlayerData); \
	DECLARE_FUNCTION(execSetOnlineModeType); \
	DECLARE_FUNCTION(execSetP2PTimeoutCheckInterval); \
	DECLARE_FUNCTION(execSetP2PTimeoutLatency); \
	DECLARE_FUNCTION(execSetP2PTimeoutRetryCount); \
	DECLARE_FUNCTION(execSetPlayerArenaData); \
	DECLARE_FUNCTION(execSetPlayerData); \
	DECLARE_FUNCTION(execSetPlayerIconsToPlayerData); \
	DECLARE_FUNCTION(execSetPlayerIconToPlayerData); \
	DECLARE_FUNCTION(execSetPlayerMatchRuleData); \
	DECLARE_FUNCTION(execSetPlayerPosition); \
	DECLARE_FUNCTION(execSetPlayerPositionRanked); \
	DECLARE_FUNCTION(execSetPlayerRankToPlayerData); \
	DECLARE_FUNCTION(execSetPlayerWinLoseCountToPlayerData); \
	DECLARE_FUNCTION(execSetPlayerWrestlerData); \
	DECLARE_FUNCTION(execSetRequiredWrestlerNum); \
	DECLARE_FUNCTION(execSetSelectNPCCharacter); \
	DECLARE_FUNCTION(execSetTeamMembersToPlayerData); \
	DECLARE_FUNCTION(execSetUsingMultiplayerFeature); \
	DECLARE_FUNCTION(execSetWeaponDecalToPlayerData); \
	DECLARE_FUNCTION(execSetWrestlerData); \
	DECLARE_FUNCTION(execSetWrestlerList); \
	DECLARE_FUNCTION(execShowPacketQueueInfo); \
	DECLARE_FUNCTION(execUpdateMPARecentPlayer); \
	DECLARE_FUNCTION(execUpdatePlayerData); \
	DECLARE_FUNCTION(execUpdatePlayerList);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivity_CreateMatch); \
	DECLARE_FUNCTION(execActivity_DestroyMatch); \
	DECLARE_FUNCTION(execActivity_JoinMatch); \
	DECLARE_FUNCTION(execActivity_LeaveMatch); \
	DECLARE_FUNCTION(execActivity_RestartMatch); \
	DECLARE_FUNCTION(execActivity_UpdateMatchStatus); \
	DECLARE_FUNCTION(execAddDisconnectedPlayerUserID); \
	DECLARE_FUNCTION(execClearPlayerPosition); \
	DECLARE_FUNCTION(execContainsDisconnectedPlayerUserID); \
	DECLARE_FUNCTION(execFindPlayerData); \
	DECLARE_FUNCTION(execFindPlayerDataBP); \
	DECLARE_FUNCTION(execGetAllMatchRuleData); \
	DECLARE_FUNCTION(execGetCharacterIndex); \
	DECLARE_FUNCTION(execGetCharacterIndexByPlayerIndex); \
	DECLARE_FUNCTION(execGetCurrentArenaData); \
	DECLARE_FUNCTION(execGetCurrentMatchRuleData); \
	DECLARE_FUNCTION(execGetCurrentOwningManagementIndex); \
	DECLARE_FUNCTION(execGetCurrentOwningPlayerIndex); \
	DECLARE_FUNCTION(execGetCurrentPlayerIndex); \
	DECLARE_FUNCTION(execGetCurrentPlayerNum); \
	DECLARE_FUNCTION(execGetCurrentWrestlerData); \
	DECLARE_FUNCTION(execGetDisconnectedPlayerUserIDList); \
	DECLARE_FUNCTION(execGetELOnlineModeType); \
	DECLARE_FUNCTION(execGetEnableBuildVersionCheck); \
	DECLARE_FUNCTION(execGetEOSCommunityInfo); \
	DECLARE_FUNCTION(execGetEOSGameFlowManager); \
	DECLARE_FUNCTION(execGetEOSNatP2P); \
	DECLARE_FUNCTION(execGetEOSNatP2PTransfer); \
	DECLARE_FUNCTION(execGetEOSNatP2PTransferRPC); \
	DECLARE_FUNCTION(execGetEOSSession); \
	DECLARE_FUNCTION(execGetEOSSessionInfo); \
	DECLARE_FUNCTION(execGetEOSSessionName); \
	DECLARE_FUNCTION(execGetEOSSessionPlayerDataMap); \
	DECLARE_FUNCTION(execGetEOSSessionPlayerMap); \
	DECLARE_FUNCTION(execGetEOSSortedPlayerUserIDList); \
	DECLARE_FUNCTION(execGetInitialPlayerNum); \
	DECLARE_FUNCTION(execGetInitialPlayerUserIDList); \
	DECLARE_FUNCTION(execGetMaxPacketSize); \
	DECLARE_FUNCTION(execGetMaxSessionP2PLatency); \
	DECLARE_FUNCTION(execGetNeedsUpdatePlayerList); \
	DECLARE_FUNCTION(execGetNPCCharacterSelectorPlayerIndex); \
	DECLARE_FUNCTION(execGetOnlineModePlayerPositionArray); \
	DECLARE_FUNCTION(execGetOnlineModeType); \
	DECLARE_FUNCTION(execGetOwningCharacterIndex); \
	DECLARE_FUNCTION(execGetOwningPlayerIndex); \
	DECLARE_FUNCTION(execGetP2PTimeoutLatency); \
	DECLARE_FUNCTION(execGetP2PTimeoutRetryCount); \
	DECLARE_FUNCTION(execGetPlayerAllWrestlerDataArray); \
	DECLARE_FUNCTION(execGetPlayerData); \
	DECLARE_FUNCTION(execGetPlayerDataArray); \
	DECLARE_FUNCTION(execGetPlayerDataArraySortedByName); \
	DECLARE_FUNCTION(execGetPlayerIcon); \
	DECLARE_FUNCTION(execGetPlayerIcons); \
	DECLARE_FUNCTION(execGetPlayerIndex); \
	DECLARE_FUNCTION(execGetPlayerIndexToPlayerPosition); \
	DECLARE_FUNCTION(execGetPlayerMatchRuleData); \
	DECLARE_FUNCTION(execGetPlayerName); \
	DECLARE_FUNCTION(execGetPlayerPlatform); \
	DECLARE_FUNCTION(execGetPlayerPositionArray); \
	DECLARE_FUNCTION(execGetPlayerPositionRankedArray); \
	DECLARE_FUNCTION(execGetPlayerPUIDByPlayerIndex); \
	DECLARE_FUNCTION(execGetPlayerRandomNumber); \
	DECLARE_FUNCTION(execGetPlayerRank); \
	DECLARE_FUNCTION(execGetPlayerStateByIndex); \
	DECLARE_FUNCTION(execGetPlayerValidWrestlerNum); \
	DECLARE_FUNCTION(execGetPlayerWinLoseCounts); \
	DECLARE_FUNCTION(execGetPlayerWrestlerData); \
	DECLARE_FUNCTION(execGetPlayerWrestlerDataArray); \
	DECLARE_FUNCTION(execGetPlayerWrestlerDataAtIndex); \
	DECLARE_FUNCTION(execGetPlayerWrestlerList); \
	DECLARE_FUNCTION(execGetPlayerWrestlerNum); \
	DECLARE_FUNCTION(execGetSelectNPCCharacter); \
	DECLARE_FUNCTION(execGetSessionP2P); \
	DECLARE_FUNCTION(execGetSessionP2PSocketID); \
	DECLARE_FUNCTION(execGetSessionSearchResults); \
	DECLARE_FUNCTION(execGetSpectatorNum); \
	DECLARE_FUNCTION(execGetSpectatorUserID); \
	DECLARE_FUNCTION(execGetUserIDByCharacterIndex); \
	DECLARE_FUNCTION(execGetUserIDByIndex); \
	DECLARE_FUNCTION(execGetVoiceChatMembers); \
	DECLARE_FUNCTION(execGetWeaponDecal); \
	DECLARE_FUNCTION(execHasTimeoutSessionP2P); \
	DECLARE_FUNCTION(execIsAllPlayerStateMatched); \
	DECLARE_FUNCTION(execIsAllPlayerStateMatchedInList); \
	DECLARE_FUNCTION(execIsAnyPlayerStateMatched); \
	DECLARE_FUNCTION(execIsCreatedOrJoinedSession); \
	DECLARE_FUNCTION(execIsInSession); \
	DECLARE_FUNCTION(execIsPrivateMatch); \
	DECLARE_FUNCTION(execIsSessionOwner); \
	DECLARE_FUNCTION(execIsSessionSearching); \
	DECLARE_FUNCTION(execIsSpectatorCharacterIndex); \
	DECLARE_FUNCTION(execIsStartMatch); \
	DECLARE_FUNCTION(execIsUsingMultiplayerFeature); \
	DECLARE_FUNCTION(execIsValidPlayerIndex); \
	DECLARE_FUNCTION(execMarkRequestStartGame); \
	DECLARE_FUNCTION(execNeedToSelectNPCCharacter); \
	DECLARE_FUNCTION(execOnNatP2PCachedTransferEvent); \
	DECLARE_FUNCTION(execOnNatP2PEvent); \
	DECLARE_FUNCTION(execOnPlayerMemberUpdated); \
	DECLARE_FUNCTION(execOnReceiveSessionObject); \
	DECLARE_FUNCTION(execOnSanitizeTextWrestlerData); \
	DECLARE_FUNCTION(execOnSanitizeTextWrestlerDataNPC); \
	DECLARE_FUNCTION(execOnSessionCommunityEvent); \
	DECLARE_FUNCTION(execOnSessionP2PCreated); \
	DECLARE_FUNCTION(execOnSessionP2PDataReceived); \
	DECLARE_FUNCTION(execOnSessionP2PDataShared); \
	DECLARE_FUNCTION(execOnSessionP2PDestroy); \
	DECLARE_FUNCTION(execOnSessionP2PEvent); \
	DECLARE_FUNCTION(execOnSessionSearchResultEvent); \
	DECLARE_FUNCTION(execQuickMatch); \
	DECLARE_FUNCTION(execQuickMatchCancel); \
	DECLARE_FUNCTION(execQuickMatchCreate); \
	DECLARE_FUNCTION(execQuickMatchJoin); \
	DECLARE_FUNCTION(execQuitMatch); \
	DECLARE_FUNCTION(execRequestCreateSession); \
	DECLARE_FUNCTION(execRequestDestroySession); \
	DECLARE_FUNCTION(execRequestEndGame); \
	DECLARE_FUNCTION(execRequestJoinSession); \
	DECLARE_FUNCTION(execRequestLeaveSession); \
	DECLARE_FUNCTION(execRequestStartGame); \
	DECLARE_FUNCTION(execResendPlayerData); \
	DECLARE_FUNCTION(execSearchSession); \
	DECLARE_FUNCTION(execSearchSessionInitParam); \
	DECLARE_FUNCTION(execSearchSessionInternal); \
	DECLARE_FUNCTION(execSendP2PLatencyPacket); \
	DECLARE_FUNCTION(execSendPlayerArenaData); \
	DECLARE_FUNCTION(execSendPlayerData); \
	DECLARE_FUNCTION(execSendPlayerMatchRuleData); \
	DECLARE_FUNCTION(execSendPlayerStateData); \
	DECLARE_FUNCTION(execSendPlayerWrestlerData); \
	DECLARE_FUNCTION(execSendPositionData); \
	DECLARE_FUNCTION(execSendSessionGameEvent); \
	DECLARE_FUNCTION(execSendSessionGameFlowStep); \
	DECLARE_FUNCTION(execSetArenaData); \
	DECLARE_FUNCTION(execSetCurrentWrestlerData); \
	DECLARE_FUNCTION(execSetELOnlineModeType); \
	DECLARE_FUNCTION(execSetEnableBuildVersionCheck); \
	DECLARE_FUNCTION(execSetGameVoiceChatEnabled); \
	DECLARE_FUNCTION(execSetMatchRuleData); \
	DECLARE_FUNCTION(execSetMaxPacketSize); \
	DECLARE_FUNCTION(execSetNeedsUpdatePlayerList); \
	DECLARE_FUNCTION(execSetNPCPlayerData); \
	DECLARE_FUNCTION(execSetOnlineModeType); \
	DECLARE_FUNCTION(execSetP2PTimeoutCheckInterval); \
	DECLARE_FUNCTION(execSetP2PTimeoutLatency); \
	DECLARE_FUNCTION(execSetP2PTimeoutRetryCount); \
	DECLARE_FUNCTION(execSetPlayerArenaData); \
	DECLARE_FUNCTION(execSetPlayerData); \
	DECLARE_FUNCTION(execSetPlayerIconsToPlayerData); \
	DECLARE_FUNCTION(execSetPlayerIconToPlayerData); \
	DECLARE_FUNCTION(execSetPlayerMatchRuleData); \
	DECLARE_FUNCTION(execSetPlayerPosition); \
	DECLARE_FUNCTION(execSetPlayerPositionRanked); \
	DECLARE_FUNCTION(execSetPlayerRankToPlayerData); \
	DECLARE_FUNCTION(execSetPlayerWinLoseCountToPlayerData); \
	DECLARE_FUNCTION(execSetPlayerWrestlerData); \
	DECLARE_FUNCTION(execSetRequiredWrestlerNum); \
	DECLARE_FUNCTION(execSetSelectNPCCharacter); \
	DECLARE_FUNCTION(execSetTeamMembersToPlayerData); \
	DECLARE_FUNCTION(execSetUsingMultiplayerFeature); \
	DECLARE_FUNCTION(execSetWeaponDecalToPlayerData); \
	DECLARE_FUNCTION(execSetWrestlerData); \
	DECLARE_FUNCTION(execSetWrestlerList); \
	DECLARE_FUNCTION(execShowPacketQueueInfo); \
	DECLARE_FUNCTION(execUpdateMPARecentPlayer); \
	DECLARE_FUNCTION(execUpdatePlayerData); \
	DECLARE_FUNCTION(execUpdatePlayerList);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELEOSGameSession(); \
	friend struct Z_Construct_UClass_UELEOSGameSession_Statics; \
public: \
	DECLARE_CLASS(UELEOSGameSession, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELEOSGameSession)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUELEOSGameSession(); \
	friend struct Z_Construct_UClass_UELEOSGameSession_Statics; \
public: \
	DECLARE_CLASS(UELEOSGameSession, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELEOSGameSession)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELEOSGameSession(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELEOSGameSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELEOSGameSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELEOSGameSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELEOSGameSession(UELEOSGameSession&&); \
	NO_API UELEOSGameSession(const UELEOSGameSession&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELEOSGameSession(UELEOSGameSession&&); \
	NO_API UELEOSGameSession(const UELEOSGameSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELEOSGameSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELEOSGameSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELEOSGameSession)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EOSManager() { return STRUCT_OFFSET(UELEOSGameSession, EOSManager); } \
	FORCEINLINE static uint32 __PPO__EOSUser() { return STRUCT_OFFSET(UELEOSGameSession, EOSUser); } \
	FORCEINLINE static uint32 __PPO__EOSAntiCheatClient() { return STRUCT_OFFSET(UELEOSGameSession, EOSAntiCheatClient); } \
	FORCEINLINE static uint32 __PPO__EOSSession() { return STRUCT_OFFSET(UELEOSGameSession, EOSSession); } \
	FORCEINLINE static uint32 __PPO__EOSSessionInfo() { return STRUCT_OFFSET(UELEOSGameSession, EOSSessionInfo); } \
	FORCEINLINE static uint32 __PPO__EOSSessionSearchResults() { return STRUCT_OFFSET(UELEOSGameSession, EOSSessionSearchResults); } \
	FORCEINLINE static uint32 __PPO__EOSSessionP2P() { return STRUCT_OFFSET(UELEOSGameSession, EOSSessionP2P); } \
	FORCEINLINE static uint32 __PPO__EOSNatP2PSession() { return STRUCT_OFFSET(UELEOSGameSession, EOSNatP2PSession); } \
	FORCEINLINE static uint32 __PPO__EOSNatP2P() { return STRUCT_OFFSET(UELEOSGameSession, EOSNatP2P); } \
	FORCEINLINE static uint32 __PPO__EOSNatP2PTransfer() { return STRUCT_OFFSET(UELEOSGameSession, EOSNatP2PTransfer); } \
	FORCEINLINE static uint32 __PPO__EOSNatP2PTransferRPC() { return STRUCT_OFFSET(UELEOSGameSession, EOSNatP2PTransferRPC); } \
	FORCEINLINE static uint32 __PPO__EOSSessionP2PAFBindPlayers() { return STRUCT_OFFSET(UELEOSGameSession, EOSSessionP2PAFBindPlayers); } \
	FORCEINLINE static uint32 __PPO__EOSSessionP2PAFDataSharing() { return STRUCT_OFFSET(UELEOSGameSession, EOSSessionP2PAFDataSharing); } \
	FORCEINLINE static uint32 __PPO__EOSSessionP2PAFGameFlowManager() { return STRUCT_OFFSET(UELEOSGameSession, EOSSessionP2PAFGameFlowManager); } \
	FORCEINLINE static uint32 __PPO__ELEOSGameChatSession() { return STRUCT_OFFSET(UELEOSGameSession, ELEOSGameChatSession); } \
	FORCEINLINE static uint32 __PPO__SearchSettings() { return STRUCT_OFFSET(UELEOSGameSession, SearchSettings); } \
	FORCEINLINE static uint32 __PPO__IsAutoCreateSession() { return STRUCT_OFFSET(UELEOSGameSession, IsAutoCreateSession); } \
	FORCEINLINE static uint32 __PPO__IsSearching() { return STRUCT_OFFSET(UELEOSGameSession, IsSearching); } \
	FORCEINLINE static uint32 __PPO__AutoCreateSessionSettings() { return STRUCT_OFFSET(UELEOSGameSession, AutoCreateSessionSettings); } \
	FORCEINLINE static uint32 __PPO__SessionSettings() { return STRUCT_OFFSET(UELEOSGameSession, SessionSettings); } \
	FORCEINLINE static uint32 __PPO__SessionAutoStartGame() { return STRUCT_OFFSET(UELEOSGameSession, SessionAutoStartGame); } \
	FORCEINLINE static uint32 __PPO__SessionSearchCancel() { return STRUCT_OFFSET(UELEOSGameSession, SessionSearchCancel); } \
	FORCEINLINE static uint32 __PPO__StartMatch() { return STRUCT_OFFSET(UELEOSGameSession, StartMatch); } \
	FORCEINLINE static uint32 __PPO__Cancelable() { return STRUCT_OFFSET(UELEOSGameSession, Cancelable); } \
	FORCEINLINE static uint32 __PPO__SessionRequestStartGame() { return STRUCT_OFFSET(UELEOSGameSession, SessionRequestStartGame); } \
	FORCEINLINE static uint32 __PPO__SessionPlayerList() { return STRUCT_OFFSET(UELEOSGameSession, SessionPlayerList); } \
	FORCEINLINE static uint32 __PPO__SessionPlayerDataMap() { return STRUCT_OFFSET(UELEOSGameSession, SessionPlayerDataMap); } \
	FORCEINLINE static uint32 __PPO__SessionPlayerStateDataMap() { return STRUCT_OFFSET(UELEOSGameSession, SessionPlayerStateDataMap); } \
	FORCEINLINE static uint32 __PPO__SessionPlayerArenaDataMap() { return STRUCT_OFFSET(UELEOSGameSession, SessionPlayerArenaDataMap); } \
	FORCEINLINE static uint32 __PPO__SessionPlayerWrestlerDataMap() { return STRUCT_OFFSET(UELEOSGameSession, SessionPlayerWrestlerDataMap); } \
	FORCEINLINE static uint32 __PPO__CurrentWrestlerDataArray() { return STRUCT_OFFSET(UELEOSGameSession, CurrentWrestlerDataArray); } \
	FORCEINLINE static uint32 __PPO__SessionPlayerMatchRuleDataMap() { return STRUCT_OFFSET(UELEOSGameSession, SessionPlayerMatchRuleDataMap); } \
	FORCEINLINE static uint32 __PPO__SortedPlayerUserIDList() { return STRUCT_OFFSET(UELEOSGameSession, SortedPlayerUserIDList); } \
	FORCEINLINE static uint32 __PPO__InitialPlayerUserIDList() { return STRUCT_OFFSET(UELEOSGameSession, InitialPlayerUserIDList); } \
	FORCEINLINE static uint32 __PPO__DisconnectedPlayerUserIDList() { return STRUCT_OFFSET(UELEOSGameSession, DisconnectedPlayerUserIDList); } \
	FORCEINLINE static uint32 __PPO__SessionGamePlayerData() { return STRUCT_OFFSET(UELEOSGameSession, SessionGamePlayerData); } \
	FORCEINLINE static uint32 __PPO__EOSSessionName() { return STRUCT_OFFSET(UELEOSGameSession, EOSSessionName); } \
	FORCEINLINE static uint32 __PPO__DirtyPlayerData() { return STRUCT_OFFSET(UELEOSGameSession, DirtyPlayerData); } \
	FORCEINLINE static uint32 __PPO__NeedsUpdatePlayerList() { return STRUCT_OFFSET(UELEOSGameSession, NeedsUpdatePlayerList); } \
	FORCEINLINE static uint32 __PPO__EACSession() { return STRUCT_OFFSET(UELEOSGameSession, EACSession); } \
	FORCEINLINE static uint32 __PPO__EACRegisteredUsers() { return STRUCT_OFFSET(UELEOSGameSession, EACRegisteredUsers); } \
	FORCEINLINE static uint32 __PPO__PlayerPosition() { return STRUCT_OFFSET(UELEOSGameSession, PlayerPosition); } \
	FORCEINLINE static uint32 __PPO__PlayerPositionRanked() { return STRUCT_OFFSET(UELEOSGameSession, PlayerPositionRanked); } \
	FORCEINLINE static uint32 __PPO__ReceivePositionData() { return STRUCT_OFFSET(UELEOSGameSession, ReceivePositionData); } \
	FORCEINLINE static uint32 __PPO__EnableBuildVersionCheck() { return STRUCT_OFFSET(UELEOSGameSession, EnableBuildVersionCheck); } \
	FORCEINLINE static uint32 __PPO__SelectNPCCharacter() { return STRUCT_OFFSET(UELEOSGameSession, SelectNPCCharacter); } \
	FORCEINLINE static uint32 __PPO__PrivateMatchPlayerIndex() { return STRUCT_OFFSET(UELEOSGameSession, PrivateMatchPlayerIndex); } \
	FORCEINLINE static uint32 __PPO__PrivateMatchInitialPlayerIndex() { return STRUCT_OFFSET(UELEOSGameSession, PrivateMatchInitialPlayerIndex); } \
	FORCEINLINE static uint32 __PPO__OnlineModeType() { return STRUCT_OFFSET(UELEOSGameSession, OnlineModeType); } \
	FORCEINLINE static uint32 __PPO__ELOnlineModeType() { return STRUCT_OFFSET(UELEOSGameSession, ELOnlineModeType); } \
	FORCEINLINE static uint32 __PPO__RequiredWrestlerNum() { return STRUCT_OFFSET(UELEOSGameSession, RequiredWrestlerNum); } \
	FORCEINLINE static uint32 __PPO__SendPlayerDataInterval() { return STRUCT_OFFSET(UELEOSGameSession, SendPlayerDataInterval); } \
	FORCEINLINE static uint32 __PPO__SessionRequestStartGameInterval() { return STRUCT_OFFSET(UELEOSGameSession, SessionRequestStartGameInterval); } \
	FORCEINLINE static uint32 __PPO__RequestStartGameSession() { return STRUCT_OFFSET(UELEOSGameSession, RequestStartGameSession); } \
	FORCEINLINE static uint32 __PPO__ResendPlayerDataFlag() { return STRUCT_OFFSET(UELEOSGameSession, ResendPlayerDataFlag); } \
	FORCEINLINE static uint32 __PPO__ResendPlayerStateFlag() { return STRUCT_OFFSET(UELEOSGameSession, ResendPlayerStateFlag); } \
	FORCEINLINE static uint32 __PPO__RequestResendPlayerDataFlag() { return STRUCT_OFFSET(UELEOSGameSession, RequestResendPlayerDataFlag); } \
	FORCEINLINE static uint32 __PPO__RequestResendPlayerStateFlag() { return STRUCT_OFFSET(UELEOSGameSession, RequestResendPlayerStateFlag); } \
	FORCEINLINE static uint32 __PPO__RequestStartGameSessionTimer() { return STRUCT_OFFSET(UELEOSGameSession, RequestStartGameSessionTimer); } \
	FORCEINLINE static uint32 __PPO__ResendPlayerDataTimer() { return STRUCT_OFFSET(UELEOSGameSession, ResendPlayerDataTimer); } \
	FORCEINLINE static uint32 __PPO__ResendPlayerStateTimer() { return STRUCT_OFFSET(UELEOSGameSession, ResendPlayerStateTimer); } \
	FORCEINLINE static uint32 __PPO__RequestResendPlayerDataTimer() { return STRUCT_OFFSET(UELEOSGameSession, RequestResendPlayerDataTimer); } \
	FORCEINLINE static uint32 __PPO__RequestResendPlayerStateTimer() { return STRUCT_OFFSET(UELEOSGameSession, RequestResendPlayerStateTimer); } \
	FORCEINLINE static uint32 __PPO__AllReadyPlayerDataTimer() { return STRUCT_OFFSET(UELEOSGameSession, AllReadyPlayerDataTimer); } \
	FORCEINLINE static uint32 __PPO__RequestUpateLatencyTimer() { return STRUCT_OFFSET(UELEOSGameSession, RequestUpateLatencyTimer); } \
	FORCEINLINE static uint32 __PPO__RequestUpateLatencyInterval() { return STRUCT_OFFSET(UELEOSGameSession, RequestUpateLatencyInterval); } \
	FORCEINLINE static uint32 __PPO__P2PTimeoutLatency() { return STRUCT_OFFSET(UELEOSGameSession, P2PTimeoutLatency); } \
	FORCEINLINE static uint32 __PPO__P2PTimeoutRetryCount() { return STRUCT_OFFSET(UELEOSGameSession, P2PTimeoutRetryCount); } \
	FORCEINLINE static uint32 __PPO__ResendPlayerStateTargetRemoteUser() { return STRUCT_OFFSET(UELEOSGameSession, ResendPlayerStateTargetRemoteUser); } \
	FORCEINLINE static uint32 __PPO__RequestResendPlayerStateTargetRemoteUser() { return STRUCT_OFFSET(UELEOSGameSession, RequestResendPlayerStateTargetRemoteUser); } \
	FORCEINLINE static uint32 __PPO__ResendPlayerDataTargetRemoteUser() { return STRUCT_OFFSET(UELEOSGameSession, ResendPlayerDataTargetRemoteUser); } \
	FORCEINLINE static uint32 __PPO__RequestResendPlayerDataTargetRemoteUser() { return STRUCT_OFFSET(UELEOSGameSession, RequestResendPlayerDataTargetRemoteUser); } \
	FORCEINLINE static uint32 __PPO__SanitizeRequestWrestlerDataNPC() { return STRUCT_OFFSET(UELEOSGameSession, SanitizeRequestWrestlerDataNPC); } \
	FORCEINLINE static uint32 __PPO__SanitizeRequestWrestlerData() { return STRUCT_OFFSET(UELEOSGameSession, SanitizeRequestWrestlerData); } \
	FORCEINLINE static uint32 __PPO__SessionState() { return STRUCT_OFFSET(UELEOSGameSession, SessionState); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_59_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELEOSGameSession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSession_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
