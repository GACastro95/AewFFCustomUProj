// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSMetricsSettings;
class UEOSSessionP2P;
class UEOSCommunityInfoBase;
class UEOSSessionSearchResults;
struct FEOSSessionSettings;
class UEOSAPIRequestCallback;
class UEOSAttribute;
struct FEOSMetricsAPIVersionSettings;
struct FEOSSessionAPIVersionSettings;
#ifdef YEOSSDK_EOSSession_generated_h
#error "EOSSession.generated.h already included, missing '#pragma once' in EOSSession.h"
#endif
#define YEOSSDK_EOSSession_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginPlayerSession); \
	DECLARE_FUNCTION(execCreateSessionP2P); \
	DECLARE_FUNCTION(execEndPlayerSession); \
	DECLARE_FUNCTION(execGenerateRandomStringForSessionName); \
	DECLARE_FUNCTION(execGetAccountDisplayNameForSession); \
	DECLARE_FUNCTION(execGetDetailsByInvite); \
	DECLARE_FUNCTION(execGetDetailsBySearchIndex); \
	DECLARE_FUNCTION(execGetDetailsCurrent); \
	DECLARE_FUNCTION(execGetLastMetricsSettings); \
	DECLARE_FUNCTION(execRequestCreateSession); \
	DECLARE_FUNCTION(execRequestDestroySession); \
	DECLARE_FUNCTION(execRequestEndSession); \
	DECLARE_FUNCTION(execRequestInviteSession); \
	DECLARE_FUNCTION(execRequestJoinSession); \
	DECLARE_FUNCTION(execRequestLeaveSession); \
	DECLARE_FUNCTION(execRequestQueryInvites); \
	DECLARE_FUNCTION(execRequestRegistUser); \
	DECLARE_FUNCTION(execRequestRejectInvite); \
	DECLARE_FUNCTION(execRequestRemovetAttribute); \
	DECLARE_FUNCTION(execRequestSearchSession); \
	DECLARE_FUNCTION(execRequestSearchSessionBySessionID); \
	DECLARE_FUNCTION(execRequestSetAttribute); \
	DECLARE_FUNCTION(execRequestStartSession); \
	DECLARE_FUNCTION(execRequestUnregistUser); \
	DECLARE_FUNCTION(execRequestUpdateSession); \
	DECLARE_FUNCTION(execSetApiVersionForMetrics); \
	DECLARE_FUNCTION(execSetApiVersionForSession); \
	DECLARE_FUNCTION(execSetAutoCreationSessionP2P); \
	DECLARE_FUNCTION(execSetSessionP2PChannelList); \
	DECLARE_FUNCTION(execSetupInternalCallback);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginPlayerSession); \
	DECLARE_FUNCTION(execCreateSessionP2P); \
	DECLARE_FUNCTION(execEndPlayerSession); \
	DECLARE_FUNCTION(execGenerateRandomStringForSessionName); \
	DECLARE_FUNCTION(execGetAccountDisplayNameForSession); \
	DECLARE_FUNCTION(execGetDetailsByInvite); \
	DECLARE_FUNCTION(execGetDetailsBySearchIndex); \
	DECLARE_FUNCTION(execGetDetailsCurrent); \
	DECLARE_FUNCTION(execGetLastMetricsSettings); \
	DECLARE_FUNCTION(execRequestCreateSession); \
	DECLARE_FUNCTION(execRequestDestroySession); \
	DECLARE_FUNCTION(execRequestEndSession); \
	DECLARE_FUNCTION(execRequestInviteSession); \
	DECLARE_FUNCTION(execRequestJoinSession); \
	DECLARE_FUNCTION(execRequestLeaveSession); \
	DECLARE_FUNCTION(execRequestQueryInvites); \
	DECLARE_FUNCTION(execRequestRegistUser); \
	DECLARE_FUNCTION(execRequestRejectInvite); \
	DECLARE_FUNCTION(execRequestRemovetAttribute); \
	DECLARE_FUNCTION(execRequestSearchSession); \
	DECLARE_FUNCTION(execRequestSearchSessionBySessionID); \
	DECLARE_FUNCTION(execRequestSetAttribute); \
	DECLARE_FUNCTION(execRequestStartSession); \
	DECLARE_FUNCTION(execRequestUnregistUser); \
	DECLARE_FUNCTION(execRequestUpdateSession); \
	DECLARE_FUNCTION(execSetApiVersionForMetrics); \
	DECLARE_FUNCTION(execSetApiVersionForSession); \
	DECLARE_FUNCTION(execSetAutoCreationSessionP2P); \
	DECLARE_FUNCTION(execSetSessionP2PChannelList); \
	DECLARE_FUNCTION(execSetupInternalCallback);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSSession(); \
	friend struct Z_Construct_UClass_UEOSSession_Statics; \
public: \
	DECLARE_CLASS(UEOSSession, UEOSCommunityBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSession)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUEOSSession(); \
	friend struct Z_Construct_UClass_UEOSSession_Statics; \
public: \
	DECLARE_CLASS(UEOSSession, UEOSCommunityBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSession)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSSession(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSession(UEOSSession&&); \
	NO_API UEOSSession(const UEOSSession&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSession(UEOSSession&&); \
	NO_API UEOSSession(const UEOSSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSession); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSSession)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cOwnRequests() { return STRUCT_OFFSET(UEOSSession, m_cOwnRequests); } \
	FORCEINLINE static uint32 __PPO__m_stLastMetricsSettings() { return STRUCT_OFFSET(UEOSSession, m_stLastMetricsSettings); } \
	FORCEINLINE static uint32 __PPO__m_cChannelList() { return STRUCT_OFFSET(UEOSSession, m_cChannelList); } \
	FORCEINLINE static uint32 __PPO__DebugSessionCreateErr() { return STRUCT_OFFSET(UEOSSession, DebugSessionCreateErr); } \
	FORCEINLINE static uint32 __PPO__DebugSessionDestroyErr() { return STRUCT_OFFSET(UEOSSession, DebugSessionDestroyErr); } \
	FORCEINLINE static uint32 __PPO__DebugSessionJoinErr() { return STRUCT_OFFSET(UEOSSession, DebugSessionJoinErr); } \
	FORCEINLINE static uint32 __PPO__DebugSessionLeaveErr() { return STRUCT_OFFSET(UEOSSession, DebugSessionLeaveErr); } \
	FORCEINLINE static uint32 __PPO__DebugSessionStartErr() { return STRUCT_OFFSET(UEOSSession, DebugSessionStartErr); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_19_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSSession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSession_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
