// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSNatP2PCachedTransfer;
class UEOSUserBase;
class UEOSCommunityInfoBase;
enum class EEOSNatType : uint8;
enum class EEOSPacketReliability : uint8;
class UEOSNatP2PBinary;
class UEOSUserContentBinary;
class UEOSNatP2PPacketBase;
struct FEOSNatP2PAPIVersionSettings;
enum class EEOSUserType : uint8;
enum class EEOSUpdateType : uint8;
#ifdef YEOSSDK_EOSNatP2P_generated_h
#error "EOSNatP2P.generated.h already included, missing '#pragma once' in EOSNatP2P.h"
#endif
#define YEOSSDK_EOSNatP2P_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddAcceptSocket); \
	DECLARE_FUNCTION(execAddRequestChannel); \
	DECLARE_FUNCTION(execAddTransfer); \
	DECLARE_FUNCTION(execAddUser); \
	DECLARE_FUNCTION(execCreateP2PCachedTransfer); \
	DECLARE_FUNCTION(execGetNatType); \
	DECLARE_FUNCTION(execInitializeP2PCachedTransfer); \
	DECLARE_FUNCTION(execRemoveAcceptSocket); \
	DECLARE_FUNCTION(execRemoveRequestChannel); \
	DECLARE_FUNCTION(execRemoveTransfer); \
	DECLARE_FUNCTION(execRemoveUser); \
	DECLARE_FUNCTION(execRemoveUserById); \
	DECLARE_FUNCTION(execRequestNatType); \
	DECLARE_FUNCTION(execSendArray); \
	DECLARE_FUNCTION(execSendBinary); \
	DECLARE_FUNCTION(execSendContentBinary); \
	DECLARE_FUNCTION(execSendPacket); \
	DECLARE_FUNCTION(execSetAcceptAnyUser); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetOnlyTransferUpdates); \
	DECLARE_FUNCTION(execSetTargetUserType); \
	DECLARE_FUNCTION(execSetUpdateType); \
	DECLARE_FUNCTION(execSetupInternalCallback); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddAcceptSocket); \
	DECLARE_FUNCTION(execAddRequestChannel); \
	DECLARE_FUNCTION(execAddTransfer); \
	DECLARE_FUNCTION(execAddUser); \
	DECLARE_FUNCTION(execCreateP2PCachedTransfer); \
	DECLARE_FUNCTION(execGetNatType); \
	DECLARE_FUNCTION(execInitializeP2PCachedTransfer); \
	DECLARE_FUNCTION(execRemoveAcceptSocket); \
	DECLARE_FUNCTION(execRemoveRequestChannel); \
	DECLARE_FUNCTION(execRemoveTransfer); \
	DECLARE_FUNCTION(execRemoveUser); \
	DECLARE_FUNCTION(execRemoveUserById); \
	DECLARE_FUNCTION(execRequestNatType); \
	DECLARE_FUNCTION(execSendArray); \
	DECLARE_FUNCTION(execSendBinary); \
	DECLARE_FUNCTION(execSendContentBinary); \
	DECLARE_FUNCTION(execSendPacket); \
	DECLARE_FUNCTION(execSetAcceptAnyUser); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetOnlyTransferUpdates); \
	DECLARE_FUNCTION(execSetTargetUserType); \
	DECLARE_FUNCTION(execSetUpdateType); \
	DECLARE_FUNCTION(execSetupInternalCallback); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSNatP2P(); \
	friend struct Z_Construct_UClass_UEOSNatP2P_Statics; \
public: \
	DECLARE_CLASS(UEOSNatP2P, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSNatP2P)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUEOSNatP2P(); \
	friend struct Z_Construct_UClass_UEOSNatP2P_Statics; \
public: \
	DECLARE_CLASS(UEOSNatP2P, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSNatP2P)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSNatP2P(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSNatP2P) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSNatP2P); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSNatP2P); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSNatP2P(UEOSNatP2P&&); \
	NO_API UEOSNatP2P(const UEOSNatP2P&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSNatP2P(UEOSNatP2P&&); \
	NO_API UEOSNatP2P(const UEOSNatP2P&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSNatP2P); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSNatP2P); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSNatP2P)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cAcceptSocketIDs() { return STRUCT_OFFSET(UEOSNatP2P, m_cAcceptSocketIDs); } \
	FORCEINLINE static uint32 __PPO__m_cUsers() { return STRUCT_OFFSET(UEOSNatP2P, m_cUsers); } \
	FORCEINLINE static uint32 __PPO__m_cRequestChanneles() { return STRUCT_OFFSET(UEOSNatP2P, m_cRequestChanneles); } \
	FORCEINLINE static uint32 __PPO__m_pcUserManager() { return STRUCT_OFFSET(UEOSNatP2P, m_pcUserManager); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_22_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSNatP2P>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2P_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
