// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EELApplicationStatus : uint8;
enum class EEOSGeneralEvent : uint8;
enum class EEOSApplicationStatus : uint8;
class UELEOSDebug;
class UELEOSFriend;
class UELEOSGameChatSession;
class UELEOSGameSession;
class UELEOSGameSessionMatching;
struct FELEOSGameSessionMatchingParam;
class UELEOSLobby;
class UELEOSManagerUtility;
class UObject;
class UELSSModeServiceParam;
class UEOSAntiCheatClient;
class UEOSAntiCheatDedicatedServer;
class UEOSAuth;
class UEOSFriend;
class UEOSLeaderboard;
class UEOSManager;
class UEOSPresence;
class UEOSReports;
class UEOSSanctions;
class UEOSStats;
class UEOSUser;
class UEOSUserContents;
class UEOSUserManager;
class UEOSVoice;
enum class EELEOSApiType : uint8;
struct FDateTime;
class UELNetworkObserverBase;
enum class EEOSNetworkStatus : uint8;
class UELOnlineNews;
class UELOnlineRankCalculator;
class UEOSTitleStorage;
enum class EEOSExternalCredentialType : uint8;
enum class EELNetworkConnectionStatus : uint8;
enum class EELServerType : uint8;
enum class EELNetworkStatus : uint8;
enum class EELNetworkType : uint8;
class UEOSIDs;
enum class EEOSAntiCheatActionReason : uint8;
enum class EEOSAntiCheatClientViolationType : uint8;
enum class EEOSApiResult : uint8;
enum class EEOSAuthEvent : uint8;
enum class EEOSFriendEvent : uint8;
class UEOSUserBase;
enum class EEOSObjectType : uint8;
class UEOSCommon;
enum class EEOSResult : uint8;
enum class EELOnlineNotifyAction : uint8;
enum class EEOSPresenceEvent : uint8;
class UEOSPresenceBase;
enum class EEOSTitleStorageEvent : uint8;
class UEOSTitleStorageBase;
struct FEOSTitleStorageProgress;
enum class EEOSUserEvent : uint8;
#ifdef ABP_200508_ELEOSManager_generated_h
#error "ELEOSManager.generated.h already included, missing '#pragma once' in ELEOSManager.h"
#endif
#define ABP_200508_ELEOSManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplicationStatusChanged); \
	DECLARE_FUNCTION(execCallLoginPortalAfterEOSAPIBaseEvent); \
	DECLARE_FUNCTION(execCheckEOSServices); \
	DECLARE_FUNCTION(execCheckTitleStorage); \
	DECLARE_FUNCTION(execClearCheatPenalty); \
	DECLARE_FUNCTION(execClearEOSParameter); \
	DECLARE_FUNCTION(execClearLastGeneralErrorEvent); \
	DECLARE_FUNCTION(execCreateDedicatedServertoEasyAntiCheat); \
	DECLARE_FUNCTION(execDeleteDedicatedServertoEasyAntiCheat); \
	DECLARE_FUNCTION(execEventLogout); \
	DECLARE_FUNCTION(execExternalConnectLogin); \
	DECLARE_FUNCTION(execGetApplicationStatus); \
	DECLARE_FUNCTION(execGetConfigMatchingTimeout); \
	DECLARE_FUNCTION(execGetConfigPingUpdateInterval); \
	DECLARE_FUNCTION(execGetELEOSDebug); \
	DECLARE_FUNCTION(execGetELEOSFriend); \
	DECLARE_FUNCTION(execGetELEOSGameChatSession); \
	DECLARE_FUNCTION(execGetELEOSGameSession); \
	DECLARE_FUNCTION(execGetELEOSGameSessionMatching); \
	DECLARE_FUNCTION(execGetELEOSGameSessionMatchingParam); \
	DECLARE_FUNCTION(execGetELEOSLobby); \
	DECLARE_FUNCTION(execGetELEOSManagerUtility); \
	DECLARE_FUNCTION(execGetELEOSManagerUtilityBpIns); \
	DECLARE_FUNCTION(execGetELSSModeServiceParam); \
	DECLARE_FUNCTION(execGetEnableCrossPlay); \
	DECLARE_FUNCTION(execGetEOSAntiCheatClient); \
	DECLARE_FUNCTION(execGetEOSAntiCheatServer); \
	DECLARE_FUNCTION(execGetEOSAuth); \
	DECLARE_FUNCTION(execGetEOSAuthName); \
	DECLARE_FUNCTION(execGetEOSAuthToken); \
	DECLARE_FUNCTION(execGetEOSFriend); \
	DECLARE_FUNCTION(execGetEOSGameSession); \
	DECLARE_FUNCTION(execGetEOSLeaderboard); \
	DECLARE_FUNCTION(execGetEOSManager); \
	DECLARE_FUNCTION(execGetEOSPresence); \
	DECLARE_FUNCTION(execGetEOSReports); \
	DECLARE_FUNCTION(execGetEOSSanctions); \
	DECLARE_FUNCTION(execGetEOSServer); \
	DECLARE_FUNCTION(execGetEOSStats); \
	DECLARE_FUNCTION(execGetEOSUser); \
	DECLARE_FUNCTION(execGetEOSUserContents); \
	DECLARE_FUNCTION(execGetEOSUserManager); \
	DECLARE_FUNCTION(execGetEOSVoice); \
	DECLARE_FUNCTION(execGetLastError); \
	DECLARE_FUNCTION(execGetLastGeneralErrorEvent); \
	DECLARE_FUNCTION(execGetLastGeneralEvent); \
	DECLARE_FUNCTION(execGetLastResponseDateTime); \
	DECLARE_FUNCTION(execGetLastServerIDForEOS); \
	DECLARE_FUNCTION(execGetLastServerIDForYGS2); \
	DECLARE_FUNCTION(execGetLoginExternalAccountId); \
	DECLARE_FUNCTION(execGetNetworkObserver); \
	DECLARE_FUNCTION(execGetNetworkStatus); \
	DECLARE_FUNCTION(execGetOnlineNews); \
	DECLARE_FUNCTION(execGetOnlineRankCalculator); \
	DECLARE_FUNCTION(execGetP2PTimeoutLatency); \
	DECLARE_FUNCTION(execGetTitleStorage); \
	DECLARE_FUNCTION(execGetTitleStorageOnlineVersion); \
	DECLARE_FUNCTION(execHasConnectableYGS2ServerParam); \
	DECLARE_FUNCTION(execInvokeEventNoConnection); \
	DECLARE_FUNCTION(execInvokeEventP2PTimeout); \
	DECLARE_FUNCTION(execIsEOSLogin); \
	DECLARE_FUNCTION(execIsExecuteSetupStep); \
	DECLARE_FUNCTION(execIsLocalPlayerFirstLoggedin); \
	DECLARE_FUNCTION(execIsOnline); \
	DECLARE_FUNCTION(execIsRunningLoginFlow); \
	DECLARE_FUNCTION(execIsValidAntiCheatClient); \
	DECLARE_FUNCTION(execLogin); \
	DECLARE_FUNCTION(execLoginDevAuthTool); \
	DECLARE_FUNCTION(execLoginExternalAuth); \
	DECLARE_FUNCTION(execLoginExternalAuthWithBinaryToken); \
	DECLARE_FUNCTION(execLoginPortal); \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execNetworkConnectionStatusChanged); \
	DECLARE_FUNCTION(execNetworkStatusChanged); \
	DECLARE_FUNCTION(execNetworkTypeChanged); \
	DECLARE_FUNCTION(execOnAntiCheatClientActionRequired); \
	DECLARE_FUNCTION(execOnAntiCheatIntegrityViolated); \
	DECLARE_FUNCTION(execOnEOSAPIBaseEvent); \
	DECLARE_FUNCTION(execOnEOSAuthEvent); \
	DECLARE_FUNCTION(execOnFriendEvent); \
	DECLARE_FUNCTION(execOnGeneralEvent); \
	DECLARE_FUNCTION(execOnIntenralIssueOccurredCallback); \
	DECLARE_FUNCTION(execOnNotifyPlatformAction); \
	DECLARE_FUNCTION(execOnPresenceEvent); \
	DECLARE_FUNCTION(execOnReadTitleStorage); \
	DECLARE_FUNCTION(execOnReadTitleStorageForServer); \
	DECLARE_FUNCTION(execOnUserEvent); \
	DECLARE_FUNCTION(execPostCheckTitleStorageSetup); \
	DECLARE_FUNCTION(execPostConnectedSetup); \
	DECLARE_FUNCTION(execReconnectEOS); \
	DECLARE_FUNCTION(execReleaseEOS); \
	DECLARE_FUNCTION(execRequestCheckEOSServer); \
	DECLARE_FUNCTION(execRequestLinkEpicAccount); \
	DECLARE_FUNCTION(execResetLocalPlayerFirstLoggedin); \
	DECLARE_FUNCTION(execSetApplicationStatus); \
	DECLARE_FUNCTION(execSetCheatPenalty); \
	DECLARE_FUNCTION(execSetLastError); \
	DECLARE_FUNCTION(execSetLastResponseDateTime); \
	DECLARE_FUNCTION(execSetLoginExternalAccountId); \
	DECLARE_FUNCTION(execSetLoginUserDisplayName); \
	DECLARE_FUNCTION(execSetNetworkStatus); \
	DECLARE_FUNCTION(execSetRunningLoginFlowFlag); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execSetUseEAS); \
	DECLARE_FUNCTION(execShowP2PPacketQueueInfo); \
	DECLARE_FUNCTION(execStartCheckEOSServicesTimer); \
	DECLARE_FUNCTION(execStartReconnectEOSTimer); \
	DECLARE_FUNCTION(execUnlinkConnectAccount); \
	DECLARE_FUNCTION(execUpdateEOS);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplicationStatusChanged); \
	DECLARE_FUNCTION(execCallLoginPortalAfterEOSAPIBaseEvent); \
	DECLARE_FUNCTION(execCheckEOSServices); \
	DECLARE_FUNCTION(execCheckTitleStorage); \
	DECLARE_FUNCTION(execClearCheatPenalty); \
	DECLARE_FUNCTION(execClearEOSParameter); \
	DECLARE_FUNCTION(execClearLastGeneralErrorEvent); \
	DECLARE_FUNCTION(execCreateDedicatedServertoEasyAntiCheat); \
	DECLARE_FUNCTION(execDeleteDedicatedServertoEasyAntiCheat); \
	DECLARE_FUNCTION(execEventLogout); \
	DECLARE_FUNCTION(execExternalConnectLogin); \
	DECLARE_FUNCTION(execGetApplicationStatus); \
	DECLARE_FUNCTION(execGetConfigMatchingTimeout); \
	DECLARE_FUNCTION(execGetConfigPingUpdateInterval); \
	DECLARE_FUNCTION(execGetELEOSDebug); \
	DECLARE_FUNCTION(execGetELEOSFriend); \
	DECLARE_FUNCTION(execGetELEOSGameChatSession); \
	DECLARE_FUNCTION(execGetELEOSGameSession); \
	DECLARE_FUNCTION(execGetELEOSGameSessionMatching); \
	DECLARE_FUNCTION(execGetELEOSGameSessionMatchingParam); \
	DECLARE_FUNCTION(execGetELEOSLobby); \
	DECLARE_FUNCTION(execGetELEOSManagerUtility); \
	DECLARE_FUNCTION(execGetELEOSManagerUtilityBpIns); \
	DECLARE_FUNCTION(execGetELSSModeServiceParam); \
	DECLARE_FUNCTION(execGetEnableCrossPlay); \
	DECLARE_FUNCTION(execGetEOSAntiCheatClient); \
	DECLARE_FUNCTION(execGetEOSAntiCheatServer); \
	DECLARE_FUNCTION(execGetEOSAuth); \
	DECLARE_FUNCTION(execGetEOSAuthName); \
	DECLARE_FUNCTION(execGetEOSAuthToken); \
	DECLARE_FUNCTION(execGetEOSFriend); \
	DECLARE_FUNCTION(execGetEOSGameSession); \
	DECLARE_FUNCTION(execGetEOSLeaderboard); \
	DECLARE_FUNCTION(execGetEOSManager); \
	DECLARE_FUNCTION(execGetEOSPresence); \
	DECLARE_FUNCTION(execGetEOSReports); \
	DECLARE_FUNCTION(execGetEOSSanctions); \
	DECLARE_FUNCTION(execGetEOSServer); \
	DECLARE_FUNCTION(execGetEOSStats); \
	DECLARE_FUNCTION(execGetEOSUser); \
	DECLARE_FUNCTION(execGetEOSUserContents); \
	DECLARE_FUNCTION(execGetEOSUserManager); \
	DECLARE_FUNCTION(execGetEOSVoice); \
	DECLARE_FUNCTION(execGetLastError); \
	DECLARE_FUNCTION(execGetLastGeneralErrorEvent); \
	DECLARE_FUNCTION(execGetLastGeneralEvent); \
	DECLARE_FUNCTION(execGetLastResponseDateTime); \
	DECLARE_FUNCTION(execGetLastServerIDForEOS); \
	DECLARE_FUNCTION(execGetLastServerIDForYGS2); \
	DECLARE_FUNCTION(execGetLoginExternalAccountId); \
	DECLARE_FUNCTION(execGetNetworkObserver); \
	DECLARE_FUNCTION(execGetNetworkStatus); \
	DECLARE_FUNCTION(execGetOnlineNews); \
	DECLARE_FUNCTION(execGetOnlineRankCalculator); \
	DECLARE_FUNCTION(execGetP2PTimeoutLatency); \
	DECLARE_FUNCTION(execGetTitleStorage); \
	DECLARE_FUNCTION(execGetTitleStorageOnlineVersion); \
	DECLARE_FUNCTION(execHasConnectableYGS2ServerParam); \
	DECLARE_FUNCTION(execInvokeEventNoConnection); \
	DECLARE_FUNCTION(execInvokeEventP2PTimeout); \
	DECLARE_FUNCTION(execIsEOSLogin); \
	DECLARE_FUNCTION(execIsExecuteSetupStep); \
	DECLARE_FUNCTION(execIsLocalPlayerFirstLoggedin); \
	DECLARE_FUNCTION(execIsOnline); \
	DECLARE_FUNCTION(execIsRunningLoginFlow); \
	DECLARE_FUNCTION(execIsValidAntiCheatClient); \
	DECLARE_FUNCTION(execLogin); \
	DECLARE_FUNCTION(execLoginDevAuthTool); \
	DECLARE_FUNCTION(execLoginExternalAuth); \
	DECLARE_FUNCTION(execLoginExternalAuthWithBinaryToken); \
	DECLARE_FUNCTION(execLoginPortal); \
	DECLARE_FUNCTION(execLogout); \
	DECLARE_FUNCTION(execNetworkConnectionStatusChanged); \
	DECLARE_FUNCTION(execNetworkStatusChanged); \
	DECLARE_FUNCTION(execNetworkTypeChanged); \
	DECLARE_FUNCTION(execOnAntiCheatClientActionRequired); \
	DECLARE_FUNCTION(execOnAntiCheatIntegrityViolated); \
	DECLARE_FUNCTION(execOnEOSAPIBaseEvent); \
	DECLARE_FUNCTION(execOnEOSAuthEvent); \
	DECLARE_FUNCTION(execOnFriendEvent); \
	DECLARE_FUNCTION(execOnGeneralEvent); \
	DECLARE_FUNCTION(execOnIntenralIssueOccurredCallback); \
	DECLARE_FUNCTION(execOnNotifyPlatformAction); \
	DECLARE_FUNCTION(execOnPresenceEvent); \
	DECLARE_FUNCTION(execOnReadTitleStorage); \
	DECLARE_FUNCTION(execOnReadTitleStorageForServer); \
	DECLARE_FUNCTION(execOnUserEvent); \
	DECLARE_FUNCTION(execPostCheckTitleStorageSetup); \
	DECLARE_FUNCTION(execPostConnectedSetup); \
	DECLARE_FUNCTION(execReconnectEOS); \
	DECLARE_FUNCTION(execReleaseEOS); \
	DECLARE_FUNCTION(execRequestCheckEOSServer); \
	DECLARE_FUNCTION(execRequestLinkEpicAccount); \
	DECLARE_FUNCTION(execResetLocalPlayerFirstLoggedin); \
	DECLARE_FUNCTION(execSetApplicationStatus); \
	DECLARE_FUNCTION(execSetCheatPenalty); \
	DECLARE_FUNCTION(execSetLastError); \
	DECLARE_FUNCTION(execSetLastResponseDateTime); \
	DECLARE_FUNCTION(execSetLoginExternalAccountId); \
	DECLARE_FUNCTION(execSetLoginUserDisplayName); \
	DECLARE_FUNCTION(execSetNetworkStatus); \
	DECLARE_FUNCTION(execSetRunningLoginFlowFlag); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execSetUseEAS); \
	DECLARE_FUNCTION(execShowP2PPacketQueueInfo); \
	DECLARE_FUNCTION(execStartCheckEOSServicesTimer); \
	DECLARE_FUNCTION(execStartReconnectEOSTimer); \
	DECLARE_FUNCTION(execUnlinkConnectAccount); \
	DECLARE_FUNCTION(execUpdateEOS);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELEOSManager(); \
	friend struct Z_Construct_UClass_UELEOSManager_Statics; \
