// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSSessionP2PSynchronizedPacketBase;
enum class EEOSSessionPacketSyncState : uint8;
enum class EEOSSessionPacketSyncProcType : uint8;
enum class EEOSSessionPacketTransfterState : uint8;
#ifdef YEOSSDK_EOSSessionP2PSynchronizedPacketBase_generated_h
#error "EOSSessionP2PSynchronizedPacketBase.generated.h already included, missing '#pragma once' in EOSSessionP2PSynchronizedPacketBase.h"
#endif
#define YEOSSDK_EOSSessionP2PSynchronizedPacketBase_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCompare); \
	DECLARE_FUNCTION(execGetPacketSyncState); \
	DECLARE_FUNCTION(execGetSyncProcType); \
	DECLARE_FUNCTION(execGetTransferState); \
	DECLARE_FUNCTION(execIsNeedToMigrateWhenHostMigration); \
	DECLARE_FUNCTION(execIsNeedToSendByClient); \
	DECLARE_FUNCTION(execIsNeedToSendByHost); \
	DECLARE_FUNCTION(execIsReply); \
	DECLARE_FUNCTION(execRequestForResult); \
	DECLARE_FUNCTION(execResetRetry); \
	DECLARE_FUNCTION(execRetry); \
	DECLARE_FUNCTION(execSendForHostMigration); \
	DECLARE_FUNCTION(execSetMaxFrameCount); \
	DECLARE_FUNCTION(execSetMaxRetryCount); \
	DECLARE_FUNCTION(execUpdateFrameCount);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCompare); \
	DECLARE_FUNCTION(execGetPacketSyncState); \
	DECLARE_FUNCTION(execGetSyncProcType); \
	DECLARE_FUNCTION(execGetTransferState); \
	DECLARE_FUNCTION(execIsNeedToMigrateWhenHostMigration); \
	DECLARE_FUNCTION(execIsNeedToSendByClient); \
	DECLARE_FUNCTION(execIsNeedToSendByHost); \
	DECLARE_FUNCTION(execIsReply); \
	DECLARE_FUNCTION(execRequestForResult); \
	DECLARE_FUNCTION(execResetRetry); \
	DECLARE_FUNCTION(execRetry); \
	DECLARE_FUNCTION(execSendForHostMigration); \
	DECLARE_FUNCTION(execSetMaxFrameCount); \
	DECLARE_FUNCTION(execSetMaxRetryCount); \
	DECLARE_FUNCTION(execUpdateFrameCount);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSSessionP2PSynchronizedPacketBase(); \
	friend struct Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionP2PSynchronizedPacketBase, UEOSSessionP2PPacketBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionP2PSynchronizedPacketBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUEOSSessionP2PSynchronizedPacketBase(); \
	friend struct Z_Construct_UClass_UEOSSessionP2PSynchronizedPacketBase_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionP2PSynchronizedPacketBase, UEOSSessionP2PPacketBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionP2PSynchronizedPacketBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSSessionP2PSynchronizedPacketBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSSessionP2PSynchronizedPacketBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionP2PSynchronizedPacketBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionP2PSynchronizedPacketBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionP2PSynchronizedPacketBase(UEOSSessionP2PSynchronizedPacketBase&&); \
	NO_API UEOSSessionP2PSynchronizedPacketBase(const UEOSSessionP2PSynchronizedPacketBase&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionP2PSynchronizedPacketBase(UEOSSessionP2PSynchronizedPacketBase&&); \
	NO_API UEOSSessionP2PSynchronizedPacketBase(const UEOSSessionP2PSynchronizedPacketBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionP2PSynchronizedPacketBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionP2PSynchronizedPacketBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSSessionP2PSynchronizedPacketBase)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_11_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSSessionP2PSynchronizedPacketBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PSynchronizedPacketBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
