// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSUserBase;
class UEOSCommunityInfoBase;
struct FELEOSGameSessionMatchingComplete;
struct FELEOSSessionSearchResultWrapper;
struct FEOSSessionSettings;
class UEOSCommunityUserBase;
class UObject;
class UEOSAttribute;
class UELEOSGameSession;
class UELEOSLobby;
class UEOSUser;
#ifdef ABP_200508_ELEOSGameSessionMatching_generated_h
#error "ELEOSGameSessionMatching.generated.h already included, missing '#pragma once' in ELEOSGameSessionMatching.h"
#endif
#define ABP_200508_ELEOSGameSessionMatching_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_33_DELEGATE \
static inline void FOnSessionCreate_DelegateWrapper(const FMulticastScriptDelegate& OnSessionCreate) \
{ \
	OnSessionCreate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_32_DELEGATE \
static inline void FOnSessionDestroy_DelegateWrapper(const FMulticastScriptDelegate& OnSessionDestroy) \
{ \
	OnSessionDestroy.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_31_DELEGATE \
struct ELEOSGameSessionMatching_eventOnSessionError_Parms \
{ \
	int32 _ErrorCode; \
}; \
static inline void FOnSessionError_DelegateWrapper(const FMulticastScriptDelegate& OnSessionError, int32 _ErrorCode) \
{ \
	ELEOSGameSessionMatching_eventOnSessionError_Parms Parms; \
	Parms._ErrorCode=_ErrorCode; \
	OnSessionError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_30_DELEGATE \
struct ELEOSGameSessionMatching_eventOnSessionJoin_Parms \
{ \
	UEOSUserBase* _CommunityUser; \
}; \
static inline void FOnSessionJoin_DelegateWrapper(const FMulticastScriptDelegate& OnSessionJoin, UEOSUserBase* _CommunityUser) \
{ \
	ELEOSGameSessionMatching_eventOnSessionJoin_Parms Parms; \
	Parms._CommunityUser=_CommunityUser; \
	OnSessionJoin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_29_DELEGATE \
struct ELEOSGameSessionMatching_eventOnSessionLeave_Parms \
{ \
	UEOSCommunityInfoBase* _CommunityInfo; \
	UEOSUserBase* _CommunityUser; \
}; \
static inline void FOnSessionLeave_DelegateWrapper(const FMulticastScriptDelegate& OnSessionLeave, UEOSCommunityInfoBase* _CommunityInfo, UEOSUserBase* _CommunityUser) \
{ \
	ELEOSGameSessionMatching_eventOnSessionLeave_Parms Parms; \
	Parms._CommunityInfo=_CommunityInfo; \
	Parms._CommunityUser=_CommunityUser; \
	OnSessionLeave.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_28_DELEGATE \
struct ELEOSGameSessionMatching_eventOnSessionMatchingComplete_Parms \
{ \
	FELEOSGameSessionMatchingComplete _Result; \
}; \
static inline void FOnSessionMatchingComplete_DelegateWrapper(const FMulticastScriptDelegate& OnSessionMatchingComplete, FELEOSGameSessionMatchingComplete const& _Result) \
{ \
	ELEOSGameSessionMatching_eventOnSessionMatchingComplete_Parms Parms; \
	Parms._Result=_Result; \
	OnSessionMatchingComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_27_DELEGATE \
static inline void FOnSessionMatchingResume_DelegateWrapper(const FMulticastScriptDelegate& OnSessionMatchingResume) \
{ \
	OnSessionMatchingResume.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_26_DELEGATE \
struct ELEOSGameSessionMatching_eventOnSessionSearchResult_Parms \
{ \
	FELEOSSessionSearchResultWrapper _Results; \
}; \
static inline void FOnSessionSearchResult_DelegateWrapper(const FMulticastScriptDelegate& OnSessionSearchResult, FELEOSSessionSearchResultWrapper _Results) \
{ \
	ELEOSGameSessionMatching_eventOnSessionSearchResult_Parms Parms; \
	Parms._Results=_Results; \
	OnSessionSearchResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_25_DELEGATE \
static inline void FOnSessionSearchResultNotFound_DelegateWrapper(const FMulticastScriptDelegate& OnSessionSearchResultNotFound) \
{ \
	OnSessionSearchResultNotFound.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_24_DELEGATE \
static inline void FOnSessionSearchStart_DelegateWrapper(const FMulticastScriptDelegate& OnSessionSearchStart) \
{ \
	OnSessionSearchStart.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_23_DELEGATE \
struct ELEOSGameSessionMatching_eventOnSessionSortPosition_Parms \
{ \
	FELEOSGameSessionMatchingComplete _Result; \
}; \
static inline void FOnSessionSortPosition_DelegateWrapper(const FMulticastScriptDelegate& OnSessionSortPosition, FELEOSGameSessionMatchingComplete const& _Result) \
{ \
	ELEOSGameSessionMatching_eventOnSessionSortPosition_Parms Parms; \
	Parms._Result=_Result; \
	OnSessionSortPosition.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_22_DELEGATE \
static inline void FOnUpdateMemberCount_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateMemberCount) \
{ \
	OnUpdateMemberCount.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateSession); \
	DECLARE_FUNCTION(execGetMaxPlayerCount); \
	DECLARE_FUNCTION(execGetNowPlayerCount); \
	DECLARE_FUNCTION(execGetOnlineMatchCount); \
	DECLARE_FUNCTION(execIsInSession); \
	DECLARE_FUNCTION(execIsSessionSearching); \
	DECLARE_FUNCTION(execIsSetup); \
	DECLARE_FUNCTION(execOnGameSessionCreate); \
	DECLARE_FUNCTION(execOnGameSessionDestroy); \
	DECLARE_FUNCTION(execOnGameSessionJoin); \
	DECLARE_FUNCTION(execOnGameSessionJoinErr); \
	DECLARE_FUNCTION(execOnGameSessionLeave); \
	DECLARE_FUNCTION(execOnGameSessionMemberJoin); \
	DECLARE_FUNCTION(execOnGameSessionMemberLeave); \
	DECLARE_FUNCTION(execOnGameSessionReceivedNotify); \
	DECLARE_FUNCTION(execOnGameSessionReceivedPartyData); \
	DECLARE_FUNCTION(execOnGameSessionSearchResult); \
	DECLARE_FUNCTION(execOnGameSessionUpdateSettings); \
	DECLARE_FUNCTION(execOnReceivedPositionData); \
	DECLARE_FUNCTION(execOnUpdateNatP2PTransfer); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execResetOnlineMatchCount); \
	DECLARE_FUNCTION(execSearchSession); \
	DECLARE_FUNCTION(execSearchSessionCancel); \
	DECLARE_FUNCTION(execSearchSessionInitParam); \
	DECLARE_FUNCTION(execSetOnlineMatchCount); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateSession); \
	DECLARE_FUNCTION(execGetMaxPlayerCount); \
	DECLARE_FUNCTION(execGetNowPlayerCount); \
	DECLARE_FUNCTION(execGetOnlineMatchCount); \
	DECLARE_FUNCTION(execIsInSession); \
	DECLARE_FUNCTION(execIsSessionSearching); \
	DECLARE_FUNCTION(execIsSetup); \
	DECLARE_FUNCTION(execOnGameSessionCreate); \
	DECLARE_FUNCTION(execOnGameSessionDestroy); \
	DECLARE_FUNCTION(execOnGameSessionJoin); \
	DECLARE_FUNCTION(execOnGameSessionJoinErr); \
	DECLARE_FUNCTION(execOnGameSessionLeave); \
	DECLARE_FUNCTION(execOnGameSessionMemberJoin); \
	DECLARE_FUNCTION(execOnGameSessionMemberLeave); \
	DECLARE_FUNCTION(execOnGameSessionReceivedNotify); \
	DECLARE_FUNCTION(execOnGameSessionReceivedPartyData); \
	DECLARE_FUNCTION(execOnGameSessionSearchResult); \
	DECLARE_FUNCTION(execOnGameSessionUpdateSettings); \
	DECLARE_FUNCTION(execOnReceivedPositionData); \
	DECLARE_FUNCTION(execOnUpdateNatP2PTransfer); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execResetOnlineMatchCount); \
	DECLARE_FUNCTION(execSearchSession); \
	DECLARE_FUNCTION(execSearchSessionCancel); \
	DECLARE_FUNCTION(execSearchSessionInitParam); \
	DECLARE_FUNCTION(execSetOnlineMatchCount); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELEOSGameSessionMatching(); \
	friend struct Z_Construct_UClass_UELEOSGameSessionMatching_Statics; \
public: \
	DECLARE_CLASS(UELEOSGameSessionMatching, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELEOSGameSessionMatching)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUELEOSGameSessionMatching(); \
	friend struct Z_Construct_UClass_UELEOSGameSessionMatching_Statics; \
public: \
	DECLARE_CLASS(UELEOSGameSessionMatching, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELEOSGameSessionMatching)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELEOSGameSessionMatching(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELEOSGameSessionMatching) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELEOSGameSessionMatching); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELEOSGameSessionMatching); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELEOSGameSessionMatching(UELEOSGameSessionMatching&&); \
	NO_API UELEOSGameSessionMatching(const UELEOSGameSessionMatching&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELEOSGameSessionMatching(UELEOSGameSessionMatching&&); \
	NO_API UELEOSGameSessionMatching(const UELEOSGameSessionMatching&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELEOSGameSessionMatching); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELEOSGameSessionMatching); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELEOSGameSessionMatching)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ELGameSession() { return STRUCT_OFFSET(UELEOSGameSessionMatching, ELGameSession); } \
	FORCEINLINE static uint32 __PPO__ELLobby() { return STRUCT_OFFSET(UELEOSGameSessionMatching, ELLobby); } \
	FORCEINLINE static uint32 __PPO__EOSUser() { return STRUCT_OFFSET(UELEOSGameSessionMatching, EOSUser); } \
	FORCEINLINE static uint32 __PPO__SetupComplete() { return STRUCT_OFFSET(UELEOSGameSessionMatching, SetupComplete); } \
	FORCEINLINE static uint32 __PPO__SearchSessionResultCount() { return STRUCT_OFFSET(UELEOSGameSessionMatching, SearchSessionResultCount); } \
	FORCEINLINE static uint32 __PPO__CreateSessionMaxPlayerCount() { return STRUCT_OFFSET(UELEOSGameSessionMatching, CreateSessionMaxPlayerCount); } \
	FORCEINLINE static uint32 __PPO__SelfSessionPartyData() { return STRUCT_OFFSET(UELEOSGameSessionMatching, SelfSessionPartyData); } \
	FORCEINLINE static uint32 __PPO__SessionPartyData() { return STRUCT_OFFSET(UELEOSGameSessionMatching, SessionPartyData); } \
	FORCEINLINE static uint32 __PPO__SessionPartyDataAllowed() { return STRUCT_OFFSET(UELEOSGameSessionMatching, SessionPartyDataAllowed); } \
	FORCEINLINE static uint32 __PPO__SessionInvitePlayer() { return STRUCT_OFFSET(UELEOSGameSessionMatching, SessionInvitePlayer); } \
	FORCEINLINE static uint32 __PPO__SessionAllowedPlayer() { return STRUCT_OFFSET(UELEOSGameSessionMatching, SessionAllowedPlayer); } \
	FORCEINLINE static uint32 __PPO__UpdateMember() { return STRUCT_OFFSET(UELEOSGameSessionMatching, UpdateMember); } \
	FORCEINLINE static uint32 __PPO__UpdatePermission() { return STRUCT_OFFSET(UELEOSGameSessionMatching, UpdatePermission); } \
	FORCEINLINE static uint32 __PPO__UpdatePositionData() { return STRUCT_OFFSET(UELEOSGameSessionMatching, UpdatePositionData); } \
	FORCEINLINE static uint32 __PPO__MatchingComplete() { return STRUCT_OFFSET(UELEOSGameSessionMatching, MatchingComplete); } \
	FORCEINLINE static uint32 __PPO__bSearchSessionCancel() { return STRUCT_OFFSET(UELEOSGameSessionMatching, bSearchSessionCancel); } \
	FORCEINLINE static uint32 __PPO__UpdateMemberCount() { return STRUCT_OFFSET(UELEOSGameSessionMatching, UpdateMemberCount); } \
	FORCEINLINE static uint32 __PPO__OnlineMatchCount() { return STRUCT_OFFSET(UELEOSGameSessionMatching, OnlineMatchCount); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_18_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELEOSGameSessionMatching>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELEOSGameSessionMatching_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
