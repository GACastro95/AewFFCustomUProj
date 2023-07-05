// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSFriendUser;
struct FLobbyChatLogData;
struct FDateTime;
 struct FLobbyCharacterData;
enum class EEOSFriendEvent : uint8;
class UEOSFriend;
class UEOSUserBase;
class UEOSNatP2PCachedTransfer;
class UEOSNatP2PBinary;
enum class EELEOSFriendNotify : uint8;
class UEOSManager;
class UEOSUser;
class UEOSStats;
class UEOSLeaderboard;
class UEOSPresenceBase;
#ifdef ABP_200508_ELEOSFriend_generated_h
#error "ELEOSFriend.generated.h already included, missing '#pragma once' in ELEOSFriend.h"
#endif
#define ABP_200508_ELEOSFriend_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClosePersonalChat); \
	DECLARE_FUNCTION(execFindFriendUser); \
	DECLARE_FUNCTION(execGetChatLog); \
	DECLARE_FUNCTION(execGetPersonalChatMember); \
	DECLARE_FUNCTION(execGetPersonalLastReadTime); \
	DECLARE_FUNCTION(execGetPersonalPlayers); \
	DECLARE_FUNCTION(execGetSortedFriendList); \
	DECLARE_FUNCTION(execGetUnreadPersonalChatCount); \
	DECLARE_FUNCTION(execOnFriendEvent); \
	DECLARE_FUNCTION(execOnReceive); \
	DECLARE_FUNCTION(execOnUpdatePUIDEvent); \
	DECLARE_FUNCTION(execOpenPersonalChat); \
	DECLARE_FUNCTION(execQueryFriendPlayerIconStats); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execSendNotify); \
	DECLARE_FUNCTION(execSendPersonalChat); \
	DECLARE_FUNCTION(execSendPersonalStamp); \
	DECLARE_FUNCTION(execSetPersonalLastReadTime); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execUpdateFriendPresence); \
	DECLARE_FUNCTION(execUpdateInfo);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClosePersonalChat); \
	DECLARE_FUNCTION(execFindFriendUser); \
	DECLARE_FUNCTION(execGetChatLog); \
	DECLARE_FUNCTION(execGetPersonalChatMember); \
	DECLARE_FUNCTION(execGetPersonalLastReadTime); \
	DECLARE_FUNCTION(execGetPersonalPlayers); \
	DECLARE_FUNCTION(execGetSortedFriendList); \
	DECLARE_FUNCTION(execGetUnreadPersonalChatCount); \
	DECLARE_FUNCTION(execOnFriendEvent); \
	DECLARE_FUNCTION(execOnReceive); \
	DECLARE_FUNCTION(execOnUpdatePUIDEvent); \
	DECLARE_FUNCTION(execOpenPersonalChat); \
	DECLARE_FUNCTION(execQueryFriendPlayerIconStats); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execSendNotify); \
	DECLARE_FUNCTION(execSendPersonalChat); \
	DECLARE_FUNCTION(execSendPersonalStamp); \
	DECLARE_FUNCTION(execSetPersonalLastReadTime); \
	DECLARE_FUNCTION(execSetup); \
	DECLARE_FUNCTION(execUpdateFriendPresence); \
	DECLARE_FUNCTION(execUpdateInfo);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELEOSFriend(); \
	friend struct Z_Construct_UClass_UELEOSFriend_Statics; \
public: \
	DECLARE_CLASS(UELEOSFriend, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELEOSFriend)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUELEOSFriend(); \
	friend struct Z_Construct_UClass_UELEOSFriend_Statics; \
public: \
	DECLARE_CLASS(UELEOSFriend, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELEOSFriend)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELEOSFriend(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELEOSFriend) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELEOSFriend); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELEOSFriend); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELEOSFriend(UELEOSFriend&&); \
	NO_API UELEOSFriend(const UELEOSFriend&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELEOSFriend(UELEOSFriend&&); \
	NO_API UELEOSFriend(const UELEOSFriend&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELEOSFriend); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELEOSFriend); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELEOSFriend)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EOSManager() { return STRUCT_OFFSET(UELEOSFriend, EOSManager); } \
	FORCEINLINE static uint32 __PPO__EOSUser() { return STRUCT_OFFSET(UELEOSFriend, EOSUser); } \
	FORCEINLINE static uint32 __PPO__EOSFriend() { return STRUCT_OFFSET(UELEOSFriend, EOSFriend); } \
	FORCEINLINE static uint32 __PPO__EOSStats() { return STRUCT_OFFSET(UELEOSFriend, EOSStats); } \
	FORCEINLINE static uint32 __PPO__EOSLeaderboard() { return STRUCT_OFFSET(UELEOSFriend, EOSLeaderboard); } \
	FORCEINLINE static uint32 __PPO__EOSNatP2P() { return STRUCT_OFFSET(UELEOSFriend, EOSNatP2P); } \
	FORCEINLINE static uint32 __PPO__EOSNatP2PTransfer() { return STRUCT_OFFSET(UELEOSFriend, EOSNatP2PTransfer); } \
	FORCEINLINE static uint32 __PPO__DefaultSocketID() { return STRUCT_OFFSET(UELEOSFriend, DefaultSocketID); } \
	FORCEINLINE static uint32 __PPO__PersonalPlayers() { return STRUCT_OFFSET(UELEOSFriend, PersonalPlayers); } \
	FORCEINLINE static uint32 __PPO__PersonalChatLog() { return STRUCT_OFFSET(UELEOSFriend, PersonalChatLog); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_27_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELEOSFriend>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELEOSFriend_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
