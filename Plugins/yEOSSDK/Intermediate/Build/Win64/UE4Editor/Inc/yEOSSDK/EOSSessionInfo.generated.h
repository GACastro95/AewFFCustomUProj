// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSSessionP2P;
class UEOSSessionP2PSynchronizedPacketBase;
class UEOSSessionP2PPacketBase;
 class UEOSSessionP2PPacketBase;
enum class EEOSSessionState : uint8;
class UEOSUserBase;
enum class EEOSSessionNotificationType : uint8;
#ifdef YEOSSDK_EOSSessionInfo_generated_h
#error "EOSSessionInfo.generated.h already included, missing '#pragma once' in EOSSessionInfo.h"
#endif
#define YEOSSDK_EOSSessionInfo_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDestroySessionP2P); \
	DECLARE_FUNCTION(execGetBucketID); \
	DECLARE_FUNCTION(execGetEOSSessionP2P); \
	DECLARE_FUNCTION(execGetHostAddress); \
	DECLARE_FUNCTION(execGetReceivedSynchronizedPacket); \
	DECLARE_FUNCTION(execGetSendPacket); \
	DECLARE_FUNCTION(execGetSendPackets); \
	DECLARE_FUNCTION(execGetSendSynchronizedPacket); \
	DECLARE_FUNCTION(execGetSessionState); \
	DECLARE_FUNCTION(execGetStringOfSessionID); \
	DECLARE_FUNCTION(execIsAllowJoinInProgress); \
	DECLARE_FUNCTION(execIsHostMigrationSession); \
	DECLARE_FUNCTION(execIsHostMigrationTarget); \
	DECLARE_FUNCTION(execIsPresenceEnabled); \
	DECLARE_FUNCTION(execSendConnectionPacket); \
	DECLARE_FUNCTION(execSendQuitGameOnSession); \
	DECLARE_FUNCTION(execSendSessionEventPacket); \
	DECLARE_FUNCTION(execSetEOSSessionP2P); \
	DECLARE_FUNCTION(execSetHostMigrationTarget);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDestroySessionP2P); \
	DECLARE_FUNCTION(execGetBucketID); \
	DECLARE_FUNCTION(execGetEOSSessionP2P); \
	DECLARE_FUNCTION(execGetHostAddress); \
	DECLARE_FUNCTION(execGetReceivedSynchronizedPacket); \
	DECLARE_FUNCTION(execGetSendPacket); \
	DECLARE_FUNCTION(execGetSendPackets); \
	DECLARE_FUNCTION(execGetSendSynchronizedPacket); \
	DECLARE_FUNCTION(execGetSessionState); \
	DECLARE_FUNCTION(execGetStringOfSessionID); \
	DECLARE_FUNCTION(execIsAllowJoinInProgress); \
	DECLARE_FUNCTION(execIsHostMigrationSession); \
	DECLARE_FUNCTION(execIsHostMigrationTarget); \
	DECLARE_FUNCTION(execIsPresenceEnabled); \
	DECLARE_FUNCTION(execSendConnectionPacket); \
	DECLARE_FUNCTION(execSendQuitGameOnSession); \
	DECLARE_FUNCTION(execSendSessionEventPacket); \
	DECLARE_FUNCTION(execSetEOSSessionP2P); \
	DECLARE_FUNCTION(execSetHostMigrationTarget);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSSessionInfo(); \
	friend struct Z_Construct_UClass_UEOSSessionInfo_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionInfo, UEOSCommunityInfoBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionInfo)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEOSSessionInfo(); \
	friend struct Z_Construct_UClass_UEOSSessionInfo_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionInfo, UEOSCommunityInfoBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionInfo)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSSessionInfo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSSessionInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionInfo(UEOSSessionInfo&&); \
	NO_API UEOSSessionInfo(const UEOSSessionInfo&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionInfo(UEOSSessionInfo&&); \
	NO_API UEOSSessionInfo(const UEOSSessionInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionInfo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSSessionInfo)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cSendPackets() { return STRUCT_OFFSET(UEOSSessionInfo, m_cSendPackets); } \
	FORCEINLINE static uint32 __PPO__m_pcSessionP2P() { return STRUCT_OFFSET(UEOSSessionInfo, m_pcSessionP2P); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_13_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSSessionInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
