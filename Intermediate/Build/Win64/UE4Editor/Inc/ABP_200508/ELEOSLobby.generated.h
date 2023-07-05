// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
class UEOSSearchResultsBase;
struct FLobbyInvite;
enum class ELobbyInviteError : uint8;
enum class ELobbyCheckStepForHost : uint8;
enum class EEOSLobbyUserMuteFlag : uint8;
enum class EEOSCommunityPermission : uint8;
struct FLobbyCharacterData;
class UObject;
class UEOSLobby;
class UEOSLobbyInfo;
 class UEOSCommunityInfoBase;
struct FLobbyChatLogData;
 struct FLobbyCharacterData;
struct FUserProfileColorParam;
enum class EPlatformType : uint8;
struct FDateTime;
enum class EEOSLobbyUserAudioStatus : uint8;
enum class EEOSCommunityEvent : uint8;
class UEOSCommunityBase;
enum class EELEOSEventType : uint8;
enum class EELEOSEventResult : uint8;
enum class EEOSNatP2PCachedTransferEvent : uint8;
class UEOSNatP2PCachedTransfer;
class UEOSUserBase;
enum class EEOSNatP2PEvent : uint8;
class UEOSNatP2P;
class UEOSNatP2PBinary;
struct FWrestlerNameText;
enum class ELobbyPrivateMatchStatus : uint8;
class UELEOSLobbyMiniGameInfo;
class UELEOSLobbyMiniGameOwnerSelectInfo;
enum class ELobbyPacketNotifyType : uint8;
enum class EELEOSLobbyPacketType : uint8;
enum class ELobbyPacketMenuInputType : uint8;
enum class ELobbyPacketPrivateMatchNotify : uint8;
enum class EELEOSLobbyPacketRequestType : uint8;
class UEOSAttribute;
class UEOSManager;
class UEOSUser;
class UELEOSGameSession;
class UELNetworkObserverBase;
#ifdef ABP_200508_ELEOSLobby_generated_h
#error "ELEOSLobby.generated.h already included, missing '#pragma once' in ELEOSLobby.h"
#endif
#define ABP_200508_ELEOSLobby_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_101_DELEGATE \
struct ELEOSLobby_eventOnBlockVoice_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnBlockVoice_DelegateWrapper(const FMulticastScriptDelegate& OnBlockVoice, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnBlockVoice_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnBlockVoice.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_100_DELEGATE \
struct ELEOSLobby_eventOnBlockVoiceErr_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnBlockVoiceErr_DelegateWrapper(const FMulticastScriptDelegate& OnBlockVoiceErr, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnBlockVoiceErr_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnBlockVoiceErr.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_99_DELEGATE \
struct ELEOSLobby_eventOnGetPlayerSessionUserID_Parms \
{ \
	FString _ProductUserId; \
}; \
static inline void FOnGetPlayerSessionUserID_DelegateWrapper(const FMulticastScriptDelegate& OnGetPlayerSessionUserID, const FString& _ProductUserId) \
{ \
	ELEOSLobby_eventOnGetPlayerSessionUserID_Parms Parms; \
	Parms._ProductUserId=_ProductUserId; \
	OnGetPlayerSessionUserID.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_98_DELEGATE \
struct ELEOSLobby_eventOnLeaderChange_Parms \
{ \
	FString _lobbyID; \
	FString _ProductUserId; \
}; \
static inline void FOnLeaderChange_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderChange, const FString& _lobbyID, const FString& _ProductUserId) \
{ \
	ELEOSLobby_eventOnLeaderChange_Parms Parms; \
	Parms._lobbyID=_lobbyID; \
	Parms._ProductUserId=_ProductUserId; \
	OnLeaderChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_97_DELEGATE \
struct ELEOSLobby_eventOnLobbyChangeOwner_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnLobbyChangeOwner_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyChangeOwner, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnLobbyChangeOwner_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnLobbyChangeOwner.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_96_DELEGATE \
static inline void FOnLobbyCreate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyCreate) \
{ \
	OnLobbyCreate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_95_DELEGATE \
static inline void FOnLobbyDestroy_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyDestroy) \
{ \
	OnLobbyDestroy.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_94_DELEGATE \
struct ELEOSLobby_eventOnLobbyInviteReceive_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnLobbyInviteReceive_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyInviteReceive, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnLobbyInviteReceive_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnLobbyInviteReceive.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_93_DELEGATE \
struct ELEOSLobby_eventOnLobbyInviteReject_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
}; \
static inline void FOnLobbyInviteReject_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyInviteReject, UEOSCommunityInfoBase* _CommunityInfo) \
{ \
	ELEOSLobby_eventOnLobbyInviteReject_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	OnLobbyInviteReject.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_92_DELEGATE \
struct ELEOSLobby_eventOnLobbyJoin_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnLobbyJoin_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyJoin, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnLobbyJoin_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnLobbyJoin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_91_DELEGATE \
struct ELEOSLobby_eventOnLobbyKickedMe_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnLobbyKickedMe_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyKickedMe, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnLobbyKickedMe_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnLobbyKickedMe.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_90_DELEGATE \
struct ELEOSLobby_eventOnLobbyKickedOther_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnLobbyKickedOther_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyKickedOther, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnLobbyKickedOther_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnLobbyKickedOther.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_89_DELEGATE \
struct ELEOSLobby_eventOnLobbyLeave_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnLobbyLeave_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyLeave, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnLobbyLeave_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnLobbyLeave.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_88_DELEGATE \
struct ELEOSLobby_eventOnLobbyMemberDisconnect_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnLobbyMemberDisconnect_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyMemberDisconnect, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnLobbyMemberDisconnect_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnLobbyMemberDisconnect.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_87_DELEGATE \
struct ELEOSLobby_eventOnLobbyMemberJoin_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnLobbyMemberJoin_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyMemberJoin, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnLobbyMemberJoin_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnLobbyMemberJoin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_86_DELEGATE \
struct ELEOSLobby_eventOnLobbyMemberLeft_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnLobbyMemberLeft_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyMemberLeft, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnLobbyMemberLeft_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnLobbyMemberLeft.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_85_DELEGATE \
struct ELEOSLobby_eventOnLobbyMemberUpdate_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnLobbyMemberUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyMemberUpdate, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnLobbyMemberUpdate_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnLobbyMemberUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_84_DELEGATE \
struct ELEOSLobby_eventOnLobbySearch_Parms \
{ \
	UEOSSearchResultsBase* _searchResults; \
}; \
static inline void FOnLobbySearch_DelegateWrapper(const FMulticastScriptDelegate& OnLobbySearch, UEOSSearchResultsBase* _searchResults) \
{ \
	ELEOSLobby_eventOnLobbySearch_Parms Parms; \
	Parms._searchResults=_searchResults; \
	OnLobbySearch.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_83_DELEGATE \
struct ELEOSLobby_eventOnLobbySearchError_Parms \
{ \
	FLobbyInvite LobbyInvite; \
	ELobbyInviteError LobbyInviteError; \
}; \
static inline void FOnLobbySearchError_DelegateWrapper(const FMulticastScriptDelegate& OnLobbySearchError, FLobbyInvite const& LobbyInvite, ELobbyInviteError LobbyInviteError) \
{ \
	ELEOSLobby_eventOnLobbySearchError_Parms Parms; \
	Parms.LobbyInvite=LobbyInvite; \
	Parms.LobbyInviteError=LobbyInviteError; \
	OnLobbySearchError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_82_DELEGATE \
static inline void FOnLobbyWrestlerDataReceive_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyWrestlerDataReceive) \
{ \
	OnLobbyWrestlerDataReceive.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_81_DELEGATE \
struct ELEOSLobby_eventOnMuteVoice_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnMuteVoice_DelegateWrapper(const FMulticastScriptDelegate& OnMuteVoice, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnMuteVoice_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnMuteVoice.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_80_DELEGATE \
struct ELEOSLobby_eventOnMuteVoiceErr_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnMuteVoiceErr_DelegateWrapper(const FMulticastScriptDelegate& OnMuteVoiceErr, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnMuteVoiceErr_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnMuteVoiceErr.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_79_DELEGATE \
struct ELEOSLobby_eventOnPromoteMe_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnPromoteMe_DelegateWrapper(const FMulticastScriptDelegate& OnPromoteMe, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnPromoteMe_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnPromoteMe.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_78_DELEGATE \
struct ELEOSLobby_eventOnPromoteOther_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnPromoteOther_DelegateWrapper(const FMulticastScriptDelegate& OnPromoteOther, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnPromoteOther_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnPromoteOther.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_77_DELEGATE \
static inline void FOnQueryInviteResponse_DelegateWrapper(const FMulticastScriptDelegate& OnQueryInviteResponse) \
{ \
	OnQueryInviteResponse.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_76_DELEGATE \
struct ELEOSLobby_eventOnSetMaxMember_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	bool bSuccess; \
}; \
static inline void FOnSetMaxMember_DelegateWrapper(const FMulticastScriptDelegate& OnSetMaxMember, UEOSCommunityInfoBase* _CommunityInfo, bool bSuccess) \
{ \
	ELEOSLobby_eventOnSetMaxMember_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms.bSuccess=bSuccess ? true : false; \
	OnSetMaxMember.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_75_DELEGATE \
struct ELEOSLobby_eventOnStartSpeaking_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnStartSpeaking_DelegateWrapper(const FMulticastScriptDelegate& OnStartSpeaking, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnStartSpeaking_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnStartSpeaking.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_74_DELEGATE \
struct ELEOSLobby_eventOnStatusUpdatedOnJoinedStep_Parms \
{ \
	ELobbyCheckStepForHost LobbyCheckStepForHost; \
	UEOSCommunityInfoBase* _CommunityInfo; \
}; \
static inline void FOnStatusUpdatedOnJoinedStep_DelegateWrapper(const FMulticastScriptDelegate& OnStatusUpdatedOnJoinedStep, ELobbyCheckStepForHost LobbyCheckStepForHost, UEOSCommunityInfoBase* _CommunityInfo) \
{ \
	ELEOSLobby_eventOnStatusUpdatedOnJoinedStep_Parms Parms; \
	Parms.LobbyCheckStepForHost=LobbyCheckStepForHost; \
	Parms._CommunityInfo=_CommunityInfo; \
	OnStatusUpdatedOnJoinedStep.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_73_DELEGATE \
struct ELEOSLobby_eventOnStopSpeaking_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnStopSpeaking_DelegateWrapper(const FMulticastScriptDelegate& OnStopSpeaking, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnStopSpeaking_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnStopSpeaking.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_72_DELEGATE \
struct ELEOSLobby_eventOnUnblockVoice_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnUnblockVoice_DelegateWrapper(const FMulticastScriptDelegate& OnUnblockVoice, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnUnblockVoice_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnUnblockVoice.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_71_DELEGATE \
struct ELEOSLobby_eventOnUnmuteVoice_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnUnmuteVoice_DelegateWrapper(const FMulticastScriptDelegate& OnUnmuteVoice, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnUnmuteVoice_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnUnmuteVoice.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_70_DELEGATE \
struct ELEOSLobby_eventOnVoiceChatConnected_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnVoiceChatConnected_DelegateWrapper(const FMulticastScriptDelegate& OnVoiceChatConnected, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnVoiceChatConnected_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnVoiceChatConnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_69_DELEGATE \
struct ELEOSLobby_eventOnVoiceChatDisabled_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnVoiceChatDisabled_DelegateWrapper(const FMulticastScriptDelegate& OnVoiceChatDisabled, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnVoiceChatDisabled_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnVoiceChatDisabled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_68_DELEGATE \
struct ELEOSLobby_eventOnVoiceChatDisconnected_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnVoiceChatDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnVoiceChatDisconnected, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnVoiceChatDisconnected_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnVoiceChatDisconnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_67_DELEGATE \
struct ELEOSLobby_eventOnVoiceChatEnabled_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnVoiceChatEnabled_DelegateWrapper(const FMulticastScriptDelegate& OnVoiceChatEnabled, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnVoiceChatEnabled_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnVoiceChatEnabled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_66_DELEGATE \
struct ELEOSLobby_eventOnVoiceChatJoined_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnVoiceChatJoined_DelegateWrapper(const FMulticastScriptDelegate& OnVoiceChatJoined, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnVoiceChatJoined_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnVoiceChatJoined.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_65_DELEGATE \
struct ELEOSLobby_eventOnVoiceChatLeft_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnVoiceChatLeft_DelegateWrapper(const FMulticastScriptDelegate& OnVoiceChatLeft, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnVoiceChatLeft_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnVoiceChatLeft.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_64_DELEGATE \
struct ELEOSLobby_eventOnVoiceChatUnsupported_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnVoiceChatUnsupported_DelegateWrapper(const FMulticastScriptDelegate& OnVoiceChatUnsupported, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSLobby_eventOnVoiceChatUnsupported_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnVoiceChatUnsupported.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBlock); \
	DECLARE_FUNCTION(execChangeOwner); \
	DECLARE_FUNCTION(execCheckJoinable); \
	DECLARE_FUNCTION(execClearBlock); \
	DECLARE_FUNCTION(execClearInvitedLobbyIDString); \
	DECLARE_FUNCTION(execClearMatchupWrestlerData); \
	DECLARE_FUNCTION(execClearMute); \
	DECLARE_FUNCTION(execClearMuteAll); \
	DECLARE_FUNCTION(execClearNPCWrestler); \
	DECLARE_FUNCTION(execClearSelectNPCWrestler); \
	DECLARE_FUNCTION(execClearTextBlock); \
	DECLARE_FUNCTION(execCreate); \
	DECLARE_FUNCTION(execCreateDefault); \
	DECLARE_FUNCTION(execCreateMPASessionEvent); \
	DECLARE_FUNCTION(execDestroy); \
	DECLARE_FUNCTION(execExecConsoleInviteEvent); \
	DECLARE_FUNCTION(execFindLobby); \
	DECLARE_FUNCTION(execFindLobbyPlayer); \
	DECLARE_FUNCTION(execFindLobbyPlayerByIndex); \
	DECLARE_FUNCTION(execFindLobbyUserName); \
	DECLARE_FUNCTION(execFindPlayerSessionByFriend); \
	DECLARE_FUNCTION(execFindUserIDByCharacterIndex); \
	DECLARE_FUNCTION(execGetBlockFlag); \
	DECLARE_FUNCTION(execGetCurrentWrestlerData); \
	DECLARE_FUNCTION(execGetCurrentWrestlerDataByPUID); \
	DECLARE_FUNCTION(execGetEOSLobby); \
	DECLARE_FUNCTION(execGetEOSLobbyInfo); \
	DECLARE_FUNCTION(execGetInvites); \
	DECLARE_FUNCTION(execGetLatestInvite); \
	DECLARE_FUNCTION(execGetLobbyChatLog); \
	DECLARE_FUNCTION(execGetLobbyCommunityUser); \
	DECLARE_FUNCTION(execGetLobbyOwnerPlayerIndex); \
	DECLARE_FUNCTION(execGetLobbyOwnerPUID); \
	DECLARE_FUNCTION(execGetLobbyPlayerProductIDs); \
	DECLARE_FUNCTION(execGetLobbyPlayers); \
	DECLARE_FUNCTION(execGetLobbyPlayerUserIDs); \
	DECLARE_FUNCTION(execGetLobbyUserBattlePassPoint); \
	DECLARE_FUNCTION(execGetLobbyUserIcon); \
	DECLARE_FUNCTION(execGetLobbyUserIcons); \
	DECLARE_FUNCTION(execGetLobbyUserName); \
	DECLARE_FUNCTION(execGetLobbyUserPlatform); \
	DECLARE_FUNCTION(execGetLobbyUserRank); \
	DECLARE_FUNCTION(execGetMatchupWrestlerData); \
	DECLARE_FUNCTION(execGetMatchupWrestlerList); \
	DECLARE_FUNCTION(execGetMuteFlag); \
	DECLARE_FUNCTION(execGetNPCWrestler); \
	DECLARE_FUNCTION(execGetNPCWrestlerSelectorPlayerIndex); \
	DECLARE_FUNCTION(execGetPartyLastReadTime); \
	DECLARE_FUNCTION(execGetPlayerIndex); \
	DECLARE_FUNCTION(execGetPlayerIndexToPUID); \
	DECLARE_FUNCTION(execGetPlayerNum); \
	DECLARE_FUNCTION(execGetPlayerWrestlerDataAtIndex); \
	DECLARE_FUNCTION(execGetSelectArenaData); \
	DECLARE_FUNCTION(execGetSelectMinigameData); \
	DECLARE_FUNCTION(execGetSelectNPCWrestler); \
	DECLARE_FUNCTION(execGetSelfPlayerIndex); \
	DECLARE_FUNCTION(execGetSpeakingUsers); \
	DECLARE_FUNCTION(execGetTextBlockFlag); \
	DECLARE_FUNCTION(execGetUnreadPartyChatCount); \
	DECLARE_FUNCTION(execGetVoiceChatEnabled); \
	DECLARE_FUNCTION(execGetVoiceChatStartMuted); \
	DECLARE_FUNCTION(execGetVoiceStatus); \
	DECLARE_FUNCTION(execHasLobbyUser); \
	DECLARE_FUNCTION(execHasPlayer); \
	DECLARE_FUNCTION(execInvite); \
	DECLARE_FUNCTION(execInviteFromConsole); \
	DECLARE_FUNCTION(execInviteLobbyID); \
	DECLARE_FUNCTION(execIsBlocked); \
	DECLARE_FUNCTION(execIsCompleteCurrentWrestler); \
	DECLARE_FUNCTION(execIsExistInviteUser); \
	DECLARE_FUNCTION(execIsJoinedLobby); \
	DECLARE_FUNCTION(execIsJoinedPrivateMatch); \
	DECLARE_FUNCTION(execIsLobbyOwner); \
	DECLARE_FUNCTION(execIsLobbyOwnerPUID); \
	DECLARE_FUNCTION(execIsMuted); \
	DECLARE_FUNCTION(execIsSolo); \
	DECLARE_FUNCTION(execIsSpeaking); \
	DECLARE_FUNCTION(execIsUsingMultiplayerFeature); \
	DECLARE_FUNCTION(execJoin); \
	DECLARE_FUNCTION(execJoinByLobbyInvite); \
	DECLARE_FUNCTION(execJoinLatestInvite); \
	DECLARE_FUNCTION(execKick); \
	DECLARE_FUNCTION(execLeaderChangeRequest); \
	DECLARE_FUNCTION(execLeave); \
	DECLARE_FUNCTION(execLobbySearchedDispach); \
	DECLARE_FUNCTION(execMute); \
	DECLARE_FUNCTION(execNeedToSelectNPCWrestler); \
	DECLARE_FUNCTION(execNextStepForStatusUpdatedOnJoined); \
	DECLARE_FUNCTION(execOnCommunityEvent); \
	DECLARE_FUNCTION(execOnCommunityEventForGameSession); \
	DECLARE_FUNCTION(execOnCommunitySearchResult); \
	DECLARE_FUNCTION(execOnEOSEvent); \
	DECLARE_FUNCTION(execOnNatP2PCachedTransferEvent); \
	DECLARE_FUNCTION(execOnNatP2PEvent); \
	DECLARE_FUNCTION(execOnReceive); \
	DECLARE_FUNCTION(execOnReceivePrivateMatchNotify); \
	DECLARE_FUNCTION(execOnSanitizeTextPartyChat); \
	DECLARE_FUNCTION(execOnSanitizeTextWrestlerDataMatchup); \
	DECLARE_FUNCTION(execOnSanitizeTextWrestlerDataNormal); \
	DECLARE_FUNCTION(execOnSanitizeTextWrestlerDataNPC); \
	DECLARE_FUNCTION(execOnSanitizeTextWrestlerDataSelectNPC); \
	DECLARE_FUNCTION(execPrivateMatchPlayerStatusAll); \
	DECLARE_FUNCTION(execPrivateMatchPlayerStatusReset); \
	DECLARE_FUNCTION(execPrivateMatchPlayerStatusUpdate); \
	DECLARE_FUNCTION(execQueryInvites); \
	DECLARE_FUNCTION(execRejectInvite); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execRequestInviteAllLobbyMember); \
	DECLARE_FUNCTION(execRequestInviteLobbyMember); \
	DECLARE_FUNCTION(execSendChatAll); \
	DECLARE_FUNCTION(execSendCurrentWrestlerData); \
	DECLARE_FUNCTION(execSendLobbyChat); \
	DECLARE_FUNCTION(execSendLobbyStamp); \
	DECLARE_FUNCTION(execSendMatchupWrestlerData); \
	DECLARE_FUNCTION(execSendMiniGameInfo); \
	DECLARE_FUNCTION(execSendMiniGameOwnerSelectInfo); \
	DECLARE_FUNCTION(execSendNotify); \
	DECLARE_FUNCTION(execSendNotifyToHost); \
	DECLARE_FUNCTION(execSendNotifyToUser); \
	DECLARE_FUNCTION(execSendNPCWrestlerData); \
	DECLARE_FUNCTION(execSendPacketObject); \
	DECLARE_FUNCTION(execSendPositionSelectInput); \
	DECLARE_FUNCTION(execSendPositionSelectInputResult); \
	DECLARE_FUNCTION(execSendPrivateMatchCancel); \
	DECLARE_FUNCTION(execSendPrivateMatchInviteRequest); \
	DECLARE_FUNCTION(execSendPrivateMatchInviteResponse); \
	DECLARE_FUNCTION(execSendPrivateMatchLeaveSession); \
	DECLARE_FUNCTION(execSendPrivateMatchMenuInput); \
	DECLARE_FUNCTION(execSendPrivateMatchMenuInputResult); \
	DECLARE_FUNCTION(execSendPrivateMatchMenuInputSync); \
	DECLARE_FUNCTION(execSendPrivateMatchNotify); \
	DECLARE_FUNCTION(execSendPrivateMatchNotifyToHost); \
	DECLARE_FUNCTION(execSendPrivateMatchReady); \
	DECLARE_FUNCTION(execSendPrivateMatchStart); \
	DECLARE_FUNCTION(execSendRequest); \
	DECLARE_FUNCTION(execSendSelectArenaData); \
	DECLARE_FUNCTION(execSendSelectMinigame); \
	DECLARE_FUNCTION(execSendSelectNPCWrestlerData); \
	DECLARE_FUNCTION(execSendStamp); \
	DECLARE_FUNCTION(execSendStampAll); \
	DECLARE_FUNCTION(execSetBlock); \
	DECLARE_FUNCTION(execSetCurrentWrestlerData); \
	DECLARE_FUNCTION(execSetLobbyAttributes); \
	DECLARE_FUNCTION(execSetMatchupWrestlerData); \
	DECLARE_FUNCTION(execSetMaxMember); \
	DECLARE_FUNCTION(execSetMaxPacketSize); \
	DECLARE_FUNCTION(execSetMute); \
	DECLARE_FUNCTION(execSetMuteAll); \
	DECLARE_FUNCTION(execSetMyBattlePassPoint); \
	DECLARE_FUNCTION(execSetMyPlayerIcon); \
	DECLARE_FUNCTION(execSetMyPlayerIcons); \
	DECLARE_FUNCTION(execSetMyPlayerRank); \
	DECLARE_FUNCTION(execSetNPCWrestler); \
	DECLARE_FUNCTION(execSetPartyLastReadTime); \
	DECLARE_FUNCTION(execSetPrivateMatchPlayerStatus); \
	DECLARE_FUNCTION(execSetPrivateMatchPlayerStatusAll); \
	DECLARE_FUNCTION(execSetSelectArenaData); \
	DECLARE_FUNCTION(execSetSelectMinigame); \
	DECLARE_FUNCTION(execSetSelectNPCWrestler); \
	DECLARE_FUNCTION(execSetTextBlock); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execSetVoiceChatEnabled); \
	DECLARE_FUNCTION(execSetVoiceChatStartMuted); \
	DECLARE_FUNCTION(execShowPacketQueueInfo); \
	DECLARE_FUNCTION(execUnblock); \
	DECLARE_FUNCTION(execUnmute); \
	DECLARE_FUNCTION(execUpdateMemberAttributes); \
	DECLARE_FUNCTION(execUpdateMPARecentPlayer); \
	DECLARE_FUNCTION(execUpdateStepForStatusUpdatedOnJoined);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBlock); \
	DECLARE_FUNCTION(execChangeOwner); \
	DECLARE_FUNCTION(execCheckJoinable); \
	DECLARE_FUNCTION(execClearBlock); \
	DECLARE_FUNCTION(execClearInvitedLobbyIDString); \
	DECLARE_FUNCTION(execClearMatchupWrestlerData); \
	DECLARE_FUNCTION(execClearMute); \
	DECLARE_FUNCTION(execClearMuteAll); \
	DECLARE_FUNCTION(execClearNPCWrestler); \
	DECLARE_FUNCTION(execClearSelectNPCWrestler); \
	DECLARE_FUNCTION(execClearTextBlock); \
	DECLARE_FUNCTION(execCreate); \
	DECLARE_FUNCTION(execCreateDefault); \
	DECLARE_FUNCTION(execCreateMPASessionEvent); \
	DECLARE_FUNCTION(execDestroy); \
	DECLARE_FUNCTION(execExecConsoleInviteEvent); \
	DECLARE_FUNCTION(execFindLobby); \
	DECLARE_FUNCTION(execFindLobbyPlayer); \
	DECLARE_FUNCTION(execFindLobbyPlayerByIndex); \
	DECLARE_FUNCTION(execFindLobbyUserName); \
	DECLARE_FUNCTION(execFindPlayerSessionByFriend); \
	DECLARE_FUNCTION(execFindUserIDByCharacterIndex); \
	DECLARE_FUNCTION(execGetBlockFlag); \
	DECLARE_FUNCTION(execGetCurrentWrestlerData); \
	DECLARE_FUNCTION(execGetCurrentWrestlerDataByPUID); \
	DECLARE_FUNCTION(execGetEOSLobby); \
	DECLARE_FUNCTION(execGetEOSLobbyInfo); \
	DECLARE_FUNCTION(execGetInvites); \
	DECLARE_FUNCTION(execGetLatestInvite); \
	DECLARE_FUNCTION(execGetLobbyChatLog); \
	DECLARE_FUNCTION(execGetLobbyCommunityUser); \
	DECLARE_FUNCTION(execGetLobbyOwnerPlayerIndex); \
	DECLARE_FUNCTION(execGetLobbyOwnerPUID); \
	DECLARE_FUNCTION(execGetLobbyPlayerProductIDs); \
	DECLARE_FUNCTION(execGetLobbyPlayers); \
	DECLARE_FUNCTION(execGetLobbyPlayerUserIDs); \
	DECLARE_FUNCTION(execGetLobbyUserBattlePassPoint); \
	DECLARE_FUNCTION(execGetLobbyUserIcon); \
	DECLARE_FUNCTION(execGetLobbyUserIcons); \
	DECLARE_FUNCTION(execGetLobbyUserName); \
	DECLARE_FUNCTION(execGetLobbyUserPlatform); \
	DECLARE_FUNCTION(execGetLobbyUserRank); \
	DECLARE_FUNCTION(execGetMatchupWrestlerData); \
	DECLARE_FUNCTION(execGetMatchupWrestlerList); \
	DECLARE_FUNCTION(execGetMuteFlag); \
	DECLARE_FUNCTION(execGetNPCWrestler); \
	DECLARE_FUNCTION(execGetNPCWrestlerSelectorPlayerIndex); \
	DECLARE_FUNCTION(execGetPartyLastReadTime); \
	DECLARE_FUNCTION(execGetPlayerIndex); \
	DECLARE_FUNCTION(execGetPlayerIndexToPUID); \
	DECLARE_FUNCTION(execGetPlayerNum); \
	DECLARE_FUNCTION(execGetPlayerWrestlerDataAtIndex); \
	DECLARE_FUNCTION(execGetSelectArenaData); \
	DECLARE_FUNCTION(execGetSelectMinigameData); \
	DECLARE_FUNCTION(execGetSelectNPCWrestler); \
	DECLARE_FUNCTION(execGetSelfPlayerIndex); \
	DECLARE_FUNCTION(execGetSpeakingUsers); \
	DECLARE_FUNCTION(execGetTextBlockFlag); \
	DECLARE_FUNCTION(execGetUnreadPartyChatCount); \
	DECLARE_FUNCTION(execGetVoiceChatEnabled); \
	DECLARE_FUNCTION(execGetVoiceChatStartMuted); \
	DECLARE_FUNCTION(execGetVoiceStatus); \
	DECLARE_FUNCTION(execHasLobbyUser); \
	DECLARE_FUNCTION(execHasPlayer); \
	DECLARE_FUNCTION(execInvite); \
	DECLARE_FUNCTION(execInviteFromConsole); \
	DECLARE_FUNCTION(execInviteLobbyID); \
	DECLARE_FUNCTION(execIsBlocked); \
	DECLARE_FUNCTION(execIsCompleteCurrentWrestler); \
	DECLARE_FUNCTION(execIsExistInviteUser); \
	DECLARE_FUNCTION(execIsJoinedLobby); \
	DECLARE_FUNCTION(execIsJoinedPrivateMatch); \
	DECLARE_FUNCTION(execIsLobbyOwner); \
	DECLARE_FUNCTION(execIsLobbyOwnerPUID); \
	DECLARE_FUNCTION(execIsMuted); \
	DECLARE_FUNCTION(execIsSolo); \
	DECLARE_FUNCTION(execIsSpeaking); \
	DECLARE_FUNCTION(execIsUsingMultiplayerFeature); \
	DECLARE_FUNCTION(execJoin); \
	DECLARE_FUNCTION(execJoinByLobbyInvite); \
	DECLARE_FUNCTION(execJoinLatestInvite); \
	DECLARE_FUNCTION(execKick); \
	DECLARE_FUNCTION(execLeaderChangeRequest); \
	DECLARE_FUNCTION(execLeave); \
	DECLARE_FUNCTION(execLobbySearchedDispach); \
	DECLARE_FUNCTION(execMute); \
	DECLARE_FUNCTION(execNeedToSelectNPCWrestler); \
	DECLARE_FUNCTION(execNextStepForStatusUpdatedOnJoined); \
	DECLARE_FUNCTION(execOnCommunityEvent); \
	DECLARE_FUNCTION(execOnCommunityEventForGameSession); \
	DECLARE_FUNCTION(execOnCommunitySearchResult); \
	DECLARE_FUNCTION(execOnEOSEvent); \
	DECLARE_FUNCTION(execOnNatP2PCachedTransferEvent); \
	DECLARE_FUNCTION(execOnNatP2PEvent); \
	DECLARE_FUNCTION(execOnReceive); \
	DECLARE_FUNCTION(execOnReceivePrivateMatchNotify); \
	DECLARE_FUNCTION(execOnSanitizeTextPartyChat); \
	DECLARE_FUNCTION(execOnSanitizeTextWrestlerDataMatchup); \
	DECLARE_FUNCTION(execOnSanitizeTextWrestlerDataNormal); \
	DECLARE_FUNCTION(execOnSanitizeTextWrestlerDataNPC); \
	DECLARE_FUNCTION(execOnSanitizeTextWrestlerDataSelectNPC); \
	DECLARE_FUNCTION(execPrivateMatchPlayerStatusAll); \
	DECLARE_FUNCTION(execPrivateMatchPlayerStatusReset); \
	DECLARE_FUNCTION(execPrivateMatchPlayerStatusUpdate); \
	DECLARE_FUNCTION(execQueryInvites); \
	DECLARE_FUNCTION(execRejectInvite); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execRequestInviteAllLobbyMember); \
	DECLARE_FUNCTION(execRequestInviteLobbyMember); \
	DECLARE_FUNCTION(execSendChatAll); \
	DECLARE_FUNCTION(execSendCurrentWrestlerData); \
	DECLARE_FUNCTION(execSendLobbyChat); \
	DECLARE_FUNCTION(execSendLobbyStamp); \
	DECLARE_FUNCTION(execSendMatchupWrestlerData); \
	DECLARE_FUNCTION(execSendMiniGameInfo); \
	DECLARE_FUNCTION(execSendMiniGameOwnerSelectInfo); \
	DECLARE_FUNCTION(execSendNotify); \
	DECLARE_FUNCTION(execSendNotifyToHost); \
	DECLARE_FUNCTION(execSendNotifyToUser); \
	DECLARE_FUNCTION(execSendNPCWrestlerData); \
	DECLARE_FUNCTION(execSendPacketObject); \
	DECLARE_FUNCTION(execSendPositionSelectInput); \
	DECLARE_FUNCTION(execSendPositionSelectInputResult); \
	DECLARE_FUNCTION(execSendPrivateMatchCancel); \
	DECLARE_FUNCTION(execSendPrivateMatchInviteRequest); \
	DECLARE_FUNCTION(execSendPrivateMatchInviteResponse); \
	DECLARE_FUNCTION(execSendPrivateMatchLeaveSession); \
	DECLARE_FUNCTION(execSendPrivateMatchMenuInput); \
	DECLARE_FUNCTION(execSendPrivateMatchMenuInputResult); \
	DECLARE_FUNCTION(execSendPrivateMatchMenuInputSync); \
	DECLARE_FUNCTION(execSendPrivateMatchNotify); \
	DECLARE_FUNCTION(execSendPrivateMatchNotifyToHost); \
	DECLARE_FUNCTION(execSendPrivateMatchReady); \
	DECLARE_FUNCTION(execSendPrivateMatchStart); \
	DECLARE_FUNCTION(execSendRequest); \
	DECLARE_FUNCTION(execSendSelectArenaData); \
	DECLARE_FUNCTION(execSendSelectMinigame); \
	DECLARE_FUNCTION(execSendSelectNPCWrestlerData); \
	DECLARE_FUNCTION(execSendStamp); \
	DECLARE_FUNCTION(execSendStampAll); \
	DECLARE_FUNCTION(execSetBlock); \
	DECLARE_FUNCTION(execSetCurrentWrestlerData); \
	DECLARE_FUNCTION(execSetLobbyAttributes); \
	DECLARE_FUNCTION(execSetMatchupWrestlerData); \
	DECLARE_FUNCTION(execSetMaxMember); \
	DECLARE_FUNCTION(execSetMaxPacketSize); \
	DECLARE_FUNCTION(execSetMute); \
	DECLARE_FUNCTION(execSetMuteAll); \
	DECLARE_FUNCTION(execSetMyBattlePassPoint); \
	DECLARE_FUNCTION(execSetMyPlayerIcon); \
	DECLARE_FUNCTION(execSetMyPlayerIcons); \
	DECLARE_FUNCTION(execSetMyPlayerRank); \
	DECLARE_FUNCTION(execSetNPCWrestler); \
	DECLARE_FUNCTION(execSetPartyLastReadTime); \
	DECLARE_FUNCTION(execSetPrivateMatchPlayerStatus); \
	DECLARE_FUNCTION(execSetPrivateMatchPlayerStatusAll); \
	DECLARE_FUNCTION(execSetSelectArenaData); \
	DECLARE_FUNCTION(execSetSelectMinigame); \
	DECLARE_FUNCTION(execSetSelectNPCWrestler); \
	DECLARE_FUNCTION(execSetTextBlock); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execSetVoiceChatEnabled); \
	DECLARE_FUNCTION(execSetVoiceChatStartMuted); \
	DECLARE_FUNCTION(execShowPacketQueueInfo); \
	DECLARE_FUNCTION(execUnblock); \
	DECLARE_FUNCTION(execUnmute); \
	DECLARE_FUNCTION(execUpdateMemberAttributes); \
	DECLARE_FUNCTION(execUpdateMPARecentPlayer); \
	DECLARE_FUNCTION(execUpdateStepForStatusUpdatedOnJoined);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELEOSLobby(); \
	friend struct Z_Construct_UClass_UELEOSLobby_Statics; \
public: \
	DECLARE_CLASS(UELEOSLobby, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELEOSLobby)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUELEOSLobby(); \
	friend struct Z_Construct_UClass_UELEOSLobby_Statics; \
public: \
	DECLARE_CLASS(UELEOSLobby, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELEOSLobby)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELEOSLobby(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELEOSLobby) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELEOSLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELEOSLobby); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELEOSLobby(UELEOSLobby&&); \
	NO_API UELEOSLobby(const UELEOSLobby&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELEOSLobby(UELEOSLobby&&); \
	NO_API UELEOSLobby(const UELEOSLobby&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELEOSLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELEOSLobby); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELEOSLobby)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EOSManager() { return STRUCT_OFFSET(UELEOSLobby, EOSManager); } \
	FORCEINLINE static uint32 __PPO__EOSLobby() { return STRUCT_OFFSET(UELEOSLobby, EOSLobby); } \
	FORCEINLINE static uint32 __PPO__EOSLobbyInfo() { return STRUCT_OFFSET(UELEOSLobby, EOSLobbyInfo); } \
	FORCEINLINE static uint32 __PPO__LastestInvite() { return STRUCT_OFFSET(UELEOSLobby, LastestInvite); } \
	FORCEINLINE static uint32 __PPO__EOSUser() { return STRUCT_OFFSET(UELEOSLobby, EOSUser); } \
	FORCEINLINE static uint32 __PPO__EOSGameSession() { return STRUCT_OFFSET(UELEOSLobby, EOSGameSession); } \
	FORCEINLINE static uint32 __PPO__EOSNatP2P() { return STRUCT_OFFSET(UELEOSLobby, EOSNatP2P); } \
	FORCEINLINE static uint32 __PPO__EOSNatP2PTransfer() { return STRUCT_OFFSET(UELEOSLobby, EOSNatP2PTransfer); } \
	FORCEINLINE static uint32 __PPO__SocketID() { return STRUCT_OFFSET(UELEOSLobby, SocketID); } \
	FORCEINLINE static uint32 __PPO__LobbyPlayers() { return STRUCT_OFFSET(UELEOSLobby, LobbyPlayers); } \
	FORCEINLINE static uint32 __PPO__LobbyPlayerNum() { return STRUCT_OFFSET(UELEOSLobby, LobbyPlayerNum); } \
	FORCEINLINE static uint32 __PPO__LobbyJoinRequestArray() { return STRUCT_OFFSET(UELEOSLobby, LobbyJoinRequestArray); } \
	FORCEINLINE static uint32 __PPO__PendingInvitedLobbyArray() { return STRUCT_OFFSET(UELEOSLobby, PendingInvitedLobbyArray); } \
	FORCEINLINE static uint32 __PPO__LobbyInvites() { return STRUCT_OFFSET(UELEOSLobby, LobbyInvites); } \
	FORCEINLINE static uint32 __PPO__PartyChatLog() { return STRUCT_OFFSET(UELEOSLobby, PartyChatLog); } \
	FORCEINLINE static uint32 __PPO__LobbyPlayerStatusMap() { return STRUCT_OFFSET(UELEOSLobby, LobbyPlayerStatusMap); } \
	FORCEINLINE static uint32 __PPO__LobbyPlayerIndex() { return STRUCT_OFFSET(UELEOSLobby, LobbyPlayerIndex); } \
	FORCEINLINE static uint32 __PPO__SelectNPCWrestlerArray() { return STRUCT_OFFSET(UELEOSLobby, SelectNPCWrestlerArray); } \
	FORCEINLINE static uint32 __PPO__NPCWrestlerDataMap() { return STRUCT_OFFSET(UELEOSLobby, NPCWrestlerDataMap); } \
	FORCEINLINE static uint32 __PPO__SelectArenaData() { return STRUCT_OFFSET(UELEOSLobby, SelectArenaData); } \
	FORCEINLINE static uint32 __PPO__SelectArenaDataUpdate() { return STRUCT_OFFSET(UELEOSLobby, SelectArenaDataUpdate); } \
	FORCEINLINE static uint32 __PPO__SelectMinigameData() { return STRUCT_OFFSET(UELEOSLobby, SelectMinigameData); } \
	FORCEINLINE static uint32 __PPO__WrestlerDataMap() { return STRUCT_OFFSET(UELEOSLobby, WrestlerDataMap); } \
	FORCEINLINE static uint32 __PPO__MatchupWrestlerDataMap() { return STRUCT_OFFSET(UELEOSLobby, MatchupWrestlerDataMap); } \
	FORCEINLINE static uint32 __PPO__MyPlayerRank() { return STRUCT_OFFSET(UELEOSLobby, MyPlayerRank); } \
	FORCEINLINE static uint32 __PPO__MyBattlePassPoint() { return STRUCT_OFFSET(UELEOSLobby, MyBattlePassPoint); } \
	FORCEINLINE static uint32 __PPO__MyPlayerIcons() { return STRUCT_OFFSET(UELEOSLobby, MyPlayerIcons); } \
	FORCEINLINE static uint32 __PPO__bVoiceChatStartMuted() { return STRUCT_OFFSET(UELEOSLobby, bVoiceChatStartMuted); } \
	FORCEINLINE static uint32 __PPO__MuteFlag() { return STRUCT_OFFSET(UELEOSLobby, MuteFlag); } \
	FORCEINLINE static uint32 __PPO__RequestResendCurrentWrestlerDataFlag() { return STRUCT_OFFSET(UELEOSLobby, RequestResendCurrentWrestlerDataFlag); } \
	FORCEINLINE static uint32 __PPO__RequestResendCurrentWrestlerDataTimer() { return STRUCT_OFFSET(UELEOSLobby, RequestResendCurrentWrestlerDataTimer); } \
	FORCEINLINE static uint32 __PPO__PendingDiscardCommunityInfoMap() { return STRUCT_OFFSET(UELEOSLobby, PendingDiscardCommunityInfoMap); } \
	FORCEINLINE static uint32 __PPO__SanitizeRequestWrestlerData() { return STRUCT_OFFSET(UELEOSLobby, SanitizeRequestWrestlerData); } \
	FORCEINLINE static uint32 __PPO__SanitizeRequestMatchupWrestlerData() { return STRUCT_OFFSET(UELEOSLobby, SanitizeRequestMatchupWrestlerData); } \
	FORCEINLINE static uint32 __PPO__SanitizeRequestNPCWrestlerData() { return STRUCT_OFFSET(UELEOSLobby, SanitizeRequestNPCWrestlerData); } \
	FORCEINLINE static uint32 __PPO__SanitizeRequestSelectNPCWrestlerData() { return STRUCT_OFFSET(UELEOSLobby, SanitizeRequestSelectNPCWrestlerData); } \
	FORCEINLINE static uint32 __PPO__PendingLobbyEventArray() { return STRUCT_OFFSET(UELEOSLobby, PendingLobbyEventArray); } \
	FORCEINLINE static uint32 __PPO__PendingJoinMemberCommunityInfoMapForHost() { return STRUCT_OFFSET(UELEOSLobby, PendingJoinMemberCommunityInfoMapForHost); } \
	FORCEINLINE static uint32 __PPO__PendingJoinMemberLobbyUserMapForHost() { return STRUCT_OFFSET(UELEOSLobby, PendingJoinMemberLobbyUserMapForHost); } \
	FORCEINLINE static uint32 __PPO__LobbyProcStatusMap() { return STRUCT_OFFSET(UELEOSLobby, LobbyProcStatusMap); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_60_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELEOSLobby>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELEOSLobby_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