public: \
	DECLARE_CLASS(UELEOSManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELEOSManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUELEOSManager(); \
	friend struct Z_Construct_UClass_UELEOSManager_Statics; \
public: \
	DECLARE_CLASS(UELEOSManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELEOSManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELEOSManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELEOSManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELEOSManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELEOSManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELEOSManager(UELEOSManager&&); \
	NO_API UELEOSManager(const UELEOSManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELEOSManager(UELEOSManager&&); \
	NO_API UELEOSManager(const UELEOSManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELEOSManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELEOSManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELEOSManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EOSManager() { return STRUCT_OFFSET(UELEOSManager, EOSManager); } \
	FORCEINLINE static uint32 __PPO__EOSAuth() { return STRUCT_OFFSET(UELEOSManager, EOSAuth); } \
	FORCEINLINE static uint32 __PPO__EOSUserManager() { return STRUCT_OFFSET(UELEOSManager, EOSUserManager); } \
	FORCEINLINE static uint32 __PPO__EOSUser() { return STRUCT_OFFSET(UELEOSManager, EOSUser); } \
	FORCEINLINE static uint32 __PPO__EOSUserContents() { return STRUCT_OFFSET(UELEOSManager, EOSUserContents); } \
	FORCEINLINE static uint32 __PPO__EOSInternalIssueNotify() { return STRUCT_OFFSET(UELEOSManager, EOSInternalIssueNotify); } \
	FORCEINLINE static uint32 __PPO__EOSPresence() { return STRUCT_OFFSET(UELEOSManager, EOSPresence); } \
	FORCEINLINE static uint32 __PPO__EOSLeaderboard() { return STRUCT_OFFSET(UELEOSManager, EOSLeaderboard); } \
	FORCEINLINE static uint32 __PPO__EOSStats() { return STRUCT_OFFSET(UELEOSManager, EOSStats); } \
	FORCEINLINE static uint32 __PPO__ELGameSession() { return STRUCT_OFFSET(UELEOSManager, ELGameSession); } \
	FORCEINLINE static uint32 __PPO__ELEOSLobby() { return STRUCT_OFFSET(UELEOSManager, ELEOSLobby); } \
	FORCEINLINE static uint32 __PPO__ELEOSGameChatSession() { return STRUCT_OFFSET(UELEOSManager, ELEOSGameChatSession); } \
	FORCEINLINE static uint32 __PPO__ELEOSFriend() { return STRUCT_OFFSET(UELEOSManager, ELEOSFriend); } \
	FORCEINLINE static uint32 __PPO__EOSAntiCheatClient() { return STRUCT_OFFSET(UELEOSManager, EOSAntiCheatClient); } \
	FORCEINLINE static uint32 __PPO__EOSAntiCheatServer() { return STRUCT_OFFSET(UELEOSManager, EOSAntiCheatServer); } \
	FORCEINLINE static uint32 __PPO__EOSReports() { return STRUCT_OFFSET(UELEOSManager, EOSReports); } \
	FORCEINLINE static uint32 __PPO__EOSSanctions() { return STRUCT_OFFSET(UELEOSManager, EOSSanctions); } \
	FORCEINLINE static uint32 __PPO__EOSVoice() { return STRUCT_OFFSET(UELEOSManager, EOSVoice); } \
	FORCEINLINE static uint32 __PPO__EOSTitleStorage() { return STRUCT_OFFSET(UELEOSManager, EOSTitleStorage); } \
	FORCEINLINE static uint32 __PPO__EOSApiBase() { return STRUCT_OFFSET(UELEOSManager, EOSApiBase); } \
	FORCEINLINE static uint32 __PPO__ELOnlineNews() { return STRUCT_OFFSET(UELEOSManager, ELOnlineNews); } \
	FORCEINLINE static uint32 __PPO__ELEOSGameSessionMatching() { return STRUCT_OFFSET(UELEOSManager, ELEOSGameSessionMatching); } \
	FORCEINLINE static uint32 __PPO__RankCalculator() { return STRUCT_OFFSET(UELEOSManager, RankCalculator); } \
	FORCEINLINE static uint32 __PPO__ELEOSManagerUtilityClass() { return STRUCT_OFFSET(UELEOSManager, ELEOSManagerUtilityClass); } \
	FORCEINLINE static uint32 __PPO__ELEOSManagerUtility() { return STRUCT_OFFSET(UELEOSManager, ELEOSManagerUtility); } \
	FORCEINLINE static uint32 __PPO__isLogin() { return STRUCT_OFFSET(UELEOSManager, isLogin); } \
	FORCEINLINE static uint32 __PPO__IsLoggingin() { return STRUCT_OFFSET(UELEOSManager, IsLoggingin); } \
	FORCEINLINE static uint32 __PPO__EOSAuthName() { return STRUCT_OFFSET(UELEOSManager, EOSAuthName); } \
	FORCEINLINE static uint32 __PPO__EOSServer() { return STRUCT_OFFSET(UELEOSManager, EOSServer); } \
	FORCEINLINE static uint32 __PPO__PresenceText() { return STRUCT_OFFSET(UELEOSManager, PresenceText); } \
	FORCEINLINE static uint32 __PPO__LastGeneralEvent() { return STRUCT_OFFSET(UELEOSManager, LastGeneralEvent); } \
	FORCEINLINE static uint32 __PPO__LastGeneralErrorEvent() { return STRUCT_OFFSET(UELEOSManager, LastGeneralErrorEvent); } \
	FORCEINLINE static uint32 __PPO__CheckEOSServicesTimerHandle() { return STRUCT_OFFSET(UELEOSManager, CheckEOSServicesTimerHandle); } \
	FORCEINLINE static uint32 __PPO__ReconnectEOSTimerHandle() { return STRUCT_OFFSET(UELEOSManager, ReconnectEOSTimerHandle); } \
	FORCEINLINE static uint32 __PPO__ELEOSGameSessionMatchingParam() { return STRUCT_OFFSET(UELEOSManager, ELEOSGameSessionMatchingParam); } \
	FORCEINLINE static uint32 __PPO__ExternalLoginUserControllerId() { return STRUCT_OFFSET(UELEOSManager, ExternalLoginUserControllerId); } \
	FORCEINLINE static uint32 __PPO__bUseEAS() { return STRUCT_OFFSET(UELEOSManager, bUseEAS); } \
	FORCEINLINE static uint32 __PPO__bAutoLinkEAS() { return STRUCT_OFFSET(UELEOSManager, bAutoLinkEAS); } \
	FORCEINLINE static uint32 __PPO__NetworkObserver() { return STRUCT_OFFSET(UELEOSManager, NetworkObserver); } \
	FORCEINLINE static uint32 __PPO__ELEOSDebug() { return STRUCT_OFFSET(UELEOSManager, ELEOSDebug); } \
	FORCEINLINE static uint32 __PPO__bEnabledCrossPlay() { return STRUCT_OFFSET(UELEOSManager, bEnabledCrossPlay); } \
	FORCEINLINE static uint32 __PPO__bEnabledCheckEOSServices() { return STRUCT_OFFSET(UELEOSManager, bEnabledCheckEOSServices); } \
	FORCEINLINE static uint32 __PPO__bSetLastResponseDateTime() { return STRUCT_OFFSET(UELEOSManager, bSetLastResponseDateTime); } \
	FORCEINLINE static uint32 __PPO__LastResponseDateTime() { return STRUCT_OFFSET(UELEOSManager, LastResponseDateTime); } \
	FORCEINLINE static uint32 __PPO__ELYGS2SetupStep() { return STRUCT_OFFSET(UELEOSManager, ELYGS2SetupStep); } \
	FORCEINLINE static uint32 __PPO__ELEOSManagerUtility_Subclass() { return STRUCT_OFFSET(UELEOSManager, ELEOSManagerUtility_Subclass); } \
	FORCEINLINE static uint32 __PPO__ELEOSManagerUtility_BpIns() { return STRUCT_OFFSET(UELEOSManager, ELEOSManagerUtility_BpIns); } \
	FORCEINLINE static uint32 __PPO__SSModeServiceParam() { return STRUCT_OFFSET(UELEOSManager, SSModeServiceParam); } \
	FORCEINLINE static uint32 __PPO__OnlineNotifyAction_NextTick() { return STRUCT_OFFSET(UELEOSManager, OnlineNotifyAction_NextTick); } \
	FORCEINLINE static uint32 __PPO__LastErrors() { return STRUCT_OFFSET(UELEOSManager, LastErrors); } \
	FORCEINLINE static uint32 __PPO__SSMode_EOSTitleStorageFileParams() { return STRUCT_OFFSET(UELEOSManager, SSMode_EOSTitleStorageFileParams); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_72_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELEOSManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELEOSManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
