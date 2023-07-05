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
enum class EEOSLobbyUserMuteFlag : uint8;
enum class EEOSLobbyUserAudioStatus : uint8;
enum class EEOSCommunityEvent : uint8;
class UEOSCommunityBase;
#ifdef ABP_200508_ELEOSGameChatSession_generated_h
#error "ELEOSGameChatSession.generated.h already included, missing '#pragma once' in ELEOSGameChatSession.h"
#endif
#define ABP_200508_ELEOSGameChatSession_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_34_DELEGATE \
struct ELEOSGameChatSession_eventOnBlockVoice_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnBlockVoice_DelegateWrapper(const FMulticastScriptDelegate& OnBlockVoice, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSGameChatSession_eventOnBlockVoice_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnBlockVoice.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_33_DELEGATE \
struct ELEOSGameChatSession_eventOnBlockVoiceErr_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnBlockVoiceErr_DelegateWrapper(const FMulticastScriptDelegate& OnBlockVoiceErr, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSGameChatSession_eventOnBlockVoiceErr_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnBlockVoiceErr.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_32_DELEGATE \
struct ELEOSGameChatSession_eventOnMuteVoice_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnMuteVoice_DelegateWrapper(const FMulticastScriptDelegate& OnMuteVoice, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSGameChatSession_eventOnMuteVoice_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnMuteVoice.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_31_DELEGATE \
struct ELEOSGameChatSession_eventOnMuteVoiceErr_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnMuteVoiceErr_DelegateWrapper(const FMulticastScriptDelegate& OnMuteVoiceErr, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSGameChatSession_eventOnMuteVoiceErr_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnMuteVoiceErr.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_30_DELEGATE \
struct ELEOSGameChatSession_eventOnStartSpeaking_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnStartSpeaking_DelegateWrapper(const FMulticastScriptDelegate& OnStartSpeaking, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSGameChatSession_eventOnStartSpeaking_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnStartSpeaking.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_29_DELEGATE \
struct ELEOSGameChatSession_eventOnStopSpeaking_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnStopSpeaking_DelegateWrapper(const FMulticastScriptDelegate& OnStopSpeaking, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSGameChatSession_eventOnStopSpeaking_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnStopSpeaking.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_28_DELEGATE \
struct ELEOSGameChatSession_eventOnUnblockVoice_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnUnblockVoice_DelegateWrapper(const FMulticastScriptDelegate& OnUnblockVoice, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSGameChatSession_eventOnUnblockVoice_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnUnblockVoice.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_27_DELEGATE \
struct ELEOSGameChatSession_eventOnUnmuteVoice_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnUnmuteVoice_DelegateWrapper(const FMulticastScriptDelegate& OnUnmuteVoice, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSGameChatSession_eventOnUnmuteVoice_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnUnmuteVoice.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_26_DELEGATE \
struct ELEOSGameChatSession_eventOnVoiceChatConnected_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnVoiceChatConnected_DelegateWrapper(const FMulticastScriptDelegate& OnVoiceChatConnected, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSGameChatSession_eventOnVoiceChatConnected_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnVoiceChatConnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_25_DELEGATE \
struct ELEOSGameChatSession_eventOnVoiceChatDisabled_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnVoiceChatDisabled_DelegateWrapper(const FMulticastScriptDelegate& OnVoiceChatDisabled, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSGameChatSession_eventOnVoiceChatDisabled_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnVoiceChatDisabled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_24_DELEGATE \
struct ELEOSGameChatSession_eventOnVoiceChatDisconnected_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnVoiceChatDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnVoiceChatDisconnected, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSGameChatSession_eventOnVoiceChatDisconnected_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnVoiceChatDisconnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_23_DELEGATE \
struct ELEOSGameChatSession_eventOnVoiceChatEnabled_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnVoiceChatEnabled_DelegateWrapper(const FMulticastScriptDelegate& OnVoiceChatEnabled, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSGameChatSession_eventOnVoiceChatEnabled_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnVoiceChatEnabled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_22_DELEGATE \
struct ELEOSGameChatSession_eventOnVoiceChatJoined_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnVoiceChatJoined_DelegateWrapper(const FMulticastScriptDelegate& OnVoiceChatJoined, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSGameChatSession_eventOnVoiceChatJoined_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnVoiceChatJoined.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_21_DELEGATE \
struct ELEOSGameChatSession_eventOnVoiceChatLeft_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnVoiceChatLeft_DelegateWrapper(const FMulticastScriptDelegate& OnVoiceChatLeft, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSGameChatSession_eventOnVoiceChatLeft_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnVoiceChatLeft.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_20_DELEGATE \
struct ELEOSGameChatSession_eventOnVoiceChatUnsupported_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSCommunityUserBase* _CommunityUser; \
}; \
static inline void FOnVoiceChatUnsupported_DelegateWrapper(const FMulticastScriptDelegate& OnVoiceChatUnsupported, UEOSCommunityInfoBase* _CommunityInfo, UEOSCommunityUserBase* _CommunityUser) \
{ \
	ELEOSGameChatSession_eventOnVoiceChatUnsupported_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnVoiceChatUnsupported.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBlock); \
	DECLARE_FUNCTION(execClearBlock); \
	DECLARE_FUNCTION(execClearMute); \
	DECLARE_FUNCTION(execClearMuteAll); \
	DECLARE_FUNCTION(execContainsPlayer); \
	DECLARE_FUNCTION(execGetBlockFlag); \
	DECLARE_FUNCTION(execGetMuteFlag); \
	DECLARE_FUNCTION(execGetPlayerNum); \
	DECLARE_FUNCTION(execGetPlayers); \
	DECLARE_FUNCTION(execGetSpeakingUsers); \
	DECLARE_FUNCTION(execGetVoiceChatEnabled); \
	DECLARE_FUNCTION(execGetVoiceChatStartMuted); \
	DECLARE_FUNCTION(execGetVoiceStatus); \
	DECLARE_FUNCTION(execHasPlayer); \
	DECLARE_FUNCTION(execIsBlocked); \
	DECLARE_FUNCTION(execIsJoined); \
	DECLARE_FUNCTION(execIsMuted); \
	DECLARE_FUNCTION(execIsSpeaking); \
	DECLARE_FUNCTION(execMute); \
	DECLARE_FUNCTION(execOnCommunityEvent); \
	DECLARE_FUNCTION(execSetBlock); \
	DECLARE_FUNCTION(execSetMute); \
	DECLARE_FUNCTION(execSetMuteAll); \
	DECLARE_FUNCTION(execSetVoiceChatEnabled); \
	DECLARE_FUNCTION(execSetVoiceChatStartMuted); \
	DECLARE_FUNCTION(execStartMatchmaking); \
	DECLARE_FUNCTION(execUnblock); \
	DECLARE_FUNCTION(execUnmute);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBlock); \
	DECLARE_FUNCTION(execClearBlock); \
	DECLARE_FUNCTION(execClearMute); \
	DECLARE_FUNCTION(execClearMuteAll); \
	DECLARE_FUNCTION(execContainsPlayer); \
	DECLARE_FUNCTION(execGetBlockFlag); \
	DECLARE_FUNCTION(execGetMuteFlag); \
	DECLARE_FUNCTION(execGetPlayerNum); \
	DECLARE_FUNCTION(execGetPlayers); \
	DECLARE_FUNCTION(execGetSpeakingUsers); \
	DECLARE_FUNCTION(execGetVoiceChatEnabled); \
	DECLARE_FUNCTION(execGetVoiceChatStartMuted); \
	DECLARE_FUNCTION(execGetVoiceStatus); \
	DECLARE_FUNCTION(execHasPlayer); \
	DECLARE_FUNCTION(execIsBlocked); \
	DECLARE_FUNCTION(execIsJoined); \
	DECLARE_FUNCTION(execIsMuted); \
	DECLARE_FUNCTION(execIsSpeaking); \
	DECLARE_FUNCTION(execMute); \
	DECLARE_FUNCTION(execOnCommunityEvent); \
	DECLARE_FUNCTION(execSetBlock); \
	DECLARE_FUNCTION(execSetMute); \
	DECLARE_FUNCTION(execSetMuteAll); \
	DECLARE_FUNCTION(execSetVoiceChatEnabled); \
	DECLARE_FUNCTION(execSetVoiceChatStartMuted); \
	DECLARE_FUNCTION(execStartMatchmaking); \
	DECLARE_FUNCTION(execUnblock); \
	DECLARE_FUNCTION(execUnmute);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELEOSGameChatSession(); \
	friend struct Z_Construct_UClass_UELEOSGameChatSession_Statics; \
public: \
	DECLARE_CLASS(UELEOSGameChatSession, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELEOSGameChatSession)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUELEOSGameChatSession(); \
	friend struct Z_Construct_UClass_UELEOSGameChatSession_Statics; \
public: \
	DECLARE_CLASS(UELEOSGameChatSession, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELEOSGameChatSession)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELEOSGameChatSession(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELEOSGameChatSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELEOSGameChatSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELEOSGameChatSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELEOSGameChatSession(UELEOSGameChatSession&&); \
	NO_API UELEOSGameChatSession(const UELEOSGameChatSession&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELEOSGameChatSession(UELEOSGameChatSession&&); \
	NO_API UELEOSGameChatSession(const UELEOSGameChatSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELEOSGameChatSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELEOSGameChatSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELEOSGameChatSession)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EOSLobby() { return STRUCT_OFFSET(UELEOSGameChatSession, EOSLobby); } \
	FORCEINLINE static uint32 __PPO__EOSLobbyInfo() { return STRUCT_OFFSET(UELEOSGameChatSession, EOSLobbyInfo); } \
	FORCEINLINE static uint32 __PPO__EOSUser() { return STRUCT_OFFSET(UELEOSGameChatSession, EOSUser); } \
	FORCEINLINE static uint32 __PPO__ReservedPlayers() { return STRUCT_OFFSET(UELEOSGameChatSession, ReservedPlayers); } \
	FORCEINLINE static uint32 __PPO__HostProductUserId() { return STRUCT_OFFSET(UELEOSGameChatSession, HostProductUserId); } \
	FORCEINLINE static uint32 __PPO__bVoiceChatStartMuted() { return STRUCT_OFFSET(UELEOSGameChatSession, bVoiceChatStartMuted); } \
	FORCEINLINE static uint32 __PPO__MuteFlag() { return STRUCT_OFFSET(UELEOSGameChatSession, MuteFlag); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_16_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELEOSGameChatSession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameChatSession_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
