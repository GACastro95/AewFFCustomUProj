// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSSessionInfo;
class UEOSSessionP2PLatencyInfoPacket;
class UEOSSessionUserPacketMap;
enum class EEOSSessionHostMigrationClientResultType : uint8;
enum class EEOSSessionHostMigrationStep : uint8;
struct FEOSSessionSettings;
enum class EEOSCommunityEvent : uint8;
class UEOSCommunityBase;
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
class UEOSSearchResultsBase;
enum class EEOSSessionHostMigrationType : uint8;
#ifdef YEOSSDK_EOSSessionP2PAFHostMigration_generated_h
#error "EOSSessionP2PAFHostMigration.generated.h already included, missing '#pragma once' in EOSSessionP2PAFHostMigration.h"
#endif
#define YEOSSDK_EOSSessionP2PAFHostMigration_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEOSSessionInfoForAfter); \
	DECLARE_FUNCTION(execGetEOSSessionInfoForBefore); \
	DECLARE_FUNCTION(execGetEOSSessionP2PLatencyInfoPacket); \
	DECLARE_FUNCTION(execGetEOSSessionUserPacketMapForNextHost); \
	DECLARE_FUNCTION(execGetHostMigrationClientResultType); \
	DECLARE_FUNCTION(execGetHostMigrationStep); \
	DECLARE_FUNCTION(execGetHostPriority); \
	DECLARE_FUNCTION(execGetMaxRetryToRquestAPICount); \
	DECLARE_FUNCTION(execGetMaxUpdateStateRequestRetryCount); \
	DECLARE_FUNCTION(execGetNextHostProductUserID); \
	DECLARE_FUNCTION(execGetNextHostUserPacketMap); \
	DECLARE_FUNCTION(execGetRetryToRquestAPICount); \
	DECLARE_FUNCTION(execGetSessionSettings); \
	DECLARE_FUNCTION(execGetUpdateStateRequestRetryCount); \
	DECLARE_FUNCTION(execGetWaitMemberNum); \
	DECLARE_FUNCTION(execIsActiveObserver); \
	DECLARE_FUNCTION(execIsMigratingNow); \
	DECLARE_FUNCTION(execIsNextHostOfTheMe); \
	DECLARE_FUNCTION(execOnCommunityEventForHostMigration); \
	DECLARE_FUNCTION(execOnCommunitySearchResultEvent); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSendHostMigrationPacket); \
	DECLARE_FUNCTION(execSendLatencyInfo); \
	DECLARE_FUNCTION(execSetActiveObserver); \
	DECLARE_FUNCTION(execSetActiveSessionSetting); \
	DECLARE_FUNCTION(execSetRetryParams);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEOSSessionInfoForAfter); \
	DECLARE_FUNCTION(execGetEOSSessionInfoForBefore); \
	DECLARE_FUNCTION(execGetEOSSessionP2PLatencyInfoPacket); \
	DECLARE_FUNCTION(execGetEOSSessionUserPacketMapForNextHost); \
	DECLARE_FUNCTION(execGetHostMigrationClientResultType); \
	DECLARE_FUNCTION(execGetHostMigrationStep); \
	DECLARE_FUNCTION(execGetHostPriority); \
	DECLARE_FUNCTION(execGetMaxRetryToRquestAPICount); \
	DECLARE_FUNCTION(execGetMaxUpdateStateRequestRetryCount); \
	DECLARE_FUNCTION(execGetNextHostProductUserID); \
	DECLARE_FUNCTION(execGetNextHostUserPacketMap); \
	DECLARE_FUNCTION(execGetRetryToRquestAPICount); \
	DECLARE_FUNCTION(execGetSessionSettings); \
	DECLARE_FUNCTION(execGetUpdateStateRequestRetryCount); \
	DECLARE_FUNCTION(execGetWaitMemberNum); \
	DECLARE_FUNCTION(execIsActiveObserver); \
	DECLARE_FUNCTION(execIsMigratingNow); \
	DECLARE_FUNCTION(execIsNextHostOfTheMe); \
	DECLARE_FUNCTION(execOnCommunityEventForHostMigration); \
	DECLARE_FUNCTION(execOnCommunitySearchResultEvent); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSendHostMigrationPacket); \
	DECLARE_FUNCTION(execSendLatencyInfo); \
	DECLARE_FUNCTION(execSetActiveObserver); \
	DECLARE_FUNCTION(execSetActiveSessionSetting); \
	DECLARE_FUNCTION(execSetRetryParams);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSSessionP2PAFHostMigration(); \
	friend struct Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionP2PAFHostMigration, UEOSSessionP2PAdditionalFunctionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionP2PAFHostMigration)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUEOSSessionP2PAFHostMigration(); \
	friend struct Z_Construct_UClass_UEOSSessionP2PAFHostMigration_Statics; \
public: \
	DECLARE_CLASS(UEOSSessionP2PAFHostMigration, UEOSSessionP2PAdditionalFunctionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSSessionP2PAFHostMigration)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSSessionP2PAFHostMigration(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSSessionP2PAFHostMigration) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionP2PAFHostMigration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionP2PAFHostMigration); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionP2PAFHostMigration(UEOSSessionP2PAFHostMigration&&); \
	NO_API UEOSSessionP2PAFHostMigration(const UEOSSessionP2PAFHostMigration&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSSessionP2PAFHostMigration(UEOSSessionP2PAFHostMigration&&); \
	NO_API UEOSSessionP2PAFHostMigration(const UEOSSessionP2PAFHostMigration&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSSessionP2PAFHostMigration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSSessionP2PAFHostMigration); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSSessionP2PAFHostMigration)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcLatencyInfo() { return STRUCT_OFFSET(UEOSSessionP2PAFHostMigration, m_pcLatencyInfo); } \
	FORCEINLINE static uint32 __PPO__m_pcNextHostUserPacketMap() { return STRUCT_OFFSET(UEOSSessionP2PAFHostMigration, m_pcNextHostUserPacketMap); } \
	FORCEINLINE static uint32 __PPO__m_pcSessionInfoOld() { return STRUCT_OFFSET(UEOSSessionP2PAFHostMigration, m_pcSessionInfoOld); } \
	FORCEINLINE static uint32 __PPO__m_pcSessionInfoNext() { return STRUCT_OFFSET(UEOSSessionP2PAFHostMigration, m_pcSessionInfoNext); } \
	FORCEINLINE static uint32 __PPO__m_pcCheckForHostSession() { return STRUCT_OFFSET(UEOSSessionP2PAFHostMigration, m_pcCheckForHostSession); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_20_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSSessionP2PAFHostMigration>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PAFHostMigration_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
