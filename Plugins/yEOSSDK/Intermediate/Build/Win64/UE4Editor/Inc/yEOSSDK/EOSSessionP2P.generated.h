// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSSessionUserPacketMap;
class UEOSCommunityUserBase;
class UEOSUserBase;
class UEOSSessionP2PPacketBase;
enum class EEOSSessionGameEventType : uint8;
enum class EEOSSessionHostMigrationStep : uint8;
class UEOSSessionInfo;
class UEOSSessionP2PAdditionalFunctionBase;
enum class EEOSSessionP2PAdditionalFunctionTypeBits : uint8;
enum class EEOSNatType : uint8;
class UEOSSessionP2PSynchronizedPacketBase;
class IEOSSessionP2PCallbackInterface;
struct FEOSNatP2PAPIVersionSettings;
class UEOSCommunityInfoBase;
class UEOSSession;
class UEOSSessionP2PPacketGeneratorBase;
enum class EEOSUpdateType : uint8;
#ifdef YEOSSDK_EOSSessionP2P_generated_h
#error "EOSSessionP2P.generated.h already included, missing '#pragma once' in EOSSessionP2P.h"
#endif
#define YEOSSDK_EOSSessionP2P_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddUserMap); \
	DECLARE_FUNCTION(execCloseConnection); \
	DECLARE_FUNCTION(execCloseSocket); \
	DECLARE_FUNCTION(execCreatePacket); \
	DECLARE_FUNCTION(execCreateReceivePacket); \
	DECLARE_FUNCTION(execGetAccountDisplayNameForOwnerUser); \
	DECLARE_FUNCTION(execGetAccountDisplayNameForSession); \
	DECLARE_FUNCTION(execGetActiveP2PProductUserIDList); \
	DECLARE_FUNCTION(execGetActiveUserMap); \
	DECLARE_FUNCTION(execGetAllPlayerGameEvent); \
	DECLARE_FUNCTION(execGetAllPlayerHostMigrationStep); \
	DECLARE_FUNCTION(execGetChannel); \
	DECLARE_FUNCTION(execGetConnectedPearNum); \
	DECLARE_FUNCTION(execGetCopiedUserMap); \
	DECLARE_FUNCTION(execGetEOSSessionInfo); \
	DECLARE_FUNCTION(execGetEOSSessionP2PAdditionalFunction); \
	DECLARE_FUNCTION(execGetNatType); \
	DECLARE_FUNCTION(execGetReceivedSynchronizedPacket); \
	DECLARE_FUNCTION(execGetSendSynchronizedPacket); \
	DECLARE_FUNCTION(execGetSocketID); \
	DECLARE_FUNCTION(execGetStringOfProductUserIDForOwnerUser); \
	DECLARE_FUNCTION(execGetTransferSize); \
	DECLARE_FUNCTION(execGetUserMap); \
	DECLARE_FUNCTION(execHasActiveP2PUserMap); \
	DECLARE_FUNCTION(execIsActiveP2PUser); \
	DECLARE_FUNCTION(execIsDoneAllPlayerCheckLatency); \
	DECLARE_FUNCTION(execIsDoneAllPlayerRegistedOnSession); \
	DECLARE_FUNCTION(execIsDoneSessionGamePause); \
	DECLARE_FUNCTION(execIsDoneSessionGameSetup); \
	DECLARE_FUNCTION(execIsHostMigratingNow); \
	DECLARE_FUNCTION(execIsLocalUserTheOwner); \
	DECLARE_FUNCTION(execIsSynchronizedAllPlayerPacket); \
	DECLARE_FUNCTION(execIsSynchronizedAllPlayerPackets); \
	DECLARE_FUNCTION(execOnSessionGameEnd); \
	DECLARE_FUNCTION(execOnSessionGamePause); \
	DECLARE_FUNCTION(execOnSessionGameResume); \
	DECLARE_FUNCTION(execOnSessionGameSetup); \
	DECLARE_FUNCTION(execOnSessionGameStart); \
	DECLARE_FUNCTION(execOnSessionSyncRequest); \
	DECLARE_FUNCTION(execRegistCallbackInterface); \
	DECLARE_FUNCTION(execRemoveUserMap); \
	DECLARE_FUNCTION(execRequestLatencyCheck); \
	DECLARE_FUNCTION(execRequestNatType); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetCommunityInfo); \
	DECLARE_FUNCTION(execSetEOSSession); \
	DECLARE_FUNCTION(execSetPacketGenerator); \
	DECLARE_FUNCTION(execSetReceivedPacketMaxCacheNum); \
	DECLARE_FUNCTION(execSetSessionP2PAdditionalFunctionBits); \
	DECLARE_FUNCTION(execSetUpdateType); \
	DECLARE_FUNCTION(execSetupInternalCallback); \
	DECLARE_FUNCTION(execSetupSocket); \
	DECLARE_FUNCTION(execUnregistCallbackInterface); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddUserMap); \
	DECLARE_FUNCTION(execCloseConnection); \
	DECLARE_FUNCTION(execCloseSocket); \
	DECLARE_FUNCTION(execCreatePacket); \
	DECLARE_FUNCTION(execCreateReceivePacket); \
	DECLARE_FUNCTION(execGetAccountDisplayNameForOwnerUser); \
	DECLARE_FUNCTION(execGetAccountDisplayNameForSession); \
	DECLARE_FUNCTION(execGetActiveP2PProductUserIDList); \
	DECLARE_FUNCTION(execGetActiveUserMap); \
	DECLARE_FUNCTION(execGetAllPlayerGameEvent); \
	DECLARE_FUNCTION(execGetAllPlayerHostMigrationStep); \
	DECLARE_FUNCTION(execGetChannel); \
	DECLARE_FUNCTION(execGetConnectedPearNum); \
	DECLARE_FUNCTION(execGetCopiedUserMap); \
	DECLARE_FUNCTION(execGetEOSSessionInfo); \
	DECLARE_FUNCTION(execGetEOSSessionP2PAdditionalFunction); \
	DECLARE_FUNCTION(execGetNatType); \
	DECLARE_FUNCTION(execGetReceivedSynchronizedPacket); \
	DECLARE_FUNCTION(execGetSendSynchronizedPacket); \
	DECLARE_FUNCTION(execGetSocketID); \
	DECLARE_FUNCTION(execGetStringOfProductUserIDForOwnerUser); \
	DECLARE_FUNCTION(execGetTransferSize); \
	DECLARE_FUNCTION(execGetUserMap); \
	DECLARE_FUNCTION(execHasActiveP2PUserMap); \
	DECLARE_FUNCTION(execIsActiveP2PUser); \
	DECLARE_FUNCTION(execIsDoneAllPlayerCheckLatency); \
	DECLARE_FUNCTION(execIsDoneAllPlayerRegistedOnSession); \
	DECLARE_FUNCTION(execIsDoneSessionGamePause); \
	DECLARE_FUNCTION(execIsDoneSessionGameSetup); \
	DECLARE_FUNCTION(execIsHostMigratingNow); \
	DECLARE_FUNCTION(execIsLocalUserTheOwner); \
	DECLARE_FUNCTION(execIsSynchronizedAllPlayerPacket); \
	DECLARE_FUNCTION(execIsSynchronizedAllPlayerPackets); \
	DECLARE_FUNCTION(execOnSessionGameEnd); \
	DECLARE_FUNCTION(execOnSessionGamePause); \
	DECLARE_FUNCTION(execOnSessionGameResume); \
	DECLARE_FUNCTION(execOnSessionGameSetup); \
	DECLARE_FUNCTION(execOnSessionGameStart); \
	DECLARE_FUNCTION(execOnSessionSyncRequest); \
	DECLARE_FUNCTION(execRegistCallbackInterface); \
	DECLARE_FUNCTION(execRemoveUserMap); \
	DECLARE_FUNCTION(execRequestLatencyCheck); \
	DECLARE_FUNCTION(execRequestNatType); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetCommunityInfo); \
	DECLARE_FUNCTION(execSetEOSSession); \
	DECLARE_FUNCTION(execSetPacketGenerator); \
	DECLARE_FUNCTION(execSetReceivedPacketMaxCacheNum); \
	DECLARE_FUNCTION(execSetSessionP2PAdditionalFunctionBits); \
	DECLARE_FUNCTION(execSetUpdateType); \
	DECLARE_FUNCTION(execSetupInternalCallback); \
	DECLARE_FUNCTION(execSetupSocket); \
	DECLARE_FUNCTION(execUnregistCallbackInterface); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSSessionP2P(); \
	friend struct Z_Construct_UClass_UEOSSessionP2P_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionP2P, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionP2P)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUEOSSessionP2P(); \
	friend struct Z_Construct_UClass_UEOSSessionP2P_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionP2P, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionP2P)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSSessionP2P(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSSessionP2P) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionP2P); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionP2P); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionP2P(UEOSSessionP2P&&); \
	NO_API UEOSSessionP2P(const UEOSSessionP2P&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionP2P(UEOSSessionP2P&&); \
	NO_API UEOSSessionP2P(const UEOSSessionP2P&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionP2P); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionP2P); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSSessionP2P)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcPacketGenerator() { return STRUCT_OFFSET(UEOSSessionP2P, m_pcPacketGenerator); } \
	FORCEINLINE static uint32 __PPO__m_cUserMaps() { return STRUCT_OFFSET(UEOSSessionP2P, m_cUserMaps); } \
	FORCEINLINE static uint32 __PPO__m_cCallbackParams() { return STRUCT_OFFSET(UEOSSessionP2P, m_cCallbackParams); } \
	FORCEINLINE static uint32 __PPO__m_cFunctions() { return STRUCT_OFFSET(UEOSSessionP2P, m_cFunctions); } \
	FORCEINLINE static uint32 __PPO__m_pcSession() { return STRUCT_OFFSET(UEOSSessionP2P, m_pcSession); } \
	FORCEINLINE static uint32 __PPO__m_pcSessionInfo() { return STRUCT_OFFSET(UEOSSessionP2P, m_pcSessionInfo); } \
	FORCEINLINE static uint32 __PPO__m_pcPacketQueue() { return STRUCT_OFFSET(UEOSSessionP2P, m_pcPacketQueue); } \
	FORCEINLINE static uint32 __PPO__m_CloseSessionScheduleQueue() { return STRUCT_OFFSET(UEOSSessionP2P, m_CloseSessionScheduleQueue); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_35_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSSessionP2P>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2P_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
