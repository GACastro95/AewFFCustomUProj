// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSSessionHostMigrationClientResultType : uint8;
enum class EEOSSessionHostMigrationStep : uint8;
enum class EEOSSessionHostMigrationType : uint8;
class UEOSSessionInfo;
#ifdef YEOSSDK_EOSSessionP2PHostMigrationPacket_generated_h
#error "EOSSessionP2PHostMigrationPacket.generated.h already included, missing '#pragma once' in EOSSessionP2PHostMigrationPacket.h"
#endif
#define YEOSSDK_EOSSessionP2PHostMigrationPacket_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetClientResultType); \
	DECLARE_FUNCTION(execGetCurrentHostPriorityIndex); \
	DECLARE_FUNCTION(execGetHostMigrationStep); \
	DECLARE_FUNCTION(execGetHostMigrationType); \
	DECLARE_FUNCTION(execGetMemberNum); \
	DECLARE_FUNCTION(execGetNextHostProductUserID); \
	DECLARE_FUNCTION(execGetNextSessionID); \
	DECLARE_FUNCTION(execGetOldHostProductUserID); \
	DECLARE_FUNCTION(execRequest); \
	DECLARE_FUNCTION(execSetClientResultType); \
	DECLARE_FUNCTION(execSetProductUserID); \
	DECLARE_FUNCTION(execSetSessionInfo);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetClientResultType); \
	DECLARE_FUNCTION(execGetCurrentHostPriorityIndex); \
	DECLARE_FUNCTION(execGetHostMigrationStep); \
	DECLARE_FUNCTION(execGetHostMigrationType); \
	DECLARE_FUNCTION(execGetMemberNum); \
	DECLARE_FUNCTION(execGetNextHostProductUserID); \
	DECLARE_FUNCTION(execGetNextSessionID); \
	DECLARE_FUNCTION(execGetOldHostProductUserID); \
	DECLARE_FUNCTION(execRequest); \
	DECLARE_FUNCTION(execSetClientResultType); \
	DECLARE_FUNCTION(execSetProductUserID); \
	DECLARE_FUNCTION(execSetSessionInfo);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSSessionP2PHostMigrationPacket(); \
	friend struct Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionP2PHostMigrationPacket, UEOSSessionP2PSynchronizedPacketBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionP2PHostMigrationPacket)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUEOSSessionP2PHostMigrationPacket(); \
	friend struct Z_Construct_UClass_UEOSSessionP2PHostMigrationPacket_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionP2PHostMigrationPacket, UEOSSessionP2PSynchronizedPacketBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionP2PHostMigrationPacket)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSSessionP2PHostMigrationPacket(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSSessionP2PHostMigrationPacket) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionP2PHostMigrationPacket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionP2PHostMigrationPacket); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionP2PHostMigrationPacket(UEOSSessionP2PHostMigrationPacket&&); \
	NO_API UEOSSessionP2PHostMigrationPacket(const UEOSSessionP2PHostMigrationPacket&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionP2PHostMigrationPacket(UEOSSessionP2PHostMigrationPacket&&); \
	NO_API UEOSSessionP2PHostMigrationPacket(const UEOSSessionP2PHostMigrationPacket&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionP2PHostMigrationPacket); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionP2PHostMigrationPacket); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSSessionP2PHostMigrationPacket)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_11_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSSessionP2PHostMigrationPacket>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationPacket_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
