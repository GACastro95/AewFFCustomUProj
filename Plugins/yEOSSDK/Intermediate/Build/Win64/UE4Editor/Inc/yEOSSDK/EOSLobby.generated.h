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
enum class EEOSCommunityPermission : uint8;
class UEOSLobbySearchResults;
class UEOSAttribute;
struct FEOSLobbyAPIVersionSettings;
#ifdef YEOSSDK_EOSLobby_generated_h
#error "EOSLobby.generated.h already included, missing '#pragma once' in EOSLobby.h"
#endif
#define YEOSSDK_EOSLobby_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDetailsByInvite); \
	DECLARE_FUNCTION(execGetDetailsCurrent); \
	DECLARE_FUNCTION(execGetVoiceChatEnabled); \
	DECLARE_FUNCTION(execGetVoiceChatStartMuted); \
	DECLARE_FUNCTION(execRemoveInvite); \
	DECLARE_FUNCTION(execRequestBlockVoice); \
	DECLARE_FUNCTION(execRequestChangeOwner); \
	DECLARE_FUNCTION(execRequestClearBlockVoiceFlag); \
	DECLARE_FUNCTION(execRequestClearMuteVoiceFlag); \
	DECLARE_FUNCTION(execRequestCreateLobby); \
	DECLARE_FUNCTION(execRequestDeleteUser); \
	DECLARE_FUNCTION(execRequestDestroyLobby); \
	DECLARE_FUNCTION(execRequestDestroyLobbyForce); \
	DECLARE_FUNCTION(execRequestInviteLobby); \
	DECLARE_FUNCTION(execRequestJoinLobby); \
	DECLARE_FUNCTION(execRequestLeaveAllLobbies); \
	DECLARE_FUNCTION(execRequestLeaveLobby); \
	DECLARE_FUNCTION(execRequestMuteVoiceSelf); \
	DECLARE_FUNCTION(execRequestMuteVoiceUser); \
	DECLARE_FUNCTION(execRequestQueryInvites); \
	DECLARE_FUNCTION(execRequestRejectInvite); \
	DECLARE_FUNCTION(execRequestRemovetAttribute); \
	DECLARE_FUNCTION(execRequestRemovetMemberAttribute); \
	DECLARE_FUNCTION(execRequestSearchLobby); \
	DECLARE_FUNCTION(execRequestSearchLobbyByLobbyID); \
	DECLARE_FUNCTION(execRequestSearchLobbyByUser); \
	DECLARE_FUNCTION(execRequestSetAttribute); \
	DECLARE_FUNCTION(execRequestSetBlockVoiceFlag); \
	DECLARE_FUNCTION(execRequestSetLobbyParam); \
	DECLARE_FUNCTION(execRequestSetMemberAttribute); \
	DECLARE_FUNCTION(execRequestSetMuteVoiceFlag); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetupInternalCallback); \
	DECLARE_FUNCTION(execSetVoiceChatEnabled); \
	DECLARE_FUNCTION(execSetVoiceChatStartMuted);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDetailsByInvite); \
	DECLARE_FUNCTION(execGetDetailsCurrent); \
	DECLARE_FUNCTION(execGetVoiceChatEnabled); \
	DECLARE_FUNCTION(execGetVoiceChatStartMuted); \
	DECLARE_FUNCTION(execRemoveInvite); \
	DECLARE_FUNCTION(execRequestBlockVoice); \
	DECLARE_FUNCTION(execRequestChangeOwner); \
	DECLARE_FUNCTION(execRequestClearBlockVoiceFlag); \
	DECLARE_FUNCTION(execRequestClearMuteVoiceFlag); \
	DECLARE_FUNCTION(execRequestCreateLobby); \
	DECLARE_FUNCTION(execRequestDeleteUser); \
	DECLARE_FUNCTION(execRequestDestroyLobby); \
	DECLARE_FUNCTION(execRequestDestroyLobbyForce); \
	DECLARE_FUNCTION(execRequestInviteLobby); \
	DECLARE_FUNCTION(execRequestJoinLobby); \
	DECLARE_FUNCTION(execRequestLeaveAllLobbies); \
	DECLARE_FUNCTION(execRequestLeaveLobby); \
	DECLARE_FUNCTION(execRequestMuteVoiceSelf); \
	DECLARE_FUNCTION(execRequestMuteVoiceUser); \
	DECLARE_FUNCTION(execRequestQueryInvites); \
	DECLARE_FUNCTION(execRequestRejectInvite); \
	DECLARE_FUNCTION(execRequestRemovetAttribute); \
	DECLARE_FUNCTION(execRequestRemovetMemberAttribute); \
	DECLARE_FUNCTION(execRequestSearchLobby); \
	DECLARE_FUNCTION(execRequestSearchLobbyByLobbyID); \
	DECLARE_FUNCTION(execRequestSearchLobbyByUser); \
	DECLARE_FUNCTION(execRequestSetAttribute); \
	DECLARE_FUNCTION(execRequestSetBlockVoiceFlag); \
	DECLARE_FUNCTION(execRequestSetLobbyParam); \
	DECLARE_FUNCTION(execRequestSetMemberAttribute); \
	DECLARE_FUNCTION(execRequestSetMuteVoiceFlag); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetupInternalCallback); \
	DECLARE_FUNCTION(execSetVoiceChatEnabled); \
	DECLARE_FUNCTION(execSetVoiceChatStartMuted);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSLobby(); \
	friend struct Z_Construct_UClass_UEOSLobby_Statics; \
public: \
	DECLARE_CLASS(UEOSLobby, UEOSCommunityBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSLobby)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUEOSLobby(); \
	friend struct Z_Construct_UClass_UEOSLobby_Statics; \
public: \
	DECLARE_CLASS(UEOSLobby, UEOSCommunityBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSLobby)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSLobby(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSLobby) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSLobby); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSLobby(UEOSLobby&&); \
	NO_API UEOSLobby(const UEOSLobby&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSLobby(UEOSLobby&&); \
	NO_API UEOSLobby(const UEOSLobby&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSLobby); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSLobby); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSLobby)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cOwnRequests() { return STRUCT_OFFSET(UEOSLobby, m_cOwnRequests); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_15_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSLobby>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLobby_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
