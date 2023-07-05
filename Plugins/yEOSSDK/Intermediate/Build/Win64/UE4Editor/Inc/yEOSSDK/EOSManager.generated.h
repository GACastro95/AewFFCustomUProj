// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSUserBase;
class UEOSAchievement;
class UEOSAntiCheatClient;
class UEOSAntiCheatDedicatedServer;
class UEOSAuth;
class UEOSManager;
class UObject;
class UEOSLeaderboard;
class UEOSNatP2P;
class UEOSReports;
class UEOSSanctions;
class UEOSStats;
class UEOSVoice;
enum class EEOSApplicationStatus : uint8;
class UEOSFileAccessor;
class UEOSLobby;
enum class EEOSNetworkStatus : uint8;
enum class EEOSRelayControl : uint8;
class UEOSSession;
class UEOSTitleStorage;
class UEOSUserManager;
struct FEOSProductSetting;
struct FEOSEngineAPIVersionSettings;
enum class EEOSSDKLogLevel : uint8;
enum class EEOSUpdateType : uint8;
#ifdef YEOSSDK_EOSManager_generated_h
#error "EOSManager.generated.h already included, missing '#pragma once' in EOSManager.h"
#endif
#define YEOSSDK_EOSManager_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConfirmNetworkRequest); \
	DECLARE_FUNCTION(execCreateAchievement); \
	DECLARE_FUNCTION(execCreateAntiCheatClient); \
	DECLARE_FUNCTION(execCreateAntiCheatServer); \
	DECLARE_FUNCTION(execCreateAuth); \
	DECLARE_FUNCTION(execCreateEOSManager); \
	DECLARE_FUNCTION(execCreateLeaderboard); \
	DECLARE_FUNCTION(execCreateNatP2P); \
	DECLARE_FUNCTION(execCreateReports); \
	DECLARE_FUNCTION(execCreateSanctions); \
	DECLARE_FUNCTION(execCreateStats); \
	DECLARE_FUNCTION(execCreateVoice); \
	DECLARE_FUNCTION(execGetApplicationStatus); \
	DECLARE_FUNCTION(execGetDesktopCrossplayStatus); \
	DECLARE_FUNCTION(execGetFileAccessor); \
	DECLARE_FUNCTION(execGetLobby); \
	DECLARE_FUNCTION(execGetNetworkStatus); \
	DECLARE_FUNCTION(execGetPortRange); \
	DECLARE_FUNCTION(execGetRelayControl); \
	DECLARE_FUNCTION(execGetSession); \
	DECLARE_FUNCTION(execGetTitleStorage); \
	DECLARE_FUNCTION(execGetUserManager); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execInitSDK); \
	DECLARE_FUNCTION(execIsValidHandle); \
	DECLARE_FUNCTION(execReleaseSDK); \
	DECLARE_FUNCTION(execSetActiveAuth); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetApplicationStatus); \
	DECLARE_FUNCTION(execSetNetworkStatus); \
	DECLARE_FUNCTION(execSetPortRange); \
	DECLARE_FUNCTION(execSetRelayControl); \
	DECLARE_FUNCTION(execSetSDKLogLevel); \
	DECLARE_FUNCTION(execSetupAntiCheat); \
	DECLARE_FUNCTION(execSetUpdateType); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateForDispose);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConfirmNetworkRequest); \
	DECLARE_FUNCTION(execCreateAchievement); \
	DECLARE_FUNCTION(execCreateAntiCheatClient); \
	DECLARE_FUNCTION(execCreateAntiCheatServer); \
	DECLARE_FUNCTION(execCreateAuth); \
	DECLARE_FUNCTION(execCreateEOSManager); \
	DECLARE_FUNCTION(execCreateLeaderboard); \
	DECLARE_FUNCTION(execCreateNatP2P); \
	DECLARE_FUNCTION(execCreateReports); \
	DECLARE_FUNCTION(execCreateSanctions); \
	DECLARE_FUNCTION(execCreateStats); \
	DECLARE_FUNCTION(execCreateVoice); \
	DECLARE_FUNCTION(execGetApplicationStatus); \
	DECLARE_FUNCTION(execGetDesktopCrossplayStatus); \
	DECLARE_FUNCTION(execGetFileAccessor); \
	DECLARE_FUNCTION(execGetLobby); \
	DECLARE_FUNCTION(execGetNetworkStatus); \
	DECLARE_FUNCTION(execGetPortRange); \
	DECLARE_FUNCTION(execGetRelayControl); \
	DECLARE_FUNCTION(execGetSession); \
	DECLARE_FUNCTION(execGetTitleStorage); \
	DECLARE_FUNCTION(execGetUserManager); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execInitSDK); \
	DECLARE_FUNCTION(execIsValidHandle); \
	DECLARE_FUNCTION(execReleaseSDK); \
	DECLARE_FUNCTION(execSetActiveAuth); \
	DECLARE_FUNCTION(execSetApiVersion); \
	DECLARE_FUNCTION(execSetApplicationStatus); \
	DECLARE_FUNCTION(execSetNetworkStatus); \
	DECLARE_FUNCTION(execSetPortRange); \
	DECLARE_FUNCTION(execSetRelayControl); \
	DECLARE_FUNCTION(execSetSDKLogLevel); \
	DECLARE_FUNCTION(execSetupAntiCheat); \
	DECLARE_FUNCTION(execSetUpdateType); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateForDispose);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSManager(); \
	friend struct Z_Construct_UClass_UEOSManager_Statics; \
public: \
	DECLARE_CLASS(UEOSManager, UEOSInstanceManagerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSManager)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUEOSManager(); \
	friend struct Z_Construct_UClass_UEOSManager_Statics; \
public: \
	DECLARE_CLASS(UEOSManager, UEOSInstanceManagerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSManager)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSManager(UEOSManager&&); \
	NO_API UEOSManager(const UEOSManager&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSManager(UEOSManager&&); \
	NO_API UEOSManager(const UEOSManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSManager)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pcActiveUserEOSAuth() { return STRUCT_OFFSET(UEOSManager, m_pcActiveUserEOSAuth); } \
	FORCEINLINE static uint32 __PPO__m_pcFileAccessor() { return STRUCT_OFFSET(UEOSManager, m_pcFileAccessor); } \
	FORCEINLINE static uint32 __PPO__m_pcUserManager() { return STRUCT_OFFSET(UEOSManager, m_pcUserManager); } \
	FORCEINLINE static uint32 __PPO__m_pcLobby() { return STRUCT_OFFSET(UEOSManager, m_pcLobby); } \
	FORCEINLINE static uint32 __PPO__m_pcSession() { return STRUCT_OFFSET(UEOSManager, m_pcSession); } \
	FORCEINLINE static uint32 __PPO__m_pcTitleStorage() { return STRUCT_OFFSET(UEOSManager, m_pcTitleStorage); } \
	FORCEINLINE static uint32 __PPO__m_pcAPIRequestManager() { return STRUCT_OFFSET(UEOSManager, m_pcAPIRequestManager); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_33_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
