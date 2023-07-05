// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELNetworkGUID;
class UObject;
enum class EELNetObjectGuid : uint8;
class UELNatP2PRPCPacket;
class UEOSNatP2PCachedTransfer;
class UEOSUserBase;
class UEOSNatP2PBinary;
class UEOSNatP2P;
class UEOSCommunityInfoBase;
class UEOSSessionP2P;
#ifdef ABP_200508_ELReplicationManager_generated_h
#error "ELReplicationManager.generated.h already included, missing '#pragma once' in ELReplicationManager.h"
#endif
#define ABP_200508_ELReplicationManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddObject); \
	DECLARE_FUNCTION(execAddUniqueObject); \
	DECLARE_FUNCTION(execAddUniqueObjectToEmptyGuid); \
	DECLARE_FUNCTION(execCreateGuidFromSeedAndOffset); \
	DECLARE_FUNCTION(execCreateRPCPacket); \
	DECLARE_FUNCTION(execGetFirstGuid); \
	DECLARE_FUNCTION(execGetNextGuid); \
	DECLARE_FUNCTION(execGetRPCPacket); \
	DECLARE_FUNCTION(execGetSentPacketSize); \
	DECLARE_FUNCTION(execInitializeReplicationObjects); \
	DECLARE_FUNCTION(execIsWaitingAllP2PConnections); \
	DECLARE_FUNCTION(execOnReceiveRPC); \
	DECLARE_FUNCTION(execProcessRPC); \
	DECLARE_FUNCTION(execReleaseP2P); \
	DECLARE_FUNCTION(execRemoveObject); \
	DECLARE_FUNCTION(execSendReplications); \
	DECLARE_FUNCTION(execSetEnabledReplication); \
	DECLARE_FUNCTION(execSetGuidSeed); \
	DECLARE_FUNCTION(execSetReplicationInterval); \
	DECLARE_FUNCTION(execSetReplicationObject); \
	DECLARE_FUNCTION(execSetupP2P); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateSessionUsers);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddObject); \
	DECLARE_FUNCTION(execAddUniqueObject); \
	DECLARE_FUNCTION(execAddUniqueObjectToEmptyGuid); \
	DECLARE_FUNCTION(execCreateGuidFromSeedAndOffset); \
	DECLARE_FUNCTION(execCreateRPCPacket); \
	DECLARE_FUNCTION(execGetFirstGuid); \
	DECLARE_FUNCTION(execGetNextGuid); \
	DECLARE_FUNCTION(execGetRPCPacket); \
	DECLARE_FUNCTION(execGetSentPacketSize); \
	DECLARE_FUNCTION(execInitializeReplicationObjects); \
	DECLARE_FUNCTION(execIsWaitingAllP2PConnections); \
	DECLARE_FUNCTION(execOnReceiveRPC); \
	DECLARE_FUNCTION(execProcessRPC); \
	DECLARE_FUNCTION(execReleaseP2P); \
	DECLARE_FUNCTION(execRemoveObject); \
	DECLARE_FUNCTION(execSendReplications); \
	DECLARE_FUNCTION(execSetEnabledReplication); \
	DECLARE_FUNCTION(execSetGuidSeed); \
	DECLARE_FUNCTION(execSetReplicationInterval); \
	DECLARE_FUNCTION(execSetReplicationObject); \
	DECLARE_FUNCTION(execSetupP2P); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateSessionUsers);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELReplicationManager(); \
	friend struct Z_Construct_UClass_UELReplicationManager_Statics; \
public: \
	DECLARE_CLASS(UELReplicationManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELReplicationManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUELReplicationManager(); \
	friend struct Z_Construct_UClass_UELReplicationManager_Statics; \
public: \
	DECLARE_CLASS(UELReplicationManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELReplicationManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELReplicationManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELReplicationManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELReplicationManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELReplicationManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELReplicationManager(UELReplicationManager&&); \
	NO_API UELReplicationManager(const UELReplicationManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELReplicationManager(UELReplicationManager&&); \
	NO_API UELReplicationManager(const UELReplicationManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELReplicationManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELReplicationManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELReplicationManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NetObjectMap() { return STRUCT_OFFSET(UELReplicationManager, NetObjectMap); } \
	FORCEINLINE static uint32 __PPO__NatP2P() { return STRUCT_OFFSET(UELReplicationManager, NatP2P); } \
	FORCEINLINE static uint32 __PPO__P2PRPCPacket() { return STRUCT_OFFSET(UELReplicationManager, P2PRPCPacket); } \
	FORCEINLINE static uint32 __PPO__P2PRPCTransfer() { return STRUCT_OFFSET(UELReplicationManager, P2PRPCTransfer); } \
	FORCEINLINE static uint32 __PPO__ReplicationObjects() { return STRUCT_OFFSET(UELReplicationManager, ReplicationObjects); } \
	FORCEINLINE static uint32 __PPO__SocketID() { return STRUCT_OFFSET(UELReplicationManager, SocketID); } \
	FORCEINLINE static uint32 __PPO__GuidSeed() { return STRUCT_OFFSET(UELReplicationManager, GuidSeed); } \
	FORCEINLINE static uint32 __PPO__CurrentGuidIndex() { return STRUCT_OFFSET(UELReplicationManager, CurrentGuidIndex); } \
	FORCEINLINE static uint32 __PPO__SentPacketSize() { return STRUCT_OFFSET(UELReplicationManager, SentPacketSize); } \
	FORCEINLINE static uint32 __PPO__bEnabledReplication() { return STRUCT_OFFSET(UELReplicationManager, bEnabledReplication); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_18_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELReplicationManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELReplicationManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
