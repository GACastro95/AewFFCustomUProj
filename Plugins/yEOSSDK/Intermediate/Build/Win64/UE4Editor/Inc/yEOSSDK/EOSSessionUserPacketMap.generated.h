// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSSessionP2PPacketBase;
enum class EEOSP2PActiveFlag : uint8;
enum class EEOSNatP2PConnectionStatus : uint8;
class UEOSSessionP2PSynchronizedPacketBase;
class UEOSSessionP2P;
 class UEOSSessionP2PPacketBase;
 class UEOSSessionP2PSynchronizedPacketBase;
class UEOSSessionUser;
#ifdef YEOSSDK_EOSSessionUserPacketMap_generated_h
#error "EOSSessionUserPacketMap.generated.h already included, missing '#pragma once' in EOSSessionUserPacketMap.h"
#endif
#define YEOSSDK_EOSSessionUserPacketMap_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindReceivedPacket); \
	DECLARE_FUNCTION(execGetP2PActiveFlag); \
	DECLARE_FUNCTION(execGetP2PConnectionStatus); \
	DECLARE_FUNCTION(execGetReceivedPacket); \
	DECLARE_FUNCTION(execGetReceivedSynchronizedPacket); \
	DECLARE_FUNCTION(execGetSendPacket); \
	DECLARE_FUNCTION(execGetSendPackets); \
	DECLARE_FUNCTION(execGetSendSynchronizedPacket); \
	DECLARE_FUNCTION(execGetSendSynchronizedPackets); \
	DECLARE_FUNCTION(execGetSessionUser); \
	DECLARE_FUNCTION(execIsOwner); \
	DECLARE_FUNCTION(execIsSynchronizedAllPlayerPackets); \
	DECLARE_FUNCTION(execSetP2PActiveFlag); \
	DECLARE_FUNCTION(execSetP2PConnectionStatus); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindReceivedPacket); \
	DECLARE_FUNCTION(execGetP2PActiveFlag); \
	DECLARE_FUNCTION(execGetP2PConnectionStatus); \
	DECLARE_FUNCTION(execGetReceivedPacket); \
	DECLARE_FUNCTION(execGetReceivedSynchronizedPacket); \
	DECLARE_FUNCTION(execGetSendPacket); \
	DECLARE_FUNCTION(execGetSendPackets); \
	DECLARE_FUNCTION(execGetSendSynchronizedPacket); \
	DECLARE_FUNCTION(execGetSendSynchronizedPackets); \
	DECLARE_FUNCTION(execGetSessionUser); \
	DECLARE_FUNCTION(execIsOwner); \
	DECLARE_FUNCTION(execIsSynchronizedAllPlayerPackets); \
	DECLARE_FUNCTION(execSetP2PActiveFlag); \
	DECLARE_FUNCTION(execSetP2PConnectionStatus); \
	DECLARE_FUNCTION(execSetup);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSSessionUserPacketMap(); \
	friend struct Z_Construct_UClass_UEOSSessionUserPacketMap_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionUserPacketMap, UEOSLockebleBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionUserPacketMap)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEOSSessionUserPacketMap(); \
	friend struct Z_Construct_UClass_UEOSSessionUserPacketMap_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionUserPacketMap, UEOSLockebleBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionUserPacketMap)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSSessionUserPacketMap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSSessionUserPacketMap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionUserPacketMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionUserPacketMap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionUserPacketMap(UEOSSessionUserPacketMap&&); \
	NO_API UEOSSessionUserPacketMap(const UEOSSessionUserPacketMap&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionUserPacketMap(UEOSSessionUserPacketMap&&); \
	NO_API UEOSSessionUserPacketMap(const UEOSSessionUserPacketMap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionUserPacketMap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionUserPacketMap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSSessionUserPacketMap)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcSessionUser() { return STRUCT_OFFSET(UEOSSessionUserPacketMap, m_pcSessionUser); } \
	FORCEINLINE static uint32 __PPO__m_cReceivedPackets() { return STRUCT_OFFSET(UEOSSessionUserPacketMap, m_cReceivedPackets); } \
	FORCEINLINE static uint32 __PPO__m_cSendPackets() { return STRUCT_OFFSET(UEOSSessionUserPacketMap, m_cSendPackets); } \
	FORCEINLINE static uint32 __PPO__m_cReceivedSynchronizedPackets() { return STRUCT_OFFSET(UEOSSessionUserPacketMap, m_cReceivedSynchronizedPackets); } \
	FORCEINLINE static uint32 __PPO__m_cSendSynchronizedPackets() { return STRUCT_OFFSET(UEOSSessionUserPacketMap, m_cSendSynchronizedPackets); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_13_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSSessionUserPacketMap>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionUserPacketMap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
