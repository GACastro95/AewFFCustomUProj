// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EUserPrivilegeBit : uint8;
 
struct FELFriendInfo;
enum class EELFriendsListType : uint8;
enum class ELOSSFriendStatus : uint8;
enum class EELEOSEventType : uint8;
enum class EELEOSEventResult : uint8;
#ifdef ABP_200508_ELOSSLocalPlayer_generated_h
#error "ELOSSLocalPlayer.generated.h already included, missing '#pragma once' in ELOSSLocalPlayer.h"
#endif
#define ABP_200508_ELOSSLocalPlayer_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsyncHasCanCommunicateOnlinePrivilege); \
	DECLARE_FUNCTION(execAsyncHasCanPlayOnlinePrivilege); \
	DECLARE_FUNCTION(execAsyncQueryCanOnlinePlayPrivilege); \
	DECLARE_FUNCTION(execAsyncQueryUserPrivileges); \
	DECLARE_FUNCTION(execAsyncReadOSSFriendsList); \
	DECLARE_FUNCTION(execGetBlockedPlayers); \
	DECLARE_FUNCTION(execGetOSSAccountNickName); \
	DECLARE_FUNCTION(execGetOSSFriendsList); \
	DECLARE_FUNCTION(execGetOSSFriendsProductUserIdList); \
	DECLARE_FUNCTION(execGetOSSFriendStatusByProductUserId); \
	DECLARE_FUNCTION(execHasAnyPrivilegeError); \
	DECLARE_FUNCTION(execHasCanAccessOnlinePrivilege); \
	DECLARE_FUNCTION(execHasCanCommunicateOnlinePrivilege); \
	DECLARE_FUNCTION(execHasCanCommunicateOnlinePrivilegeError); \
	DECLARE_FUNCTION(execHasCanJoinPartyPrivilege); \
	DECLARE_FUNCTION(execHasCanPlayOnlinePrivilege); \
	DECLARE_FUNCTION(execHasCanPlayOnlinePrivilegeError); \
	DECLARE_FUNCTION(execHasCanPlayPrivilege); \
	DECLARE_FUNCTION(execHasCanUseUGCPrivilege); \
	DECLARE_FUNCTION(execHasCanUseUGCPrivilegeError); \
	DECLARE_FUNCTION(execHasCanUseUserCrossPlayPrivilege); \
	DECLARE_FUNCTION(execHasCanUseUserCrossPlayPrivilegeError); \
	DECLARE_FUNCTION(execHasOnlineAgeRestriction); \
	DECLARE_FUNCTION(execHasRequiredPatch); \
	DECLARE_FUNCTION(execIsBlockedUser); \
	DECLARE_FUNCTION(execIsOSSFirstLoggedin); \
	DECLARE_FUNCTION(execIsPlatformLoggedIn); \
	DECLARE_FUNCTION(execOnEOSEvent); \
	DECLARE_FUNCTION(execOnWindowFocusChanged); \
	DECLARE_FUNCTION(execQueryBlockedPlayers); \
	DECLARE_FUNCTION(execQueryBlockedPlayersWithDelegate); \
	DECLARE_FUNCTION(execReadOSSFriendsList); \
	DECLARE_FUNCTION(execRefreshPlayOnlinePrivilege); \
	DECLARE_FUNCTION(execResetOSSFirstLoggedin); \
	DECLARE_FUNCTION(execSetOSSRichPresence); \
	DECLARE_FUNCTION(execSetOSSStats); \
	DECLARE_FUNCTION(execShowLoginUI); \
	DECLARE_FUNCTION(execUnlockOSSAchievement);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsyncHasCanCommunicateOnlinePrivilege); \
	DECLARE_FUNCTION(execAsyncHasCanPlayOnlinePrivilege); \
	DECLARE_FUNCTION(execAsyncQueryCanOnlinePlayPrivilege); \
	DECLARE_FUNCTION(execAsyncQueryUserPrivileges); \
	DECLARE_FUNCTION(execAsyncReadOSSFriendsList); \
	DECLARE_FUNCTION(execGetBlockedPlayers); \
	DECLARE_FUNCTION(execGetOSSAccountNickName); \
	DECLARE_FUNCTION(execGetOSSFriendsList); \
	DECLARE_FUNCTION(execGetOSSFriendsProductUserIdList); \
	DECLARE_FUNCTION(execGetOSSFriendStatusByProductUserId); \
	DECLARE_FUNCTION(execHasAnyPrivilegeError); \
	DECLARE_FUNCTION(execHasCanAccessOnlinePrivilege); \
	DECLARE_FUNCTION(execHasCanCommunicateOnlinePrivilege); \
	DECLARE_FUNCTION(execHasCanCommunicateOnlinePrivilegeError); \
	DECLARE_FUNCTION(execHasCanJoinPartyPrivilege); \
	DECLARE_FUNCTION(execHasCanPlayOnlinePrivilege); \
	DECLARE_FUNCTION(execHasCanPlayOnlinePrivilegeError); \
	DECLARE_FUNCTION(execHasCanPlayPrivilege); \
	DECLARE_FUNCTION(execHasCanUseUGCPrivilege); \
	DECLARE_FUNCTION(execHasCanUseUGCPrivilegeError); \
	DECLARE_FUNCTION(execHasCanUseUserCrossPlayPrivilege); \
	DECLARE_FUNCTION(execHasCanUseUserCrossPlayPrivilegeError); \
	DECLARE_FUNCTION(execHasOnlineAgeRestriction); \
	DECLARE_FUNCTION(execHasRequiredPatch); \
	DECLARE_FUNCTION(execIsBlockedUser); \
	DECLARE_FUNCTION(execIsOSSFirstLoggedin); \
	DECLARE_FUNCTION(execIsPlatformLoggedIn); \
	DECLARE_FUNCTION(execOnEOSEvent); \
	DECLARE_FUNCTION(execOnWindowFocusChanged); \
	DECLARE_FUNCTION(execQueryBlockedPlayers); \
	DECLARE_FUNCTION(execQueryBlockedPlayersWithDelegate); \
	DECLARE_FUNCTION(execReadOSSFriendsList); \
	DECLARE_FUNCTION(execRefreshPlayOnlinePrivilege); \
	DECLARE_FUNCTION(execResetOSSFirstLoggedin); \
	DECLARE_FUNCTION(execSetOSSRichPresence); \
	DECLARE_FUNCTION(execSetOSSStats); \
	DECLARE_FUNCTION(execShowLoginUI); \
	DECLARE_FUNCTION(execUnlockOSSAchievement);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELOSSLocalPlayer(); \
	friend struct Z_Construct_UClass_UELOSSLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(UELOSSLocalPlayer, ULocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELOSSLocalPlayer)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUELOSSLocalPlayer(); \
	friend struct Z_Construct_UClass_UELOSSLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(UELOSSLocalPlayer, ULocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELOSSLocalPlayer)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELOSSLocalPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELOSSLocalPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELOSSLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELOSSLocalPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELOSSLocalPlayer(UELOSSLocalPlayer&&); \
	NO_API UELOSSLocalPlayer(const UELOSSLocalPlayer&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELOSSLocalPlayer(UELOSSLocalPlayer&&); \
	NO_API UELOSSLocalPlayer(const UELOSSLocalPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELOSSLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELOSSLocalPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELOSSLocalPlayer)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__OnQueryPrivileges() { return STRUCT_OFFSET(UELOSSLocalPlayer, OnQueryPrivileges); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_20_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELOSSLocalPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELOSSLocalPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
